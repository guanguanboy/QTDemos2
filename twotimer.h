#ifndef TWOTIMER_H
#define TWOTIMER_H

#include <QWidget>

namespace Ui {
class twoTimer;
}

class twoTimer : public QWidget
{
    Q_OBJECT

public:
    explicit twoTimer(QWidget *parent = 0);
    ~twoTimer();

private:
    Ui::twoTimer *ui;
};

#endif // TWOTIMER_H
