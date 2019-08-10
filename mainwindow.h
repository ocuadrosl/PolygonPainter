#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "polygon.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_drawPushButton_clicked();

    void on_clearPushButton_clicked();

private:
    Ui::MainWindow *ui;
    Polygon polygon;

};

#endif // MAINWINDOW_H
