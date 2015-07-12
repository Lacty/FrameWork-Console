
#include "scene_maker.h"
#include "../Scene/Title/title.h"
#include "../Scene/Game/game.h"


SceneMaker& SceneMaker::getInstance() {
  static SceneMaker maker;
  return maker;
}

void SceneMaker::create(std::unique_ptr<Scene>& scene, SceneType& type) {
  if (type == SceneType::Title) {
    scene = std::make_unique<Title>();
    scene->setSceneType(type);
  } else 
  if (type == SceneType::Game) {
    scene = std::make_unique<Game>();
    scene->setSceneType(type);
  }
}