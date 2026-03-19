#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0; i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];		
		}
	}
	int max_ones = 0;
	int ans = -1;
	for(int i=0;i<n;i++){
		int count =0;
		for(int j=0;j<m;j++){
			if(a[i][j]==1){
				count++;
			}
		}
		if(count>max_ones){
			max_ones=count;
			ans=i;
		}
	}
	if(max_ones=0){
		cout<<-1;
	}
	else{
		cout<<ans;
	}
}
