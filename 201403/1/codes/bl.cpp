/* CCF201403-1 相反数 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 1000
int flag[N+1];

int main(void)
{
    memset(flag, 0, sizeof(flag)); /* 变量初始化：清零 */

    int n, a, cnt = 0;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &a);
        if(flag[abs(a)] == 1) cnt++; /* 判断负值是否已经存在 */
        flag[abs(a)] = 1; /* 设置标志 */
    }
    printf("%d\n", cnt); /* 输出结果 */

    return 0;
}
