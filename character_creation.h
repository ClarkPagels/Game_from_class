#ifndef CHARACTER_CREATION_H
#define CHARACTER_CREATION_H
#include <iostream>

using namespace std;

class character_creation
{
    public:
        character_creation();
        virtual ~character_creation();
        void setName(string);
        string getName();
        void setGender(string);
        string getGender();
        void setAge(int);
        int getAge();
        void setHeight(int);
        int getHeight();
        void print() const;

    protected:
        string name;
        int age;
        string gender;
        int height;
    private:
};

#endif // CHARACTER_CREATION_H
