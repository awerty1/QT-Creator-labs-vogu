#include <QVBoxLayout>
#include <QFont>
#include "label.h"

Label::Label(QWidget *parent) : QWidget(parent)
{
    QString lyrics = "Who doesn't long for someone to hold\n"
            "Who knows how to love y without being told\n"
            "Somebody tell me why I'm on my own\n"
            "If there's a soulmate for everyone\n"
            "\n"
            "Here we are again, circles never end\n"
            "How do I find the perfect fit\n"
            "there's enough for everyone\n"
            "But i'm still waiting in line\n"
            "\n"
            "Who doesn't long for someone to hold\n"
            "Who know how to love you without being told\n"
            "Somebody tell me why I'm on my own\n"
            "If there's a soulmate for everyone";

    label = new QLabel(lyrics, this);
    label->setFont(QFont("Purisa", 10));

    QVBoxLayout *vbox = new QVBoxLayout();
    vbox->addWidget(label);
    setLayout(vbox);
}
