#include <stdio.h>
#include <stdlib.h>

struct stos
{
	struct stos * ptr;
	int value;
};

void push (struct stos **gwsk, int n)
{
	struct stos *y = (struct stos *) malloc (sizeof (struct stos));
	y->ptr =0;
	y-> value = n;
	if (*gwsk != 0)
	{
		y->ptr=*gwsk;
	}
	*gwsk = y;
}

int pop (struct stos **gwsk)
{
	if (*gwsk == 0)
	{
		printf ("Stos jest pusty\n");
		return 0;
	}
	else
	{
		int wartosc = (*gwsk)->value;
		struct stos * wskTmp = *gwsk;
		*gwsk = wskTmp -> ptr;
		free(wskTmp);
		*gwsk = wskTmp;
		return (wartosc);
	}
	
}
