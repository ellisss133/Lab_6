#include <iostream>

using namespace std;

// Даны два произвольных массива Х, Y размера n. Создать новый массив Z следующим образом:
// Zi=Xi * Yi , i=1,2,3…n
// Найти сумму положительных элементов массива X, сумму положительных элементов массива Y, и сумму положительных элементов массива Z. Исходные данные взять самостоятельно.

void fill_arr(float arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

float el_sum(float arr[], int n)
{
    float res = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            res += arr[i];
        }
    }
    return res;
}

void mult_arr(float arr1[], float arr2[], float arr_res[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr_res[i] = arr1[i] * arr2[i];
    }
}

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
    fill_arr(array_x, len);

    cout << "начните вводить элементы второго массива: " << endl;
    fill_arr(array_y, len);

    // вычисление произведения массивов
    mult_arr(array_x, array_y, array_z, len);

    // нахождение суммы положительных элементов массива x
    float res_x = el_sum(array_x, len);

    // нахождение суммы положительных элементов массива y
    float res_y = el_sum(array_y, len);

    // нахождение суммы положительных элементов массива z
    float res_z = el_sum(array_z, len);

    // вывод результата
    cout << "X: " << res_x << endl
         << "Y: " << res_y << endl
         << "Z: " << res_z << endl;
}