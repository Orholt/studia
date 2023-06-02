#include <stdio.h>
#include <stdlib.h>

struct lista_dwukierunkowa
{
    struct lista_dwukierunkowa * lewy;
    int x;
    struct lista_dwukierunkowa * prawy;
};

void push (struct lista_dwukierunkowa ** pgwsk, struct lista_dwukierunkowa ** lgwsk, int wartosc)
{
    struct lista_dwukierunkowa * nowy = (struct lista_dwukierunkowa*)malloc(sizeof(struct lista_dwukierunkowa));
    nowy -> prawy = 0;
    nowy -> x = wartosc;
    nowy -> lewy = *pgwsk;
	if (* pgwsk != 0)
    { 
        (*pgwsk) -> prawy = nowy;
    }   
    * pgwsk = nowy;
    if (* lgwsk == 0)
    {
        * lgwsk = nowy;
    }
    
}

int pop (struct lista_dwukierunkowa ** lgwsk)
{
    if (*lgwsk == 0)
    {
        printf("Lista dwukierunkowa jest pusta");
        return 0;
    }
    else
	{
    	int wartosc;
    	wartosc = (* lgwsk) -> x;
   		struct lista_dwukierunkowa * wskTmp;
    	wskTmp = *lgwsk;
    	if (wskTmp -> prawy)
		{
    		wskTmp -> prawy -> lewy = 0;
		}
		*lgwsk = wskTmp -> prawy;
    	free (wskTmp);
    	return wartosc;
    }
}