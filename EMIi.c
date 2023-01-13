
#include <math.h>
#include <stdio.h>


float emi_calculator(float P, float I, float T)
{
	float emi;
    float interest=(P*I)/100;
	emi=(P+(interest*T))/(T*12);
	

	return (emi);
}


int main()
{
	float principal, interest, tenure, emi;
	
    printf("principal amount");
    scanf("%f",&principal);
	
    printf("interest");
    scanf("%f",&interest);

    printf("tenure IN YEAR");
    scanf("%f",&tenure);
	
	emi = emi_calculator(principal, interest, tenure);
	printf("\nMonthly EMI is= %f\n", emi);

	return 0;
}
