#include <iostream> //Basic requirement for cout/cin
#include <string> //Program requires strings for the user entering either 'encode' or 'decode'
using namespace std; //Used for convenience of not typing 'std::' every time
void encode(char[] ,int[]); //Encode function introduced
void decode(char[] , int[]); //Decode function introduced
void re(string, int[], char[]); //Recursion function introduced
void quicksetting(int[]); //Setting function introduced
void bigletters(); //Big letter function introduced
int main()
{
    bigletters();
    char word[9000] = {' '}; //The word to be encoded
    int code1[3]; //Used for the settings
    string ed; //The 'encode' or 'decode' is saved in a string so that .compare can be used
    re(ed, code1, word); //Calls the function which prompts the user (re stands for recursion)
}
void re(string ed,int code1[],char word[]) //If the user inputs a word that isn't 'encode' or 'decode' then recursion will happen and the function will give them another chance
{
    cout<<"Would you like to encode or decode? (Remember not to use numbers)"<<endl;
    cin>>ed; //User enters whether they want to encode or decode

    if (ed.compare("encode") == 0) //If the user enters encode, it enters the if statement
    {
        cout<<"Enter the setting (Three numbers between 0 and 9; between numbers, add a space or use enter)."<<endl;
        for (int i = 0; i < 3; i++) //For loop to run thrice and get three settings into the array
        {
            cin>>code1[i]; //User enters three numbers between 0 and 9 for the setting
        }
        cout<<"What would you like to encode? (Only letters and underscore)"<<endl; //User should only enter letters or underscore
        cin>>word; //User enters the word that they would like to encode
        encode (word,code1); //Runs the function to encode the word
        cout<<endl;
    }
    else if (ed.compare("decode") == 0) //If the user enters decode, it enters the other if statement
    {
        cout<<"Enter the setting (Three numbers between 0 and 9; between numbers, add a space or use enter)."<<endl;
        for (int i = 0; i < 3; i++) //For loop to run thrice and get three settings into the array
        {
            cin>>code1[i]; //User enters three numbers between 0 and 9 for the setting
        }
        cout<<"What would you like to decode? (Only letters and underscore)"<<endl; //User should only enter letters or underscore
        cin>>word; //User enters the word that they would like to decode
        decode(word,code1); //Runs the function to decode the word
        cout<<endl;
    }
    else
    {
        cout<<"Try again, you failed, enter 'encode' or 'decode', now: "<<endl;
        re(ed, code1, word); //Recursion that calls itself to give the user another chance if the user doesn't enter 'encode' or 'decode'
    }
}
void encode (char word[], int code1[]) //Encode function
{
    for (int i = 0; word[i] != NULL; i++)
    {
        for (int j = 0; j < 3; j++) //This for loop covers almost the entire encode function. It runs three times and takes the three settings and makes a change each time.
        {
            switch (code1[j])
            {
                case 0: //If any of the user's settings is 0 then the following changes in the for loop occur
                    if (j == 0)
                    {
                        word[i] = word[i] + 4;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] + 1;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] - 9;
                    }
                    break;
                case 1: //If any of the user's settings is 1 then the following changes in the for loop occur
                    if (j == 0)
                    {
                        word[i] = word[i] + 1;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] + 4;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] - 6;
                    }
                    break;
                case 2:  //If any of the user's settings is 2 then the following changes in the for loop occur
                    if (j == 0)
                    {
                        word[i] = word[i] - 9;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] - 7;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] + 3;
                    }
                    break;
                case 3: //If any of the user's settings is 3 then the following changes in the for loop occur
                    if (j == 0)
                    {
                        word[i] = word[i] - 5;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] - 2;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] + 1;
                    }
                    break;
                case 4: //If any of the user's settings is 4 then the following changes in the for loop occur
                    if (j == 0)
                    {
                        word[i] = word[i] - 10;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] - 6;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] - 3;
                    }
                    break;
                case 5: //If any of the user's settings is 5 then the following changes in the for loop occur
                    if (j == 0)
                    {
                        word[i] = word[i] - 3;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] + 3;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] + 4;
                    }
                    break;
                case 6: //If any of the user's settings is 6 then the following changes in the for loop occur
                    if (j == 0)
                    {
                        word[i] = word[i] - 8;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] - 4;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] - 10;
                    }
                    break;
                case 7: //If any of the user's settings is 7 then the following changes in the for loop occur
                    if (j == 0)
                    {
                        word[i] = word[i] - 4;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] + 2;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] - 5;
                    }
                    break;
                case 8: //If any of the user's settings is 8 then the following changes in the for loop occur
                    if (j == 0)
                    {
                        word[i] = word[i] + 2;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] - 9;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] - 1;
                    }
                    break;
                case 9: //If any of the user's settings is 9 then the following changes in the for loop occur
                    if (j == 0)
                    {
                        word[i] = word[i] - 6;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] - 3;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] + 2;
                    }
                    break;
                default:
                    break;
            };
        }
        quicksetting(code1); //Increments user's setting
    }
    for (int i = 0; word[i] != NULL; i++) //This loop will cout the encoded word
    {
        cout<<word[i];
    }
}
void decode(char word[], int code1[]) //Decode function
{
    for (int i = 0; word[i] != NULL; i++)
    {
        for (int j = 0; j < 3; j++) //This for loop covers almost the entire decode function. It runs three times and takes the three settings and makes a change each time.
        {
            switch (code1[j])
            {
                case 0: //If any of the user's settings is 0 then the following changes in the for loop occur
                    if (j == 0)
                    {
                        word[i] = word[i] - 4;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] - 1;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] + 9;
                    }
                    break;
                case 1: //If any of the user's settings is 1 then the following changes in the for loop occur
                    if (j == 0)
                    {
                        word[i] = word[i] - 1;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] - 4;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] + 6;
                    }
                    break;
                case 2: //If any of the user's settings is 2 then the following changes in the for loop occur
                    if (j == 0)
                    {
                        word[i] = word[i] + 9;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] + 7;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] - 3;
                    }
                    break;
                case 3: //If any of the user's settings is 3 then the following changes in the for loop occur
                    if (j == 0)
                    {
                        word[i] = word[i] + 5;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] + 2;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] - 1;
                    }
                    break;
                case 4: //If any of the user's settings is 4 then the following changes in the for loop occur
                    if (j == 0)
                    {
                        word[i] = word[i] + 10;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] + 6;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] + 3;
                    }
                    break;
                case 5: //If any of the user's settings is 5 then the following changes in the for loop occur
                    if (j == 0)
                    {
                        word[i] = word[i] + 3;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] - 3;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] - 4;
                    }
                    break;
                case 6: //If any of the user's settings is 6 then the following changes in the for loop occur
                    if (j == 0)
                    {
                        word[i] = word[i] + 8;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] + 4;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] + 10;
                    }
                    break;
                case 7: //If any of the user's settings is 7 then the following changes in the for loop occur
                    if (j == 0)
                    {
                        word[i] = word[i] + 4;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] - 2;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] + 5;
                    }
                    break;
                case 8: //If any of the user's settings is 8 then the following changes in the for loop occur
                    if (j == 0)
                    {
                        word[i] = word[i] - 2;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] + 9;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] + 1;
                    }
                    break;
                case 9: //If any of the user's settings is 9 then the following changes in the for loop occur
                    if (j == 0)
                    {
                        word[i] = word[i] + 6;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] + 3;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] - 2;
                    }
                    break;
                default:
                    break;
            };
        }
        quicksetting(code1); //Increments user's setting
    }
    for (int i = 0; word[i] != NULL; i++) //This loop will cout the decoded word
    {
        cout<<word[i];
    }
}
void quicksetting(int code1[]) //This function is for incrementing the user's original function to make decoding without the program hard
{
    code1[2] = code1[2] + 1; //Adds one to the setting
    if (code1[2] == 10) //If the ones place goes above 9 then the tens place is incremented and the ones place is 0 again
    {
        code1[2] = 0;
        code1[1] = code1[1] + 1;
        if (code1[1] == 10) //If the tens place goes above 9 then the hundreds place is incremented and the tens place is 0 again
        {
            code1[1] = 0;
            code1[0] = code1[0] + 1;
            if (code1[0] == 10) //If the hundereds place goes above 9 then the setting is reset to 0
            {
                code1[0] = 0;
                code1[1] = 0;
                code1[2] = 0;
            }
        }
    }
}
void bigletters() //Big letters to inform the user what the program does on a basic level
{
   cout<<"EEEEEEE   NN     N       CCCCC      OOOO      DDDDD     EEEEEEE "<<endl;
   cout<<"E         N N    N     C          O      O    D    D    E       "<<endl;
   cout<<"E         N  N   N   C           O        O   D     D   E       "<<endl;
   cout<<"EEEEEEE   N   N  N   C           O        O   D     D   EEEEEEE "<<endl;
   cout<<"E         N    N N   C           O        O   D     D   E       "<<endl;
   cout<<"E         N     NN     C          O      O    D    D    E       "<<endl;
   cout<<"EEEEEEE   N      N       CCCCC      O0000     DDDDD     EEEEEEE "<<endl;

   cout<<endl<<endl;

   cout<<"   AAA      NN      N   DDDDD      "<<endl;
   cout<<"  A   A     N N     N   D    D     "<<endl;
   cout<<" A     A    N  N    N   D     D    "<<endl;
   cout<<"AAAAAAAAA   N   N   N   D     D    "<<endl;
   cout<<"A       A   N    N  N   D     D    "<<endl;
   cout<<"A       A   N     N N   D    D     "<<endl;
   cout<<"A       A   N      NN   DDDDD      "<<endl;

   cout<<endl<<endl;

   cout<<"DDDDD     EEEEEEE       CCCCC      OOOO      DDDDD     EEEEEEE "<<endl;
   cout<<"D    D    E           C          O      O    D    D    E       "<<endl;
   cout<<"D     D   E         C           O        O   D     D   E       "<<endl;
   cout<<"D     D   EEEEEEE   C           O        O   D     D   EEEEEEE "<<endl;
   cout<<"D     D   E         C           O        O   D     D   E       "<<endl;
   cout<<"D    D    E           C          O      O    D    D    E       "<<endl;
   cout<<"DDDDD     EEEEEEE       CCCCC      OOOO      DDDDD     EEEEEEE "<<endl;

   cout<<endl<<endl;

   cout<<"PPPPPPP    RRRRRRR      OOOO        GGGGGGG       RRRRRRR       AAA      MM           M "<<endl;
   cout<<"P      P   R      R   O      O     G              R      R     A   A     M M         MM "<<endl;
   cout<<"P      P   R      R  O        O   G               R      R    A     A    M  M       M M "<<endl;
   cout<<"PPPPPPP    RRRRRRR   O        O   G               RRRRRRR    AAAAAAAAA   M   M     M  M "<<endl;
   cout<<"P          RRR       O        O    G    GGGGGGG   RRR        A       A   M    M   M   M "<<endl;
   cout<<"P          R   R      O      O      G      G  G   R   R      A       A   M     M M    M "<<endl;
   cout<<"P          R     R      OOOO         GGGGGG   G   R     R    A       A   M      M     M "<<endl;

   cout<<endl<<endl;
}
