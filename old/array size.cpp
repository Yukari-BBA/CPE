#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int c_array[] = {2, 2, 3, 4, 5, 6, 7, 8, 9, 10,11};

    cout << "array size: " << sizeof c_array/sizeof c_array[0] << endl;
    return 0;
}
