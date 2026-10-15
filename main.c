#include <stdio.h>

int main(void)
{
    int flag = 1;
    int y;          /* y를 while 블록 밖(함수 블록)에서 선언해야 y=4; 에서 사용 가능 */

    while (flag != 0)
    {
        y = 3;
        flag = 0;
    }
    y = 4;
    printf("y = %d\n", y);

    return 0;
}
