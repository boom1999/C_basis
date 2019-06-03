#include<iostream>
#include<fstream>
#include"Player.h"
using namespace std;

#if 0
int main ()
{
    ofstream ofile ("put.txt", ios_base::out);
    Player player1;
    for(int i = 0; i < 10; i++)
        player1.playing ();
    ofile << player1.getID () << " " << player1.getname () << " " << player1.getcaValue () << endl;
    ofile.close ();
    return 0;
}
#endif

#if 1
int main ()
{
    ifstream ifile ("put.txt", ios_base::in);
    string ID, nickname;
    int capacityValue;
    Player player2;
    cout << "The former value:" << player2.getcaValue () << endl;
    ifile >> ID >> nickname >> capacityValue;
    player2.setcaValue (capacityValue);
    cout << "The latter value:" << player2.getcaValue () << endl;
    ifile.close ();
    return 0;
}
#endif