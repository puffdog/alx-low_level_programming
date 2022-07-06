#include <stdlib.h>                                                                                                                     

#include <stdio.h>                                                                                                                      

#include <time.h>                                                                                                                       

                                                                                                                                        

/**                                                                                                                                     
 *
 * main - is the entry point                                                                                                            
 *
 * Description: if else statemen                                                                                                        
 *
 * Return:anything 0                                                                                                                    
 *
 */                                                                                                                                     

/* more headers goes there */                                                                                                           

/* betty style doc for function main goes there */                                                                                      

int positive_or_negative(void)                                                                                                               

{                                                                                                                                       

	int n;                                                                                                                                  

	srand(time(0));                                                                                                                         

	n = rand() - RAND_MAX / 2;                                                                                                              

	if (n > 0)                                                                                                                              

	{                                                                                                                                       

		printf("%d is positive\n", n);                                                                                                          

	}                                                                                                                                       

	else if (n == 0)                                                                                                                        

	{                                                                                                                                       

		printf("%d is zero\n", n);                                                                                                              

	}                                                                                                                                       

	else                                                                                                                                    

	{                                                                                                                                       

		printf("%d is negative\n", n);                                                                                                          

	}                                                                                                                                       

	/* your code goes there */                                                                                                              

	return (0);                                                                                                                             

}
