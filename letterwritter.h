#ifndef letterMainWindow_H
#define letterMainWindow_H

#include<QMainWindow>

class QAction;
class QListWidget;
class QMenu;
class QTextEdit;

class letterMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    letterMainWindow();

private slots:
    void newLetter();
    void save();
    void print();
    void undo();
    void about();
    void insertCustomer(const QString &customer);
    void addParagraph(const QString &paragraph);

private:
    void createActions();
    void createStatusBar();
    void createDockWindows();

    QTextEdit *textEdit;
    QListWidget *customerList;
    QListWidget *paragraphsList;

    QMenu *viewMenu;
    QAction *quitAct;
};

#endif
