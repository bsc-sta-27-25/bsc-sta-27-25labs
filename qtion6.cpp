#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int countVowels(string text)
{
    int count = 0;

    for (int i = 0; i < text.length(); i++)
    {
     char c = tolower(text[i]);
     if (c == 'a' || c == 'e' || c == 'i' ||
         c == 'o' || c == 'u')
    {
     count++;
     }
    }
    return count;
}

int countWords(string text)
{
    int words = 1;
     for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == ' ')
     words++;
    }

    return words;
}
string Reverse(string text)
{
    reverse(text.begin(), text.end());
    return text;
}

string capitalizeSecond(string text)
{
    bool newWord = true;

    for (int i = 0; i < text.length(); i++)
    {
      if (newWord && i + 1 < text.length())
       {
         text[i + 1] = toupper(text[i + 1]);
       }
     newWord = (text[i] == ' ');
    }
    return text;
}

int main()
{
    ifstream file("text.txt");
    string fileData;

    getline(file, fileData);

    cout << "Vowels: " << countVowels(fileData) << endl;
    cout << "Words: " << countWords(fileData) << endl;
    cout << "Reverse: " << Reverse(fileData) << endl;
    cout << "Capitalized: " << capitalizeSecond(fileData) << endl;

    return 0;
}