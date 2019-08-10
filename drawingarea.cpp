#include "drawingarea.h"
#include "ui_drawingarea.h"

DrawingArea::DrawingArea(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DrawingArea)
{
    ui->setupUi(this);



}

DrawingArea::~DrawingArea()
{
    delete ui;
}


void DrawingArea::paintEvent(QPaintEvent *)
{
    QPainter painter(this);

    if(qPoints.empty())
        return;


    for(qPointsT::iterator it = qPoints.begin(); it != qPoints.end()-1; ++it)
    {
        painter.drawLine(*it, *(it+1));

    }

    painter.drawLine(*qPoints.begin(), *qPoints.rbegin());

}

void DrawingArea::setQPoints(const qPointsT & qPoints)
{
    this->qPoints = qPoints;

}
void DrawingArea::clear()
{
    qPoints.clear();

}
