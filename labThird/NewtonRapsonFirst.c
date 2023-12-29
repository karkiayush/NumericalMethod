/*Limitations of Newton Raphson Method
One significant limitation is the dependence on an initial guess for the root. In cases
where the initial guess is far from theactual root or falls onto a region of non-convergence,
the method may fail to find a solution.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define E 0.0001

float f (float x){
	return(pow(x,2)+x-2);
}

float fd(float x){
	return(2*x+1);
}

int main(){
	float x0=0, x1=0;
	int i =1;
	printf("Enter the initial value of x\n");
	scanf("%d",&x0);

	do{
		x1=x0-(f(x0)/fd(x1));
		printf("\ni=%d\t x0=%f\t x1=%f\t f(x1)=%f",i,x0,x1,f(x1));

		x0=x1;
		i++;
	}while(fabs(f(x1))>E);

	printf("\nThe root is x1=%f",x1);

	return(0);
}
