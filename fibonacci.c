/*
Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
fib[i] = fib[i-1]+fib[i-2]
*/

#include <bits/stdc++.h>
#include<limits>
using namespace std;
int main{
  int n;
  cin >> n;
  int fib[n+1];
  fib[0]=0;
  fib[1]=1;
  for(int i=2;i<=n;i++){
      fib[i]=fib[i-1]+fib[i-2];
  }
}
