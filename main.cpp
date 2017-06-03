#include <iostream>
#include <fstream> // for reading and writing files
#include <sstream>
#include <vector>
#include <string>
#include <typeinfo>
#include <cstdlib>
#include <cctype>
#include <algorithm>  // for max()
#include <ctime> // for time_t t=time(0) which is a long value an represents the seconds since 1.1.1970

#include "vocable.h"
#include "vocabulary.h"
using namespace std;



#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    vocabulary vocabulary1 = vocabulary("/home/dominik/Documents/workspace/test/voc.txt");
    vocabulary1.print();
    time_t t=time(0);
    cout<< t <<endl;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}






/*
int main()
{
    vocabulary vocabulary1 = vocabulary("/home/dominik/Documents/workspace/test/voc.txt");
    vocabulary1.print();
    time_t t=time(0);
    cout<< t <<endl;
    //vocabulary1.save();
    //vocable vocab1 = vocable(1,"hallo", "hallo");
    //vocab1.print();
    //vector<vocable*> vocabulary =read_vocabulary();
    //print_vocabulary(vocabulary);
    //vocabulary[1]->test("que");
    //print_vocabulary(vocabulary);
    //cout << "correct value is " << correct("hallOnn","halloNN") <<endl;
    return 0;
}
*/
