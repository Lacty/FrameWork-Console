
#pragma once
#include <iostream>


class Object {
protected:
  std::string name;

public:
  Object();

  enum ObjectState {
    Awake,
    Active,
    Dead
  } state;

  void setState(ObjectState state) {
    this->state = state;
  }
  ObjectState getState() {
    return state;
  }

  virtual void setup() {}
  virtual void update() {}
  virtual void draw() {}
};