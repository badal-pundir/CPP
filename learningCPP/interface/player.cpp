#include "person.h"
#include "player.h"
using namespace std;

// Player::Player(): m_game("None"){}

Player::Player(const string& game_param):
m_game(game_param){}

// Player::~Player() {}

ostream& operator<<(ostream& out, const Player& player) {
    out<< "Player: [ game: " << player.m_game
    << " names: " << player.get_first_name()
    << " "<<player.get_last_name() << "]";
    return out;
}