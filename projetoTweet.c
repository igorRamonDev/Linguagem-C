#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	char tweet[250];	//array tweet
	int i, j, k, l, m, n, o, p, q, r, s, t, u, v, x, w, contador7 = 0, contador8 = 0, contador6 = 0, contador5 = 0, contador4 = 0, contador3 = 0, contador2 = 0, contador = 0;
	char vogais[] = "aeiouAEIOU";	//array vogais
	char arroba[] = "@";	//array @
	char hashtag[] = "#";	//array #
	char letraA[] = "aA";	//array a o/p cont 4
    char letraE[] = "eE";	//array e q/r cont 5
    char letraI[] = "iI";   //array i s/t cont 6
    char letraO[] = "oO";   //array o u/v cont 7
    char letraU[] = "uU";	//array u x/w cont 8   

	printf("Digite um tweet..: ");
	gets(tweet);

	//contagem vogais tweet
	for (i = 0; i < strlen(tweet); i++)
	{
		for (j = 0; j < strlen(vogais); j++)
		{
			if (tweet[i] == vogais[j])
			{
				contador++;
			}
		}
	}

	//contagem @
	for (k = 0; k < strlen(tweet); k++)
	{
		for (l = 0; l < strlen(arroba); l++)
		{
			if (tweet[k] == arroba[l])
			{
				contador2++;
			}
		}
	}

	//contagem #
	for (m = 0; m < strlen(tweet); m++)
	{
		for (n = 0; n < strlen(hashtag); n++)
		{
			if (tweet[m] == arroba[n])
			{
				contador3++;
			}
		}
	}

	//contagem a
	for (o = 0; o < strlen(tweet); o++)
	{
		for (p = 0; p < strlen(hashtag); p++)
		{
			if (tweet[o] == letraA[p])
			{
				contador4++;
			}
		}
	}

	//contagem e
	for (q = 0; q < strlen(tweet); q++)
	{
		for (r = 0; r < strlen(hashtag); r++)
		{
			if (tweet[q] == letraE[r])
			{
				contador5++;
			}
		}
	}

    	//contagem i
	for (s = 0; s < strlen(tweet); s++)
	{
		for (t = 0; t < strlen(hashtag); t++)
		{
			if (tweet[s] == letraI[t])
			{
				contador6++;
			}
		}
	}

        	//contagem o
	for (u = 0; u < strlen(tweet); u++)
	{
		for (v = 0; v < strlen(hashtag); v++)
		{
			if (tweet[u] == letraO[v])
			{
				contador7++;
			}
		}
	}

            	//contagem u
	for (x = 0; x < strlen(tweet); x++)
	{
		for (w = 0; w < strlen(hashtag); w++)
		{
			if (tweet[x] == letraO[w])
			{
				contador8++;
			}
		}
	}

	//retorna vogais tweet
	if (contador == 1)
	{
		printf("\nO tweet informado possui 1 vogal\n");
	}
	else
	{
		printf("\nO tweet informado possui %d vogais\n", contador);
	}

	//retorna arroba tweet
	if (contador2 == 1)
	{
		printf("\nExiste 1 menção e");
	}
	else
	{
		printf("\nExiste %d menções e ", contador2);
	}

	//retorna hashtag tweet
	if (contador3 == 1)
	{
		printf("1 hashtag\n");
	}
	else
	{
		printf("%d hashtags\n", contador3);
	}

	//retorna a grafico a
	if (contador4 == 1)
	{
		printf("\n\na(1) *\n\n");
	}
	else
	{
		printf("\n\na(%d) ", contador4);
		for (i = 0; i < contador4; i++)
		{
			printf("*");
		}
	}

    	//retorna a grafico e
	if (contador5 == 1)
	{
		printf("\n\ne(1) *\n\n");
	}
	else
	{
		printf("\n\ne(%d) ", contador5);
		for (i = 0; i < contador5; i++)
		{
			printf("*");
		}
	}

        	//retorna a grafico i
	if (contador6 == 1)
	{
		printf("\n\ni(1) *\n\n");
	}
	else
	{
		printf("\n\ni(%d) ", contador6);
		for (i = 0; i < contador6; i++)
		{
			printf("*");
		}
	}

            	//retorna a grafico o
	if (contador7 == 1)
	{
		printf("\n\no(1) *\n\n");
	}
	else
	{
		printf("\n\no(%d) ", contador7);
		for (i = 0; i < contador7; i++)
		{
			printf("*");
		}
	}

                	//retorna a grafico u
	if (contador8 == 1)
	{
		printf("\n\nu(1) *\n\n");
	}
	else
	{
		printf("\n\nu(%d) ", contador8);
		for (i = 0; i < contador8; i++)
		{
			printf("*");
			break;
		}
	}

	return 0;
}