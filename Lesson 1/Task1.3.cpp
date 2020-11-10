#include <iostream>

using namespace std;

int main()
{
    int a,b,c;

    cout << "Skolko oreshkov nuzhno belochke?: ";
    cin >> a;
    cout << "Skolko oreshkov v odnoy shishke?: ";
    cin >> b;
    cout << "Skolko shishek bylo sobrano?: ";
    cin >> c;

    if (c * b >= a)
    {
    cout << "YES" << endl;
    }
    else
    {
    
    cout << "NO" <<endl;
    }
}

