#include<iostream>
#include<string>
int main()
{
	using namespace std;
int i;
	char word[5] = "?ata";
	for (char i = 'a'; strcmp(word, "zate"); i++)
	{
		cout << word << endl;
		word[0] = i;
	}
	cout << "After loop ends,word is " << word << endl;

	return 0;
}
