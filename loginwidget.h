#ifndef LOGINWIDGET_H
#define LOGINWIDGET_H

#include <QMainWindow>

namespace Ui {
class loginWidget;
}

class loginWidget : public QMainWindow
{
    Q_OBJECT

public:
    explicit loginWidget(QWidget *parent = 0);
    ~loginWidget();

private:
    Ui::loginWidget *ui;
};

#endif // LOGINWIDGET_H
