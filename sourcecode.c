#include <stdio.h>
#include <conio.h>

main(){
   int X,Y,hasil = 0;
   int pilih;
   int i;
   home:
   clrscr();
   printf("Pilih\n");
   printf("1. X + Y\n");
   printf("2. X - Y\n");
   printf("3. X * Y\n");
   printf("4. X ^ Y\n");
   printf("5. F(x)= 2x^2-3x+1\n");
   printf("6. Balik\n");
   printf("Pilih : ");scanf(" %d",&pilih);
   if(pilih==1){
      goto tambah;
   }
      else if(pilih==2){
       	goto kurang;
      }
         else if(pilih==3){
             goto kali;
         }
            else if(pilih==4){
               goto pangkat;
            }
               else if(pilih==5){
               	  goto fungsi;
               }
                  else if (pilih==6){
               	     goto exit;
                  }
   getch();
   //fungsi tambah
   tambah:
   printf("Masukan  x : ");
   canf("%d",&X);
   printf("Masukan  y : ");
   scanf("%d",&Y);
   hasil = X + Y;
   printf("hasil : %d",hasil);
   getch();
   goto home;
   //fungsi kurang
   kurang:
   printf("Masukan x : ");
   scanf("%d",&X);
   printf("Masukan y : ");
   scanf("%d",&Y);
   hasil = X - Y;
   printf("hasil : %d",hasil);
   getch();
   goto home;
   //fungsi kali
   kali:
   printf("Masukan x : ");
   scanf("%d",&X);
   printf("Masukan y : ");
   scanf("%d",&Y);
   hasil = Y * X;
   printf("hasil : %d",hasil);
   getch();
   goto home;
   //fungsi pangkat
   pangkat:
   printf("Masukan x : ");
   scanf("%d",&X);
   printf("Masukan y : ");
   scanf("%d",&Y);
   hasil = X;
   for(i=1;i<Y;i++){
   hasil = hasil * X;
   }
   printf("hasil : %d",hasil);
   getch();
   goto home;
   //fungsi yang berada di soal
   fungsi:
   printf("Masukan x :");
   scanf("%d",&X);
   printf("Masukan y :");
   scanf("%d",&Y);
   for(i=X;i<=Y;i++){
      hasil = (2*(i*i))-((3*i)+1);
      printf("hasil : %d\n",hasil);
   }
   getch();
   goto home;
exit:
return 0;
}
