#include<iostream>
using std::cout; //namespace bad they said XD
using std::cin;
using std::string;
using std::endl;
//using namespace std;

string password = "69420"; //Password : in-game
//line 1O-12 : Menu
string menu_selection;
string num_one = "1";
string num_two = "2";

void menu() {
    cout << "Menu\n";
    cout << "[1] : Game\n";
    cout << "[2] : Exit\n";
    cout << "Type \'/info-game\' for game details\n";
    cout << "Enter [1-2] to select: ";
    cin >> menu_selection;

    if(menu_selection == num_one) {
        cout << "one pass";
        //Vacant
    } else if(menu_selection == num_two) {
        cout << endl;
        cout << "Session terminated.";
        //Vacant
    } else {
        //cout << "\n";
        cout << "(Error type \'1\' to enter, \'2\' for exit.)" << endl;
    }
}

int main() {
    menu();
    return 0;
}