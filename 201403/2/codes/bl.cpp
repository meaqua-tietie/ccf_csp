/* CCF201403-2 窗口 */
 
#include <iostream>
 
using namespace std;
 
const int N = 10;
 
struct {
    int winno;
    int x1, y1, x2, y2;
} win[N];
 
struct {
    int x, y;
} point[N];
 
int order[N];
 
int main()
{
    int n, m;
 
    // 输入数据
    cin >> n >> m;
    for(int i=0; i<n; i++) {
        win[i].winno = i + 1;
        cin >> win[i].x1 >> win[i].y1 >> win[i].x2 >> win[i].y2;
    }
    for(int i=0; i<m; i++)
        cin >> point[i].x >> point[i].y;
 
    // 初始化窗口显示顺序
    for(int i=0; i<n; i++)
        order[i] = n - i - 1;
 
    // 处理（模拟）鼠标点击
    int winno, temp;
    for(int i=0; i<m; i++) {
        winno = -1;     // 被点击的窗口号，－１表示未被点击
 
        // 判断哪个窗口被点击
        for(int j=0; j<n; j++) {
            if(win[order[j]].x1 <= point[i].x && point[i].x <= win[order[j]].x2 &&
                    win[order[j]].y1 <= point[i].y && point[i].y <= win[order[j]].y2) {
                // 得到窗口号
                winno = win[order[j]].winno;
 
                // 将被点击的窗口移到最前端
                temp = order[j];
                for(int k=j; k>0; k--)
                    order[k] = order[k-1];
                order[0] = temp;
 
                break;
            }
        }
 
        // 输出结果
        if(winno == -1)
            cout << "IGNORED" << endl;
        else
            cout << winno << endl;
    }
 
    return 0;
}