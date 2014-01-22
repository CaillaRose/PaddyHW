#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define TOL 100

int main(int argc, char *argv[])
{
	float n = atof(argv[1]);
	float i,x,y,mid,fmid;

	x = 1;
	while ((x*x)<n)
	{
		x++;
	}
	y = x - 1;
	for (i=0; i<TOL; i++)
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
	}
	
	/*const double digits = atof(argv[2]);
	mid = (mid*digits + (mid<0 ? -0.5 : 0.5))/digits;*/

	printf("Root of %f is %f.\n", n, mid);
	return 0;

}
