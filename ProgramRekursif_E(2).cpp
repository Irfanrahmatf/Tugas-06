#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int compare (const void * a, const void * b);
void allLexicographicRecur (char *str, char* data, int last, int index)
{
int i, len = strlen(str);
for ( i=0; i<len; i++ )
{
data[index] = str[i] ;
if (index == last)
printf("%s ", data);
else
allLexicographicRecur (str, data, last, index+1);
}
}
void allLexicographic(char *str)
{
int len = strlen (str) ;
char *data = (char *) malloc (sizeof(char) * (len + 1)) ;
data[len] = '\0';
qsort(str, len, sizeof(char), compare);
allLexicographicRecur (str, data, len-1, 0);
free(data);

}
int compare (const void * a, const void * b)
{
return ( *(char *)a - *(char *)b );
}
int main()
{
char str[100];
printf("Harap memasukan string yang simple,Example:ABC\n");
printf("Masukan string:");gets(str);
printf("Permutasi nya adalah: \n", str);
allLexicographic(str);
return 0;
}
