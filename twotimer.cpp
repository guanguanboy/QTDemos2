#include "twotimer.h"
#include "ui_twotimer.h"

twoTimer::twoTimer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::twoTimer)
{
    ui->setupUi(this);
}

twoTimer::~twoTimer()
{
    delete ui;
}
