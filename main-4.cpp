#include <iostream>
#include <random>
#include "character_creation.h"
#include "combat.h"
using namespace std;

// where the objects go

character_creation character;
combat combat;

// variables for user input

int input;
char put;
string in;
string stuff[4] = {"a dog", "a cat", "space stuff", "an little grey alien reading a newspaper"};


int main(){
    //main file is for the 'printing' and interaction
    cout << "Welcome to this chose your own adventure story!" << endl;
    cout << "How the story goes is up to you" << endl;
    cout << "This is 2100 and you think an alien has landed near the small town of Amherst New Mexico" << endl;
    cout << "You are an investigator or sorts" << endl;
    cout << "now create your character" <<endl;
    cout << "you're traits will affect your game" << endl;
    cout << "what is your name? " << endl;
    cin >> in;
    character.setName(in);
    cout<< "what is your gender? male for male, female for female, or other for other" << endl;
    cin >> in;
    character.setGender(in);
    cout <<"How many years old are you?" << endl;
    cin >> input;
    character.setAge(input);
    cout <<"How tall are you in centimeters? round to the ones" << endl;
    cin >> input;
    character.setHeight(input);
    character.print();
    cout << "Now, you are brought to the crash site" << endl;
    cout << "Do you exam it e or do you try to break in b?" << endl;
    cin >> put;
    switch (put){
    case 'e':
        cout << "you look through the mirror" << endl;
        cout << "you see" << endl;
        for(int i = 0; i <4; i++){
            cout << stuff[i] << endl;
        }
        cout << "Do you walk away or try to greet hte alien?" << endl;
        cout << "say w for walk away  and g for greet?" << endl;
        cin >> put;
        switch(put){
            case 'w':
                cout <<"You walk away, leaving the alien ship in peace. the next day you here that it had already left" << endl;
                break;
            case 'g':
                cout <<"You knock on the door and the alien, a green man with tentcale arms says, come in!" << endl;
                cout <<"you are a fine example of a human" << character.getGender() << endl;
                cout <<"I can tell your name is" << character.getName() << endl;
                cout <<"How can you tell that? you ask" << endl;
                cout <<"It's on your badge" << endl;
                cout <<"Oh." << endl;
                cout <<"You look through the ship and it looks too much like an RV" << endl;
                cout << "It was all good" << endl;

        }
        break;
    case 'b':
        cout << "you are suddenly in a strange room. flashing lights blare. in the middle sits an alien with a newspaper."<<endl;
        cout <<"He shouts 'intruder' and attacks!" << endl;
        combat.calculator();
        combat.resultShower();
        combat.print();
        break;
    }
}
