#ifndef LOGWINDOW_H
#define LOGWINDOW_H
#include<QDialog>
QT_BEGIN_NAMESPACE
class QPushButton;
class QTextEdit;
class QHBoxLayout;
class QVBoxLayout;
QT_END_NAMESPACE
class logWindow:public QDialog
{
Q_OBJECT
public:
logWindow(QWidget *parent=0);
void init();
//void connectSlots();
void setTextOnTextEdit(const QString&);
private:
//QPushButton *okPushButton;

QTextEdit *logTextEdit;

//QHBoxLayout *okHBoxLayout;

QVBoxLayout *mainVBoxLayout;
int lineCounter;

};
#endif //LOGWINDOW_H
