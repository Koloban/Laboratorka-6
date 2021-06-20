#include <iostream>
#include <stdlib.h>
using namespace std;

int menu() {
    int menu;
    int top = INT_MAX, bot = INT_MIN, num = 0;
    // Задаем верхнии и нижнии пределы, максимальные и минимальные для переменной типа  int 
    do {
        cout << "Choose var:" <<
            "\n1-top" <<
            "\n2-bot" <<
            "\n3-enter num" <<
            "\n4-exit\n";
        cin >> menu;
        // Для реализации меню используем switch
        switch (menu) {
        case 1:
            cout << "\nEnter top:";
            cin >> top;
            continue;
            // Запускаем цикл заново
            break;
        case 2:
            cout << "\nEnter bot:";
            cin >> bot;
            continue;
            // Запускаем цикл заново
            break;
        case 3:
            cout << "\nEnter num:";
            // Ловим ошибку при вводе не int-ого значения
            try {
                cin >> num;
                if (num > top || num < bot) {
                    continue;
                    //Запускаем цикл заново(вызов меню)
                }
                else {
                    return num;
                    // Возвращаем число, если оно входит в пределы
                }
            }
            catch (exception e) {
                return 0;
                // Если поймали ошибку ввода, а другой там быть не может, то возвращаемся обратно
            }
            break;
        case 4:
            return 0;
            // Выходим из программы
            break;
        }
    } while (true);




}

int main()
{
    //Сортировка массива

    int mas[10] = { 0,5,9,7,8,1,4,3,2,6 };

    for (int i = 0; i < 10; ++i) {
        int small = i;

        for (int k = 0; k < 10; ++k) {
            if (mas[small] < mas[k])
                swap(mas[small], mas[k]);
        }
    }

    for (int i = 0; i < 10; ++i) {
        cout << mas[i] << " " << endl;
    }

    int b = menu();
    if (b == 0) {
        return 0;
        // Если функция вернуля 0 - выходим из программы
    }

    cout << "\n\nNumber:" << b;
    // Проверка корректности возвращаемого числа 





}
