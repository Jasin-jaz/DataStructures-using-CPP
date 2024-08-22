//Program to perform linear search
#include <iostream>
using namespace std;

class linear {
private:
    int i, k, a[20], n;
public:
    void read();
    void search();
};

void linear::read() {
    cout << "Enter the limit: ";
    cin >> n;
    cout << "Enter the elements in an array:\n";
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter the element to be searched: ";
    cin >> k;
}

void linear::search() {
    i = 0;
    while ((i < n) && (a[i] != k)) {
        i = i + 1;
    }
    if (i < n && a[i] == k) {
        cout << "Key found\n";
        cout << "Number of comparisons: " << i + 1 << "\n";
    } else {
        cout << "Key not found\n";
        cout << "Number of comparisons: " << n << "\n";
    }
}

int main() {
    linear l;
    l.read();
    l.search();
    return 0;
}

