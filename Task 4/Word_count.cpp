#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
    int count = 0;
    ifstream file;
    string fileName, str;

    cout << "Provide the file name: ";
    cin >> fileName;

    file.open(fileName + ".txt");
    if (!file)
    {
        cout << "File not found!\n";
        exit(0);
    }

    cout << "Opening " << fileName << ".txt\n";
    while (file >> str)
    {
        count++;
    }
    file.close();

    cout << "Total number of words in the file: " << count << endl;
    return 0;
}