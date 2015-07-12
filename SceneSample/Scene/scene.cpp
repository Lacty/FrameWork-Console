
#include "scene.h"
#include "../ObjectTask/object_task.h"


void Scene::updateObject() {
  ObjectTask::getInstance().update();
}

void Scene::drawObject() {
  ObjectTask::getInstance().draw();
}