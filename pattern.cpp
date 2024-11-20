#include <iostream>
using namespace std;
void pattern01(int n)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern02(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern03(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern04(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern05(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern06(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

void pattern07(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }
        cout << endl;
    }
}

void pattern08(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < (2 * n) - (2 * i) - 1; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        cout << endl;
    }
}

void pattern09(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        int star = i;
        if (i > n)
            star = 2 * n - i;
        for (int j = 0; j < star; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern10(int n)
{
    int start = 1;
    for (int i = 1; i <= n; i++)
    {
        i % 2 == 0 ? start = 0 : start = 1;
        for (int j = 0; j < i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

void pattern11(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // nubers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // spaces
        for (int j = 1; j <= (2 * n) - (2 * i); j++)
        {
            cout << " ";
        }
        // numbers
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern12(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        // nubers
        for (int j = 1; j <= i; j++)
        {
            cout << count++ << " ";
        }
        cout << endl;
    }
}

void pattern13(int n)
{
    char alpha = 65;
    for (int i = 1; i <= n; i++)
    {
        // nubers
        for (int j = 1; j <= i; j++)
        {
            cout << alpha++ << " ";
        }
        cout << endl;
    }
}

void pattern14(int n)
{
    // char alpha = 65;
    for (int i = 1; i <= n; i++)
    {
        // nubers
        for (int j = 65; j <= 65 + i; j++)
        {
            char alpha = j;
            cout << alpha << " ";
        }
        cout << endl;
    }
}

void pattern15(int n)
{
    // char alpha = 65;
    for (int i = n; i >= 1; i--)
    {
        // nubers
        for (int j = 0; j < i; j++)
        {
            char alpha = 'A' + j;
            cout << alpha << " ";
        }
        cout << endl;
    }
}

void pattern16(int n)
{
    // char alpha = 65;
    for (char i = 'A'; i <= 'A' + n; i++)
    {
        // nubers
        for (char j = 'A'; j <= i; j++)
        {
            // char alpha = 'A'+j;
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern17(int n)
{
    for (int i = 1; i <= (2 * n) - 1; i++)
    {

        for (int j = 1; j <= (2 * n) - i; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= (2 * i + 2) - (2 * n); j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= (2 * n) - i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

int main()
{
    int n = 5;
    // pattern01(n);
    // pattern02(n);
    // pattern03(n);
    // pattern04(n);
    // pattern05(n);
    // pattern06(n);
    // pattern07(n);
    // pattern08(n);
    // pattern09(n);
    // pattern09(n);
    // pattern10(n);
    // pattern11(n);
    // pattern12(n);
    // pattern13(n);
    // pattern14(n);
    // pattern15(n);
    // pattern16(n);
    pattern17(n);
}
