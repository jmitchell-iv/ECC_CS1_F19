/**
 * Instructions:
 * Implement the code, and write comments described in the
 * //TODO:
 * formatted comments.
 *
 * //NOTE:
 * comments clarify parts of the given code.
 *
 * //IGNORE:
 * comments mark code which can be safely ignored.
 *
 * Allows a user to play a game of tic tac toe in the terminal against a
 * computer.
 *
 **/

//TODO: Insert your header
//NOTE: Your header no longer needs to include inputs and outputs
#include <iostream>
#include <cassert>
#include <string>

using namespace std;

/**
 * Data Definitions
 **/

using Location = int;

enum class Player {One, Two};

enum class Space {Empty, X, O};
using namespace Space;
struct Row {
  Space left, center, right;
};
struct Board {
  Row top, middle, bottom;
};
/**
 * Function Declarations
 **/

// START TODO
/**
 * TODO Use the design recipie to implement the to_s
 * functions
 * Example string format
 * x | o |
 *---+---+---
 * o | x |
 *---+---+---
 *   |   |o
 */
string board_to_s(Board b);
string row_to_s(Row r);
string space_to_s(Space s);

string player_to_s(Player p);

// Report winner
// AI
// TODO Using the complete design recipie implement an AI which chooses the next
// location to play given the current state of the board.
Location compute_move(Board b);

// TODO Generate an end of game message to send to the user.
string end_game_message(Board b, Player winner);
// END TODO



// NOTE Use these functions to implement compute_move
// Turns
Player next_turn(Player current_turn);
// Validate moves
bool is_valid(Board b, Player turn, Location move);
Space get_space(Board b, Location l);
// Interface
//// Select a location
Location get_move();
//// Print out gamestate
void print_gamestate(Board b);

//// Detect win condition
bool is_game_over(Board b);
Player next_turn(Player current_turn);
Space get_space_from_row(Row r, Location l);
Space get_space(Board b, Location l);
Board set_space(Board b, Player p, Location l);

/**
 * V1 features
 **/
// Scoreboard
// Exit game


//IGNORE: You can ignore these functions
void test();
void run();
void run_game();

/**
 * Main Function
 **/

int main() {
  char t;

  cout << "Enter [t] to test, or any other character to run." << endl;
  cin >> t;
  if(t == 't') {
    test();
  } else {
    run();
  }
  return 0;
}

/**
 * Function Definitions
 **/

void test() {
  //TODO Make sure to run your test functions!
}

void run() {
  // Variable Declarations
  char again = 'y';
  while(again == 'y') {
    run_game();
    cout << "Play again? [y/n] " << endl;
    cin >> again;
  }
}
void run_game() {
  Board board = {{Empty, Empty, Empty},
                 {Empty, Empty, Empty},
                 {Empty, Empty, Empty}};
  Player winner;
  Player turn = Player::One;
  while(!is_game_over(board)) {
    print_gamestate(board);
    board = set_space(b,turn,get_move());
    turn = next_turn(turn);
  }
  cout << end_game_message(board, winner) << endl;
}
Board set_space(Board b, Player p, Location l) {
  return b;
}
string row_to_s(Row r) {
  return "";
}
string board_to_s(Board b) {
  return row_to_s(b.top) + "\n" +
         row_to_s(b.middle) + "\n" +
         row_to_s(b.bottom)  + "\n";
}

Player next_turn(Player current_turn) {
  Player next_player;
  if(current_turn == Player::One) {
    next_player = Player::Two;
  } else if(current_turn == Player::Two) {
    next_player = Player::One;
  }
  return next_player;
}
Space get_space_from_row(Row r, Location l) {
  return Empty;
}
Space get_space(Board b, Location l) {
  int row = l / 3;
  Space result;
  if(row == 0) {
    result = get_space_from_row(b.top, l);
  } else if(row == 1) {
    result = get_space_from_row(b.middle, l);
  } else {
    result = get_space_from_row(b.bottom, l);
  }
  return result;
}
 bool is_game_over(Board b) {
   return true;
 }
bool is_valid(Board b, Player turn, Location move) {
  return true;
}
Space get_space(Board b, Location l) {
  return b.top.left;
}
// Interface
//// Select a location
Location get_move(Board b) {
  return 0;
}
//// Print out gamestate
void print_gamestate(Board b) {
  cout << board_to_s(b) << endl;
}
