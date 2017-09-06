#include "stdio.h"
#include "math.h"
int main(){
	float a1;
	float a2;
	float m1;
	float m2;
	float t;
	float x;
	float y;
    float pi = 3.1415;
	printf("Ingrese a1: ");
	scanf("%f", &a1);
	printf("Ingrese m1: ");
	scanf("%f", &m1);
	printf("Ingrese m2: ");
	scanf("%f", &m2);
	t=sin(a1*3.14159/180);
	printf("Dato curioso: Tu seno es: %f (tengo que transformarlo para poder operar)\n",t);
	x= m1*t;
	x = x/m2;
	printf ("senoXm1/m2= %f\n",x);
	y = asin(x)*180/pi ;
	printf("senoinverso= %f",y);


}
