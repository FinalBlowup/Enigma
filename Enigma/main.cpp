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
        if (code1[j] == 0)
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] + 27;
                counter++;
            }
        }
        if (code1[j] == 1)
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] + 6;
                counter++;
            }
        }
        if (code1[j] == 2)
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] - 12;
                counter++;
            }
        }
        if (code1[j] == 3)
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] + 66;
                counter++;
            }
        }
        if (code1[j] == 4)
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] - 23;
                counter++;
            }
        }
        if (code1[j] == 5)
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] + 38;
                counter++;
            }
        }
        if (code1[j] == 6)
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] - 42;
                counter++;
            }
        }
        if (code1[j] == 7)
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] - 49;
                counter++;
            }
        }
        if (code1[j] == 8)
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] + 68;
                counter++;
            }
        }
        if (code1[j] == 9)
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] + 53;
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
    int counter = 0;
    for (int j = 0; j < 3; j++)
    {
        if (code1[j] == 0)
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] - 27;
                counter++;
            }
        }
        if (code1[j] == 1)
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] - 6;
                counter++;
            }
        }
        if (code1[j] == 2)
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] + 12;
                counter++;
            }
        }
        if (code1[j] == 3)
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] - 66;
                counter++;
            }
        }
        if (code1[j] == 4)
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] + 23;
                counter++;
            }
        }
        if (code1[j] == 5)
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] - 38;
                counter++;
            }
        }
        if (code1[j] == 6)
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] + 42;
                counter++;
            }
        }
        if (code1[j] == 7)
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] + 49;
                counter++;
            }
        }
        if (code1[j] == 8)
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] - 68;
                counter++;
            }
        }
        if (code1[j] == 9)
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] - 53;
                counter++;
            }
        }
    }
    for (int i = 0; word[i] != NULL; i++)
    {
        cout<<word[i];
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

    if (ed.compare("encode") == 0)
    {
        cout<<"Enter the setting"<<endl;
        for (int i = 0; i < 3; i++)
        {
            cin>>code1[i];
        }
        cout<<"What word would you like to encode"<<endl;;
        cin>>word;
        encode(word,code1);
        cout<<endl;
        return 0;
    }
    if (ed.compare("decode") == 0)
    {
        cout<<"Enter the setting"<<endl;
        for (int i = 0; i < 3; i++)
        {
            cin>>code1[i];
        }
        cout<<"What word would you like to decode"<<endl;
        cin>>word;
        decode(word,code1);
        cout<<endl;
        return 0;
    }
    else
    {
        cout<<"Type encode or decode."<<endl;
    }
    return 0;
}
