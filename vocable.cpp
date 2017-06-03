#include "vocable.h"
#include <iostream>
using namespace std;

//Constructor of a new vocable
vocable::vocable(int id, string own_language, string new_language) 
: id(id), knowledge_value(0),timesReviewed(0),reviewNumber(5), learnNumber(2), own_language(own_language), new_language(new_language)
{
//cout << "The vocable: "<<own_language<< own_language.size()<<" - "<< new_language <<new_language.size()<< " has been created"<<endl;
}

vocable::~vocable()
{
    //dtor
}

void vocable::print()
{
	cout<<"ID: "<< id<<"\n"<<own_language<<"\n"<<new_language<< "\nKnowledge Value: "<< knowledge_value<< "\n\n\n";
}

void vocable::test(string typed)
{	
	string vocab = this->new_language;
	bool correct = true;
	for(unsigned int i = 0;i<max(vocab.size(),typed.size());i++)
	{	
		if (vocab[i] == typed[i])continue; // Check whether both strings are the same
		else if ( (typed[i] == tolower(vocab[i])) || (typed[i]== toupper(vocab[i])) ) continue;	// If not: Ignore upper/lower case differences
		else correct=false;
	}
	if (correct == true) this->knowledge_value+=1;
	else if (correct == false) this->knowledge_value -=1;
}

string vocable::file_format()
{
	string line;
	line += to_string(this->id)+"\t"; // for to_string you need to enable C++11 features
	line += this->new_language+ "\t";
	line += this->own_language+ "\t";
	line += to_string(this->knowledge_value)+ "\n";
	
	return line;
}

