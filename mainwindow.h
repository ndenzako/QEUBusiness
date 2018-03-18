#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QMainWindow>
#include<QSqlDatabase>
QT_BEGIN_NAMESPACE
class QMenu;
class QMenuBar;
class QStatusBar;
class addProvider;
class QApplication;
class QMessageBox;
class productListDialog;
class addUser;
class billDesign;
class addNewGood;
class newOrder;
class QListWidget;
//class QTextEdit;
class QTextCursor;
class QTextEdit;
class letterMainWindow;
class stockStatusDialog;
class aboutUs;
class QTimer;
class QLabel;
class QStatusBar;
class QPushButton;
class QSqlError;
class QSqlRecord;
class QToolBar;
class QVBoxLayout;
class tableBrowser;
class createtableDialog;
class importDataDialog;
QT_END_NAMESPACE

class MainWindow:public QMainWindow
{

    Q_OBJECT

public:
    MainWindow(QWidget *parent=0);
    void showMaximized();
    void createMenu();
    void createAction();
    void connectSlots();
    void createDoxArea();
    void createDockWindows();
    void insertDoc();
    void printLogMsg(QString &);
    void setTaskBar();
    QString getDateTime();
    void insertCustomer(const QString &customer);

public slots:
void raiseAddProvider();
void raiseProductList();
void raiseAddUser();
void raiseBillDialog();
void raiseNewGoodDialog();
void raiseNewOrderDialog();
void raiseLetterWritterWindow();
void raiseStockStatus();
void connectFunction();
void closeDatabase();
void updateStatusBar();
void helpAboutCompany();
void helpAboutUs();
void raiseViewDatabase();
void raiseCreateTableSlot();
void raiseImportDataSlot();

private:
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuService;
    QMenu *menuHelp;
    QMenu *adminMenu;
    QMenu *searchMenu;
    QMenu *billMenu;
    QMenu *viewMenu;

    QAction *closeSessionAction;
    QAction *letterAction;
    QAction *exitAction;
    QAction *providerAction;
    QAction *newCommandAction;
    QAction *enterProductAction;
    QAction *productListAction;
    QAction *productLowStockAction;
    QAction *aboutUsAction;
    QAction *aboutCompanyAction;
    QAction *raisePriceAction;
    QAction *connectToDataBaseAction;
    //QAction *closeDataBaseAction;
    QAction *addUserAction;
    QAction *billAction;
    QAction *viewDatabaseAction;
    QAction *raiseImportDataAction;
    QAction *raiseCreateTableAction;
    
    QStatusBar *statusBar;
    
    QDockWidget *contentsWindow;
    
    QListWidget *headingList;
    QListWidget *customerList;
    QListWidget *paragraphsList;
    
    QTextEdit *textEdit;
    QTextEdit *logTextEdit;
    
    QLabel *dateDisplay;
    
    QPushButton *connectButton;
    QPushButton *reconnectButton;
    
    QString database;
    
    QToolBar *toolBar;
    addProvider *providerDialog;
    productListDialog *productListDlg;
    addUser *addUserDialog;
    billDesign *billDialog;
    addNewGood *addNewGoodDialog;
    newOrder *newOrderDialog;
    stockStatusDialog *stockStatusDlg;
    
    letterMainWindow *letterWritterWindow;
    static int logLineCounter;
    aboutUs *aboutUsDialog;
    bool disconnecter;
    bool dateDisplayHiden;
    bool connectionChecker;
    QTimer *timer;
    
    bool createConnexion(QString &);
    QSqlDatabase testDb;
    
    QVBoxLayout *mainVBoxLayout;
    QWidget *widget;
    QWidget *widget2;
    QWidget *widget3;
    QWidget *widget4;
    tableBrowser *viewDatabaseDlg;
    importDataDialog *importDataDlg;
    createtableDialog *createTableDlg;
};
#endif //MAINWINDOW_H
