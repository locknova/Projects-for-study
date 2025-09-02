#include "QWidget"
#include "QApplication"
#include "QPushButton"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget widget;
    widget.setWindowTitle("Normal");
    widget.setMinimumSize(480, 360);

    widget.show();
    return app.exec();
}
