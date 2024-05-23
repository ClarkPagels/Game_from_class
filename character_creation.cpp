#include "character_creation.h"
#include <iostream>

using namespace std;

character_creation::character_creation()
{
    //ctor
}

void character_creation::setName(string n){
    name = n;
}

string character_creation::getName(){
    return name;
}
void character_creation::setAge(int x){
    age = x;
}
int character_creation::getAge(){
    return age;
}
void character_creation::setGender(string gen){
    gender = gen;
}
string character_creation::getGender(){
    return gender;
}
void character_creation::getHeight(int h){
    height = h;
}
void character_creation::print(){
    cout << "Your name is " << getName() << " you are " << getAge() << " years old and you are " << getHeight << "cm tall and you are a " << getGender() << endl;
}

character_creation::~character_creation()
{
    //dtor
}
