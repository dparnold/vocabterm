#include <string>
#ifndef VOCABLE_H
#define VOCABLE_H


class vocable
{
    public:
        vocable(int id, std::string own_lan, std::string new_lan);
        virtual ~vocable();
    protected:
    private:
        int id;
        int knowledge_value;
        std::string own_language;
        std::string new_language;
        std::string mnemonic;

};

#endif // VOCABLE_H
