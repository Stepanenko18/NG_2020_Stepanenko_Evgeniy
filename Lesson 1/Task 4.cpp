#include <iostream>

using namespace std;

    int main()
{
        int a;

        cout << "Skolko deneg vu polychaete?: ";
        cin >> a;

        if (a < 1000)
            cout << "Rabotai bolshe";

        if (a > 1001)
        {
            if (a < 999999)
                cout << "Tak derzhat!";
        }
        if (a > 1000000)
            cout << "Ti millioner!";

        cout << ", no ti molodec!";
}
