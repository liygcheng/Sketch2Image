#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_sketch.h"

//
#include<qmessagebox.h>
#include<qfiledialog.h>
#include<qlabel.h>
#include <QMouseEvent>
#include<qpen.h>
#include<qpainter.h>
#include<qpolygon.h>
#include <QBrush>
#include <QPixmap>
#include<QList>
#include<qdebug.h>


//add by Lechao

struct myStatusBar{
	QLabel* m_attr;
	QLabel* m_value;
};

struct myPen{
	QPen pen;
	QBrush brush;
};

class AbstractShape : public QWidget
{
	Q_OBJECT

public:
	enum Category { Curve, Line, Rect, Text };

	explicit AbstractShape(QWidget *parent = 0){ setBackgroundRole(QPalette::Base); }

	inline QPoint getBeginPoint(){	return beginPoint;}

	inline void setBeginPoint(QPoint point){	this->beginPoint = point;}

	inline QPoint getEndPoint(){ return endPoint; }

	inline void setEndPoint(QPoint point){this->endPoint = point;}

	void virtual draw(QPainter &painter) = 0; //需要具体图形子类实现
	void virtual addPoint(QPoint point) = 0; //为了画任意曲线特意留的一个口子

signals:

	public slots :
		inline void setPen(const QPen &pen){ this->pen = pen; }
	    inline void setBrush(const QBrush &brush){ this->brush = brush; }

protected:

	QPoint beginPoint;
	QPoint endPoint;
	QBrush brush;
	QPen pen;

};

class CurveShape :public AbstractShape{

public:
	CurveShape(){};
	inline QPoint getBeginPoint(){ return points.at(0); }

	inline void setBeginPoint(QPoint point){ this->addPoint(point); }

	inline QPoint getEndPoint(){return points.at(points.size() - 1); }

	inline void setEndPoint(QPoint point){	this->addPoint(point); }

	inline void addPoint(QPoint point){ this->points.append(point); }

	inline void draw(QPainter &painter){
		painter.setPen(pen);
		painter.setBrush(brush);
		//此处是画任意曲线的关键，如果修改为drawPolygon，可以看到鼠标画图是实现了，但在起始和结束点均有一条   直线相连
		painter.drawPolyline(QPolygonF(points));
	}

    QVector<QPoint> & get_points(){ return points; };

protected:

private:
	QVector<QPoint> points; //曲线其实就是一堆QPoint的点集合，此处存放，鼠标移动时候将点存入此处

};



class Sketch: public QMainWindow
{
    Q_OBJECT

public:
    Sketch(QWidget *parent = Q_NULLPTR);



private slots:

// Action
	void openFolder(void);
	void openConfigure(void);
	bool save(void);
	bool saveAs(const QString& filename);
	bool changeSketchMode(int);
	


private:

	void Initial(void);
	void CreateAction(void);
	void CreateStatusBar(void);
	void updateStatusBar(void);
	void CreateComBox(void);
	void CreateEventFilter(void);
	void Reset(void);

private:// some uilities 

	inline bool ok2continue(){

		if (isWindowModified()){

			int r = QMessageBox::warning(this,tr("Sketch"),tr("The data set has been set up.\n Do you want to save your changes?"),QMessageBox::Yes|QMessageBox::No|QMessageBox::Cancel);

			if (r == QMessageBox::Yes)
				return save();
			else if (r == QMessageBox::Cancel)
				return false;
		}

		return true;

	}

public:
	bool eventFilter(QObject*target, QEvent* event);

private:

    Ui::SketchClass ui;


	//
	struct myStatusBar sb;

	//add by Lechao Cheng
	QString m_imageRoot;
	QStringList m_imageSubFolder;
	QString m_configure;
	QString m_dumpFolder;



	// Qt  sketch images

	QVector<QImage> m_sketchImage;
	QImage* m_currentSketch;
	QList<AbstractShape*> m_shapes;
	AbstractShape *m_currentShape;
	bool m_isLeftButtonPressed;
	myPen m_pen;

};

