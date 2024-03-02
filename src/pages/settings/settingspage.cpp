#include "settingspage.h"
#include "ui_settingspage.h"
#include <qwidget.h>

SettingsPage::SettingsPage(QWidget *parent)
    : QWidget(parent),
      ui(new Ui::SettingsPage)
{
    ui->setupUi(this);
}

SettingsPage::~SettingsPage()
{
    delete ui;
}
