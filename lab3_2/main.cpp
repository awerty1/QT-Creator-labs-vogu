#include "verticalbox.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication app(argc, argv);
    VerticalBox window;

    window.resize(350, 200);
    window.setWindowTitle("VerticalBox");
    window.show();

    return app.exec();

}
