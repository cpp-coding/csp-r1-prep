#include <bits/stdc++.h>
#include <windows.h>
#define s(a) system(a)
using namespace std;
int main()
{
	cout<<"Please enter total cnt: \n";
	int n;
	cin>>n;
	system("mkdir input");
	system("mkdir output");
	system("mkdir data");
	for (int i = 1; i <= n; i++)
	{
		cout << " PRODUCING DATA " << i << endl;
		stringstream ss;
		ss << i;
		string input = "input\\";
		ss >> input;
		input += ".in";
		string cmdline = ".\\gen.exe\ > " + input;
		cout << " INPUT = " << input << " COMMAND LINE IS " << cmdline << endl;
		s(cmdline.data());
		input = "";
	}
	for (int i = 1; i <= n; i++)
	{
		char i_ch = i + '0';
		stringstream ss;
		ss << i;
		string input = "input\\";
		string output = "output\\";
		ss >> input;
		ss.clear();
		ss << i;
		ss >> output;
		input += ".in";
		output += ".out";
		string cmdline = ".\\std.exe < " + input + " > " + output;
		cout << " EXECUTING STD " << i << endl;
		cout << " INPUT = " << input << " OUTPUT = " << output << " COMMAND LINE IS " << cmdline << endl;
		s(cmdline.data());
	}
	system("copy *.in input");
	system("copy *.out output");
	system("move *.in data");
	system("move *.out data");
	return 0;
}