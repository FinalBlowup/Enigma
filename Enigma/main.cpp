#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;
void encode(char word[], int code1[])
{
    for (int j = 0; j < 3; j++) //This for loop covers almost the entire function. It runs three times and takes three settings and makes a change each time.
    {
        if (code1[j] == 0) //If any of the user's settings is 0 then this happens
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] + 27;
                
            }
        }
        if (code1[j] == 1) //If any of the user's settings is 1 then this happens
        {
            for (int i = 0; word[i] != NULL; i++) 
            {
                word[i] = word[i] + 6;
                
            }
        }
        if (code1[j] == 2) //If any of the user's settings is 2 then this happens
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] - 12;
                
            }
        }
        if (code1[j] == 3) //If any of the user's settings is 3 then this happens
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] + 66;
                
            }
        }
        if (code1[j] == 4) //If any of the user's settings is 4 then this happens
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] - 23;
                
            }
        }
        if (code1[j] == 5) //If any of the user's settings is 5 then this happens
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] + 38;
                
            }
        }
        if (code1[j] == 6) //If any of the user's settings is 6 then this happens
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] - 42;
                
            }
        }
        if (code1[j] == 7) //If any of the user's settings is 7 then this happens
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] - 49;
                
            }
        }
        if (code1[j] == 8) //If any of the user's settings is 8 then this happens
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] + 68;
                
            }
        }
        if (code1[j] == 9) //If any of the user's settings is 9 then this happens
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] + 53;
                
            }
        }
    }
   
    for (int i = 0; word[i] != NULL; i++) //This loop will cout the encoded word
    {
        cout<<word[i];
    }
}
void decode(char word[], int code1[])
{
    for (int j = 0; j < 3; j++)
    {
        if (code1[j] == 0) //If any of the user's settings is 0 then this happens
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] - 27;
                
            }
        }
        if (code1[j] == 1) //If any of the user's settings is 1 then this happens
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] - 6;
                
            }
        }
        if (code1[j] == 2) //If any of the user's settings is 2 then this happens
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] + 12;
                
            }
        }
        if (code1[j] == 3) //If any of the user's settings is 3 then this happens
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] - 66;
                
            }
        }
        if (code1[j] == 4) //If any of the user's settings is 4 then this happens
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] + 23;
                
            }
        }
        if (code1[j] == 5) //If any of the user's settings is 5 then this happens
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] - 38;
                
            }
        }
        if (code1[j] == 6) //If any of the user's settings is 6 then this happens
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] + 42;
                
            }
        }
        if (code1[j] == 7) //If any of the user's settings is 7 then this happens
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] + 49;
                
            }
        }
        if (code1[j] == 8) //If any of the user's settings is 8 then this happens
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] - 68;
                
            }
        }
        if (code1[j] == 9) //If any of the user's settings is 9 then this happens
        {
            for (int i = 0; word[i] != NULL; i++)
            {
                word[i] = word[i] - 53;
                
            }
        }
    }
    for (int i = 0; word[i] != NULL; i++) //This for loop will cout the decoded word
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

    if (ed.compare("encode") == 0) //If the user enters encode, it enters the if statement
    {
        cout<<"Enter the setting"<<endl;
        for (int i = 0; i < 3; i++)
        {
            cin>>code1[i]; //User enters the setting number between 0 and 9 three times (for loop)
        }
        cout<<"What word would you like to encode"<<endl;;
        cin>>word; //User enters the word that they want to encode
        encode(word,code1); //Runs the function to encode
        cout<<endl;
        return 0;
    }
    if (ed.compare("decode") == 0) //If the user enters decode, it enters the if statement
    {
        cout<<"Enter the setting"<<endl;
        for (int i = 0; i < 3; i++)
        {
            cin>>code1[i]; //User enters the setting number between 0 and 9 three times (for loop)
        }
        cout<<"What word would you like to decode"<<endl;
        cin>>word; //User enters the word that they want to decode
        decode(word,code1); //Runs the function to decode
        cout<<endl;
        return 0;
    }
    else //if the user does not enter 'encode' or 'decode', it enters the else which tells the user to enter encode or decode and ends the program
    {
        cout<<"Type encode or decode."<<endl;
    }
    return 0; //ends the program
}
