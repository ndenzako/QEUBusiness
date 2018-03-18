#ifndef TABLEBROWSER_H
#define TABLEBROWSER_H
//#include <QTabWidget>
//#include<QTableView>
#include<QDialog>
#include<QSqlDatabase>
QT_BEGIN_NAMESPACE
class QTableView;
class QFile;
class QDataStream;
class QDebug;
class QMessageBox;
class QTableView;
class QSqlDatabase;
class QSqlQueryModel;
class QSqlError;
class QHBoxLayout;
class QVBoxLayout;
class QTabWidget;
QT_END_NAMESPACE
class tableBrowser : public QDialog
{
Q_OBJECT

public:
tableBrowser(QWidget *parent = 0);
bool createConnexion(QString &);
void getTableView(const QSqlDatabase&);
void connectSlots();
void init();
private:
QTableView *tableView;
QStringList lis;
QSqlDatabase testDb;
QPushButton *okPushButton;
QHBoxLayout *okHBoxLayout;
QVBoxLayout *mainVBoxLayout;
QTabWidget *tabWidget;

};
#endif //TABLEBROWSER_H
