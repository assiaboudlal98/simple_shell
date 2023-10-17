#include "shell.h"

/**
 * int u: This parameter is an integer, and it's used as input to the function
 *
 * char *: indicates that it returns a pointer to a character (string)
 *
 * return: always same
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
 * void: The return type of the function indicates that it doesn't return any value
 * rvrs: This is the name of the function
 * char *xst: is a pointer to a character array (string) named xst
 * int lnght: is an integer representing the length of the string
 *
 * return: same
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
