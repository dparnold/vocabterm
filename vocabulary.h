#ifndef VOCABULARY_H
#define VOCABULARY_H
#include <string>
#include <vector>

#include "vocable.h"
using namespace std;

class vocabFile;
class vocabulary
{
public:
	vocabulary(std::string vocabFileLocation);
	~vocabulary();
	void print();
	void save();
protected:
	vector<string> split_str(string str, char delimiter);
private:
	vector<vocable*> vocabularyVector;
	string vocabularyFileLocation;

};

#endif // VOCABULARY_H
