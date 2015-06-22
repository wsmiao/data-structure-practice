//
//  main.c
//  20150611-1
//
//  Created by 欣 陈 on 15/6/10.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//汉诺塔问题
// // 首先把三根柱子按顺序排成品字型，把所有的圆盘按从大到小的顺序放在柱子A上，
// 根据圆盘的数量确定柱子的排放顺序：若n为偶数，按顺时针方向依次摆放 A B C；
// // 若n为奇数，按顺时针方向依次摆放 A C B。
// // ⑴按顺时针方向把圆盘1从现在的柱子移动到下一根柱子，即当n为偶数时，
// 若圆盘1在柱子A，则把它移动到B；若圆盘1在柱子B，则把它移动到C；若圆盘1在柱子C，则把它移动到A。
// // ⑵接着，把另外两根柱子上可以移动的圆盘移动到新的柱子上。
// 即把非空柱子上的圆盘移动到空柱子上，当两根柱子都非空时，移动较小的圆盘。
// 这一步没有明确规定移动哪个圆盘，你可能以为会有多种可能性，其实不然，可实施的行动是唯一的。
// // ⑶反复进行⑴⑵操作，最后就能按规定完成汉诺塔的移动。
#include <stdio.h>
void hanoi(int n,char A,char B,char C){
    if(n == 1)
        printf("移动盘子%d从%c到%c\n",n,A,C);
    else{
        hanoi(n-1,A,C,B);
        printf("`移动盘子%d从%c到%c\n",n,A,C);
        hanoi(n-1,B,A,C);
    }
}
int main(){
    int n;
    printf("输入n：");
    scanf("%d",&n);
    hanoi(n,'A','B','C');
    return 0;
}