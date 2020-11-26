#include <stdio.h>

int main(){
int sum=0,a=0,b=0; //mia apli prosthesi akeraiwn mesa se loop me diaforetiki timi toy a,b
for (int i=0;i<=100;i++){
	a=a+i;
	b=b+2*i;
	sum = a + b;
}
printf("The sum is : %d",sum); //print tis timis tou sum arxika gia na dw an trexei kai katadeuteron gia na xei enan logo ipar3is
return sum;
}
