#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_firstWindow = new FirstWindow;
    m_secondWindow = new SecondWindow;
    m_thirdWindow = new ThirdWindow;

    ui->mdiArea->addSubWindow( m_firstWindow );
    ui->mdiArea->addSubWindow( m_secondWindow );
    ui->mdiArea->addSubWindow( m_thirdWindow );
}

MainWindow::~MainWindow()
{
    delete ui;
}
