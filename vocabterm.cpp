#include <iostream>
#include <string>
#include <fstream>
#include "vocable.h"
#include <sstream>
#include <vector>
using namespace std;

string vocabFileName = "voc.txt";


vector<string> split(const string &s, char delim) {
    vector<string> elems;
    stringstream ss;
    ss.str(s);
    string item;
    int counter = 0;
    for(counter =0; counter <=1; counter++)
    {
        getline(ss, item, delim);
        elems.push_back(item); // add
    }
    return elems;
}

void readVocabulary(){
    ifstream vocabFile;
    vocabFile.open(vocabFileName);
    cout << "Reading the vocabulary:"<<endl;
    string line;
    vector<string>  lineElements;
    while (getline(vocabFile, line, '\n'))   // You can have a different delimiter
    {
        lineElements = split(line,'\t');
        cout << lineElements[1] << endl;
    }
    vocabFile.close();
}

int main(){
//cout<<"hallo"<<endl;
//vocable voc_1(1, "hola", "hallo");
readVocabulary();
return 0;
}
