#include <stdlib.h>
#include <stdio.h>
#include <string.h>
 
int main(void){
    
    char tweet[250];//array tweet
    int i, j, k ,l , m, n, contador3 = 0, contador2 = 0, contador=0;
    char vogais[] = "aeiouAEIOU";//array vogais
    char arroba[] = "@";//array @
    char hashtag[] = "#";//array #
    
    printf ("Digite um tweet..: ");
    gets(tweet);
 
    //contagem vogais tweet
    for (i=0;i<strlen(tweet);i++){
        for (j=0;j<strlen(vogais);j++){
            if (tweet[i] == vogais[j]){
                contador++;
            }
        }
    }
        //contagem @
        for (k=0;k<strlen(tweet);k++){
        for (l=0;l<strlen(arroba);l++){
            if (tweet[k] == arroba[l]){
                contador2++;
            }
        }
    }

        //contagem #
        for (m=0;m<strlen(tweet);m++){
        for (n=0;n<strlen(hashtag);n++){
            if (tweet[m] == arroba[n]){
                contador3++;
            }
        }
    }
    

    //retorna vogais tweet
    if (contador == 1){
        printf ("\nO tweet informado possui 1 vogal\n");
    }else{
        printf ("\nO tweet informado possui %d vogais\n", contador);
    }
 
     //retorna arroba tweet
    if (contador2 == 1){
        printf ("\nExiste 1 menção e");
    }else{
        printf ("\nExiste %d menções e ", contador2);
    }

    //retorna hashtag tweet
    if (contador3 == 1){
        printf ("1 hashtag\n");
    }else{
        printf ("%d hashtags\n", contador3);
    }
 

    system ("pause");
    return 0;
}