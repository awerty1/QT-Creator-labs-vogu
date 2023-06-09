#include "simplemenu.h"
#include <QMenu>
#include <QMenuBar>

SimpleMenu::SimpleMenu(QWidget *parent)
    : QMainWindow(parent)
{
    // Создаем объект класса QAction (действие) с названием пункта меню "Quit"
    QAction *quit = new QAction("&Quit", this);

    // Создаем объект класса QMenu (меню)
    QMenu *file;
    file = menuBar()->addMenu("&File");

    // Помещаем действие "Quit" (выход) в меню с помощью addAction()
    file->addAction(quit);

    // Когда мы выбираем в меню опцию "Quit", то приложение сразу же завершает свое выполнение
    //connect(quit, &QAction::triggered, qApp, &QApplication::quit);
    connect(quit, SIGNAL(triggered()), qApp, SLOT(quit()));
}
