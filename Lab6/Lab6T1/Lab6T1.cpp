#include <iostream>
using namespace std;

enum BirthdayExp 
{
    NEGATIVE,
    OLD, 
    NOTREAL
};

class Birthday : public exception
{
public:
    Birthday(BirthdayExp code) : code(code) {};
    const char* what() const throw() override {
        if (code == BirthdayExp::NEGATIVE) return "Вы ввели отрицательное число!";
        if (code == BirthdayExp::OLD) return "Что-то не верится...";
        if (code == BirthdayExp::NOTREAL) return "Вы ещё не родились";
    }
private:
    BirthdayExp code;
};

void numbers(int q)
{
    if (q == 1) cout << "Один" << endl;
    if (q == 2) cout << "Два" << endl;
    if (q == 3) cout << "Три" << endl;
}

int main()
{
    setlocale(LC_ALL, "");
    cout << "Введите чило 1-3: " << endl;
    int a;
    cin >> a;
    try
    {
        if (a < 1 or a>3) throw "Некорректное значение";
        numbers(a);
    }
    catch (const char* msg) {

        cout << "Warring: " << msg << endl;

    }


    cout << "Введите свой день рождения: " << endl;
    int w;
    cin >> w;
    try
    {
        if (w >= 1850 and w <= 2022) cout << "Спасибо!" << endl;
        if (w < 1850) throw "Что-то не верится...";
        if (w > 2022) throw "Вы ещё не родились";
        if (w < 0) throw "Вы ввели отрицательное число!";
    }
    catch (const char* msg) {

        cout << "Warning: " << msg << endl;
    }
  
    cout << "Введите свой день рождения: " << endl;
    int e;
    cin >> e;
    try {
        if (e >= 1850 and e <= 2022) cout << "Спасибо!";
        if (e < 1850) throw Birthday(BirthdayExp::OLD);
        if (e > 2022) throw Birthday(BirthdayExp::NOTREAL);
        if (e < 0) throw Birthday(BirthdayExp::NEGATIVE);
    }
    catch (Birthday& msg) {
        cout << msg.what() << endl;
    }
    catch (exception& msg) {
        cout << msg.what() << endl;
    }
}
