
#pragma once
#include <map>
#include <list>
#include <string>
#include <memory>


class Object;

class ObjectTask {
private:
  ObjectTask() = default;
  
  std::list<std::shared_ptr<Object>> list;
  std::map<std::string, std::shared_ptr<Object>> map;

public:
  static ObjectTask& getInstance();

  void add(std::string&, std::shared_ptr<Object>&);
  void clear();

  void update();
  void draw();
};