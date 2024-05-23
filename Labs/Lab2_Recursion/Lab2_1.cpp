//Дано натуральное число n. Выведите все числа от 1 до n.
#include <iostream>
using namespace std;

void foo(int &num, int &temp)
{
	
	if (temp <= num)
	{
		cout << temp << endl;
		++temp;
		foo(num, temp);
	}

}

int main(){

	int f = 1;
	int num = 8;
	foo(num, f);

	return 0;
}