#ifndef SMARTQCAL_H
#define SMARTQCAL_H

#include <QWidget>
#include <QSignalMapper>

class smartQCAL : public QWidget
{
    Q_OBJECT

public:
    smartQCAL(QWidget *parent = 0);
     ~smartQCAL();


     //Button *createButton(const QString &text, const char *member);
private:
    QSignalMapper *signalMapper;
private slots:
//Binary operation.

//void add();
//void substract();
//void multiply();
//void divide();

//Unary Operation.

//void inputDigit(int value);
//void inputDot();
//void factoria();
void digitClicked(int digitValue);

};

#endif // SMARTQCAL
