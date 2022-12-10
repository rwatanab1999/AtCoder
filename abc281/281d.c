#include <stdio.h>
#include <stdlib.h>

void quick_sort(unsigned long long *arr, unsigned long long size) {
  // 配列のサイズが 1 以下の場合は処理を打ち切る
  if (size <= 1) return;

  // 枢軸を定義する
  unsigned long long pivot = arr[size / 2];

  // i と j を定義する
  int i = 0;
  int j = size - 1;

  while (1) {
    // i が pivot より大きい値を指すように配列内を探索する
    while (arr[i] < pivot) i++;
    // j が pivot より小さい値を指すように配列内を探索する
    while (arr[j] > pivot) j--;

    // i が j より小さい場合は、i と j の位置にある値を交換する
    if (i < j) {
      unsigned long long tmp = arr[i];
      arr[i] = arr[j];
      arr[j] = tmp;
      i++;
      j--;
    }
    // i と j の値が等しくなった場合、または j が i より小さくなった場合は処理を打ち切る
    else {
      break;
    }
  }
  // 分割した配列の左右の部分について、再帰的に quick_sort 関数を呼び出す
  quick_sort(arr, i);
  quick_sort(arr + i, size - i);
}


int main() {
  // N, M, K を入力
  unsigned long long N, M, K;
  scanf("%llu%llu%llu", &N, &M, &K);

  // N 個の整数を入力
  unsigned long long A[N];
  for (int i = 0; i < N; i++) {
    scanf("%llu", &A[i]);
  }

  // i=1,…,N−M+1 に対して処理を行う
  for (int i = 0; i < N - M + 1; i++) {
      unsigned long long ans = 0;
    // M 個の整数を昇順に並べ替える
    unsigned long long B[M];
    for (int j = 0; j < M; j++) {
      B[j] = A[i + j];
      //printf("%d", B[j]);
    }
    //printf("\n");
    quick_sort(B, M);
    //printf("---%d%d%d%d\n", B[0], B[1], B[2], B[3]);

    // 先頭 K 個の値の総和を計算する
    unsigned long long sum = 0;
    for (int j = 0; j < K; j++) {
      sum += B[j];
    }

    // 総和を答えに加算する
    ans += sum;
    if(i == 0)
        printf("%llu", ans);
    else
        printf(" %llu", ans);
  }

  // 答えを出力
  printf("\n");


  return 0;
}