#include <iostream>
#include <cstdlib>
#include <cstring>
#include "func_header.hpp"

const int initial_score =100;


  int story_premise() {
    std::cout << "+++++++++++++++++++++++++++++++++++++\n";
    std::cout<< "Welcome to this Adventure Runner Game\n";
    std::cout << "You need to choose various modes of transporation to reach your destination\n";
    std::cout<<"Player with the most score wins the game\n\n";
  }

  int variables() {
    int i, num_player;
    std::cout <<"Do you want to play single/mutliplayer.\nPress (1) for single player\n Press (2) for multiplayer.\n\n";
    std::cin >> i;
    if(i==1) {
      num_player=1;
    }
    else if(i==2) {
      int j;
      std::cout << "enter the number of players: ";
      std::cin >> j;
      num_player=j;
    }
    return num_player;
  }

int level_1() {
  int score=100;
  int choice;
  std::cout << "WELCOME to LAND.\nChoose one of the following path to start your journery";
  std::cout << "1.Walk on bare foot\n2.Take a car\n3.Take a train\n4.Take a Bullet train.\n \n";
  std::cin >> choice;

  switch(choice) {
    case 1: 
      walk_lv1(score);
    case 2:
      car_lv1(score);
    case 3:
      train_lv1(score);
    case 4:
      bullet_lv1(score);
  }

}


int walk_lv1(int score) {
  score= score-20;
  int choice;
  std::cout << "WELCOME to the Sky\nChoose one of the following:";
  std::cout << "1.Take a Plane\n2.Take a Glyder";
  std::cin >> choice;
  if(choice==1){
    plane_lv2(score);
  }
  else if(choice==2) {
    glyder_lv2(score);
  }
}

int car_lv1(int score) {
score= score-20;
  int choice;
  std::cout << "WELCOME to the Sky\nChoose one of the following:";
  std::cout << "1.Take a Hot Air Ballon\n2.Take a Parachute";
  std::cin >> choice;
  if(choice==1){
    hotballon_lv2(score);
  }
  else if(choice==2) {
    parachute_lv2(score);
  }
}

int train_lv1(int score) {
  score= score-20;
  int choice;
  std::cout << "WELCOME to the Sky\nYou have only one choice:";
  std::cout << "1.Take a Glyder";
  std::cin >> choice;
  if(choice==1){
   glyder_lv2(score);
  }
  else  {
    glyder_lv2( score);
  }

}
int bullet_lv1(int score) {
  score= score-20;
  int choice;
  std::cout << "WELCOME to the Sky\nChoose one of the following:";
  std::cout << "1.Take a Glyder\n2.Take a Parachute";
  std::cin >> choice;
  if(choice==1){
    glyder_lv2(score);
  }
  else if(choice==2) {
    parachute_lv2(score);
  }

}
int plane_lv2(int score) {
   score= score-20;
  int choice;
  std::cout << "WELCOME to the Water land\nYou have only one choice:\n";
  std::cout << "1.Take a Cruise\n\n";
  std::cin >> choice;
  if(choice==1){
    cruise_lv3(score);
  }
  else  {
    cruise_lv3(score);
  }

}
int hotballon_lv2(int score) {
score= score-20;
  int choice;
  std::cout << "WELCOME to the Water land\nYou have only one choice:\n";
  std::cout << "1.Take a Cruise\n\n";
  std::cin >> choice;
  if(choice==1){
    cruise_lv3(score);
  }
  else  {
    cruise_lv3(score);
  }

}
int glyder_lv2(int score) {
  score= score-20;
  int choice;
  std::cout << "WELCOME to the Water Land\nChoose one of the following:";
  std::cout << "1.Take a Speed Boat\n2.Take a Canoe";
  std::cin >> choice;
  if(choice==1){
    speedboat_lv3(score);
  }
  else if(choice==2) {
    canoe_lv3(score);
  }
}
int parachute_lv2(int score) {
   score= score-20;
  int choice;
  std::cout << "WELCOME to the Water Land\nChoose one of the following:";
  std::cout << "1.Take a Boat\n2.Take a Canoe";
  std::cin >> choice;
  if(choice==1){
   boat_lv3(score);
  }
  else if(choice==2) {
     canoe_lv3(score);
  }

}
int cruise_lv3(int score) {
  score= score-20;
  int choice;
  std::cout << "WELCOME to the endless Space\nYou have only one way to go:\n";
  std::cout << "1.Take a Rocket\n\n";
  std::cin >> choice;
  if(choice==1){
  rocket_lv( score);
  }
  else {
     rocket_lv( score);
  }
}
int speedboat_lv3(int score){
  int final_score=score+50;
  int choice;
  std::cout << "Congratulations !! You have reached your final destination!\n";
  std::cout << "Your score till now is: " <<score;
  std::cout << "You get bonus 50 points! New Score:" <<final_score; 
  
}
int boat_lv3(int score) {
    score= score-20;
  int choice;
  std::cout << "WELCOME to the Forest Land\nYou have only one way to go: \n";
  std::cout << "1.Take a Donkey\n";
  std::cin >> choice;
  if(choice==1){
  donkey_lv(score);
  }
  else  {
     donkey_lv(score);
  }
}
int canoe_lv3(int score) {
   int final_score=score+50;
  int choice;
  std::cout << "Congratulations !! You have reached your final destination!\n";
  std::cout << "Your score till now is: " <<score;
  std::cout << "You get bonus 50 points! New Score: "<<final_score; 
  
}
int rocket_lv(int score) {
   score= score-20;
  int choice;
  std::cout << "WELCOME to the Black Hole\nYou have only one way to go: \n";
  std::cout << "1.Take a Ride to Black hole\n\n";
  std::cin >> choice;
  if(choice==1){
  blackhole_lv( score);
  }
  else  {
    blackhole_lv( score);
  }
}
int blackhole_lv(int score) {
   int final_score=score+50;
  int choice;
  std::cout << "Congratulations !! You have reached your final destination!\n";
  std::cout << "Your score till now is: " <<score;
  std::cout << "You get bonus 50 points! New Score: "<<final_score; 
}
int donkey_lv(int score) {
   int final_score=score+50;
  int choice;
  std::cout << "Congratulations !! You have reached your final destination!\n";
  std::cout << "Your score till now is: " <<score;
  std::cout << "You get bonus 50 points! New Score: "<<final_score; 
  
}

