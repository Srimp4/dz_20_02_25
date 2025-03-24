#include <iostream>
int sum(int a, int b)
{
    if (a < 0) {
        if (a == 0) return a;
        else return sum(a + 1, b - 1);
    }
    if (a == 0) return b;
    else return sum(a - 1, b + 1);
}
int multiply(int a, int b) {
    if (b == 0) {
        return 0;
    }
    else {
        return a + multiply(a, b - 1);
    }
}

int main()
{
    int x; int y;
    std::cin >> x >> y;
    std::cout << sum(x, y);
    //i'm stoopid
    int a = 5;
    int b = 3;
    int result = multiply(a, b);
    std::cout << result;

    return 0;
}
