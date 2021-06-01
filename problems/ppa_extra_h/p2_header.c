#include <stdio.h>
#include <stdlib.h>
#include "p2_header.h"


void func_swap_(    // 配列内の2つの要素を交換し，操作をSTDOUTに出力
  int* const array,   // 要素が交換される配列
  const int pos_a,    // 1番目の交換対象の操作番号
  const int pos_b    // 2番目の交換対象の操作番号
) {
  int tmp = array[pos_a];    // array[pos_a]の値をtmpに退避
  array[pos_a] = array[pos_b];    // array[pos_a]にarray[pos_b]を代入
  array[pos_b] = tmp;    // 退避したarray[pos_a]の値をarray[pos_b]に代入
  printf("SWAP(%2d,%2d)", pos_a, pos_b);
}

int comp_(    // 配列内の2つの要素を比較する関数
  int* const array,    // 要素の比較を行う配列
  const int pos_a,    // 1つ目の比較対象の要素番号
  const int pos_b    // 2つ目の比較対象の要素番号
) {
  if (array[pos_a] < array[pos_b]) return 1;    // 1つ目の比較対象の要素が2つ目の比較対象の要素より小さい時に1を返す
  return 0;    // そうでなければ0を返す
}

void print_array_(    // 配列をSTDOUTに表示する関数
  const int* const array,    // 表示する配列
  const int N    // 配列の要素数
) {
  for (int i=0; i<N; ++i) {
    printf(" %2d", array[i]);
  }
  printf("\n");
}

int* func_mallocation_(    // 配列の動的メモリ確保をおこなう関数
  const int N    // 配列の要素数
) {
  int* data = (int*)malloc(N * sizeof(int));    // int型メモリサイズN個分のメモリを確保する
  if (data == NULL) {    // メモリ確保に失敗した際のエラー処理
    printf("Can not allocate memory. 'data' is NULL.\n");
    exit(EXIT_FAILURE);
  }
  return data;    // 確保した配列のポインタを戻り値として返す
}

int reverse_array(    // 配列を逆順に並べ替える関数
int* array,    // 動的に確保された，並べ替えされる配列
int N    // 入力データの個数
) {
  int pos_a = 0;    // 入れ替え対象の要素番号（先頭から見ていく）
  int pos_b = N-1;    // 入れ替え対象の要素番号（末尾から見ていく）
  int comp_count = 0;    // 要素間の比較関数comp_の呼び出し回数のカウンタ
  
  while (pos_a < pos_b) {    // 先頭と末尾から順に見ていき，要素番号が
    comp_count += 2;    //
  
    if ((comp_(array, pos_a, pos_b) +    // 先頭から見ていった要素が末尾から見ていった要素よりも小さい時に1
         comp_(array, pos_b, pos_a))    // 先頭から見ていった要素が末尾から見ていった要素よりも大きい時に1
    == 1) {    // すなわち先頭から見ていった要素が末尾から見ていった要素と同じでないとき
        func_swap_(array, pos_a, pos_b);    // 配列内で２つの要素を交換する
        print_array_(array, N);    // 配列の状態をSTDOUTに出力
    }
    pos_a ++;    // 先頭から見ていく要素番号をインクリメントする
    pos_b --;    // 末尾から見ていく要素番号をデクリメントする
  }
  return comp_count;    // 要素間の比較関数comp_の呼び出し回数を返す
}

int* func_copy_val_(
    int* const array,
    const int pos_a,
    const int pos_b
) {
  array[pos_b] = array[pos_a];
  return array;
}

void print_array_range_(
  const int* const array,
  const int N,
  const int p, const int r) {
  int ri = 0;
  for (; ri < N; ++ri) {
    if (ri < p || r < ri) {
      printf(" **");
    } else {
      printf(" %2d", array[ri]);
    }
  }
  printf("\n");
}
