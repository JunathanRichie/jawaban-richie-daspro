#include <stdio.h>
#include <math.h>
int main(){
    double gaguna1, gaguna2;
    scanf("%lf %lf",&gaguna1,&gaguna2);
    double x_orang,y_orang,x_tujuan,y_tujuan,besar_x,besar_y;
    scanf("%lf %lf %lf %lf %lf %lf",&x_tujuan,&y_tujuan,&besar_x,&besar_y,&x_orang,&y_orang);
    if((x_tujuan+besar_x/2>=x_orang&&x_tujuan-besar_x/2<=x_orang)&&(y_tujuan+besar_y/2>=y_orang&&y_tujuan-besar_y/2<=y_orang)){
        printf("KAMU SUDAH SAMPAI");
    }else{
        double jarak_x,jarak_y,jarak;
        jarak_x=(x_orang-x_tujuan)*(x_orang-x_tujuan);
        jarak_y=(y_orang-y_tujuan)*(y_orang-y_tujuan);
        jarak=jarak_x+jarak_y;
        jarak=sqrt(jarak);
        printf("%.2lf METER LAGI",jarak);
    }
}