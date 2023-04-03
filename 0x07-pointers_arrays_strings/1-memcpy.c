#include"main.h"
/*
 *
 *_memcpy() function copies n bytes from memory area src to memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k;
	int p = n;

	for(k=0;k<p;k++)
	{
		dest[k]= src[k];
		n--;
	}
	return (dest);
}
