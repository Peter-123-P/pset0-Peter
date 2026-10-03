#include "poke.h"

int main() {
    Move thunderbolt("Thunderbolt" , 20);
    Move quickAttack("Quick Attack", 5);
    Move scratch("Scratch", 2);
    Move waterGun("Water Gun", 40);
    Pokemon picachu("Picachu", 30, 100, {waterGun});
    Pokemon charmander("charmander", 25, 129, {scratch});
    picachu.addMove(scratch);
    charmander.addMove(thunderbolt);

    picachu.useMove(charmander, 1);
    charmander.useMove(picachu, 0);
    picachu.useMove(charmander, 0);
    charmander.useMove(picachu, 1);
}