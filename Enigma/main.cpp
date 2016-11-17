#include <iostream>
#include <stdlib.h>
#include <time.h>
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
    int ed;
    cout<<"Would you like to encode or decode(1 or 2)\n";
    cin>>ed;
    if (ed == 1)
    {
        cout<<"What word would you like to encode\n";
        cin>>word;
        encode(word);
    }
    else if (ed == 2)
    {
        cout<<"What word would you like to decode\n";
        cin>>word;
        decode(word);
    }
    return 0;
}
