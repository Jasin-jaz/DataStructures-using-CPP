//Program to perform bubble sort
#include <iostream> 
using namespace std;  

class BubbleSort {
private:
    int a[25], n;  

public:
    void read();      // Function to read array elements
    void sort();      // Function to sort array using Bubble Sort
    void display();   // Function to display array elements
};

void BubbleSort::read() {
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter elements in the array:\n";
    for (int i = 0; i < n; i++) 
        cin >> a[i];
}

void BubbleSort::sort() {
    int k = 0;  
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {  
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
            k++;  
        }
    }
    cout << "Elements after sorting:\n";
    for (int i = 0; i < n; i++)  
        cout << a[i] << "\t";
    cout << "\nNumber of comparisons = " << k << endl;
}

void BubbleSort::display() {
	cout << "Elements before sorting:\n";
    for (int i = 0; i < n; i++)  
        cout << a[i] << "\t";
    cout << endl;
}

int main() {
    BubbleSort b;
    b.read();
    b.display();
    b.sort();
    return 0;
}

