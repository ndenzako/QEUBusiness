#ifndef PRODUCTLIST_H
#define PRODUCTLIST_H
#include<QDialog>
#include<QSqlQueryModel>
QT_BEGIN_NAMESPACE
class QGroupBox;
class QGridLayout;
class QLabel;
class QLineEdit;
class QPushButton;
class QHBoxLayout;
class QVBoxLayout;
class QMessageBox;
class QComboBox;
class QStringList;
class QStandardItemModel;
class QSqlRecord;
class QDebug;
class QTableView;
class QCheckBox;
QT_END_NAMESPACE
class productListDialog:public QDialog
{
Q_OBJECT
public:
productListDialog(QWidget *parent= 0);
void init();
void connectSlots();
QString logMsg();


public slots:
//void searchFunction();
void enableTableViewSlot();
void enableTableViewFromListSlot();
private:
QGroupBox *searchGroupBox;

QLabel *articleLabel;
QLabel *keywordLabel;
QLabel *providerLabel;
QLabel *listStatusLabel;

//QPushButton *cancelPushButton;
QPushButton *listPushButton;
QPushButton *okPushButton;

//QLineEdit *searchLineEdit;

QGridLayout *searchGridLayout;

QHBoxLayout *okHBoxLayout;
QHBoxLayout *actionHBoxlayout;
QHBoxLayout *listStatusHBoxLayaut;

QVBoxLayout *mainVBoxLayout;

QComboBox *keywordComboBox;
QComboBox *providerComboBox;

QCheckBox *seeDetails;

QTableView *detailsTableView;

QSqlQueryModel queryModel;
};
#endif //PRODUCTLIST_H
