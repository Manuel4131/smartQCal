#include "smartQCal.h"
#include <QGridLayout>
#include <QPushButton>
#include <QSignalMapper>
#include <QDebug>

smartQCAL::smartQCAL(QWidget *parent)
    :QWidget(parent)
{
//Initialize parameters.

signalMapper = new QSignalMapper(this);
//Create the layout.

    QStringList texts;
    texts<< "1"<< "2"<< "3"<< "4"<< "5"<< "6"<< "7"<< "8"<< "9";

    QGridLayout *gridLayout = new QGridLayout;
         for (int i = 0; i < texts.size(); ++i) {
             QPushButton *button = new QPushButton(texts[i]);
             connect(button, SIGNAL(clicked()), signalMapper, SLOT(map()));
             signalMapper->setMapping(button, texts[i]);
             gridLayout->addWidget(button, i / 3, i % 3);
         }
        connect(signalMapper, SIGNAL(mapped(int)),this,SLOT(digitClicked(int)));//, SIGNAL(mapped(int),this,SLOT( digitClicked(int))  );
        setLayout(gridLayout);
}

void smartQCAL::digitClicked(int digitVal)
{

    qDebug()<<digitVal;
}

//Private
//Button *Calculator::createButton(const QString &text, const char *member)
//{
//    Button *button = new Button(text);
//    connect(button, SIGNAL(clicked()), this, member);
//    return button;
//}


smartQCAL::~smartQCAL()
{

}
