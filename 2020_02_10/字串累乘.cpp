#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1 , s2;
    cin>>s1>>s2;
    int a = s1.length() , b = s2.length();
    
    long long total_1 = 1 ;
    for(int i=0 ; i < a ; i++)
    {
    	total_1 *= (s1[i] - 'A' + 1 );
	}
	long long total_2 = 1 ;
    for(int i=0 ; i < b ; i++)
    {
    	total_2 *= (s2[i] - 'A' + 1 );
	}
	
	if(total_1 % 47 == total_2 % 47)
		cout<<"GO";
	else 
		cout<<"STAY";
	
    return 0;
}
