#include "displayctrlfunctions.h"

DisplayCtrlFunctions::DisplayCtrlFunctions(QObject *parent)
    : QObject(parent)
    , m_reverCAMFlag(false)
    , m_thirdCAMFlag(false)
    , m_secondCAMFlag(false)
{


}

void DisplayCtrlFunctions::displaymainFocusCAM(bool reverCAMFlag)
{
    //! Test video source 1
    m_reverCAMFlag = reverCAMFlag;
    if(m_reverCAMFlag){
        QFuture<void> future = QtConcurrent::run([=]() {
            QString command= "gst-launch-1.0 videotestsrc ! videoconvert ! queue ! autovideosink";
            system(command.toStdString().c_str());
        });
    }
}

void DisplayCtrlFunctions::displaythirdCAM(bool thirdCAMFlag)
{
    //! Test video source 2
    m_thirdCAMFlag = thirdCAMFlag;
    if(m_thirdCAMFlag){
        QFuture<void> future = QtConcurrent::run([=]() {
            QString command= "gst-launch-1.0 videotestsrc pattern=colors ! video/x-raw,width=640,height=480 ! autovideosink";
            system(command.toStdString().c_str());
        });
    }
}

void DisplayCtrlFunctions::displaysecondCAM(bool secondCAMFlag)
{
    //! Test video source 3
    m_secondCAMFlag = secondCAMFlag;
    if(m_secondCAMFlag){
        QFuture<void> future = QtConcurrent::run([=]() {
            QString command= " gst-launch-1.0 videotestsrc pattern=ball ! video/x-raw,width=640,height=480 ! autovideosink";
            system(command.toStdString().c_str());
        });
    }
}
