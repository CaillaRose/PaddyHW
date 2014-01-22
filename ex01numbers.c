/**********************************************************
Determines whether an inputted number is Square/Triangular
	or both.
***********************************************************/

#include <stdio.h>
#include <math.h>


int isSquare(int i)
{
	int root = (sqrt(i));
	if(root*root == i) return 1;
	else return 0;
}

int isTriangle(int i)
{
	int test = (8*i)+1;
	int testSq = isSquare(test);
	if(testSq == 1) return 1;	
	else return 0; 
}

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	int i,testSq,testTri;

	for (i=1; i<=n; i++)
	{
		testSq = isSquare(i);
	
		if (test == 1)
		{
			printf("%d is a square number!\n", i);
			testTri = isTriangle(i);
			if (testTri == 1)
			{
				printf("%d is also a Triangular Number!\n", i);
			}
			else
			{
				printf("But is not also a triangular number...\n");
			}
		}
		else
		{
			 printf("%d is neither a square or triangular number.\n", i);
		}
	}
	return 0;
}

/*-------------------------------------------------
Alternative method for Square number:
Perfect Squares only end in 1, 4, 9 and base 16....

int isSquare(int i)
{
	int h = i & 0xF;
	if (h>9)
		return 0;
	if(h!=2 && h!=3 && h!=5 && h!=6 && h!=7 && h!=8)
	{
		int root = (int) floor(sqrt((double) i) + 0.5);
		if (root*root == i) return 1;
		return 0;
	}
}
---------------------------------------------------*/
