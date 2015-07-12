
#pragma once
#include "../scene.h"


class Title : public Scene {
private:
  int count;

public:
  Title();

  void setup();
  void update();
  void draw();
};