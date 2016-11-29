using namespace std;


int ltr_cnvrt(char input_letter)
{
	
/*	
 *	Converts letters to a simpler format.
 *	Which is 1-27 for lowercase letters, 28-53 for uppercase letters, and 54-64 for numbers.
 *	Finnaly, 0 is for an invaild character.
 */
	
	int letter=(int)input_letter;


//	Numbers.
	if(letter > 47 && letter < 58)
	{
		return letter + 4;
	}
	
//	Uppercase letters.	
	else if(letter > 65 && letter < 91)
	{
		return letter - 37;
	}
	
//	Lowercase letters.
	else if (letter > 96 && letter < 123)
	{
		return letter - 96;
	}
	
//	Everything else.
	else
	{
		return 0;
	}	
}


int bounds_check(int input_num, int range_min, int range_max)
{
//	This checks if the number is outside the range of vaild numbers.


//	First calculate the range of numbers.
	int range = range_max - range_min;

	
//	The number is too high.
	while (input_num < range_min)
	{
		input_num = input_num + range;
	}


//	The number is too low.
	while (input_num > range_max)
	{
		input_num = input_num - range;
	}
	
	
//	At this point, the number should now be within the range.
	return input_num;
	
}