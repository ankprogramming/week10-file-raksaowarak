#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string Line;
    ifstream myfile ("example.txt");
    if (myfile.is_open())
    {
        while(getline (myfile,Line))
        {
            cout <<Line << '\n';
        }
        myfile.close();
    }
    else cout << "unable to open file";
        /* code */
        return 0;
}
