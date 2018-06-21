#include "secondscreen.h"
#include "ui_secondscreen.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

SecondScreen::SecondScreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SecondScreen)
{
    ui->setupUi(this);
}

SecondScreen::~SecondScreen()
{
    delete ui;
}

void SecondScreen::on_pushButton_clicked()
{
    hide();

}
