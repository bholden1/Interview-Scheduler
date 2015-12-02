#include <QtGui/QApplication>
#include "schedule.h"


int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    schedule foo;
    foo.show();
    return app.exec();
}
