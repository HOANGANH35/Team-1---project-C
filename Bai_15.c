#include <stdio.h> //hii

void out (int a[], int size);
void check_array (int a[], int size);
int main ()
{
    int a[100], size;
    printf ("Input size of the array ");
    scanf ("%d", &size);
    
    out (a, size);
    check_array (a, size);
}



void out (int a[], int size)
{   
    printf ("\n Enter elements in array ");
 	for (int i = 0; i < size; i++)
   {
	     printf (" \n array[%d]:", i);
	     scanf ("%d", &a[i]); // hay a+i	
   } 
}



void check_array (int a[], int size)
{
	printf ("Prime values of array are: ");
    for (int i = 0; i < size; i++)
    {  
        int divisor = 0; // Phai gan divisor = 0 tai cho nay de dam bao con divisor ko bi doi
        if (a[i] > 1) 
		{
		 	for (int j = 2; j < a[i]; j++)
 	       {
	         if ( a[i] % j == 0)
 	         divisor +=1;
           }		 	            
             if (divisor == 0) 
	         printf ("%4d", a[i]); 
	    }
    }
}
	

	



