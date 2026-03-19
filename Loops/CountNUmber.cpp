#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long n;
	cin>>n;
	long long positive = 0, negative = 0, even = 0, odd = 0;
	for (int i =0; i <n;i++){
	    long long x;
	    cin>>x;
	    if(x>0)
	    positive++;
	    if(x<0)
	    negative++;
	    if(x % 2 ==0)
	    even++;
	    else
	        odd++;
	    
	}
	    cout<<positive<<endl;
	    cout<<negative<<endl;
	    cout<<even<<endl;
	    cout<<odd<<endl;
	return 0;
 
}
