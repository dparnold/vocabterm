#include "vocabulary.h"
#include "vocable.h"
#include <vector>
#include <fstream>
#include <cstdlib> // for atoi()
#include <iostream> // for cout


using namespace std;

vocabulary::vocabulary(string vocabularyFileLocacion)
{	
	this->vocabularyFileLocation = vocabularyFileLocacion;
	string line;
	ifstream vocabFile;
	vocabFile.open(vocabularyFileLocacion.c_str());
	if (vocabFile.is_open())
	{
		while (getline(vocabFile, line))
		{
			vector<string> vocableVector = split_str(line,'\t');
			this->vocabularyVector.push_back(new vocable(atoi(vocableVector[0].c_str()),vocableVector[1],vocableVector[2]));
			//for(int i = 0; i< vocableVector.size(); i++)cout << vocableVector[i]<<endl;
		}
	}
	else cout << "Error! File could not be opened\n";
	vocabFile.close();
}

vector<string> vocabulary::split_str(string str, char delimiter)
{
	unsigned int beginningCounter = 0;	// mark beginningCounter of content 
	unsigned int endCounter = 1; // mark end of content starts one character after the beginningCounter
	vector<string> strVec;
	for (; endCounter <= str.size();endCounter++) // go through all the characters of the string
	{
		if ((str[endCounter] == delimiter) || (endCounter == str.size())) 
		{
			string next;
			for (;beginningCounter<(endCounter);beginningCounter++) // -1 to ignore the dilimiter
			{
				next.push_back(str[beginningCounter]);
			}
			strVec.push_back(next);
			endCounter+=1; // ignore the dilimiter
			beginningCounter = endCounter; // start with the next word
		}
	}
	return strVec;
}

vocabulary::~vocabulary()
{
}

void vocabulary::print()
{
	cout << endl;
	for(int i = 0;i<this->vocabularyVector.size();i++)
	{
		this->vocabularyVector[i]->print();
	}
}

void vocabulary::save()
{
	ofstream vocabFile;
	vocabFile.open(this->vocabularyFileLocation);
	for(int i = 0;i< this->vocabularyVector.size();i++)
	{
		vocabFile << this->vocabularyVector[i]->file_format();
	}	
	vocabFile.close();
}