#ifndef BILLDESIGN_H
#define BILLDESIGN_H
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
class QComboBox;
QT_END_NAMESPACE
class billDesign:public QDialog
{
Q_OBJECT
public:
billDesign(QWidget *parent= 0);
void init();
void connectSlots();
QString logMsg();

public slots:
void billDesignSlot();
private:
QGroupBox *billDesignGroupBox;

QLabel *billDesignArticleIdLabel;
QLabel *billDesignPriceLabel;
QLabel *billDesignQuantityLabel;
QLabel *billDesignNoticeLabel;
QLabel *billDesignCustomerNameLabel;
//QLabel *phoneProviderLabel;

QComboBox *billDesignArticleId;


QPushButton *cancelPushButton;
QPushButton *savePushButton;
QPushButton *okPushButton;
QPushButton *billDeliver;

//QLineEdit *billDesignNameLineEdit;
QLineEdit *billDesignPwdLineEdit;
QLineEdit *billDesignPwdRetypeLineEdit;
QLineEdit *billDesignCustomerNameLineEdit;
//QLineEdit *phoneProviderLineEdit;

QGridLayout *userGridLayout;

QHBoxLayout *okHBoxLayout;
QHBoxLayout *billDesignHBxLayout;
QHBoxLayout *billDesignGroupBoxHBxLayout;
QHBoxLayout *addProductHBoxlayout;

QVBoxLayout *mainVBoxLayout;

QTableView *tableView;
};
#endif //BILLDESIGN_H
