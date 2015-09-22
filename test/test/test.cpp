#include<iostream>
#include<string>
int main()
{
	using namespace std;
	char word[5] = "?ate";
	for (char i = 'a'; strcmp(word, "zate"); i++)
	{
		cout << word << endl;
		word[0] = i;
	}
	cout << "After loop ends,word is " << word << endl;

	return 0;
}
