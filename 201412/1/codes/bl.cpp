/* CCF201412-1 门禁系统 */

#include <stdio.h>
#include <string.h>

#define N 1000
int cnt[N + 1];

int main(void)
{
    memset(cnt, 0, sizeof(cnt)); /* 变量初始化：清零 */

    int n, a;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a); /* 读入数据 */
        cnt[a]++; /* 计数 */
        if (i != 1) putchar(' '); /* 输出格式要求结果数据间一个空格隔开 */
        printf("%d", cnt[a]); /* 输出结果 */
    }
    putchar('\n');

    return 0;
}
