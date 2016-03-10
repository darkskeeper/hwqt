#include <QCoreApplication>
#include <QTextStream>
#include <stdio.h>
#include <iostream>
using namespace std;

//QTextStream cin(stdin);
//QTextStream cout(stdout);

/*QTextStream& qout()
{
    static QTextStream ts(stdout);
    return ts;
}*/

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString s1 = "Enter your name: ";
    cout << s1.toStdString() << endl;
    //QString s = cin.readLine();
    //cout << "Your name is: " << s;
    cout<<"Hello World";
    return a.exec();
}
