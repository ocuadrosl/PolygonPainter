#ifndef DRAWINGAREA_H
#define DRAWINGAREA_H

#include <QWidget>
#include <QPainter>
#include <vector>
#include <QPoint>
#include <iostream>


namespace Ui {
class DrawingArea;
}

class DrawingArea : public QWidget
{
    Q_OBJECT
    using  qPointsT = std::vector<QPoint>;

public:
    explicit DrawingArea(QWidget *parent = nullptr);
    ~DrawingArea();

    void setQPoints(const qPointsT & qPoints);
    void clear();
private:
    Ui::DrawingArea *ui;
    qPointsT qPoints;
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // DRAWINGAREA_H
