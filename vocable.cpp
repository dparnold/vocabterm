#include "vocable.h"
#include <iostream>
using namespace std;

vocable::vocable(int id, string own_lan, string new_lan)
: id(id), knowledge_value(0), own_language(own_lan), new_language(new_lan)
{
cout << own_lan << " created"<<endl;
}

vocable::~vocable()
{
    //dtor
}
