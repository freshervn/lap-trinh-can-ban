#include <stdio.h>
#include <stdlib.h>
void run(n)
{
    switch (n)
    {
    case 1: GiaiPhuongTrinhBacNhat();
    break;
    case 2: SoNgayTrongThang();
    break;
    case 3: CanhCuaTamGiac();
    break;
    case 4: KiemTraSoNguyenTo();
    break;
    case 5:CacSoNguyenToNhoHonN();
    break;
    case 6:KiemTraSoHoanHao();
    }
}
int main()
{
    printf("chon so tu 1 den 43\n");
    int n;
    do
    {
        scanf("%d",&n);
        run(n);
    }
    while ((n<=0)&&(n>43));
        printf("\n End!\n");
    return 0;
}

void GiaiPhuongTrinhBacNhat(){
    printf("bai 1:giai phuong trinh ax+b=\n nhap a,b\n");
    float a,b;
    scanf("%f%f",&a,&b);
    if (a==0)
    {
        if (b==0)
        {
            printf("phuong trinh vo so nhiem");
        }
        else
            printf("phuong trinh vo nhiem");
    }
    else
        printf("nhiem cua pt la : x=%.2f\n",-b/a);
}
void SoNgayTrongThang(){
    printf("bai 2: nhap vao ngay thang nam, cho biet thang do co bao nhieu ngay.\n nhap thang nam mm/yy \n");
    int m,y;
    scanf("%d%d",&m,&y);
    int t[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(y<0)
    {
        printf("nam khong hop le.\n");
    } else
    if (m<1||m>12) {
        printf("thang khong hop le\n");
    }
    else
    {
        if(y%400==0||(y%4==0&&y%100!=0))
           {
               t[1]=29;
           }
        printf("so ngay cua thang la:%d\n",t[m]);
    }
}
void CanhCuaTamGiac(){
    printf("bai 3: nhap do dai 3 canh tam giac, kiem tra xem la tam giac gi\n a,b,c=\n ");
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if (a+b>c&&a+c>b&&b+c>a&&a>0&&b>0&&c>0)
    {
        if (a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
           {
             printf("3 canh cua tam giac vuong\n");
           }
        if (a==b||a==c||b==c){
            if(a+b==c+c||b+c==a+a||a+c==b+b){
            printf("3 canh cua tam giac deu\n");
        } else
            printf("3 canh cua tam giac can\n");
    }
    } else
            printf("khong hai 3 canh cua tam giac");
}
void KiemTraSoNguyenTo(){
    printf("bai 4: kiem tra so nguyen to.\n Nhap so can kiem tra X=");
    int x;
    scanf("%d",&x);
    if (x<=2){
        if (x==2){
            printf("%d la so nguyen to",x);
        }
    else
                printf("%d khong la so nguyen to",x);
    }
    else
    {
    int p=2,max=sqrt(x);
    if (max*max==x){
            printf("%d khong la so nguyen to\n",x);
            return 0;
    }
    do{
        if (x%p==0){
            printf("%d khong la so nguyen to\n",x);
            return 0;
        }
        p++;
    } while (x>p||p<max);
    printf("%d la so nguyen to\n",x);
    }
}
int KiemTraSoNguyenTo2(int x)
{
    if (x<=2){
        if (x==2){
            printf("%d la so nguyen to\n",x);
            return 1;
        }
    else
                printf("%d khong la so nguyen to\n",x);
                return 0;
    }
    else
    {
    int p=2,max=sqrt(x);
    if (max*max==x){
            printf("%d khong la so nguyen to\n",x);
            return 0;
    }
    do{
        if (x%p==0){
            printf("%d khong la so nguyen to\n",x);
            return 0;
        }
        p++;
    } while (x>p||p<max);
    printf("%d la so nguyen to\n",x);
    return 1;
    }
}
void CacSoNguyenToNhoHonN()
{
    printf("bai 5: in ra cac so nguyen to nho hon N\n N= ");
    int n,s=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        int c=KiemTraSoNguyenTo2(i);
        if (c){s++;}
    }
    printf(" tong cac so nguyen to la :%d\n",s);
}
void KiemTraSoHoanHao(){
    printf("bai 6: Kiem tra so hoan hao\n N=");
    int n,max=sqrt(n);
    float s=0;
    scanf("%d",&n);
    for (int i=2;i<sqrt(n);i++)
    {
        if(n%i==0){
        s=s+n/i+i;
        }
    }
    if (max==sqrt(n)){
    s=s+1+sqrt(n);
    }
    else s=s+1;
    if (s==n){printf("%d la so hoan hao\n",n);}
}
