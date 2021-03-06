// Copyright 2021 Dev-will-work
#ifndef INCLUDE_CELL_H_
#define INCLUDE_CELL_H_

#include <list>
#include "../include/common.h"
#include "../include/object.h"

class Ocean;

class Cell {
  friend Ocean;
 private:
  Pair crd;
  Object *obj;
  Ocean *ocean;
  Cell ***field;

 public:
  explicit Cell(Pair p = { 0, 0 }, Ocean* oc = nullptr) :
    crd(p),
    obj(nullptr),
    ocean(oc) {}
  ~Cell();
  void init(Pair p, Ocean* oc);
  Object* getObject();
  void setObject(Object*);
  Ocean* getOcean();
  Pair getCoord();
  void killMe();
  Cell& getNeighbour(int row, int column);
  Cell* getAnyNeighbourCell(ObjType* habitant = nullptr);
  int calcObjectsNear(ObjType obj);
};
#endif  // INCLUDE_CELL_H_
