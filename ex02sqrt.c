/*****************************************************
Using the High/Low Method to solve for the Square Root
of a number n given as a command line argument.
	Input: 
		n = argv[1]
		TOL = argv[2]
******************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	float n = atof(argv[1]);
	int TOL = atoi(argv[2]);
	int i,MAXITS=1000;
	float x,y,mid,fmid;

	x = 1;
	while ((x*x)<n)
	{
		x++;
	}
	y = x - 1;
	for (i=0; i<MAXITS; i++)
	{
		mid = x + 0.5*(y-x);
		fmid = mid*mid;
		if (fmid < n)
		{
			y = mid;
		}
		else
		{
			x = mid;
		}
		if(fabs(mid)<TOL) break;
	}
	
	printf("Root of %f is %f.\n", n, mid);
	return 0;

}
