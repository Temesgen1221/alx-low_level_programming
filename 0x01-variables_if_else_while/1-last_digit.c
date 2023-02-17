#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Prints the last digit stored in th variable n
*Return: Always 0 (success)
*/

int main(void)
{
<<<<<<< HEAD
	int n, lastD;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastD = n % 10;

	if (lastD > 5)
{
	printf("Last digit of %id is %id and is greater than 5\n", n, lastD);
}
else if (lastD < 6 && lastD != 0)
{
	printf("Last digit of %id is %id and is less than 6 and not 0\n", n, lastD);
}
else if (lastD == 0)
{
	printf("Last digit of %id is %id and is 0\n", n, lastD);
=======
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
{
printf("last digit of %d is %d and greater than 5\n", n, lastd);
}
else if (lastd == 0)
{
	printf("last digit of %d is %d and less than 6 and not 0\n", n, lastd);
}
else if (lastd < 6 && lastd != 0)
{
printf("last digit of %d is %d and is 0\n", n, lastd);
>>>>>>> 04df0205508c2ef4b460ed1bf9fe0d5a9491dc40
}
return (0);
}
