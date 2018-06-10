#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QWebElement>
#include <QtWebKit>
#include <QDebug>
#include <QWebFrame>
#include <QUrl>
#include <QWebView>
#include <QWebPage>
#include <QtNetwork>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QUrl url("http://www.comp.nus.edu.sg/~geraldc/web/index.html");
    /* Code on the webpage is
     * <html>
     * <head></head>
     * <body>
     *      <p>HelloWorld</p>
     *      <p>TESTCODE</p>
     * </body>
     * </html>
    */
    innerPage->setUrl(url);
    connect(innerPage, SIGNAL(loadFinished(bool)), SLOT(parse(bool)));
}

void MainWindow::parse(bool)
{
    QWebFrame *frameInner = innerPage->page()->mainFrame();
    QWebElement doc = frameInner->documentElement();
    QWebElement body = doc.firstChild();
    QWebElement firstParagraph =doc.firstChild();
    QWebElement secondParagraph = firstParagraph.nextSibling();
    QString storedText = firstParagraph.toPlainText();
    QString text = secondParagraph.toPlainText();
    qDebug()<<QString(storedText);
    qDebug()<<secondParagraph.toPlainText();
}

void MainWindow::on_pushButton_2_clicked()
{
    //hide();
    s->show();
}
