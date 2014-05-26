#ifndef SMARTQCAL_H
#define SMARTQCAL_H

#include <QWidget>

class smartQCAL : public QWidget
{
    Q_OBJECT

public:
    smartQCAL(QWidget *parent = 0);
private slots:
void add();
void substract();
void multiply();
void divide();


    ~smartQCAL();
};

#endif // SMARTQCAL
