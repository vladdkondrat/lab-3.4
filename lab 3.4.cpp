#include <iostream>
#include <cmath>

using namespace std;

// Функція для перевірки належності точки сірим областям
bool isPointInShadedArea(double x, double y, double R1, double R2) {
    // Перша область: правий сектор (коло радіуса R1, обмежене першою чвертю)
    if (x >= 0 && y >= 0) {
        if (x * x + y * y <= R1 * R1) {
            return true;
        }
    }

    // Друга область: лівий сектор (коло радіуса R2, обмежене другою чвертю)
    if (x <= 0 && y >= 0) {
        if (x * x + y * y <= R2 * R2) {
            return true;
        }
    }

    return false;
}

int main() {
    double x, y, R1, R2;

    // Введення координат точки та радіусів R1 і R2
    cout << "Введіть координати точки (x, y): ";
    cin >> x >> y;
    cout << "Введіть значення R1: ";
    cin >> R1;
    cout << "Введіть значення R2: ";
    cin >> R2;

    // Перевірка належності точки зафарбованим областям
    if (isPointInShadedArea(x, y, R1, R2)) {
        cout << "Точка (" << x << ", " << y << ") знаходиться в зафарбованій області." << endl;
    }
    else {
        cout << "Точка (" << x << ", " << y << ") не знаходиться в зафарбованій області." << endl;
    }

    return 0;
}