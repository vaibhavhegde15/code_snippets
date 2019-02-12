#include <bits/stdc++.h>
using namespace std;

long kadane(vector<long> a){
  long tmax=0,max=0;
  for(long i = 0; i<a.size(); i++){
      tmax=tmax+a[i];
      if(tmax<0){
          tmax=0;
      }
      if(max<tmax){
          max=tmax;
      }
  }
  return max;
}

int main(){
  vector<long> a={1,-2,3,4,5}
  kadane(a);
}
