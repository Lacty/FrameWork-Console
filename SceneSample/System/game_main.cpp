
#include "game_main.h"


bool GameMain::isRun() {
  return true;
}

void GameMain::update() {
  scene.update();
}

void GameMain::draw() {
  scene.draw();
}