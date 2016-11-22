#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;
void encode(char word[], int code1[])
{
    int counter = 0;
    for (int j = 0; j < 3; j++)
    {
        if (code1[j] == 1)
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] + 6;
                counter++;
            }
        }
    }
    for (int i = 0; word[i] != NULL; i++)
    {
        cout<<word[i];
    }
}
void decode(char word[], int code1[])
{
    for (int j = 0; j < 3; j++)
    {
        if (code1[j] == 1)
        {
            for (int i =0; word[i] != NULL; i++)
            {
                
                word[i] = word[i] - 6;
                
            }
        }
    }
}
int main()
{
    srand(time(NULL));
    char word[9000] = {' '};
    int code1[3];
    string ed;
    cout<<"Would you like to encode or decode"<<endl;
    cin>>ed;
    cout<<"Enter the setting"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cin>>code1[i];
    }
   if (ed.compare("encode") == 0)
    {
        cout<<"What word would you like to encode"<<endl;;
        cin>>word;
        encode(word,code1);
        cout<<endl;
        return 0;
    }
    if (ed.compare("decode") == 0)
    {
        cout<<"What word would you like to decode"<<endl;
        cin>>word;
        decode(word,code1);
        cout<<endl;
        return 0;
    }
    return 0;
}
