#include "holberton.h"
#include <stdio.h>
int _islower(int c) /* _islower for lowercase return 1 */
{
	if (c < 123)
	{
		if (c > 96)
		{
			return (1);
		}
	}
	else
	{
		return (0);
	}
return (0);
}
