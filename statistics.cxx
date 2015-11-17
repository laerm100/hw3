#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;

void fillarray(double*p, const int N);
void calculate(double*p, const int N, double& mean, double& var);


int main(){
  srand(time(NULL));
   const int N = 100;
   double p[N];
   double mean, var;

   
fillarray(p, N);
calculate(p, N, mean, var);


   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;

   return 0;
}

void fillarray(double*p, const int N) {
    for(int i=0; i<N; i++){
      p[i]=rand()/double(RAND_MAX); 
      cout<< p[i] <<endl; 
    }
}

void calculate(double* p, const int N, double& mean, double& var){
  
  mean=0;
  var=0; 
  
  for(int i=0; i<N; i++) {
    mean=mean+p[i];
  }
  
  mean=mean/N;
  
  for(int i=0; i<N; i++){
    var=pow((var-mean),2);
  }
  
  var=var/N;
  
}