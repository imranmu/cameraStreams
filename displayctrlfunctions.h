#ifndef DISPLAYCTRLFUNCTIONS_H
#define DISPLAYCTRLFUNCTIONS_H

#include <QObject>
#include<QFuture>
#include<QtCore>
#include <QtConcurrent/QtConcurrentRun>
#include<iostream>

class DisplayCtrlFunctions : public QObject
{
    Q_OBJECT
public:
    explicit DisplayCtrlFunctions(QObject *parent = nullptr);

public slots:
    void displaymainFocusCAM(bool);
    void displaythirdCAM(bool);
    void displaysecondCAM(bool);
public:
    bool m_reverCAMFlag;
    bool m_thirdCAMFlag;
    bool m_secondCAMFlag;

};

#endif // DISPLAYCTRLFUNCTIONS_H
