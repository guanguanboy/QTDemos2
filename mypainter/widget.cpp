#include "widget.h"
#include "ui_widget.h"
#include <QPainter>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    resize(800, 600);  //调整窗口大小
    setWindowTitle(tr("Paint Demo")); //设置窗口标题
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *)
{
//    QPainter painter(this);
//    QPen pen; //画笔
//    pen.setColor(QColor(255, 0, 0));
//    QBrush brush(QColor(0, 255, 0, 125)); //画刷
//    painter.setPen(pen); //添加画笔
//    painter.setBrush(brush); //添加画刷
//    painter.drawRect(50, 50, 200, 100); //绘制矩形

//    QPainter painter(this);
//    QPen pen(Qt::DotLine);
//    QBrush brush(Qt::blue);
//    brush.setStyle(Qt::HorPattern);
//    painter.setPen(pen);
//    painter.setBrush(brush);
//    painter.drawRect(50,50,200,200);

    QRectF rectangle(10.0, 20.0, 80.0, 60.0); //矩形
    int startAngle = 30 * 16;     //起始角度
    int spanAngle = 120 * 16;   //跨越度数
    QPainter painter(this);
    painter.drawArc(rectangle, startAngle, spanAngle);
}
