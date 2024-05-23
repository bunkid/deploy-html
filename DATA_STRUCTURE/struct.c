#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Sinhvien {
    char MSSV[20];
    char Name[20];
    char Class[20];
    double GPA;
 }; 
typedef struct Sinhvien SV;

typedef struct Date {
     int day, month, year;
} Date; 

typedef struct Hour{
    int hour, minute, second;
}Hour;

typedef struct Ticket{
    Date ngayXem;
    Hour gioXem;
    char tenPhim[20];
    double giaVe;
   // SV Duyen;
}Ticket;

typedef struct student {
    char ten[20];
    double diem;
}student;


//xay dung ham nhap thong tin -> trả về 1 struct
student nhap(){
    student X;
    fgets(X.ten, sizeof(X.ten), stdin);
    scanf("%lf", &X.diem);
    return X;
}
void xuat(student A){
    printf("%s %.2lf\n", A.ten, A.diem);
}
//xay dựng hàm vói tham số là con trỏ -> trả về một con trỏ
void nhap2(student *A){
    fgets(A->ten, sizeof(A->ten), stdin);
    scanf("%lf", &A->diem);
}
void xuat2(student *A){
    printf("%s %.2lf", A->ten, A->diem);
}

int main(){
//  SV Duyen; //dot operator
//  scanf("%s", Duyen.MSSV);
//  scanf("%s", Duyen.Class);
//  getchar();
//  gets(Duyen.Name);
//  scanf("%lf",&Duyen.GPA);
//  printf("%s %s %s %.2lf\n", Duyen.MSSV, Duyen.Name, Duyen.Class, Duyen.GPA);

//  Ticket Ve1;
//  printf("Nhap ngay xem (dd mm yy): ");
//   scanf("%d%d%d", &Ve1.ngayXem.day, &Ve1.ngayXem.month, &Ve1.ngayXem.year);
//  printf("Nhap gio xem (hh mm ss): ");
//   scanf("%d%d%d", &Ve1.gioXem.hour,&Ve1.gioXem.minute,&Ve1.gioXem.second);
//  getchar();
//  printf("nhap ten phim: ");
//  fgets(Ve1.tenPhim, sizeof(Ve1.tenPhim), stdin);
//  printf("nhap gia ve: ");
//  scanf("%lf", &Ve1.giaVe);
//  printf("Ngay Xem: %d %d %d| Gio Xem: %d %d %d| Ten phim: %s | Gia Ve: %.2lf",Ve1.ngayXem.day,Ve1.ngayXem.month,Ve1.ngayXem.year,Ve1.gioXem.hour,Ve1.gioXem.minute,Ve1.gioXem.second,Ve1.tenPhim, Ve1.giaVe);
 
printf("nhap thong tin theo casch 1 :");
student Duyen = nhap(); // vì hàm nhập trả về một student A nên gán student Duyen = Student A
xuat(Duyen); // Duyen is argument, truyền argument thì không cần truyền kiểu dữ liệu


printf("nhap thong tin theo cach 2 :");
student Nha = nhap2();
xuat2(&Nha);
}
