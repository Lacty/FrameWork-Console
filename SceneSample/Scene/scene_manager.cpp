
#include "scene_manager.h"
#include "Title/title.h"
#include "../SceneMaker/scene_maker.h"


SceneManager::SceneManager() {
  type = SceneType::Title;
  SceneMaker::getInstance().create(scene, type);
}

void SceneManager::update() {
  scene->update();
  if (scene->getSceneType() != type) {
    type = scene->getSceneType();
    SceneMaker::getInstance().create(scene, type);
  }
}

void SceneManager::draw() {
  scene->draw();
}