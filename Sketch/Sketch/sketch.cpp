#include "sketch.h"

Sketch::Sketch(QWidget *parent)
	: QMainWindow(parent)
{

	ui.setupUi(this);
	//connect signal to slot
	Initial();


	
}



//  Create Action and Update
void Sketch::Initial(void)
{
	CreateAction();
	CreateStatusBar();
	CreateComBox();
	CreateEventFilter();

}

void Sketch::CreateAction(void)
{
	QObject::connect(ui.actionImage_Folder, SIGNAL(triggered()), this, SLOT(openFolder()));
	QObject::connect(ui.actionImage_Configure, SIGNAL(triggered()), this, SLOT(openConfigure()));


}
void Sketch::openFolder(void)
{
	if (ok2continue()){

		m_imageRoot = QFileDialog::getExistingDirectory(this, tr("open image folder"), ".");
		
		//if (!m_imageRoot.isEmpty())
			//QMessageBox::information(this, tr(""), m_imageRoot);
		updateStatusBar();
	}

	


}
void Sketch::openConfigure(void){
	if (ok2continue()){

		m_configure = QFileDialog::getOpenFileName(this, tr("open configure"), ".", tr("configure file (*.configure)"));

		if (!m_configure.isEmpty())
			QMessageBox::information(this, tr(""), m_configure);
	
	}
}
bool Sketch::save(void)
{

	return true;

}
bool Sketch::saveAs(const QString& filename){

	return true;
}

// Create statusBar and Update
void Sketch::CreateStatusBar(void)
{
	sb.m_attr = new QLabel("");
	sb.m_attr->setAlignment(Qt::AlignHCenter);
	sb.m_attr->setMinimumSize(sb.m_attr->sizeHint());

	sb.m_value = new QLabel("Author Email :liygcheng@zju.edu.cn");
	sb.m_value->setAlignment(Qt::AlignHCenter);
	sb.m_value->setIndent(5);

	ui.statusBar->addWidget(sb.m_attr);
	ui.statusBar->addWidget(sb.m_value, 1);

	//QObject::connect(this, SIGNAL(StartToProcessImageSet()), this, SLOT(updateStatusBar()));

	//updateStatusBar();
}
void Sketch::updateStatusBar(void)
{
	sb.m_attr->setText("Current Image Folder:");

	sb.m_value->setText(m_imageRoot);

	

}

//Create Combox
void Sketch::CreateComBox(void)
{

	ui.m_FunctionType->addItem(tr("sketch2image"), NULL);
	ui.m_FunctionType->addItem(tr("sketch2composition"), NULL);
	ui.m_FunctionType->setItemText(0, tr("sketch2image"));

	ui.m_FunctionType->setItemText(1, tr("sketch2composition"));

	ui.m_FunctionType->setAutoCompletion(true);
	ui.m_FunctionType->setCurrentIndex(0);

	QObject::connect(ui.m_FunctionType, SIGNAL(currentIndexChanged(int)), this, SLOT(changeSketchMode(int)));


}
bool Sketch::changeSketchMode(int mode)
{
	//sb.m_attr->setText("");

	//sb.m_value->setText(tr("change sketch mode"));
	if (ok2continue())
	{
		Reset();
	}


	return true;
}

void Sketch::Reset(void)
{




}

//sketch plane



// EventFilters
void Sketch::CreateEventFilter(void)
{
	ui.m_SketchPlane->installEventFilter(this);
	

}

bool Sketch::eventFilter(QObject*target, QEvent*myevent)
{

	if (target == ui.m_SketchPlane)
	{
		if (myevent->type() == QEvent::KeyPress){

			QKeyEvent* e = static_cast<QKeyEvent*>(myevent);

			if (e->key() == Qt::Key_Space)
			{
				QMessageBox::information(this, tr(""), "ok");
				return true;
			}		
		}

		if (myevent->type() == QEvent::MouseButtonPress)
		{
			QMouseEvent* e = static_cast<QMouseEvent*>(myevent);
			if (e->button() == Qt::LeftButton){
				QMessageBox::information(this, tr(""), "ok");
				return true;
			}

		}




	}

	return QMainWindow::eventFilter(target, myevent);

}
