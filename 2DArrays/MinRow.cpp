#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i = 0; i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for(int i = 0;i<n;i++){
		       	int ans = a[i][0];

       for(int j=0;j<m;j++){
       	if(a[i][j]<ans){
       		ans=a[i][j];
       	}

}
cout<<ans<<" ";

}
}

