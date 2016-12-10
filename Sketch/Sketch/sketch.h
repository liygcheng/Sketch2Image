#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_sketch.h"

//
#include<qmessagebox.h>
#include<qfiledialog.h>
#include<qlabel.h>
//add by Lechao

struct myStatusBar{
	QLabel* m_attr;
	QLabel* m_value;
};





class Sketch: public QMainWindow
{
    Q_OBJECT

public:
    Sketch(QWidget *parent = Q_NULLPTR);

//signals:
	//void StartToProcessImageSet(void);

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


};

