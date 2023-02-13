// Topic: std::array

// Syntax: std::array<T, N> array;
// where T is type and N is the number of elements
// ex: std::array<int, 5> myNumbers;


// notice:
// 1. std::array is a container that encapsulates fixed size arrays.
// 2. Array size is needed at compile time as a form of a constant.
// 3. Passing std::array object is done by value. Passing c style array is done by reference.
// 4. Access elements:
//  a. at()
//  b. []
//  c. front()
//  d. back()
//  e. data() // gives access(pointer) to the underlying array

#include <iostream>
#include <array>

using namespace std;

template<std::size_t SIZE>
void print(std::array<int, SIZE> array);

int main(){
    
    // declare
    std::array<int, 5> myArray;

    array<int, 5> array1 = { 1,2,3,4,5}; // initializer list
    array<int, 5> array2 {{6,7,8,9,10}}; // uniform initialization
    array<int, 5> array3;
    array3 = {11,12,13,14,15};

    print(array1);
    print(array2);
    print(array3);

    array1.fill(111);
    print(array1);

    array1.swap(array2);
    print(array1);
    print(array2);
    
}

template <std::size_t SIZE>
void print(std::array<int, SIZE> array)
{
    for(int i= 0 ; i < SIZE; i++){
        cout << array.at(i) << " ";
    }
    cout << endl;
}
