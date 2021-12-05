/* 3. Buat program BinarySearch dengan Rekursif ! (data tentukan sendiri)
Data : 2,5,8,10,14,32, 35, 41, 67, 88, 90, 101, 109
Data yang dicari : 10
Data 10 berada pada indek ke – 3 */

#include<stdio.h>
#include<stdlib.h>
#define size 10

int binsearch(int[], int, int, int);
int binsearch(int a[], int x, int low, int high) {
int mid;
    if (low > high)
    return -1;
    mid = (low + high) / 2;
    if (x == a[mid]) {
    return (mid);
 } else if (x < a[mid]) {

  binsearch(a, x, low, mid - 1);
} else {
  binsearch(a, x, mid + 1, high);
}

}

int main() {
int num, i, key, position;
int low, high, list[size];
   printf("\nMasukan Jumlah Besar data:");
   scanf("%d", &num);
   printf("\nMasukan Data:\n");

   for (i = 0; i < num; i++) {

   printf("Masukan data Index ke %d :",i);

   scanf("%d", &list[i]);
}
  low = 0;
  high = num - 1;
  printf("\nMasukan data yang ingin di cari : ");
  scanf("%d", &key);
  position = binsearch(list, key, low, high);
if (position != -1) {
  printf("\nData ke %d di temukan pada Index ke - %d", key,(position));
} else
  printf("\nData tidak di temukan");
  
return (0);
}
