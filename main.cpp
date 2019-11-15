#include <iostream>
#include <string>
using namespace std;

void function1(string&);

int main()
{
    string input;
    cout << "Enter a word: ";
    cin>>input;
    function1(input);
    cout << input << endl;
    return 0;
}

void function1(string& word) //doubles word w/ no spaces
{
    int letters = word.length();
    for(int i=0; i < letters; i++)
    {
        char current = word.at(letters-1);
        //insert(location to insert, length of insertion, character to insert)
        word.insert(0,1,current);
    }
}
