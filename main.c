#include <stdio.h>
#include "myMath.h"
#define DEBUG
float f2(double x); //zriha leakir otam lifnei
 float f3(double x);
int main(){
   
    double x = 0; //for users input
    
    double res1  =0;
    float res2help = 0;
    float res3help = 0;


   scanf("%lf",&x);
   #if defined(DEBUG)
   printf("%0.4lf\n",Exponent(x));
   #endif
  // double useresinput = x;
   //hatohnit kvar mekira et x hahadash
    
   
    res2help = f2(x);
 

   
   res3help = f3(x);
   res1 = Exponent(x) + Power(x,3) - 2; //ze oved
   
   //res3 = (4*x*x*x)/5 
   //benataim ze lo beemet hatozaot
   printf("res1= %0.4lf ,users input = %0.4lf\n",res1,x);
   printf("res2= %0.4lf ,users input = %0.4lf\n",res2help,x);
   printf("res3= %0.4lf ,users input = %0.4lf\n",res3help,x);
   return 0;

}
float f2(double x){
    double ans2h = Power(x,2); //x^2
    double ans1 = mul(x,3); //3x
    double ans2 = mul(ans2h,2); //2x^2
    return add(ans1,ans2); //3x + 2x^2 leavir le float
}
float f3(double x){ //hafunkzia hazot osa beaet
    double ans = Power(x,3); //x^3
    double ans1 = (mul(ans,4));//4*x^3
    double ans1h = div((ans1),5); //(4*x^3)/5 
    double ans2 = mul(x,2); // 2x
    return sub(ans1h,ans2); //(4x^3)/5 -2x


}

