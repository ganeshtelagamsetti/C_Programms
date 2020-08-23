#include<stdio.h>
main()
{
char shut;
printf("do you want to shut down (Y/N)?" );
scanf("%c",&shut);
if(shut=='Y'||shut=='y')
{
system("c:\\WINDOWS\\system32\\shutdown /s");
}
}
