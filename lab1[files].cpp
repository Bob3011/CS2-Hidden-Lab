#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
	ofstream file1;
	int num;

	file1.open("file1.txt");

	if (file1.fail())
	{
		cout << "an error has occured\n";
		exit(1);
	}
	else
	{
		cout << "please enter numbers\n";
		for (int i = 0; i < 10; i++)
		{
			cin >> num;
			file1 << num;
		}
	}

	file1.close();

	ifstream fileOutput;
	string temp;

	fileOutput.open("file1.txt");

	if (fileOutput.fail())
	{
		cout << "an error occured\n";
		exit(1);
	}
	else
	{
		while (getline(fileOutput, temp))
		{
			cout << temp;
			cout << endl;
		}
	}

	fileOutput.close();

	return 0;
}