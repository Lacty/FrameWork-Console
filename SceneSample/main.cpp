
#include <iostream>
#include "System/game_main.h"


int main() {
  GameMain game;

  while (game.isRun()) {
    game.update();
    game.draw();
  }
}