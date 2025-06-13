#include<bits/stdc++.h>
using namespace std;
long long int sqrt(int n){
      int s =0;
      int e =n;
      long long int ans =-1;
      long long int mid = s +(e-s)/2;
      while(s<=e){
          long long int sqr = mid * mid;
          if(sqr == n){
              return mid;
          }
          if(sqr < n){
              ans = mid;
              s = mid;
          }else{
              e = mid-1;
          }
          mid = s + (e-s)/2;
      }
      return ans;
  }
int main(){
    return 0;
}