#include<stdio.h>

void nhap1(int a){ pass-by-value
    a+=100;
}

void nhap2(int *a){ // int *a : khai báo con trỏ pass-by-reference
    *a+=200;
}
int main(){
  int a = 100;
  nhap1(a);
  printf("gia tri cua bien a sau khi ham nhap1 được gọi:%d\n",a);

  nhap2(&a);
  printf("gia tri cua bien a sau khi ham nhap2 được gọi:%d\n ", a);

}