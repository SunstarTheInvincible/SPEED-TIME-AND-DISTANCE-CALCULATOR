// Hello peeps! :-) It's a SPEED calculator First you have to put the DISTANCE and then the TIME. So enjoy the programme .{Fell FREE to do CHANGES}


/*NOTE: YOU HAVE TO PUT ALL THE
VALUES IN S.I. UNIT ONLY.*/

/*PROGRAMME MADE BY 
SUNSTAR© INC.*/



#include <stdio.h>

int main()

{
	
        
        		double distance;
	
	double time;
	
          	printf("Please provide the DISTANCE(IN S.I. UNIT ONLY)\n");
	/*It will ask the user to enter a DISTANCE.*/
                 
                 	  
                 	  	
           	scanf("%lf", & distance);//It will take an input from the user.
	
		
				printf("The given DISTANCE is %fm\n",distance);


   
   printf("Please provide the TIME(IN S.I UNIT ONLY)\n");/*It will ask the uset to enter a TIME.*/

	
			scanf("%lf", & time);//It will take an input from the user.
	

		printf("The given TIME is %fs\n",time);
	
        	double speed= (double) distance/time;

		
	printf("The SPEED is %fm/s\n",speed);
	/*It will output the SPEED.*/
              
              		return 0;
}