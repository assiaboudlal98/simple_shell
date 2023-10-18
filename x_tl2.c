#include "shell.h"
/**
 * int_asc - function that prints int to ascii,
 * @u: This parameter is an integer, and it's used as input to the funct,
 * Return: always same
 */
char *int_asc(int u)
{
	char bf[20];
	int q = 0;

	if (u == 0)
		bf[q++] = '0';
	else
	{
		while (u > 0)
		{
			bf[q++] = (u % 10) + '0';
			u /= 10;
		}
	}
	bf[q] = '\0';
	rvrs(bf, q);

	return (_strdup(bf));
}
/**
 * rvrs - funciton revers,
 * @xst: is a pointer to a character array (string) named xst,
 * @lnght: is an integer representing the length of the string,
 */
void rvrs(char *xst, int lnght)
{
	char tmp;
	int strt = 0;
	int nd = lnght - 1;

	while (strt < nd)
	{
		tmp = xst[strt];
		xst[strt] = xst[nd];
		xst[nd] = tmp;
		strt++;
		nd--;
	}
}
