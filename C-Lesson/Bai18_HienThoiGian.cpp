#include <stdio.h>
int main(){
	//18. Viết chương trình nhập vào số giờ, xuất ra số tương đương tính theo tuần, 
//theo ngày và theo giờ. 
	 long h; 
 
  printf( "Nhap so gio: " ); 
  scanf( "%ld", &h ); 
  printf( "%ld tuan, %ld ngay, %ld gio\n", 
       h / ( 24 * 7 ), ( h % ( 24 * 7 ) ) / 24, ( h % ( 24 * 7 ) ) % 24 ); 
  return 0; 
}