#include <QApplication>
#include <QPushButton>
#include <QLabel>

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    // if no event exists, event loof doesn't end
    QPushButton button ("Hello world !");
    button.show();

    QLabel *label = new QLabel("Hello world");

    label->setWindowTitle("MY APP");

    // resize(width, height);
    label->resize(400, 300);
    label->show();

    return app.exec();
}
