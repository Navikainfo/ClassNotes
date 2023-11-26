#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string batch;
    cout << "Enter the batch = ";
    cin >> batch;

    ofstream fout("file1.txt", ios::app);
    fout << batch << endl;
    fout.close();
    return 0;
}