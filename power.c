#include "myMath.h"
#define e 2.7182

//maximum nisahek po be define
//lehishtamesh gam po be funkiot shel mahpela lefahot
//zarih laasot shinuim le e
double Power(double x,int y){
   {
	double answer = 1;
	int tmp = y;
	if(y == 0)
	{
		return 1;
	}
	if(y == 1)
	{
		return x;
	}
	if(y < 0)
	{
		y = y*-1;
		
	}
	int i;
	for(i = 0; i < y; i++)
	{
		answer = answer*x;
	}
	if(tmp < 0)
	{
		return 1/answer;
		
	}
	return answer;
}


}
double Exponent(int x)
{
	
	double answer = Power(e,x);
	return (double)answer;

}

