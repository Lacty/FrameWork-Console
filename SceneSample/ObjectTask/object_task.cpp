
#include "object_task.h"
#include "../Object/object.h"


ObjectTask& ObjectTask::getInstance() {
  static ObjectTask task;
  return task;
}

void ObjectTask::add(std::string& name, std::shared_ptr<Object>& obj) {
  list.emplace_back(obj);
  map.emplace(name, obj);
}

void ObjectTask::clear() {
  list.clear();
  map.clear();
}

void ObjectTask::update() {
  for (auto& it : list) {
    if (it->getState() == Object::ObjectState::Awake) {
      it->setup();
      it->setState(Object::ObjectState::Active);
      continue;
    }
    it->update();
  }
}

void ObjectTask::draw() {
  for (auto& it : list) {
    it->draw();
  }
}