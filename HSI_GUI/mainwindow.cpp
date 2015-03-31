#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
