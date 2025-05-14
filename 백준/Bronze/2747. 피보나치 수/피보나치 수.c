#include <stdio.h>

long long arr[55];

int main(int argc, char *argv[]) {

    int N;
    scanf("%d", &N); 
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i <= N; i ++) {
        arr[i] = arr[i-1] + arr[i-2];
    }

    printf("%lld", arr[N]);

    return 0;
}
