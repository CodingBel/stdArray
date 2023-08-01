/*
* This program is about using the array class defined in the STL library
* This class works on fixed sized arrays and it needs to know the size of 
* array during compile time. 
*/

#include <iostream>
#include <array>

#define cout std::cout
#define endl std::endl; 

int main() {
	std::array <int, 5> myArray {1, 3, 5, 7, 9};
	//std::array <int, 5> myArray = {1, 3, 5, 7, 9}; // The same as line above 
	
	for (int i = 0; i < myArray.size(); i++){     // using at() to access array elements is exactly the 
		cout << myArray.at(i) << endl;			  // same as using [], however at() is bound safe meaning 
		cout << "Using [] " << myArray[i] << endl;	// it will thrown an exception if we try to access an 
	}												// illegal index and [] wouldn't!!. 

	cout << "************************************\n"; 
	
	cout << myArray.back() << endl;					// return last element 
	cout << myArray.front() << endl;				// return first element

	cout << "Memory Locatoins\n"; 
	cout << &myArray.front() << endl;			
	cout << myArray.data() << endl;					// Returns locaiton of the array. i.e its first elt 

	return 0; 
} 