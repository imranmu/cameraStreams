#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , reverCAMFlag(false)
    , thirdCAMFlag(false)
    , secondCAMFlag(false)

{
    displayInst = new DisplayCtrlFunctions;
    ui->setupUi(this);
    connect(this,SIGNAL(displaymainFocusCAM_SIGNAL(bool)), displayInst,SLOT(displaymainFocusCAM(bool)));
    connect(this,SIGNAL(displaythirdCAM_SIGNAL(bool)),displayInst,SLOT(displaythirdCAM(bool)));
    connect(this,SIGNAL(displaysecondCAM_SIGNAL(bool)),displayInst,SLOT(displaysecondCAM(bool)));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete displayInst;

}


void MainWindow::on_mainFocusCAM_clicked()
{
    reverCAMFlag = !reverCAMFlag;
    emit displaymainFocusCAM_SIGNAL(reverCAMFlag);
}


void MainWindow::on_thirdCAM_clicked()
{
    thirdCAMFlag = !thirdCAMFlag;
    emit displaythirdCAM_SIGNAL(thirdCAMFlag);
}


void MainWindow::on_secondCAM_clicked()
{
    secondCAMFlag = !secondCAMFlag;
    emit displaysecondCAM_SIGNAL(secondCAMFlag);
}
