#include "statusbar.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Statusbar window;

    window.resize(300, 200);
    window.setWindowTitle("QStatusBar");
    window.show();
    
    return app.exec();
}
