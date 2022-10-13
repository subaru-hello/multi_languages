#include <stdio.h>
#include "./pointa.h"
int main(void)
{
    int a  = 15;     /* aに5を代入 */
    int b = 20;    /* bにaの場所を代入 */
    
    printf("初期値: a = %d, b = %d\n", a, b);
    
    /* 値の交換 */
    swap_ints(a, b);
    
    /* 普通に交換した時の値を表示 */
    printf("ノーマル: a = %d, b = %d\n", a, b);

    pointa(&a, &b);

       /* 交換後の値を表示 */
    printf("ポインタ: a = %d, b = %d\n", a, b);
    
    return 0;
}


void swap_ints(int a, int b)
{
    int temp;
    
    /* 値を交換する */
    temp = a;
    a    = b;
    b    = temp;
}

void pointa(int *pa, int *pb)
{
    int temporally_num;
    
    /* 値を交換する */
    temporally_num = *pa;
    *pa  = *pb;
    *pb  = temporally_num;
}

//コンパイル
// % gcc -o ./c/pointa ./c/pointa.c
//実行
// % ./c/pointa                    
// 初期値: a = 15, b = 20
// ノーマル: a = 15, b = 20
// ポインタ: a = 20, b = 15