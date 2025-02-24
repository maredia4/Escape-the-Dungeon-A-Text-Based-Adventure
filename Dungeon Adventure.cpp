#include <iostream>
#include <limits>
using namespace std;

// Input function
int getValidInput(int min, int max) {
int choice;
while (true) {
cin >> choice;

if (cin.fail() || choice < min || choice > max) {
cin.clear();

cin.ignore(numeric_limits<streamsize>::max(), '\n');  
cout << "Invalid choice. Please enter a number between " << min << " and " << max << ": ";
} else {
return choice;
}
}
}

// Main function - The game starts here
int main() {
int choice;

cout << "Welcome to 'Escape the Dungeon'!" << endl;
cout << "You find yourself trapped in a dark dungeon. Your mission is to find a way out." << endl;
cout << "You see two possible paths ahead." << endl;

// First decision point
cout << "Do you choose to:\n";
cout << "1. Take the left path (Dark Forest)\n";
cout << "2. Take the right path (Abandoned Tunnel)\n";
cout << "Enter your choice (1 or 2): ";
choice = getValidInput(1, 2);

if (choice == 1) {
// if chose Left path (Dark Forest)
cout << "\nYou venture into the dark forest. The trees loom over you and strange noises surround you." << endl;
cout << "After some time, you come across a mysterious creature in the forest. What will you do?" << endl;
cout << "1. Fight the creature\n";
cout << "2. Try to run away\n";
cout << "Enter your choice (1 or 2): ";
choice = getValidInput(1, 2);

if (choice == 1) {
// if fight the creature
cout << "\nYou bravely fight the creature. After a tough battle, you defeat it!" << endl;
cout << "You find a key on the creature’s body. You now have the key to escape the dungeon." << endl;
cout << "Congratulations! You've escaped the dungeon and won the game!" << endl;
} else {

    // if run away from the creature
cout << "\nYou attempt to run away, but the creature catches you!" << endl;
cout << "Unfortunately, you're too slow and the creature defeats you." << endl;
cout << "Game Over!" << endl;
}
} else {

// if right path (Abandoned Tunnel)
cout << "\nYou enter the abandoned tunnel. It's cold and damp, and the walls are covered in moss." << endl;
cout << "You hear strange sounds echoing in the distance. You come across a locked door. What will you do?" << endl;
cout << "1. Try to open the door\n";
cout << "2. Explore the tunnel further\n";
cout << "Enter your choice (1 or 2): ";
choice = getValidInput(1, 2);

switch (choice) {
case 1:

// if try to open the door
cout << "\nYou try to open the door, but it's locked. You need a key!" << endl;
cout << "Unfortunately, you don't have the key and are trapped forever in the dungeon." << endl;
cout << "Game Over!" << endl;
break;

case 2:

// if explore the tunnel further
cout << "\nYou decide to explore deeper into the tunnel. You eventually find a secret passage leading outside!" << endl;
cout << "You've successfully escaped the dungeon! Congratulations!" << endl;
break;
}
}

return 0;
}