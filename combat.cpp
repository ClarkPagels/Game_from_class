#include "combat.h"
#include <stdlib.h>
#include <iostream>

using namespace std;



combat::calculator(){
    if(character_creation.getAge()>40 || character_creation.getAge < 20 ){
        character--;

    }
    else(
         character++;
         )
    if(character.getHeight > 180){
        character++;
    }
    else {
        character--;
    }
    character_creation.getHeight();


}
int combat::resultShower()
{
    rand = rand()%21 + character;
    nRand = rand()%21;
    if (rand > nRand){
        return 1;
    }
    if(rand < nRand){
        return 2;
    }
    else{
        return 3;
    }
}

combat::combat(){

}
combat::~combat()
{
    //dtor
}

void combat::print(){
    switch(resultShower(){
    case 1:
        cout << "you have beaten the alien. but at what cost? you look through his ship and find out he was just a peaceful tourist, trying to have a good time" << endl;
        break;
    }
    case 2:
        cout << "The alien beats you down with his tentacle hands. 'I was just visiting Earth for vacation. prepare to pay for making me miss my time. ' " << endl;
        cout << "The alien then throws you out and then you find out he took all your gold as compensation for assault" << endl;
        break;
    case 3:
        cout << "Neither of you can get the upper hand as you are in the midst of the fight" << endl;
        cout <<"He says, 'time out, why do you think I'm here?'" << endl;
        cout << "'I'm just a tourist' he says" << endl;
        cout << "'Oh' you reply. then you leave the saucer, you look up to see him fly away" << endl;
}
