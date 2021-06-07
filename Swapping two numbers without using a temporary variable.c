#include <stdio.h>
int main()
{
	int x , y ;
printf("Enter two numbers x and y  ");   //asking user to input two numbers
scanf("%d %d",&x,&y);      //taking two numbers from the user

// Code to swap 'x' and 'y'
 
	printf("\nx = %d, y = %d", x, y);
	x = x + y; 
	y = x - y; 
	x = x - y;  

	printf("\nHence after Swapping: x = %d, y = %d", x, y);

	return 0;
}
