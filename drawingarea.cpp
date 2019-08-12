#include "drawingarea.h"
#include "ui_drawingarea.h"
#include <QPalette>

DrawingArea::DrawingArea(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DrawingArea)
{
    ui->setupUi(this);
    QPalette pal = palette();

    // set white background
    pal.setColor(QPalette::Background, Qt::white);
    this->setAutoFillBackground(true);
    this->setPalette(pal);
    this->show();



}

DrawingArea::~DrawingArea()
{
    delete ui;
}

/*

Paint events are sent to widgets that need to UPDATE or REPAINT themselves,
*/
void DrawingArea::paintEvent(QPaintEvent *)
{
    QPainter painter(this);

    //do not draw 0 sides polygons
    if(qPoints.empty())
        return;

    painter.setPen(Qt::red);
    for(qPointsT::iterator it = qPoints.begin(); it != qPoints.end()-1; ++it)
    {
        painter.drawLine(*it, *(it+1));

    }

    //draw last side: from begin to last
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
