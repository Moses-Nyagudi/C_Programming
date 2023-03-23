#include <stdio.h>
#define MAX 10

int main (void)
{ 
    int data[MAX];
    int i, j, temp;

    /*Read in the data*/
    for( i=0; i<MAX; i++)
    {
        printf("Enter item #%d:", i);
        scanf( "%d", &data[i]);

    }

    printf( "\nYou have entered the following : \n");

    for( i=0; i<MAX; i++)
    {
        printf( "item #%d : %d\n", i, data[i]);

    }

    for( i=0; i<MAX; i++)
    {
        for( j=i; j<MAX; j++)
        {
            if( data[i] > data[j])
            {
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }

    printf( "\nStored data \n");
    for( i=0; i<MAX; i++)
    {
        printf( "item #%d : %d\n", i,data[i]);
    }

    return 0;
}