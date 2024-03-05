#include "mainwindow.h"
#include "pages/edit/editpage.h"
#include "pages/home/homepage.h"
#include "pages/settings/settingspage.h"
#include "ui_mainwindow.h"
#include <qwidget.h>
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  currentPage = new HomePage(this);
  ui->stackedWidget->addWidget(currentPage);
  ui->stackedWidget->setCurrentWidget(currentPage);
  ui->stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_actionHome_triggered() {
  if (currentPage != nullptr) {
    ui->stackedWidget->removeWidget(currentPage);
  }
  delete currentPage;
  currentPage = new HomePage(this);
  ui->stackedWidget->addWidget(currentPage);
  ui->stackedWidget->setCurrentWidget(currentPage);
}

void MainWindow::on_actionEdit_triggered() {
  if (currentPage != nullptr) {
    ui->stackedWidget->removeWidget(currentPage);
  }
  delete currentPage;
  currentPage = new EditPage(this);
  ui->stackedWidget->addWidget(currentPage);
  ui->stackedWidget->setCurrentWidget(currentPage);
}

void MainWindow::on_actionSettings_triggered() {
  if (currentPage != nullptr) {
    ui->stackedWidget->removeWidget(currentPage);
  }
  delete currentPage;
  currentPage = new SettingsPage(this);
  ui->stackedWidget->addWidget(currentPage);
  ui->stackedWidget->setCurrentWidget(currentPage);
}