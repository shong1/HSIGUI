#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setAcceptDrops(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_LoadImage_clicked()
{
    // Load Image Files
    QFileDialog dialog(this);
    dialog.setNameFilter( tr( "Images (*.png *.xpm *.jpg *.tif)" ) );
    dialog.setViewMode(QFileDialog::Detail);
    QString fileName = QFileDialog::getOpenFileName( this, tr("Open Images"), "/home" );

    if( !fileName.isEmpty() )
    {
        QPixmap imgPixmap( fileName );
        ui->label_view->setPixmap( imgPixmap );
        ui->label_view->setScaledContents( true );
        ui->label_view->show();
    }
}


void MainWindow::dragEnterEvent(QDragEnterEvent *event)
{
    p1 = event->pos();
    event->acceptProposedAction();
}

void MainWindow::dragMoveEvent(QDragMoveEvent *de)
{
    QPoint pTemp = de->pos();

    QRect rect = QRect( p1, pTemp );
    QPainter painter( this );
    painter.setRenderHint( QPainter::Antialiasing );
    painter.setPen( Qt::red );

    painter.drawRect( rect );


    de->accept();
}

void MainWindow::dropEvent(QDropEvent *de)
{
    p2 = de->pos();

    QRect rect = QRect( p1, p2 );
    QPainter painter( this );
    painter.setRenderHint( QPainter::Antialiasing );
    painter.setPen( Qt::red );

    painter.drawRect( rect );
}

void MainWindow::DragAndDrop()
{
    QDrag* dr = new QDrag( this );
    QMimeData* data = new QMimeData;
    data->setText( "Test" );
    dr->setMimeData( data );
    dr->start();
}

void MainWindow::on_radioButton_RPE_pressed()
{

}
