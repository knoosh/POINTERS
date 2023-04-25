#include <stdio.h>
#include <stdlib.h>
int main()

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
{
	
int x = 4;
int y = 8;
int *p; //this is the declaration for an integer value pointer
p = &x; //this is initialization      DATA TYPE OF POINTER AND ASSIGNED VALUE MUST BE THE SAME


printf("%d\n", *p); //value at which the pointer is pointing
printf("%d\n",x); //prints value of x
printf("%d\n", &x); //displays address of the variable x
printf("%d\n",p); //p stores the value of &x, which is same as above
printf("%d\n",&p); //&p is the memory address of p
}
