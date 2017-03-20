#include "loginwidget.h"
#include "ui_loginwidget.h"

loginWidget::loginWidget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::loginWidget)
{
    ui->setupUi(this);
}

loginWidget::~loginWidget()
{
    delete ui;
}
