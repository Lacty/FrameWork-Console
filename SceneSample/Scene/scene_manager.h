
#pragma once
#include <memory>
#include "scene.h"


class SceneManager {
private:
  SceneType type;
  std::unique_ptr<Scene> scene;

public:
  SceneManager();

  void update();
  void draw();
};