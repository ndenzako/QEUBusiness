#ifndef NEWORDER_H
#define NEWORDER_H
#include<QDialog>
QT_BEGIN_NAMESPACE
class QGroupBox;
class QGridLayout;
class QPushButton;
class QHBoxLayout;
class QVBoxLayout;
class QLabel;
class QComboBox;
class QSpinBox;
class QSqlQueryModel;
class QSqlRecord;
class QDebug;
class QSqlError;
class QMessageBox;
class QTableView;
class QSqlTableModel;
QT_END_NAMESPACE

class newOrder:public QDialog
{
   Q_OBJECT
   
public:
newOrder(QWidget *parent = 0);
void init();
void connectSlots();
QString logMsg();
void initCombo(const QComboBox* comboBox,const QString &tablebname,const QString &name,const QString &postName);
QString execQuery(const QString &,const QString &);
void execQuery(const QString &);
void initArticleName();

public slots:

void addArticleSlot();
void releaseCommandSlot();

private:
QGroupBox *mainGrouBox;

QGridLayout *mainGridLayout;

QPushButton *orderPushButton;
QPushButton *okPushButton;
QPushButton *addProductPushButton;

QHBoxLayout *mainHBoxLayout;
QHBoxLayout *okHBoxLayout;

QVBoxLayout *mainVBoxLayout;

QLabel *articleNameLabel;
QLabel *quantityLabel;
QLabel *providerLabel;

QSpinBox *providerSpinBox;

QComboBox *articleComboBox;
QComboBox *providerComboBox;

QSqlTableModel *globaleQueryModel;

};
#endif //NEWORDER_H
