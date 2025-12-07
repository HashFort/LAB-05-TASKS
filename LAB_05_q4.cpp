/*Write a C program that takes distance (km) and ride type (Economy/Business/Luxury).
Base fares:
Economy = 50/km
Business = 100/km
Luxury = 200/km
Apply surge multiplier from Task 3. Print Total Fare.*/
#include <stdio.h>
#include <math.h>
int main()
 {
    int request,per,distance;
    float mult,fare;
    char ride;
    
 printf("Enter distance in km:");
    scanf("%d",&distance);
    printf("Enter ride type (e for Economy,b for Business,l for Luxury): ");
    scanf(" %c",&ride);
     switch(ride)
    {
    	case 'e':
    		per=50;   
break;
    	case 'b':
    		per=100;    
break;
   
    	case 'l':
    	per=200;   
break;
        	 	default:
    			printf("\n INVALID INPUT");
    			return 0;
	}
	
	printf("Enter number of rides requested in an area:");
    scanf("%d",&request);
    mult=sqrt(request)/2;
    if (mult>3) 
	{
        mult=3;
    }
    fare=mult*distance*per;
    printf("\n Total fare is:%.2f",fare);
return 0;
}
