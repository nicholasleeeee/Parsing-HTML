#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QWebView>

#include <QMainWindow>
#include "secondscreen.h"
#include "ui_secondscreen.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void parse(bool);

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    QWebView *innerPage = new QWebView();
    SecondScreen *s =new SecondScreen();

   };

#endif // MAINWINDOW_H
