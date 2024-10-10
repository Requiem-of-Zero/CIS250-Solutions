#include <iostream>
#include <string>
using namespace std;

class Player {
private:
  string name;
public:
  string getName() const {return name;}
  void setName(string inName) { name = inName;}
  Player(): name("Unknown"){}
  Player(string inName): name(inName){}
};

class Team {
private:
  Player* players[7];
public:
  void addPlayer(int idx, Player* player){
    if(idx >= 0 && idx < 7){
      players[idx] = player;
    }
  }
  
  void resetPlayers(){
    for(int i=0; i < 7; i++){
      players[i] = NULL;
    }
  }
  
  void printAllNames() const {
    for(int i=0; i < 7; i++){
      if(players[i] != NULL){
        cout << "Player " << i + 1 << ": " << players[i] -> getName() << endl;
      } else {
        cout << "Player " << i + 1 << ": Unassigned" << endl;
      }
    }
  }
  
//  Reserve the null pointers in memory with every new Team instantiated.
  Team(){
    for(int i=0; i < 7; i++){
      players[i] = NULL;
    }
  }
//  Destructor to clean up the reserved memory addresses when you delete a team
  ~Team(){
    for(int i=0; i < 7; i++){
      players[i] = NULL;
    }
  }
};

int main () {
  cout << "Name: Samuel Wong - Program Name: Aggregation Player - Date: 10/13/2024" << endl;
//  Declare players
  Player* p1 = new Player("George");
  Player* p2 = new Player("Ivan");
  Player* p3 = new Player("Hang");
  Player* p4 = new Player("Tuyet");
  Player* p5 = new Player(), *p6 = new Player(), *p7 = new Player();
  p5 -> setName("Sue");
  p6 -> setName("Victoria");
  p7 -> setName("Tumbo");
//  Declare teams
  Team* basketBallTeam = new Team();
  Team* soccerTeam = new Team();
//  Add players to basketball team
  basketBallTeam -> addPlayer(0, p1);
  basketBallTeam -> addPlayer(1, p2);
  basketBallTeam -> addPlayer(2, p3);
  basketBallTeam -> addPlayer(3, p4);
  basketBallTeam -> addPlayer(4, p5);
//  Add players to soccer team
  soccerTeam -> addPlayer(0, p1);
  soccerTeam -> addPlayer(1, p2);
  soccerTeam -> addPlayer(2, p3);
  soccerTeam -> addPlayer(3, p4);
  soccerTeam -> addPlayer(4, p5);
  soccerTeam -> addPlayer(5, p6);
  soccerTeam -> addPlayer(6, p7);
//  Testing functionality
  cout << "Basketball Team: " << endl;
  basketBallTeam -> printAllNames();
  cout << endl;
  
  cout << "Soccer Team: " << endl;
  soccerTeam -> printAllNames();
  cout << endl;
  
  delete basketBallTeam;
  
  cout << "Soccer team after basketball team deletion: " << endl;
  soccerTeam -> printAllNames();
  cout << endl;
  
  delete p1;
  delete p2;
  delete p3;
  delete p4;
  delete p5;
  delete p6;
  delete p7;
//  Reset player's pointers of the soccer team to null after deletion to handle dangling pointers
  soccerTeam -> resetPlayers();
  cout << "Soccer team after player deletions: " << endl;
  soccerTeam -> printAllNames();
  
  return 0;
} // end of program