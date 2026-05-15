//TASK1
#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
cout << "Enter the first number:";
cin >> a;	cout << "Enter the second number:";
	cin >> b;
	cout << "Enter the third number:";
	cin >> c;
	try
	{
		if(a-b==0)
		{
			throw "Division by zero error!";
		}
		double calculate = (a + b + c) / (a - b);
		cout << "The result is: " << calculate << endl;
	}
	catch (const char* a)
{
		cerr << a << endl;
	}
	return 0;
}
//TASK2
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

   
catch(int a)
   {
		cerr << "Caught an integer: " << a << endl;
	}
	catch (char c)
	{
		cerr << "Caught a character: " << c << endl;

//TASK 3
#include <iostream>
using namespace std;
class OutOfRangeException {
private:
    string message;

public:
    OutOfRangeException(string msg);
    string getMessage();
};

OutOfRangeException::OutOfRangeException(string msg) {
    message = msg;
}

string OutOfRangeException::getMessage() {
    return message;
}
float calculateAverage(int m1, int m2, int m3, int m4);

int main() {
    int a, b, c, d;
    cout << "Enter marks for 4 courses: ";
    cin >> a >> b >> c >> d;

    try {
        float avg = calculateAverage(a, b, c, d);
        cout << "Average = " << avg << endl;
    }
    catch (OutOfRangeException e) {
        cout << "Error: " << e.getMessage() << endl;
    }

    return 0;
}

/*
 * Preconditions:
 *   Four integer arguments must be provided
 *   Each mark must be in range 0 to 100 
 *
 * Postconditions:
 *   Returns the average of the four marks as a float
 *   If any mark is out of range, exception is thrown
 *
 * Invariants:
 *   Sum is always divided by 4
 *   No out-of-range mark is used in calculation
 *
 * Exceptions:
  * Throws OutOfRangeException if any mark < 0 or > 100
 */
float calculateAverage(int m1, int m2, int m3, int m4) {
    if (m1 < 0 || m1 > 100) throw OutOfRangeException("Mark is out of valid range (0-100).");
    if (m2 < 0 || m2 > 100) throw OutOfRangeException("Mark is out of valid range (0-100).");
    if (m3 < 0 || m3 > 100) throw OutOfRangeException("Mark is out of valid range (0-100).");
    if (m4 < 0 || m4 > 100) throw OutOfRangeException("Mark is out of valid range (0-100).");

    return (m1 + m2 + m3 + m4) / 4.0;
}
