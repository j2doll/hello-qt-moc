
#include "dialog.h"

#include <QtGlobal>
#include <QObject>
#include <QLabel>
#include <QWidget>
#include <QApplication>

#include "mywidget.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QObject *obj = new MyWidget; // meta-obect system.
                                 // class MyWidget : public QWidget

    QWidget *widget = qobject_cast<QWidget *>(obj);
    Q_ASSERT( widget != NULL );

    MyWidget *myWidget = qobject_cast<MyWidget *>(obj);
    Q_ASSERT( myWidget != NULL );

    QLabel *label = qobject_cast<QLabel *>(obj);
    Q_ASSERT( label != NULL ); // label is 0(NULL). because obj is not inherited from QLabel.

    return 0;
}
