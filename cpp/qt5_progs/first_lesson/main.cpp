#include "QWidget"
#include "QApplication"
#include "QPushButton"
#include "QMessageBox"
#include "string"

#include <QApplication>

void onNock();
QPushButton* btn_nock = nullptr;
int size_count = 0, size_multiply = 50, max_count = 4;
int  start_height = 50, start_weight = 200;

void onError();
QPushButton* btn_error = nullptr;
char* error_message = "I said don't click!";

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget widget;
    widget.setWindowTitle("Normal");
    widget.setMinimumSize(480, 360);

    btn_nock = new QPushButton("NOCK me", &widget);
    btn_nock->setGeometry(QRect(QPoint(50, 100),QSize(start_weight, start_height)));
    btn_nock->setMinimumSize(start_weight, start_height);
    btn_nock->setMaximumSize(start_weight, start_height);
    QObject::connect(btn_nock, &QPushButton::clicked, onNock);

    btn_error = new QPushButton("Don't click", &widget);
    btn_error->setGeometry(QRect(QPoint(10, 10),QSize(90, 30)));
    QObject::connect(btn_error, &QPushButton::clicked, onError);

    widget.show();
    return app.exec();
}

// Кнопка, увеличивающаяся в размерах до определённого предела
void onNock()
{
    if (size_count < max_count)
    {
        size_count ++;
        btn_nock->setMaximumSize(start_weight + size_count * size_multiply, start_height + size_count * size_multiply);
        btn_nock->setMinimumSize(start_weight + size_count * size_multiply, start_height + size_count * size_multiply);
    }
    else
    {
        size_count = 0;
        btn_nock->setMinimumSize(start_weight, start_height);
        btn_nock->setMaximumSize(start_weight, start_height);
    }
}

//
void onError()
{
    QMessageBox msg;
    msg.setText(error_message);
    msg.exec();
}
