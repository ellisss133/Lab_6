#include <iostream>

using namespace std;

// Даны два произвольных массива Х, Y размера n. Создать новый массив Z следующим образом:
// Zi=Xi * Yi , i=1,2,3…n
// Найти сумму положительных элементов массива X, сумму положительных элементов массива Y, и сумму положительных элементов массива Z. Исходные данные взять самостоятельно.

int main()
{
    setlocale(LC_ALL, "RU");
    int len;

    // ввод данных в массивы
    cout << "введите длинну массивов: ";
    cin >> len;

    float array_x[len];
    float array_y[len];
    float array_z[len];

    cout << "начните вводить элементы первого массива: " << endl;
    for (int i = 0; i < len; i++)
    {
        cin >> array_x[i];
    }

    cout << "начните вводить элементы второго массива: " << endl;
    for (int i = 0; i < len; i++)
    {
        cin >> array_y[i];
    }

    // вычисление произведения массивов
    for (int i = 0; i < len; i++)
    {
        array_z[i] = array_x[i] * array_y[i];
    }

    // нахождение суммы положительных элементов массива x
    float res_x = 0;
    for (int i = 0; i < len; i++)
    {
        if (array_x[i] >= 0)
        {
            res_x += array_x[i];
        }
    }

    // нахождение суммы положительных элементов массива y
    float res_y = 0;
    for (int i = 0; i < len; i++)
    {
        if (array_y[i] >= 0)
        {
            res_y += array_y[i];
        }
    }

    // нахождение суммы положительных элементов массива z
    float res_z = 0;
    for (int i = 0; i < len; i++)
    {
        if (array_z[i] >= 0)
        {
            res_z += array_z[i];
        }
    }

    // вывод результата
    cout << "X: " << res_x << endl
         << "Y: " << res_y << endl
         << "Z: " << res_z << endl;
}