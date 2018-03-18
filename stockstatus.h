#ifndef STOCKSTATUSDIALOG_H
#define STOCKSTATUSDIALOG_H
#include<QDialog>
QT_BEGIN_NAMESPACE
class QLabel;
class QVBoxLayout;
class QHBoxLayout;
class QGroupBox;
class QGridLayout;
class QPushButton;
class QComboBox;
QT_END_NAMESPACE
class stockStatusDialog:public QDialog
{
    Q_OBJECT

public:
stockStatusDialog(QWidget *parent=0);
void init();
void connectSlots();
void styleStatus();
QString logMsg();


public slots:

private:
QLabel *stateLabel;

QVBoxLayout *mainVBoxLayout;

QHBoxLayout *oKHBoxLayout;

QGroupBox *statusGroupBox;

QGridLayout *statusGridLayout;

QPushButton *seePushButton;
QPushButton *okPushButton;

QComboBox *statusComboBox;

};
#endif //STOCKSTATUSDIALOG_H




