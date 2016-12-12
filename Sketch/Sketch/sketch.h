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


//add by Lechao

struct myStatusBar{
	QLabel* m_attr;
	QLabel* m_value;
};

class abstractShape{


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


	// Actions
	enum{MAXRecentFiles = 5};
	QAction* recentFileActions[MAXRecentFiles];


	// Qt  sketch images

	QVector<QImage> m_sketchImage;
	QImage* m_currentSketch;

};

