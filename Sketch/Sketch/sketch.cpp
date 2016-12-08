#include "sketch.h"

Sketch::Sketch(QWidget *parent)
	: QMainWindow(parent)
{

	ui.setupUi(this);
	//connect signal to slot


	CreateAction();
	CreateStatusBar();


	
}

//// prepocess imageset
//void Sketch::StartToProcessImageSet(void)
//{
//
//
//
//}

//  Create Action and Update
void Sketch::CreateAction(void)
{
	QObject::connect(ui.actionImage_Folder, SIGNAL(triggered()), this, SLOT(newFolder()));



}
void Sketch::newFolder(void)
{
	if (ok2continue()){

		m_imageRoot = QFileDialog::getExistingDirectory(this, tr("open image folder"), ".");
		
		//if (!m_imageRoot.isEmpty())
			//QMessageBox::information(this, tr(""), m_imageRoot);
		updateStatusBar();
	}

	


}
bool Sketch::save(void)
{

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