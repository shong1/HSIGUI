#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QLabel>
#include <QPictureFormatPlugin>
#include <QtGui>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QPoint p1;
    QPoint p2;
    QPoint p3;
    QPoint p4;


public slots:
    void DragAndDrop();

private slots:
    void on_pushButton_LoadImage_clicked();

    void on_radioButton_RPE_pressed();

private:
    Ui::MainWindow *ui;

protected:
    void dropEvent(QDropEvent *de);
    void dragMoveEvent(QDragMoveEvent *de);
    void dragEnterEvent(QDragEnterEvent *event);

};

#endif // MAINWINDOW_H
