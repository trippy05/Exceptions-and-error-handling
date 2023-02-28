#include <exception>
#include <iostream>
#include <cstring>
using namespace std;
int func(string str, int forbidden_length) {
    int str_length = str.size();
    if (str_length == forbidden_length)
        throw "Вы ввели слово запретной длины! До свидания";
    else
        return str_length;
}

int main() {
    int forbidden_length, str_length;
    cout << "Введите запретную длину: ";
    cin >> forbidden_length;
    string str;
    cout << "Введите слово: ";
    cin >> str;
    try {
       str_length = func(str, forbidden_length);
        cout << "Длина слова " << str << " равна " << str_length << endl;

    } catch (const char *err) {
        cerr << err << endl;
    }
    return 0;
}
