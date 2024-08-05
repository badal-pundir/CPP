#ifndef PLAYER_H
#define PLAYER_H

#include<string>
#include<iostream>
#include "person.h"
using namespace std;

class Player : public Person {
    friend ostream& operator<<(ostream& out, const Player& player);
private:
    string m_game{"None"};
public:
    // Player() = default;
    Player(const string& game_param);
    // ~Player();
};


#endif
