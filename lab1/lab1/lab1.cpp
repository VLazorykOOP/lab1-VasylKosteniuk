#include <iostream>

using namespace std;

const int MAX_SIZE = 300; // Максимальний розмір масивів

int main() {
    int choice;
    cout << "Enter the code number (1, 2, or 3): ";
    cin >> choice;

    if (choice == 1) {
        const int N = 10; // Розмір масиву А
        int A[N] = { 5, 12, 8, 15, 9, 10, 11, 7, 14, 6 }; // Початковий масив А
        int B[N]; // Результатний масив В
        int count = 0; // Лічильник елементів, які більші за 10

        // Перебір елементів масиву А
        for (int i = 0; i < N; i++) {
            if (A[i] > 10) {
                B[count] = A[i]; // Додавання елементу до масиву В
                count++; // Збільшення лічильника
            }
        }

        // Виведення елементів масиву В
        for (int i = 0; i < count; i++) {
            cout << B[i] << " ";
        }
        cout << endl;
    }
    else if (choice == 2) {
        const int N = 10; // Розмір масиву
        int A[N] = { 7, 9, 4, 12, 5, 3, 8, 6, 11, 2 }; // Початковий масив
        int T1 = 10; // Значення T1
        int T2 = 8; // Значення T2
        int lastMinIndex = -1; // Індекс останнього мінімального елемента

        // Перебір елементів масиву
        for (int i = 0; i < N; i++) {
            if (A[i] < T1 && A[i] > T2) {
                if (lastMinIndex == -1 || A[i] <= A[lastMinIndex]) {
                    lastMinIndex = i; // Оновлення індексу останнього мінімального елемента
                }
            }
        }

        cout << "The number of the last minimal element: " << lastMinIndex << endl;
    }
    else if (choice == 3) {
        int n; // Розмір масивів
        int X[MAX_SIZE]; // Масив X
        int Y[MAX_SIZE]; // Масив Y

        // Введення розміру масивів
        cout << "Enter the size of the arrays (n): ";
        cin >> n;

        // Введення елементів масиву X
        cout << "Enter the elements of the array X:\n";
        for (int i = 0; i < n; i++) {
            cout << "X[" << i << "]: ";
            cin >> X[i];
        }

        // Введення елементів масиву Y
        cout << "Enter the elements of the array Y:\n";
        for (int i = 0; i < n; i++) {
            cout << "Y[" << i << "]: ";
            cin >> Y[i];
        }

        int unionProduct = 1; // Добуток елементів об'єднання
        int unionSum = 0; // Сума елементів об'єднання

        // Обчислення добутку і суми елементів об'єднання
        for (int i = 0; i < n; i++) {
            unionProduct *= X[i];
            unionSum += X[i];
            unionProduct *= Y[i];
            unionSum += Y[i];
        }

        // Виведення елементів об'єднання та їх суми
        cout << "Elements of association: ";
        for (int i = 0; i < n; i++) {
            cout << X[i] << " " << Y[i] << " ";
        }
        cout << endl;
        cout << "The sum of the union elements: " << unionSum << endl;
        cout << "The product of the union elements: " << unionProduct << endl;
    }
    else {
        cout << "Invalid code number entered." << endl;
    }

    return 0;
}
