// Auto.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
 
enum Cars{ m=1, gaz64, zma400, zic110, gaz69=0};
Cars operator+(const Cars& m, const int& b)
{
    Cars t = Cars(b + m);

    return(t = Cars(t % 5));
}

Cars operator+(const int& b, const Cars& m)
{
    return (m + b);
}
Cars operator++(Cars& m)
{
    return (m = Cars(m + 1));
}
Cars operator++(Cars& m, int)
{
    Cars t = m; m = Cars(m + 1);
    return t;
}
void print(const Cars& d)
{
    string Car[5] =
    {
        "M-1","ГАЗ-64","ЗМА-400","ЗИС-110","ГАЗ-69"
    };
    cout << Car[d] << endl;
};

int main()
{
    setlocale(LC_ALL, "Rus");


    Cars m = zic110;
    print(m + 1);
    print(2 + m);
    print(operator+(m,1));
    print(operator+(2, m));
    m++;
    print(m);
    print(++m);
    print(operator++(m));
    print(operator++(m, 0));
    print(m);

    system("pause");
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
