#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;
void encode(char word[], int code1[])
{
    for (int j = 0; j < 3; j++)
    {
    if (code1[j] == 1)
       {
    for (int i =0; word[i] != NULL; i++)
         {
      
        word[i] = word[i] + 6;
        cout<<word[i];
         }
       }
    }
}
void decode(char word[], int code1[])
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
    int code1[3];
    cout<<"Enter the setting"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cin>>code1[i];
    }
    string ed;
    cout<<"Would you like to encode or decode"<<endl;
    cin>>ed;
   if (ed.compare("encode") == 0)
    {
        cout<<"What word would you like to encode"<<endl;;
        cin>>word;
        for (int i = 0; i != NULL; i++)
        encode(word,code1);
        return 0;
    }
    if (ed.compare("encode") == 0)
    {
        cout<<"What word would you like to decode"<<endl;
        cin>>word;
        decode(word,code1);
        return 0;
    }
    return 0;
}
