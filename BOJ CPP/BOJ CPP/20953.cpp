#include <iostream>

unsigned long long dolmen(int a, int b) {
    int i, k, apb = a + b;
    unsigned long long sum;
    sum = 0;
    for (i = 0; i < apb; i++) {
        sum += i;
    }
    sum *= apb;
    return sum;
}

int main()
{
    int n, a, b;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        printf("%llu\n", dolmen(a, b));
    }
    return 0;
}