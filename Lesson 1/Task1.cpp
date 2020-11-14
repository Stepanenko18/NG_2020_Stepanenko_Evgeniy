#include <iostream>

using namespace std;

int main()
{
    int a,b;
    setlocale(LC_ALL, "Russian");
    cout << "Привет давай сыграем?" <<endl;
    cout << "1. Давай." << endl;
    cout << "2. Не хочу." << endl;
    cin >> a;
    switch(a)
    {
        case 2:cout << "Ну как хочешь";break;
        case 1:cout << "Вы очнулись в лесу... никого в округе нет. Возле вас лежит окровавленный нож,который уткнули в землю Неподалёку виднеется дым от костра... Вы также очень голодны" << endl;cout << "Ваши действия:" <<endl;
        cout << "1. Взять нож." <<endl;
        cout << "2. Отправится к костру." <<endl;
        cout << "3. Уйти в глубину леса." <<endl;
        cin >> b;
    }
    switch(b)
    {
        case 3:cout <<"Найс решение,темно же!вы шли перецепились и умерли!" <<endl;break;
        case 2:cout <<"Вас заметили волки и съели" <<endl;break;
        case 1:cout <<"Вы настругали палок и зделали убежище и дожили до утра!";
    }
}
