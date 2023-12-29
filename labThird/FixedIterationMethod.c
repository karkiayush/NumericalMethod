#include<stdio.h>
#include<conio.h>
#include<math.h>
#define E 0.0001


float f(float x){
	return (cos(x)-(3*x)+1);
}

float g(float x){
	return ((1+cos(x))/3);
}

int main(){
	float x0=0,x1=0;
	int i=1;
	
	printf("Enter the value of initial point: ");
	scanf("%f",&x0);
	
	do{
		x1=g(x0);
		printf("\ni=%d\t x0=%f\t x1=%f\t f(x1)=%f",i,x0,x1,f(x1));
		
		x0=x1;
		i++;
	}while(fabs(f(x1))>E);
	
	printf("\nRoot is x1=%f", x1);
	
	return 0;
}
