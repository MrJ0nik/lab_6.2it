#include <iostream>
#include <iomanip>
#include <random>

using namespace std;

void randomnum(int a[], int size) {
    const int MIN_VALUE = 1;
    const int MAX_VALUE = 100;

    random_device rd;
    mt19937 generator(rd());
    uniform_int_distribution<int> distribution(MIN_VALUE, MAX_VALUE);

    for (int i = 0; i < size; ++i) {
        a[i] = distribution(generator);
    }
}

void printArray(int a[], int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << a[i];
    }
    cout << endl;
}


int sumArray(int a[], int size, int& count, int& sum) {
    count = sum = 0;  
    for (int i = 0; i < size; i++) {
        if (!(a[i] % 2 == 0)) {
            ++count;
            sum += a[i];
        }
    }
    return sum; 
}

int main() {
    const int size = 10;
    int a[size]; 


    randomnum(a, size);


    cout << "Array elements: ";
    printArray(a, size);

    int count, sum;


    sumArray(a, size, count, sum);


    cout << "Number of even elements: " << count << endl;
    cout << "Sum of even elements: " << sum << endl;

    return 0;
}
