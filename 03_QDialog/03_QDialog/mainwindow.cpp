#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //点击新建按钮，弹出一个对话框。
    connect(ui->actionnew,&QAction::triggered,[=](){

        //对话框 分类
        //模态对话框（不可以对其他窗口进行操作） 非模态对话框（可以对其他窗口进行操作）
        //模态创建 阻塞
//        QDialog dlg(this);
//        dlg.resize(200,100);
//        dlg.show();
//        dlg.exec();
//        qDebug()<<"模态对话框弹出了";

        //非模态对话框
//        QDialog* dlg2 = new QDialog(this);
//        dlg2->resize(200,100);
//        dlg2->show();
//        dlg2->setAttribute(Qt::WA_DeleteOnClose); //55号 属性。
//        qDebug()<<"非模态对话框弹出了";

        //
        //
        //消息对话框
//        错误对话框
//        QMessageBox ::critical(this, "critical","路径错误");

//        信息对话框
//        QMessageBox::information(this,"info","提示信息");
//        提问对话框
//        if(QMessageBox::Save ==QMessageBox::question(this,"question","提问",QMessageBox::Save | QMessageBox :: Cancel,QMessageBox :: Cancel))
//        {
//            qDebug()<<"选择的是保存";

//        }
//        else {
//            qDebug()<<"选择的是取消";
//        }

        //警告对话框
        QMessageBox::warning(this,"warning","警告");
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

