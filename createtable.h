#ifndef CREATETABLEDIALOG_H
#define CREATETABLEDIALOG_H
#include<QDialog>
#include<QWidget>
#include<QSqlDatabase>
QT_BEGIN_NAMESPACE
class QPushButton;
class QGridLayout;
class QGroupBox;
class QLabel;
class QHBoxLayout;
class QVBoxLayout;
class QComboBox;
class QLineEdit;
class QDebug;
class QSqlQueryModel;
class QCheckBox;
class QMessageBox;
class QSqlError;
QT_END_NAMESPACE
class createtableDialog : public QDialog
{
Q_OBJECT
public:
createtableDialog(QWidget *parent = 0);
void init();
void styleFunction();
void connectSlots();
QString readLineEdit(const QLineEdit *);
void createtableFunc(const QString&,const QString&);
void getAttribute();
void itemsToCombo(QComboBox*,const QStringList &list);
void getTableView(const QSqlDatabase&);
//void clearLineEdit(const QLineEdit *);

public slots:
void addAttributeSlot();
void createTableSlot();

private:

QPushButton *removePushButton;
QPushButton *addAttributePushButton;
QPushButton *createPushButton;
QPushButton *quitPushButton;

QGridLayout *mainGridLayout;

QGroupBox *mainGroupBox;

QLabel *tableNameLabel;
QLabel *addAttributeLabel;
QLabel *listAttributeLabel;
QLabel *attributeTypeLabel;
QLabel *databaseTableLabel;

QComboBox *listAttribureComboBox;
QComboBox *attributeTypeComboBox;
QComboBox *databaseTableComboBox;
QVBoxLayout *mainVBoxLayout;

QHBoxLayout *buttonHBoxLayout;

QLineEdit *tableNameLineEdit;
QLineEdit *addAtributeLineEdit;


QStringList attributeList;

QSqlQueryModel *queryModel;

QString tableName;

bool ready;

QCheckBox *pkCheckBox;
QCheckBox *uniqueCheckBox;
QCheckBox *autoIncCheckBox;
};
#endif //CREATETABLEDIALOG_H
