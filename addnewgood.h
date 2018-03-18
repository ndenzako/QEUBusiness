#ifndef addNewGood_H
#define addNewGood_H
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
class QCheckBox;
class QComboBox;
class QSqlError;
class QSqlRecord;
class QDateEdit;
QT_END_NAMESPACE
class addNewGood:public QDialog
{
Q_OBJECT
public:
addNewGood(QWidget *parent= 0);
void init();
void connectSlots();
QString logMsg();
QString getDateTime();
QString getData(const QLineEdit *);
void execQuery(const QString &);
void clearFields();

public slots:
void addNewGoodSlot();
void commentCheckBoxSlot();
void cancelSlot();

private:
QGroupBox *addNewGoodGroupBox;

QLabel *addNewGoodArticleIdLabel;
QLabel *addNewGoodPriceLabel;
QLabel *addNewGoodQuantityLabel;
QLabel *addNewGoodNoticeLabel;

//QLabel *commentLabel;
//QLabel *phoneProviderLabel;

QLabel *addNewGoodNameLabel;


QPushButton *cancelPushButton;
QPushButton *savePushButton;
QPushButton *okPushButton;
//QPushButton *billDeliver;

QLineEdit *addNewGoodNameLineEdit;
QLineEdit *addNewGoodPriceLineEdit;
QLineEdit *addNewGoodQuantityLineEdit;
QLineEdit *addNewGoodArticleIdLineEdit;
QLineEdit *commentLineEdit;
//QLineEdit *expireDateLineEdit;
//QLineEdit *phoneProviderLineEdit;

QGridLayout *userGridLayout;

QHBoxLayout *okHBoxLayout;
//QHBoxLayout *addNewGoodHBxLayout;
QHBoxLayout *addNewGoodGroupBoxHBxLayout;
QHBoxLayout *addProductHBoxlayout;

QVBoxLayout *mainVBoxLayout;

QDateEdit *expireDateEdit;


QCheckBox *addNewGoodPoviderNameCheckBox;
QCheckBox *commentCheckBox;
QCheckBox *expiryCheckBox;

QComboBox *addNewGoodProviderComboBox;
//QTableView *tableView;
};
#endif //addNewGood_H
