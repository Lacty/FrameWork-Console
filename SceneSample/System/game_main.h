
#pragma once
#include "../Scene/scene_manager.h"


class GameMain {
private:
  SceneManager scene;

public:

  bool isRun();
  void update();
  void draw();
};