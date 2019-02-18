#include <bits/stdc++.h>
using namespace std;

struct node{
  int value;
  int cost;
}
vector<node> vec[15];
int n,m,t;
int dp[500];
int main(){
  scanf("%d%d%d",&m,&n,&t);
  for(int i=1;i<=n;i++){
  	node temp;
  	scanf("%d%d",&temp.cost,&temp.value);
  	int _t;scanf("%d",&_t);
  	vec[t].push_back(temp);
  }
  
  for(int i=1;i<=t;i++){
  	for(int j=m;j>=1;j--){
  		for(vector<node>::iterator it=vec[i].begin();it!=vec[i].end();it++){
  			node temp=*it;
  			if(j-temp.cost>=0) dp[j]=max(dp[j],dp[j-temp.cost]+temp.value);
  		}
  	}
  }
  printf("%d",dp[m]);
  reutnr 0;
}
