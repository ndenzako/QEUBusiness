#ifndef addUser_H
#define addUser_H
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
class QTableView;
class QDebug;
class QSqlRecord;
QT_END_NAMESPACE
class addUser:public QDialog
{
Q_OBJECT
public:
addUser(QWidget *parent= 0);
void init();
void connectSlots();
QString logMsg();
QString getText(const QLineEdit *);
void initTable();
QString getDateTime();
void clearFields();

public slots:

void getPwdSlot();
void getPwdRetypedSlot();
void saveUser();
void cancelSlot();

private:

QGroupBox *addUserGroupBox;
QLabel *addUserNameLabel;
QLabel *addUserPwdLabel;
QLabel *addUserPwdRetypeLabel;
QLabel *addUserNoticeLabel;
QLabel *logoLabel;

QPushButton *cancelPushButton;
QPushButton *savePushButton;
QPushButton *okPushButton;

QLineEdit *addUserNameLineEdit;
QLineEdit *addUserPwdLineEdit;
QLineEdit *addUserPwdRetypeLineEdit;

QGridLayout *userGridLayout;

QHBoxLayout *okHBoxLayout;
QHBoxLayout *addUserHBxLayout;
QHBoxLayout *addUserGroupBoxHBxLayout;

QVBoxLayout *mainVBoxLayout;

QTableView *tableView;

QString userName;
QString userPwd;
QString userPwdRetyped;

QSqlQueryModel *queryModel;

bool pwdMatch;
};
#endif //addUser_H
