#include <QApplication>
#include "./ui_caller.h"
#include "CallerMainWindow.h"
#include <QLineEdit>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    CallerMainWindow win(nullptr);
    Ui::MainWindow caller;
    caller.setupUi(&win);
    win.lineEdit = caller.lineEdit;
    win.setFixedSize(240, 680);
    win.setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    win.show();
    return QApplication::exec();
}
