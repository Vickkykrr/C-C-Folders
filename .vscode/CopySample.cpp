// A program to illustrate the function of
// vector_name.insert(position,val)
#include <bits/stdc++.h>
using namespace std;

int main()
{

	// Initialising the vector
	vector<int> vector_name{ 1, 2, 3, 4, 5 };

	// Printing out the original vector
	cout << "Original vector :\n";
	for (auto x : vector_name)
		cout << x << " ";
	cout << "\n";

	// Inserting the value 100 at position 3(0-based
	// indexing) in the vector
	vector_name.insert(vector_name.begin() + 3, 100);

	// Printing the modified vector
	cout << "Vector after inserting 100 at position 3 :\n";
	for (auto x : vector_name)
		cout << x << " ";
	cout << "\n";

	// Inserting the value 500 at position 1(0-based
	// indexing) in the vector
	vector_name.insert(vector_name.begin() + 1, 500);

	// Printing the modified vector
	cout << "Vector after inserting 500 at position 1 :\n";
	for (auto x : vector_name)
		cout << x << " ";
	return 0;
}

// This code is contributed by Abhijeet Kumar(abhijeet19403)
