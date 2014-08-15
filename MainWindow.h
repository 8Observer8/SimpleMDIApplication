#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "FirstWindow.h"
#include "SecondWindow.h"
#include "ThirdWindow.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    FirstWindow *m_firstWindow;
    SecondWindow *m_secondWindow;
    ThirdWindow *m_thirdWindow;
};

#endif // MAINWINDOW_H
