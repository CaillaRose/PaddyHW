#include <stdio.h>
#include <math.h>

/*Perfect Squares only end in 1, 4, 9 and base 16....
int isSquare(int i)
{
	int h = i & 0xF;
	if (h>9)
		return 0;
	if(h!=2 && h!=3 && h!=5 && h!=6 && h!=7 && h!=8)
	{
		int root = (int) floor(sqrt((double) i) + 0.5);
		return root*root == i;
	}
}
*/
int isSquare(int i)
{
	int root = (sqrt(i));
	if(root*root == i) return 1;
	else return 0;
}

int isTriangle(int i)
{
	int tst = (8*i)+1;
	isSquare(tst);
	if(isSquare == 1) return 1;	
	else return 0; 
}

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	int i;

	for (i=1; i<=n; i++)
	{
		isSquare(i);
	
		if (isSquare == 1)
		{
			printf("%d is a square number!\n", i);
			isTriangle(i);
			if (isTriangle == 1)
			{
				printf("%d is also a Triangular Number!\n", i);
			}
			else
			{
				printf("But is not also a triangular number...");
			}
		}
		else
		{
			 printf("%d is neither a square or triangular number.\n", i);
		}
	}
	return 0;
}
