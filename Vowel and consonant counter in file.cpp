#include<iostream>
#include<fstream>
using namespace std;
int vowel=0,consonant=0;
char letter;

ifstream file;

int main()
{
    file.open("text.txt");
    if (file.is_open())
    {
        while(file.get(letter))
        {
            cout<<letter;
            letter=tolower(letter);
            if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' )
            {
                vowel++;
            }
            else if (isalpha(letter))
            {
                consonant++;
            }
        }
    }
    cout<<endl<<endl<<"Vowel in file : "<<vowel<<endl;
    cout<<"Consonant in file : "<<consonant<<endl;
    return 0;
}
