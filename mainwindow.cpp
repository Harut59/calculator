#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QVBoxLayout>
//#include <QTimer>
#include <QDateTime>
bool is24Hour=true;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // QTimer * timer;
    timer = new QTimer(this);
   // timer1= new QTimer(this);

    label_data_time = new QLabel("this is label",this);
    label_data_time->move(300,100);
    label_data_time->resize(200,100);



    button = new QPushButton("Change AM into PM",this);
    button->move(250,250);
    button->resize(200,100);


    timer->start(1000);

    connect(button, &QPushButton::clicked,this,&MainWindow::button_click);

    connect(timer, &QTimer::timeout,this, &MainWindow::my_function);

     QVBoxLayout *vLayout = new QVBoxLayout;
     vLayout->addWidget(label_data_time );
     vLayout->addWidget(button);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::my_function()   //foruth define function
{
    if(is24Hour){

        QTime time = QTime::currentTime() ;
        QString time_text= time.toString("h:m:s ");
        label_data_time->setText(time_text);
    }
    else
    {

        QTime time = QTime::currentTime() ;
        QString time_text= time.toString("h:m:s ap ");
        label_data_time->setText(time_text);
    }

}

void MainWindow::button_click()
{

    is24Hour=!is24Hour;
}




