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

	m_currentSketch = new QImage(ui.m_SketchPlane->width(), ui.m_SketchPlane->height(), QImage::Format_Grayscale8);

	//m_currentSketch->fill(Qt::blue);

	for (int i = 0; i < ui.m_SketchPlane->height(); ++i)
	{
		
		uchar *pdata = (uchar *)m_currentSketch->scanLine(i);

		memset(pdata, 0, ui.m_SketchPlane->width());
		
	}
	

	//ui.m_SketchPlane->setPixmap(QPixmap::fromImage(*m_currentSketch));



	
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

	ui.m_FunctionType->addItem(tr("sketch"), NULL);
	ui.m_FunctionType->addItem(tr("composition"), NULL);
	ui.m_FunctionType->addItem(tr("clear"), NULL);

	ui.m_FunctionType->setItemText(0, tr("sketch"));

	ui.m_FunctionType->setItemText(1, tr("composition"));

	ui.m_FunctionType->setItemText(2, tr("clear"));

	ui.m_FunctionType->setAutoCompletion(true);
	ui.m_FunctionType->setCurrentIndex(0);
	

	QObject::connect(ui.m_FunctionType, SIGNAL(currentIndexChanged(int)), this, SLOT(changeSketchMode(int)));





}
bool Sketch::changeSketchMode(int mode)
{
	//sb.m_attr->setText("");

	//sb.m_value->setText(tr("change sketch mode"));
	
	
		switch (mode)
		{
		case 0:
			if (ok2continue())
			{
				QMessageBox::information(this, tr(""), "sketch");


			}
			
			break;
		case 1:
			if (ok2continue())
			{
				QMessageBox::information(this, tr(""), "composition");
			}
			
			break;
		case 2:
			for (int i = 0; i < ui.m_SketchPlane->height(); ++i)
			{

				//uchar *pdata = (uchar *)m_currentSketch->scanLine(i);

				//memset(pdata, 255, ui.m_SketchPlane->width());

			}


			//ui.m_SketchPlane->setPixmap(QPixmap::fromImage(*m_currentSketch));

		default:
			break;
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

		ui.m_SketchPlane->setFocusPolicy(Qt::StrongFocus);

			if (myevent->type() == QEvent::MouseButtonPress)
			{
				QMouseEvent* e = static_cast<QMouseEvent*>(myevent);			

				m_currentShape = new CurveShape();
				m_currentShape->setPen(m_pen.pen);
				m_currentShape->setBrush(m_pen.brush);

				if (m_currentShape != NULL){
					m_isLeftButtonPressed = true;
					m_currentShape->setBeginPoint(e->pos());
					m_shapes.append(m_currentShape);
				}
			}


			
			if (myevent->type() == QEvent::MouseButtonRelease)
			{
				QMouseEvent* e = static_cast<QMouseEvent*>(myevent);
				m_currentShape->setEndPoint(e->pos());
				m_isLeftButtonPressed = false;
				setCursor(Qt::CustomCursor);
			}


		
			if (myevent->type() == QEvent::MouseMove)
			{
				QMouseEvent* e = static_cast<QMouseEvent*>(myevent);
				if (m_currentShape  && m_isLeftButtonPressed){

					m_currentShape->addPoint(e->pos());
					setCursor(Qt::PointingHandCursor);
					update();
				}
			}

			
			if (myevent->type() == QEvent::Paint)
			{

				QPainter painter(ui.m_SketchPlane);

				painter.setRenderHint(QPainter::Antialiasing, true);

				foreach(AbstractShape *shape, m_shapes)
				{
					shape->draw(painter);
				}

			}
			if (myevent->type() == QEvent::MouseButtonDblClick)
			{
				
				QMouseEvent* e = static_cast<QMouseEvent*>(myevent);

				if (e->button() == Qt::LeftButton)
				{
					m_pen.pen.setWidth(m_pen.pen.width() + 1);
					
				}
				else if (e->button() == Qt::RightButton)
				{
					m_pen.pen.setWidth(m_pen.pen.width() - 1);
					
				}
				
				update();
			}

			if (myevent->type() == QEvent::KeyPress){

			

				QKeyEvent* e = static_cast<QKeyEvent*>(myevent);

				if (e->key() == Qt::Key_0)
				{


					foreach(AbstractShape *shape, m_shapes)
					{
						QVector<QPoint> m_p = ( static_cast<CurveShape*>(shape))->get_points();

						
						for each (QPoint p in m_p)
						{
							m_currentSketch->setPixelColor(p, Qt::white);
						}

					}

					ui.m_SketchPlane->setPixmap(QPixmap::fromImage(*m_currentSketch));

				



				}

				update();


			}


		return QMainWindow::eventFilter(target, myevent);

	}


	return QMainWindow::eventFilter(target, myevent);

}
