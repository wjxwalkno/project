#include<iostream>
#include<string>
int main()
{
	using namespace std;
	char word[5] = "?ate";
char a[8];
	for (char i = 'a'; strcmp(word, "zatt"); i++)
	{
		cout << word << endl;
		word[0] = i;
	}
	cout << "After loop ends,word is " << word << endl;

	return 0;
}
