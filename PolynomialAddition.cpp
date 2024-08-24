//Program to add two Polynomials using arrays
#include<iostream>
using namespace std;
class polynomial
{
    private: 
        int a[10], b[10], c[10], t1, t2;
    public: 
        void read();
        void addpoly();
        void display();
        void displayPolynomial(int poly[], int degree);  // New function to display a polynomial
};
void polynomial::read()
{
    cout << "Enter the highest power of the first polynomial: ";
    cin >> t1;
    cout << "Enter the coefficients of the first polynomial\n";
    for(int i = 0; i <= t1; i++)
        cin >> a[i];
    cout << "Enter the highest power of the second polynomial: ";
    cin >> t2;
    cout << "Enter the coefficients of the second polynomial\n";
    for(int j = 0; j <= t2; j++)
        cin >> b[j];
    // Display the polynomials
    cout << "First polynomial: ";
    displayPolynomial(a, t1);
    cout << "Second polynomial: ";
    displayPolynomial(b, t2);
}
void polynomial::displayPolynomial(int poly[], int degree)
{
    for(int k = degree; k > 0; k--)
        cout << poly[k] << "x^" << k << " + ";
    cout << poly[0] << "x^0" << "\n";
}
void polynomial::addpoly()
{
    int i, j, k;
    c[0] = 0;
    i = 0; j = 0; k = 0;
    while((i <= t1) && (j <= t2))
    {
        if(i == j)
        {
            c[k] = a[i] + b[j];
            i++; j++; k++;
        }
        else if(i > j)
        {
            c[k] = a[i];
            i++; k++;
        }
        else
        {
            c[k] = b[j];
            j++; k++;
        }
    }
    while(i <= t1)
    {
        c[k] = a[i];
        i++; k++;
    }
    while(j <= t2)
    {
        c[k] = b[j];
        j++; k++;
    }
}
void polynomial::display()
{
    int n;
    if(t1 > t2)
        n = t1;
    else if(t2 > t1)
        n = t2;
    else
        n = t1;
    cout << "Resultant polynomial: ";
    for(int k = n; k > 0; k--)
        cout << c[k] << "x^" << k << " + ";
    cout << c[0] << "x^0" << "\n";
}
int main()
{
    polynomial p;
    p.read();
    p.addpoly();
    p.display();
    return 0;
}

