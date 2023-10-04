#include <iostream>
#include <string>
#include <vector>
using namespace std;


string joinString(vector <string> vString, string delim)
{
	string s = "";
	//for (int i = 0; i < vString.size(); i++)
	//{
	//	if (i < vString.size()-1)
	//		s += vString[i] + delim;
	//	else
	//		s += vString[i];
	//}

	for (string& str : vString)
	{
		s += str + delim;
	}
	return s.substr(0, (s.length() - delim.length()));
}
string joinString(string arr[], int length, string delim)
{
	string s = "";
	//for (int i = 0; i < vString.size(); i++)
	//{
	//	if (i < vString.size()-1)
	//		s += vString[i] + delim;
	//	else
	//		s += vString[i];
	//}

	for (int i=0; i<length; i++)
	{
		s += arr[i] + delim;
	}
	return s.substr(0, (s.length() - delim.length()));
}

int main()
{
	vector <string> vString = { "Mohammad", "Fadi", "Ali", "Maherr", "Gomaa", "sayed" };
	string arr[]= { "Mohammad", "Fadi", "Ali", "Maherr", "Gomaa", "sayed" };

	cout << " Vector After Joining : ";
	cout << joinString(vString, " &&& ");
	cout << endl<< endl;
	cout << " Array After Joining : " ;
	cout << joinString(arr,6, " *$%$* ");


	system("pause>0");
	return 0;

}