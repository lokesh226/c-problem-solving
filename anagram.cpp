#include<iostream>
using namespace std;
int main()
{
	string alpha="abcdefghijklmnopqrstuvwxyz";
	cout<<"enter the first string";
	string str1,str2;
	cin>>str1;
	cout<<"enter the second string";
	cin>>str2;
	if(str1.length()!=str2.length())
	{
		cout<<"Not a anagram";
	}
	else{
		for(int j=0;j<str1.length()-1;j++)
		{
		
		for(int i=0;i<str1.length();i++)
		{
			if(str1[i]>str1[i+1])
			{
				swap(str1[i],str1[i+1]);
			}
			
		}
	}
	
		for(int j=0;j<str2.length()-1;j++)
		{
		
		for(int i=0;i<str2.length();i++)
		{
			if(str2[i]>str2[i+1])
			{
				swap(str2[i],str2[i+1]);
			}
			
		}
		
		
	}
		int count=0;
		
		for(int i=0;i<str1.length();i++)
		{
			if(str1[i]==str2[i])
			{
				count++;
			}
		}
		if(count==str1.length())
		{
			cout<<"its anagram";
		}
		else{
			cout<<"its not anagram";
		}
	}
}
