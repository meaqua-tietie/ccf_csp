/* CCF201409-1 相邻数对 */

#include <stdio.h>
#include <string.h>

#define N 10000
int flag[N + 2]; /* 标记数组：flag[i]=1表示i已经出现过，flag[i]=0表示i尚未出现过 */

int main(void)
{
    memset(flag, 0, sizeof (flag)); /* 清除标志数组flag[]，使其每个元素均为0 */

    int n, a, cnt = 0;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &a); /* 读入数据 */
        flag[a] = 1;
        if (flag[a - 1]) cnt++; /* 判断和统计：小1的数已经存在 */
        if (flag[a + 1]) cnt++; /* 判断和统计：大1的数已经存在 */
    }
    printf("%d\n", cnt); /* 输出结果 */

    return 0;
}
