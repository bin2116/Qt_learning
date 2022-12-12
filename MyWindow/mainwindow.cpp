#include "mainwindow.h"
#include <QMenuBar>
#include <QToolBar>
#include <QDebug>
#include <QLabel>
#include <QStatusBar>
#include <QPushButton>
#include <QDockWidget>
#include <QTextEdit>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //重置窗口大小。
    resize(600,400);
    //菜单栏创建
    QMenuBar *bar =  menuBar();
    setMenuBar(bar);

    //创建菜单
    QMenu * fileMenu =  bar->addMenu("文件");
    QMenu * editMenu =  bar->addMenu("编辑");

    //创建菜单项
    QAction *newAction =  fileMenu->addAction("新建");
    //添加分隔符
    fileMenu->addSeparator();
    QAction *openAction = fileMenu->addAction("打开");



    //工具栏，可以有多个。
    QToolBar *toolbar = new QToolBar(this);
    addToolBar(Qt::LeftToolBarArea,toolbar);

    //后期设置，只允许左右停靠。
    toolbar->setAllowedAreas(Qt::LeftToolBarArea | Qt::RightToolBarArea);

    //设置浮动窗口。
    toolbar->setFloatable(false);

    //设置移动。
    toolbar->setMovable(false);

    //工具栏中可以设置一些内容。
    toolbar->addAction(newAction);
    //添加分割线。
    toolbar->addSeparator();
    toolbar->addAction(openAction);
    //工具栏添加一些控件。、
    QPushButton *btn = new QPushButton("aa",this) ;
    toolbar->addWidget(btn);


    //状态栏。
    QStatusBar *stBar = statusBar();
    //设置状态栏。
    setStatusBar(stBar);

    QLabel *label = new QLabel("提示信息",this);
    stBar->addWidget(label);

    QLabel *label2 = new QLabel("右侧提示信息",this);
    stBar->addPermanentWidget(label2);

    //铆接部件（浮动窗口）。
    QDockWidget *dockWidget = new QDockWidget("浮动",this);
    addDockWidget(Qt::BottomDockWidgetArea,dockWidget);

    //设置中心部件。可以有多个。
    QTextEdit *edit = new QTextEdit(this);

    setCentralWidget(edit);

    //设置后期停靠区域，只允许上下。
    dockWidget->setAllowedAreas(Qt::TopDockWidgetArea | Qt::BottomDockWidgetArea);




}
MainWindow::~MainWindow()
{
}

