#include "homepage.h"
#include "ui_homepage.h"
#include <qwidget.h>

HomePage::HomePage(QWidget *parent)
    : QWidget(parent),
      ui(new Ui::HomePage)
{
    ui->setupUi(this);
}

HomePage::~HomePage()
{
    delete ui;
}