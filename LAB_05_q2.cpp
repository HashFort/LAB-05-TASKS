/*Write a C program for ride type selection by taking input for ride type: 1 = Economy, 2 =
Business, 3 = Luxury and inside each ride type ask for distance (short/long): if short, assign
base fare = 100 and if long, assign higher base fare = 300 and finally print the assigned base
fare.*/

#include<stdio.h>
int main()
{
	int ride,fare;
	char distance;
	 printf("Enter ride type (1=Economy, 2=Business, 3=Luxury): ");
    scanf("%d",&ride);
    switch(ride)
    {
    	case 1:
    printf("Enter distance(s for short and l for long):");
    scanf(" %c", &distance);
    switch(distance)
    {
    	case 's':
    		fare=100; 
    	break;
    	
    	case 'l':
    		fare=300; 
    	break;
			
    		default:
    			printf("\n INVALID INPUT");
    		
	}
break;

    	case 2:
    printf("Enter distance(s for short and l for long):");
    scanf(" %c", &distance);
    switch(distance)
    {
    	case 's':
    		fare=100; 
    	break;
    	
    	case 'l':
    		fare=300; 
    	break;
			
    		default:
    			printf("\n INVALID INPUT");
    		
	}
break;
   
    	case 3:
    printf("Enter distance(s for short and l for long):");
    scanf(" %c", &distance);
    switch(distance)
    {
    	case 's':
    		fare=100; 
    	break;
    	
    	case 'l':
    		fare=300; 
    	break;
			
    		default:
    			printf("\n INVALID INPUT");
	}
break;
    
    	
    	default:
    			printf("\n INVALID INPUT");
    
    	
	}
    
    
    	printf("\n The assigned base fare is: %d",fare);
    	return 0;
  
}

