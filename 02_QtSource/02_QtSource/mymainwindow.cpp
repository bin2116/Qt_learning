#include "mymainwindow.h"
#include "ui_mymainwindow.h"

MyMainWindow::MyMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyMainWindow)
{
    ui->setupUi(this);
//    ui->actionnew->setIcon(QIcon("C:/Users/23190/Desktop/Qt/QtLearn/day2/Doc/Image/Luffy.png"));
    //使用添加Qt资源。": + 前缀名 + 文件名"
    ui->actionnew->setIcon(QIcon(":/Image/LuffyQ.png"));
    ui->actionopen->setIcon(QIcon(":/Image/Luffy.png"));
}

MyMainWindow::~MyMainWindow()
{
    delete ui;
}

