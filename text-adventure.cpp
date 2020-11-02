#include <iostream>
#include <cstdlib>
#include <cstring>
#include "func_header.hpp"

int main(){
  int num_players;
  
  story_premise();
  num_players=variables();

  for(int i=0; i< num_players;i++) {
    level_1();
  }

  
}
