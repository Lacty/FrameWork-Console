
#include "title.h"
#include <iostream>


Title::Title() {
  count = 0;
}


void Title::setup() {}

void Title::update() {
  ++count;
  if (count == 10) {
    setSceneType(SceneType::Game);
  }
}

void Title::draw() {
  std::cout << "count = " << count << std::endl;
}