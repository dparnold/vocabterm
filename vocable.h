#include <string>
#ifndef VOCABLE_H
#define VOCABLE_H
using namespace std;

class vocable
{
    public:
        vocable(int id, std::string own_lan, std::string new_lan); // Constructor
        virtual ~vocable();
		void print();
		void test(std::string typed);
		string file_format();
		void review();
		void learn();
		
    protected:
    private:
        int id;
        int knowledge_value;
        string own_language;
        string new_language;
		int reviewNumber;
		int learnNumber;
		int timesReviewed;

};

#endif // VOCABLE_H
