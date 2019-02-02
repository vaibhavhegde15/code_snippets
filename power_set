/*
Power set: All subsets of given set
*/
#include <bits/stdc++.h>
#include<limits>
using namespace std;

int main(){
    char data[3] = {'a','b','c'};
    int set_size = 3;
    int size = pow(2,set_size);
    for(int i=0; i<size; i++){
        for(int j=0; j<set_size; j++){
            if(i & (1 << j)){
                printf("%c",data[j]);
            }
        }
        printf("\n");
    }
}
