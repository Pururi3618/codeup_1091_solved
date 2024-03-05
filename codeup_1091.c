#include <stdio.h>
int main() {
    long long int a, m, d, n;   //곱하기 특성상 int의 범위를 넘는 값이 나타날 수 있으므로 long long int 사용
    scanf("%lld %lld %lld %lld", &a, &m, &d, &n);   //a : 시작값, m : 곱해지는 값, d : 더해지는 값. n : 번째
    for( ; (n-1) > 0; n--) {    //구문을 줄이기 위해 for문 사용
        a = (a * m) + d;    //a에 m을 곱하고 d를 더한 것을 a에 대입
    }
    printf("%lld", a);  //a값 출력
}