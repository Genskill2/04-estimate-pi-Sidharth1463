#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float wallis_pi(int);


    
int main(void) {
  float pi;
  for (int i=0; i<5; i++) {
    pi = wallis_pi(i);
    //printf("wallis called %f %f\n",M_PI,pi) ;
    if (!(fabs(pi - M_PI) > 0.15)) {
      //printf("wallis g %f\n",pi) ;
  printf("Estimate with just %d iterations is %f which is too accurate.\n", i, pi);
          abort();
    }
  }

  for (int i=500; i<3000; i++) {
    pi = wallis_pi(i);
    if (!(fabs(pi - M_PI) < 0.01)) {
      printf("Estimate with even %d iterations is %f which is not accurate enough.\n", i, pi);
      abort();
    }
  }
  
   float Wallis(int n)
{

    if n <= 0
        return 0;

    float pi = 1

    for (i=0;i<n+1;i++)
    {

        pi *= (4 * (i*i))/(4(i*i) - 1);

    return pi*2;
    }
}
