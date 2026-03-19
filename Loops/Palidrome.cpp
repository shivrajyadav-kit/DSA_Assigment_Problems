#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long n;
	cin>>n;
	long long count = 0;
	long long temp = n;
	while(n != 0){
	    count = (count*10) + n % 10;
	    n = n / 10;
	}
	if(count == temp){
	    cout<<"YES";
	}else{
	    cout<<"NO";
	}
	
	return 0;
 
}
