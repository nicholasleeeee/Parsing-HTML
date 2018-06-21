#ifndef SECONDSCREEN_H
#define SECONDSCREEN_H

#include <QMainWindow>


namespace Ui {
class SecondScreen;
}

class SecondScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit SecondScreen(QWidget *parent = 0);
    ~SecondScreen();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SecondScreen *ui;

};

#endif // SECONDSCREEN_H
