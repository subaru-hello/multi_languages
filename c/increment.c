#include <stdio.h>
//使用する関数を別ファイルにまとめてから呼び出している。
#include "./increment.h"
int main(void){
    // 型名 配列名[要素数]={0番の数値,1番の数値,2番の数値,･･･};
    // 要素数を指定しないと下記のようなエラーが出る
    // 式には pointer-to-object 型を使用する必要がありますが、型 "int" が使用されています
    int under_ten_arrays[10] ={23, 34, 2, 45};

    int i;
    // 繰り返し構文
    for(i=0; i<10; i++){
        add_nums(under_ten_arrays[i]);       /* 配列の参照 */
    };
    

    return 0;
}

int add_nums(int num_in_array){
    int sum;

    sum = 0;
    sum += num_in_array;
    printf("合計= %d\n", sum);
    return 0;
}

// => outputs
// 合計= 23
// 合計= 34
// 合計= 2
// 合計= 45
// 合計= 0
// 合計= 0
// 合計= 0
// 合計= 0
// 合計= 0
// 合計= 0