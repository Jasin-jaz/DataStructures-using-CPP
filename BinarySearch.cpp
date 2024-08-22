#include <iostream>
using namespace std;

class BinarySearch {
private:
    int low, high, mid, n, key;
    int a[20];

public:
    void read();
    void search();
};

void BinarySearch::read() {
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements in sorted order:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;
}

void BinarySearch::search() {
    low = 0;
    high = n - 1;
    int comparisons = 0;

    while (low <= high) {
        mid = low + (high - low) / 2; // To avoid overflow for large low and high
        comparisons++;

        if (key == a[mid]) {
            cout << "Key found at position: " << mid + 1 << endl;
            cout << "Number of comparisons: " << comparisons << endl;
            return;
        } else if (key < a[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << "Key not found\n";
    cout << "Number of comparisons: " << comparisons << endl;
}

int main() {
    BinarySearch b;
    b.read();
    b.search();
    return 0;
}

