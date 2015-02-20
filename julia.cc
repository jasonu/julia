#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

// This is a simple code to generate Julia sets of quadratic functions
// such as f(z) = z^2 + c.
//
// The algorithm used is the backwards iteration algorithm with each root
// weighted equally.  (Note:  This algorithm often misses a good portion
// of the Julia set.  It is simply included as a reference.)

double rand_unit() {
  return( ((double)rand())/RAND_MAX );
}

double rand_interval(double a, double b) {
  return( a+(b-a)*rand_unit() );
}

int main(int argc, char* argv[]){

  double cx, cy; // real and imaginary parts of c parameter
  double wx, wy; // real and imaginary parts of iterated value
  int N; // number of iterations to perform

  srand(time(NULL)); // seed the random number generator with the system clock

  cin >> cx >> cy >> N;

  assert(N > 0);

  // Randomly pick a point somewhat near the origin with which
  // to start iterating.
  wx = rand_interval(-1.0, 1.0);
  wy = rand_interval(-1.0, 1.0);

  double r, theta;
  double sign = 1.0;

  for(int i=0; i<=N; ++i){
    // original function  f(z) = z^2 + c
    // inverse function   f^(-1)(w) = +/-sqrt(w - c)
    r = sqrt((wx-cx)*(wx-cx) + (wy-cy)*(wy-cy));
    theta = atan2(wy-cy,wx-cx);

    sign = rand_interval(-1.0, 1.0) < 0 ? -1.0 : 1.0;
    wx = sign*sqrt(r)*cos(theta/2.0);
    wy = sign*sqrt(r)*sin(theta/2.0);
    
    if(i>99){
      cout << wx << ' ' << wy << '\n';
    }
  }

  return 0;
}
