//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b, c;
//	cout << "Enter the first number:";
//	cin >> a;
//	cout << "Enter the second number:";
//	cin >> b;
//	cout << "Enter the third number:";
//	cin >> c;
//	try
//	{
//		if(a-b==0)
//		{
//			throw "Division by zero error!";
//		}
//		double calculate = (a + b + c) / (a - b);
//		cout << "The result is: " << calculate << endl;
//	}
//	catch (const char* a)
//	{
//		cerr << a << endl;
//	}
//	return 0;
//}
#include<iostream>
using namespace std;
void test(int a,char c);
int main()
{
	int a;
	char c;
	cout << "Testing Multiple Catches" << endl;
	cout << "Enter the integer value:";
	cin >> a;
	cout << "Enter the character:";
	cin >> c;
	test(a, c);
	return 0;
}
void test(int a, char c)
try
{
	if (a > 0)
	{
		throw a;
	}
	else
	{
		throw c;
	}
}

   
	catch(int a)
	{
		cerr << "Caught an integer: " << a << endl;
	}
	catch (char c)
	{
		cerr << "Caught a character: " << c << endl;


	}
