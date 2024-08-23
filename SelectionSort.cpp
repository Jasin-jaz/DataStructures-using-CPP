//Program to perform selection sort
#include <iostream>
using namespace std;

class SelectionSort {
private:
    int a[25], n;

public:
    void read();      // Function to read array elements
    void sort();      // Function to sort array using Selection Sort
    void display();   // Function to display array elements
};

void SelectionSort::read() {
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter elements in the array:\n";
    for (int i = 0; i < n; i++) 
        cin >> a[i];
}

void SelectionSort::sort() {
    int k = 0; 
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            k++;
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element of the unsorted part
        int temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }
    cout << "\nArray elements after sorting:\n";
    for (int i = 0; i < n; i++)
        cout << a[i] << "\t";
    cout << "\nNumber of comparisons: " << k << endl;
}

void SelectionSort::display() {
	cout << "Elements before sorting:\n";
    for (int i = 0; i < n; i++)  
        cout << a[i] << "\t";
    cout << endl;
}

int main() {
    SelectionSort s;
    s.read();
    s.display();
    s.sort();
    return 0;
}
