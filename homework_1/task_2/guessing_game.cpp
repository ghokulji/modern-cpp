#include<iostream>
#include<math.h>
#include <limits>
using namespace std;

int main(void)
{

	int num = rand()%99;
	int guess;


	do
	{
	
		cout<<" \n Enter number 0-99 \t";
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());		
		cin>>guess;

		if(guess == num)
		{

			cout<<"\n You have won \t";
			
		}


		else if(guess > num)
		{

			cout<<"\n The number you have guessed is greater than the number \t";
	
		}

		else if(guess < num)
		{
			cout<<"\n The number you have guessed is smaller than the number \t";	
			
			
		
		}

		else
		{
			cout<<" \n Enter cnumber 0-99 \t";
			
		}

	}while(num != guess);

return 0;
}
