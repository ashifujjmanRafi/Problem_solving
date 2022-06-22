
#include <iostream>
#include <set>
using namespace std;

int main()
{
	// declaration of set container
	set<int,greater<int>> myset{ 1, 2, 3, 4, 5,-10,100,-100,-200 };

	// using begin() to print set
	for (auto it = myset.begin(); it !=
							myset.end(); ++it)
		cout << ' ' << *it;
		
	cout << endl <<*myset.end()-3 <<endl;
	return 0;
}

