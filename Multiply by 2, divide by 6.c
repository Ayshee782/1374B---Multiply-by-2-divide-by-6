#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n;
        scanf("%lld", &n);

        int count2 = 0, count3 = 0;

        while (n % 2 == 0) {
            n /= 2;
            count2++;
        }
        while (n % 3 == 0) {
            n /= 3;
            count3++;
        }

        if (n != 1 || count2 > count3) {
            printf("-1\n");
        } else {
            printf("%d\n", count3 + (count3 - count2));
        }
    }
    return 0;
}

