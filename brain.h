#ifndef BRAIN_H_
#define BRAIN_H_

#include "board.h"

class Brain {
 public:
  Brain(StoneType own_stone);
  
  void PrintBoard(Board board);
  Position GetPutPoint(Board board);

  StoneType own_stone();
  void set_own_stone(StoneType own_stone);
  StoneType opponent_stone();
  
 private:
  Position GetEmptyPoint(Board board);
  StoneType OppositeStone(StoneType stone);

  StoneType own_stone_;
  StoneType opponent_stone_;
};

#endif
