#include <iostream>
using namespace std;

int main() {
	int t;
	char n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u' || n=='A' ||n=='E' ||
	    n=='I' || n=='O' ||n=='U')
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
