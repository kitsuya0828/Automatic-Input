#ifndef _P2_HEADER_H_
#define _P2_HEADER_H_

void func_swap_(    // 配列内の2つの要素を交換し，操作をSTDOUTに出力
  int* const array,   // 要素が交換される配列
  const int pos_a,    // 1番目の交換対象の操作番号
  const int pos_b    // 2番目の交換対象の操作番号
);

int comp_(    // 配列内の2つの要素を比較する関数
  int* const array,    // 要素の比較を行う配列
  const int pos_a,    // 1つ目の比較対象の要素番号
  const int pos_b    // 2つ目の比較対象の要素番号
);

void print_array_(    // 配列をSTDOUTに表示する関数
  const int* const array,    // 表示する配列
  const int N    // 配列の要素数
);

int* func_mallocation_(    // 配列の動的メモリ確保をおこなう関数
  const int N    // 配列の要素数
);

int reverse_array(    // 配列を逆順に並べ替える関数
  int* array,    // 動的に確保された，並べ替えされる配列
  int N    // 入力データの個数
);

int* func_copy_val_(
  int* const array,
  const int pos_a,
  const int pos_b
);

#endif // _P2_HEADER_H_
