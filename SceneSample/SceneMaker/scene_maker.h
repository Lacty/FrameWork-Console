
#pragma once
#include "../Scene/scene.h"
#include <memory>


class SceneMaker {
private:
  SceneMaker() = default;

public:
  static SceneMaker& getInstance();

  void create(std::unique_ptr<Scene>& scene, SceneType& type);
};