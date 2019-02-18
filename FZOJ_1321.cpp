#include <bits/stdc++.h>
using namespace std;

int n,m;
int v[30],c[30];

int dp[30000+4000];

int main(){
  scanf("%d %d",&n,&m);
  
  for(int i=1;i<=m;i++){
    scanf("%d %d",&c[i],&v[i]);
    v[i]*=c[i];
  }
  
  for(int i=1;i<=m;i++){
    for(int j=n;j>=c[i];j--){
      dp[j]=max(dp[j],dp[j-c[i]]+v[i]);
    }
  }
  
  printf("%d",dp[n]);

  return 0;
}
