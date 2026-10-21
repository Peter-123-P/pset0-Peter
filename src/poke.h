#include <iostream>
#include<string>
#include<vector>
#include<cmath>
using std::vector;
using std::string;
using std::round;
using std::cout;

class Move{

    private:
        string name;
        int power;

    public:
        Move(string n, int p)
        {
            name = n;
            power = p;
        }

    string getName()
    {
        return name;
    }

    int getPower()
    {
        return power;
    }
};

struct Pokemon{
    string name;
    int attack;
    int health;
    vector<Move>moveset;
    
    Pokemon(string n, int a, int h, vector<Move>m)
    {
        name = n;
        attack = a;
        health = h;
        moveset = m;
    }

    string getName(){
        return name;
    }

    int getAttack(){
        return attack;
    }

    int getHealth(){
        return health;
    }

    vector<Move> getMoveset(){
        return moveset;
    }

    void addMove(Move m)
    {
        moveset.push_back(m);
    }

    void useMove( Pokemon & other, int index )
    {
        if(index<0||index>= moveset.size())
        {
            std::cout<< "Move index not work! \n";
            return;
        }
        Move m = moveset[index];
        int damage = round(attack*m.getPower()/100.0);
        other.health -= damage;
        std::cout<<name<<" used "<<m.getName()<<"!\n";
    }
};

