// Task 3:
// Word Count:


#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
    int count = 0;
    ifstream file;
    string fileName, str;

    // Take the input of file name
    cout << "Provide the file name: ";
    cin >> fileName;

    // Open the file
    file.open(fileName + ".txt");
    if (!file)
    {
        // if file does not exists, end the program
        cout << "File not found!\n";
        cout << endl;
        exit(0);
    }

    // counting the number of words after opening file
    cout << "Opening " << fileName << ".txt\n";
    cout << endl;

    while (file >> str)
    {
        count++;
    }
    //close the file
    file.close();


    cout << "Total number of words in the file: " << count << endl;
    return 0;
}