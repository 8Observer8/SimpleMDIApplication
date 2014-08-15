#include "ThirdWindow.h"
#include "ui_ThirdWindow.h"

ThirdWindow::ThirdWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ThirdWindow)
{
    ui->setupUi(this);
}

ThirdWindow::~ThirdWindow()
{
    delete ui;
}
