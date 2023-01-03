#include <iostream> 

using  namespace std;

int main()
{
	
	int n=1, p = 1000, r = 5;
	cout << "your benefices after 10 years --- ";
	while (n <= 10) {
		p = ((p / 100) * r) + p;
		n++;
		cout << p << endl;
	}
	cout << p;




	return 0;
}
