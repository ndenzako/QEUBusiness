#ifndef ADDPROVIDER_H
#define ADDPROVIDER_H
#include<QDialog>
QT_BEGIN_NAMESPACE
class QGroupBox;
class QGridLayout;
class QLabel;
class QLineEdit;
class QPushButton;
class QHBoxLayout;
class QVBoxLayout;
class QSqlQueryModel;
class QMessageBox;
class QDebug;
class QSqlRecord;
QT_END_NAMESPACE
class addProvider:public QDialog
{
Q_OBJECT
public:
addProvider(QWidget *parent= 0);
void init();
void connectSlots();
QString logMsg();
QString readLineEdit(const QLineEdit *);
QString getDateTime();
void clearFields();
void execQuery(const QString &);

public slots:
//void addProviderSlot();
void saveProviderSlot();
void cancelSaveProvider();
private:
QGroupBox *addProviderGroupBox;

QLabel *addProviderNameLabel;
QLabel *addProviderPostNameLabel;
QLabel *addressProviderLabel;
QLabel *phoneProviderLabel;

QPushButton *cancelPushButton;
QPushButton *savePushButton;
QPushButton *okPushButton;

QLineEdit *addProviderNameLineEdit;
QLineEdit *addProviderPostNameLineEdit;
QLineEdit *addressProviderLineEdit;
QLineEdit *phoneProviderLineEdit;

QGridLayout *providerGridLayout;

QHBoxLayout *okHBoxLayout;

QVBoxLayout *mainVBoxLayout;


};
#endif //ADDPROVIDER_H
