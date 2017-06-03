#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "managevocabulary.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMainWindow::showMaximized();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionManage_Vocabulary_triggered()
{
    ManageVocabulary* test = new ManageVocabulary();
    this->setCentralWidget(test);
}

void MainWindow::on_action_Exit_triggered()
{
    this->close();
}
