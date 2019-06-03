#include<iostream>
#include<fstream>
using namespace std;

int main ()
{
    char ex[ 200 ];
    int i = 1;
    ifstream ifile ("input.txt", ios_base::in);
    ofstream ofile ("output.txt",ios_base::out);
    while(!ifile.eof () && ifile)
    {
        ifile.getline (ex, 200);
        ofile << "line:" << i++ <<"   " <<ex << endl;
    }
    ifile.close ();
    ofile.close ();
    return 0;
}