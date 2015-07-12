
#pragma once


enum class SceneType {
  Title,
  Game
};

class Scene {
protected:
  SceneType type;

  void updateObject();
  void drawObject();

public:
  ~Scene() = default;

  void setSceneType(SceneType type) {
    this->type = type;
  }
  SceneType& getSceneType() {
    return type;
  }

  virtual void setup() = 0;
  virtual void update() = 0;
  virtual void draw() = 0;
};