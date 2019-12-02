//read data from file in c.
#include<stdio.h>
void main()
{
    FILE *myFile;
    myFile = fopen("F:\\c\\data structure in c\\tanvi.txt", "r");
    int numberArray[16];
    int i;

    for(i=0; i < 5; i++)
    {
        fscanf(myFile, "%d", &numberArray[i]);
    }
    for(i=0; i<5;i++)
    {
        printf("Number is : %d\n\n",numberArray[i]);
    }
}

