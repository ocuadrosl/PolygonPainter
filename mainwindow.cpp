#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

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


void MainWindow::on_drawPushButton_clicked()
{

    polygon.setRadius( ui->radiusSpinBox->value());
    polygon.setSides( ui->sidesSpinBox->value());

    polygon.setCenter(ui->drawingAreaWidget->size().width()/2, ui->drawingAreaWidget->size().width()/2);


    ui->drawingAreaWidget->setQPoints(polygon.compute());

    ui->drawingAreaWidget->repaint();
}

void MainWindow::on_clearPushButton_clicked()
{

    ui->drawingAreaWidget->clear();
    ui->drawingAreaWidget->repaint();
}
