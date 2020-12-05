#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include<QFuture>
//#include<QtCore>
//#include <QtConcurrent/QtConcurrentRun>
#include <iostream>
#include "displayctrlfunctions.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_mainFocusCAM_clicked();
//    void displaymainFocusCAM();

    void on_thirdCAM_clicked();
//    void displaythirdCAM();

    void on_secondCAM_clicked();
//    void displaysecondCAM();
signals:
    void displaymainFocusCAM_SIGNAL(bool);
    void displaythirdCAM_SIGNAL(bool);
    void displaysecondCAM_SIGNAL(bool);

private:
    Ui::MainWindow *ui;
    DisplayCtrlFunctions *displayInst;
    bool reverCAMFlag;
    bool thirdCAMFlag;
    bool secondCAMFlag;
};
#endif // MAINWINDOW_H
