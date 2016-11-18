#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;
void encode(char word[])
{
    int random = rand() % 26 + 98;
    for (int i =0; word[i] != NULL; i++)
    {
        if (word[i] == 'y' || word[i] == 'z')
        {
            word[i] = word[i] - 26;
        }
        word[i] = word[i] + 2;
        cout<<word[i];
    }
    cout<<(char)random<<endl;
}
void decode(char word[])
{
    int c = -1;
    for (int i = 0; word[i] != NULL; i++)
    {
        if (word[i] == 'a' || word[i] == 'b')
        {
            word[i] = word[i] + 26;
        }
        c++;
        word[i] = word[i] - 2;
    }
    word[c] = ' ';
    cout<<word<<endl;
}
int main()
{
    srand(time(NULL));
    char word[9000] = {' '};
    string ed;
    cout<<"Would you like to encode or decode"<<endl;
    cin>>ed;
   if (ed.compare("encode") == 0)
    {
        cout<<"What word would you like to encode"<<endl;;
        cin>>word;
        encode(word);
    }
    if (ed.compare("encode") == 0)
    {
        cout<<"What word would you like to decode"<<endl;
        cin>>word;
        decode(word);
    }
    return 0;
}
