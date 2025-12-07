/*Write a C program that integrates, Ride type, Surge multiplier, Discounts, Driver assignment
and finally, print a complete ride summary: Passenger eligibility, Driver assigned, Final fare
after surge and discount.*/

#include<stdio.h>
#include<math.h>
int main() 
{
	char ride;
	int request,age,balance,rating,loyalty,per,base,ho,rate,driverdis;
	float fare1,mult,discount,distance,fare;
	
	printf("\n Enter age of driver:");
	scanf("%d",&age);
		printf("\n Enter account balance:");
	scanf("%d",&balance);
	if(age<21)
	{
	printf("\n Not Eligible");
	return 0;
	}
	else if(balance<200)
	{
	
	printf("\nNot Eligible (insufficient balance)");
	return 0;
    }
	 
	 printf("Enter distance in km:");
    scanf("%f",&distance);
    printf("Enter ride type (e for Economy,b for Business,l for Luxury): ");
    scanf(" %c",&ride);
     switch(ride)
    {
    	case 'e':
    		per=50;
    		 printf("Enter distance(1 for short and 2 for long):");
    scanf(" %d", &ho);
    switch(ho)
    {
    	case 1:
    		rate=100; 
    	break;
    	
    	case 2:
    		rate=300; 
    	break;
			
    		default:
    			printf("\n INVALID INPUT");
    		
	}
		 
break;
    	case 'b':
    		per=100;
    		 printf("Enter distance(1 for short and 2 for long):");
    scanf(" %d", &ho);
    switch(ho)
    {
    	case 1:
    		rate=100; 
    	break;
    	
    	case 2:
    		rate=300; 
    	break;
			
    		default:
    			printf("\n INVALID INPUT");
    		
	}
		 
			    
break;
   
    	case 'l':
    	per=200;
		 printf("Enter distance(1 for short and 2 for long):");
    scanf(" %d", &ho);
    switch(ho)
    {
    	case 1:
    		rate=100; 
    	break;
    	
    	case 2:
    		rate=300; 
    	break;
			
    		default:
    			printf("\n INVALID INPUT");	
	}
		    
break;
        	 	default:
    			printf("\n INVALID INPUT");
    			return 0;
	}	
	printf("Enter number of rides requested in the area:");
    scanf("%d",&request);
    mult=sqrt(request)/2;
    if (mult>3) 
	{
        mult=3;
    }
    printf("Enter loyalty points of a passenger:");
    scanf("%d",&loyalty);
    discount = (loyalty> 1000) ? 0.2:0.05;
     printf("Enter driver rating (1-5):");
    scanf("%d",&rating);
     printf("Enter driver's distance' (1-10):");
    scanf("%d",&driverdis); 
    fare=(mult*distance*per)+rate;
    fare1=fare*(1-discount);  
    printf("\n --------------------------------SUMMARY-----------------------------------");
    printf("\n Passenger eligilibilty: YES");
    printf("\nEnter ride type:%c",ride);
    printf("\n How long the distance(1 for short and 2 for long):%d",ho);
    printf("\n Surge Multiplier:%f",mult);
    printf("\n Discount based on loyalty points:%f",discount);
     if (rating >= 4 && driverdis <= 5) 
	 {
        printf("\nTop driver nearby\n");
    } else if (rating >= 3 && driverdis <= 10) 
	{
        printf("\nAverage driver assigned\n");
    } else 
	{
        printf("\nNo suitable driver available\n");
        return 0;
    }
    printf("\n Final fare:%.2f",fare1);  
    return 0; 
}
    
    
  
    
    
