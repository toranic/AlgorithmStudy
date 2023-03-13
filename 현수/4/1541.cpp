#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
	string s;
	cin >> s;
	int temp=0,result=0;
	bool key=false;
	for (int i = 0; i <= s.size(); i++)
	{
		if (s[i] == '+'||s[i]=='-'||i==s.size())
		{
			if (key==false)
			{
				result += temp;
				temp = 0;
			}
			else
			{
				result -= temp;
				temp = 0;
			}
		}
		else
		{
			temp *= 10;
			temp += s[i]-'0';
		}
		if (s[i] == '-')
		{
			key = true;
		}
	}
	cout << result;
}
