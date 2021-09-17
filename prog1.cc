/**
 *    @file: prog1.cc
 *  @author: Hunter Stout
 *    @date: 9/17/21
 *   @brief: debugging prog1.cc for lab 4
 *  
 */
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int number; //Number entered by the user 

  int answer; //Number converted from the switch to complete the while loop.

  //Main backbone
  do {

    cout << "Enter a number, and I'll compute the answer:";
    cin >> number;

      //Secondary backbone - switch
      switch (number) {
      case 0:
        answer = 0;
        cout << "You've got nothing!\nTry again.\n";
        break;
      case 1:
        answer = number*2;
        cout << "Well, at least you have something\nBut it's not enough, try again.\n";
        break;
      case 13:
        answer = -13;
        cout << "You're very unlucky aren't you.\nTry again.\n";
        break;
      case 21:
        answer = 22;
        cout << "Well, I'll give you one more, but it's still not enough.\n"
	           << "Try again.\n";
        break;
      // Answer #1 - 42
      case 42:
        cout << "You have the answer already!\n";
        answer = 42;
        break;
      // SECRET CODE: answer #2 - 12345
      case 12345:
        cout << "OOOuuuuu cheeky! you guessed my secret code :D\n";
        answer = 12345;
        break;
      default:
        answer = -1;
        cout << "That number is so bogus, I'm taking what little you have away from you.\n"
	           << "Try again, and be smart about it this time.\n";
        break;
    }
    
  // Loop completed once you get answer 1 or 2. - end of backbone.
  } while (answer != 42 && answer != 12345);
  
  cout << "You've succeeded in getting out of this dumb program!\n"
       << "Congratulations\n";

  return (0);
}
