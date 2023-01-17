#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void search(char[]);
void main()
{
char word[20];
int a;
do
{
printf("\nEnter 1 to Search");
printf("\nEnter 2 to Clear Screen");
printf("\nEnter 3 to Exit");
printf("\nEnter your choice =>");
scanf("%d",&a);
if(a==1)
{
printf("\nEnter the word to be searched in the dictionary :- ");
scanf("%s",word);
search(word);
}
else if (a==2)
system("cls");
else exit(1);
}while(a!=0);
}
void search(char *w)
{
FILE *o,*o2;
char arr[6],str[1000],ch;
int i,count=0;
for(i=0;i<strlen(w);i++)
{
if(isalpha(w[i])==0)
{
printf("Not a valid word!!!");
exit(1);
}
}
w[0]=toupper(w[0]);
switch(w[0])
{
    case 'A':strcpy(arr,"A.txt");
    break;
    case 'B':strcpy(arr,"B.txt");
    break;
    case 'C':strcpy(arr,"C.txt");
    break;
    case 'D':strcpy(arr,"D.txt");
    break;
    case 'E':strcpy(arr,"E.txt");
    break;
    case 'F':strcpy(arr,"F.txt");
    break;
    case 'G':strcpy(arr,"G.txt");
    break;
    case 'H':strcpy(arr,"H.txt");
    break;
    case 'I':strcpy(arr,"I.txt");
    break;
    case 'J':strcpy(arr,"J.txt");
    break;
    case 'K':strcpy(arr,"K.txt");
    break;
    case 'L':strcpy(arr,"L.txt");
    break;
    case 'M':strcpy(arr,"M.txt");
    break;
    case 'N':strcpy(arr,"N.txt");
    break;
    case 'O':strcpy(arr,"O.txt");
    break;
    case 'P':strcpy(arr,"P.txt");
    break;
    case 'Q':strcpy(arr,"Q.txt");
    break;
    case 'R':strcpy(arr,"R.txt");
    break;
    case 'S':strcpy(arr,"S.txt");
    break;
    case 'T':strcpy(arr,"T.txt");
    break;
    case 'U':strcpy(arr,"U.txt");
    break;
    case 'V':strcpy(arr,"V.txt");
    break;
    case 'W':strcpy(arr,"W.txt");
    break;
    case 'X':strcpy(arr,"X.txt");
    break;
    case 'Y':strcpy(arr,"Y.txt");
    break;
    case 'Z':strcpy(arr,"Z.txt");
    break;
}
o=fopen(arr,"r");
o2=fopen(arr,"r");
if(NULL==o)
{
printf("Failed to open file\n");
exit(1);
}
printf("\nThe meaning is:- \n");
ch=fgetc(o2);
while(ch!=EOF)
{
if(fgets(str,1000,o)!=NULL)
if(strncmp(str,w,strlen(w))==0)
{
puts(str);
count++;
}
ch=fgetc(o2);
}
printf("Total search results found:- %d\n",count);
fclose(o);
fclose(o2);
}
