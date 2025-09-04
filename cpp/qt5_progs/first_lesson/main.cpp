#include "QWidget"
#include "QApplication"
#include "QPushButton"

#include <QApplication>

void onNock();
QPushButton* btn_nock = nullptr;
int size_count = 0, size_multiply = 55, max_count = 4;
int  start_height = 50, start_weight = 200;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget widget;
    widget.setWindowTitle("Normal");
    widget.setMinimumSize(480, 360);

    btn_nock = new QPushButton("NOCK me", &widget);
    btn_nock->setGeometry(QRect(QPoint(100, 100),QSize(start_weight, start_height)));
    btn_nock->setMinimumSize(start_weight, start_height);
    btn_nock->setMaximumSize(start_weight, start_height);
    QObject::connect(btn_nock, &QPushButton::clicked, onNock);

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
