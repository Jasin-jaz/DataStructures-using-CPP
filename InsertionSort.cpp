//Program to perform insertio sort
#include<iostream>
using namespace std;

class insertion {
    private: 
        int a[25], n;
    public: 
        void read();
        void display();
        void sort();
};

void insertion::read() {
    cout << "Enter the limit: ";
    cin >> n;
    cout << "Enter the array elements\n";
    for (int i = 0; i < n; i++) 
        cin >> a[i];
}

void insertion::display() {
    cout << "Array before sort\n";
    for (int i = 0; i < n; i++)  
        cout << a[i] << "\t";
    cout << endl;
}

void insertion::sort() {
    int comparisons = 0;
    for (int i = 1; i < n; i++) { 
        int key = a[i];
        int position = i - 1;

        // Shift elements of the sorted part of the array
        while (position >= 0 && a[position] > key) {
            comparisons++;
            a[position + 1] = a[position];
            position = position - 1;
        }
        a[position + 1] = key;
    }

    cout << "Array after sort\n";
    for (int i = 0; i < n; i++)  
        cout << a[i] << "\t";
    cout << "\nNumber of comparisons: " << comparisons << "\n";
}

int main() {
    insertion i;
    i.read();
    i.display();
    i.sort();
    return 0;
}

