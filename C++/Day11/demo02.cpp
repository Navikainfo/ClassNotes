#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string batch;
    ifstream fin("file1.txt");

    while (getline(fin, batch))
    {
        cout << batch << endl;
    }

    fin.close();
    return 0;
}