#ifndef IMPORTDATA_H
#define IMPORTDATA_H
#include<QDialog>

QT_BEGIN_NAMESPACE
class QGroupBox;
class QGridLayout;
class QLabel;
class QLineEdit;
class QPushButton;
class QHBoxLayout;
class QVBoxLayout;
class QDebug;
class QFile;
class QTextStream;
class QSqlQueryModel;
class QFileDialog;
class QMessageBox;
class QTableView;
class logWindow;
class QTextEdit;
QT_END_NAMESPACE
class importDataDialog:public QDialog
{
Q_OBJECT
public:
importDataDialog(QWidget *parent= 0);
void init();
void connectSlots();
void styleSheet();
//void setTextOnTextEdit(const QString &);
//void readFile();

public slots:
void importData();
void getFile();
void cancelSlot();

private:
QGroupBox *fileGroupBox;

QLabel *selectFileLabel;
QLabel *tableNameLabel;

QPushButton *cancelPushButton;
QPushButton *importPushButton;
QPushButton *okPushButton;
QPushButton *browseButton;

QLineEdit *selectFileLineEdit;
QLineEdit *tableNameLineEdit;

QGridLayout *fileGridLayout;

QHBoxLayout *fileHBoxLayout;
QHBoxLayout *okHBoxLayout;

QVBoxLayout *mainVBoxLayout;
QVBoxLayout *secondVBoxLayout;


QString fileName;

QTableView *tableView;

logWindow *logDialog;

//QTextEdit *textEdit;
};
#endif //IMPORTDATA_H
