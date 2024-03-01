#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButtonPage1, &QPushButton::clicked, this, &MainWindow::on_pushButtonPage1_clicked);
    connect(ui->pushButtonPage2, &QPushButton::clicked, this, &MainWindow::on_pushButtonPage2_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonPage1_clicked()
{
    ui->stackedWidget->setCurrentIndex(1); // Show Page 2
}

void MainWindow::on_pushButtonPage2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0); // Show Page 1
}
