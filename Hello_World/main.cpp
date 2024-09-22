#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    // if no event exists, event loof doesn't end
    QPushButton button ("Hello world !");
    button.show();


    return app.exec();
}
