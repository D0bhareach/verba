#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qwidget.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionHome_triggered();

    void on_actionEdit_triggered();

    void on_actionSettings_triggered();

private:
    Ui::MainWindow *ui;
    QWidget *currentPage = nullptr;
};

#endif // MAINWINDOW_H
