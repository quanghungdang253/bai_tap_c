#include<iostream>
#include<math.h>
using namespace std;
#define quantity 100  // quantity : số lượng 
     int exponential(int x,int y){   // exponential : luỹ thừa 
        int count = pow(x,y);
        return count;
     }
     int factorial(int n){ // factorial : giai thừa 
       int count = 1;
       for(int i = 1;i<=n;i++){      
               count*=i;
       }
       return count;
     }
     void pt_bac_2(float a, float b , float c){
         float denlta =(float)pow(b,2)-4*a*c;
         if(denlta < 0 ){
          cout << " phuong trinh vo nghiem " << endl;
         }
         if(denlta == 0 ){
          cout << " phuong trinh co nghiem kep x1 = x2 = " << (float)-b/2*a << endl;
         }
         if(denlta > 0){
          cout << " phuong trinh co hai nghiem phan biet : " << endl;
          cout << " x1 = " << (-b + sqrt(denlta))/(2*a) << endl;
          cout << " x2 = " << (-b - sqrt(denlta))/(2*a) << endl;
         }
     } // height : chiều cao 
     void height( int n ){
      float arra[n];
               for(int i = 0; i<n ; i++){
                   cout << " nhap vao chieu cao ban thu " << i << " : ";
                   cin >> arra[i];
               }             
               float max, min = arra[1];
               float tall , shortt;
              
               for(int i = 0 ; i<n ; i++){
                  if( arra[i] > max){                        
                        max = arra[i];
                         tall = i;
                  }             
                  if(arra[i] < min){                   
                     min = arra[i];
                    
                       shortt = i;
               }   
          }
       cout << " ban so " << tall <<   " cao nhat voi chieu cao la : " << max << " met " <<endl;
       cout << " ban so " << shortt << " thap nhat voi chieu cao la : " << min <<" met "<<endl;
       }
       void  number_prime(int n){  // number prime : số nguyên tố
        if(n==2){
          cout<< n << " la so nguyen to : " << endl;
        }
          if(n%2==0){
            cout<< n <<" khong phai la so nguyen to ";
          }
          int count;
          for(int i = 3;i<=n;i+=2){
            if(n%i==0){
              count = i;
              break;
            }
          }
          if(n==count){
            cout<< n <<   "  la so nguyen to : " <<endl;
          }
          else cout << n <<" khong phai so nguyen to : "<<endl; 
       }
       int lish_numbers_primes(int n){ // lish numbers prime : liet ke so nguyen to
           int count;
                for(int i = 2;i <= sqrt(n) ; i++){             
                   if(n%i==0){
                    return 0;
                   }                  
                }
                return n>1;
       }
       void common_convention(int n){
         cout << " uoc chung cua "<< n << " la : ";
              for(int i = 1;i<=n;i++){
                   
                   if(n%i==0){
                     cout << i << " ";                    
                   }      
              }
              cout << endl;
 }
 void MAX_MIN(int n){
         int arra[n];
         for(int i = 1;i<=n;i++){
               cout << " nhap vao so thu " << i <<" : ";
               cin >> arra[i];
         }
         int min = arra[1];
         int max = arra[1];
         for(int i = 1;i<=n;i++){
            if(arra[i] > max )max = arra[i];
            if(arra[i] < min )min = arra[i];
         }
         cout << " phan tu max = " << max <<endl;
         cout <<"  phan tu min = " << min <<endl;
 }
 void rectangle(int lenght, int width){                                       // length  1. *************
       for(int i=1;i<=lenght;i++){                                            //         2. *           *
             for(int j=1;j<=width;j++){                                       //         3. *************
                 if(i==1||i==lenght||j==1||j==width){                         // rectangle: hình chữ nhật 
                   cout <<"*";                                                // length : chiều dài
                 }                                                            // width : chiều rộng 
                 else cout <<" ";            
             }
             cout <<"\n";
       }
  }
  void triangle(int n){
     for(int i = 1;i<=n;i++){
          for(int j = 1;j<=n-i;j++){
                cout <<" ";
          }
          for(int j = 1;j<=2*i-1;j++){
            cout<<"*";
          }
          cout<< endl;
     }
  }  
  void rhombus(int n){
      for(int i = 1;i<=n;i++){
             for(int j = 1;j<=n-i;j++){
                 cout <<" ";
             }
      for(int j = 1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout << endl;
       }
       for(int i = 1;i<=n-1;i++){
           for(int j = 1;j<=i;j++){
                 cout<<" ";
           } 
           for(int j = 1;j<=2*(n-i)-1;j++){
              cout<<"*";
           } 
           cout << endl;   
  }
  }     
         void count_number(int n){
               int count = 0;
float valuee = n;
if(n == 0){
   count = 1;
}
              while(valuee!=0){
                   valuee = valuee / 10;
                    count ++;
         }
cout << " so " << n <<" co " << count << " chu so " <<endl;
}
void Check_square_numbers(int n){
          if(pow(sqrt(n),2)==n){
                    cout << n << " la so chinh phuong " <<endl;
          }
else{
      cout << n << " khong phai la so chinh phuong " <<endl;
}

int main(){                                                                                //rhombus :  hình thoi 
  while(true){                                                                              
cout<<"-----------------------------MENU-------------------------------------" << endl;    //triangle : hình tam giác
cout<<"1 .  TINH LUY THUA x^y                                               -" << endl;                                   
cout<<"2 .  TINH GIAI THUA                                                  -" << endl; 
cout<<"3 .  TINH PHUONG TRINH BAC HAI                                       -" << endl;
cout<<"4 .  CHIEU CAO HOC SINH                                              -" << endl;
cout<<"5 .  KIEM TRA SO NGUYEN TO                                           -" << endl;
cout<<"6 .  LIET KE SO NGUYEN TO CUA N                                      -" << endl;
cout<<"7 .  TIM UOC CUNG CUA MOT SO TU NHIEN                                -" << endl;
cout<<"8 .  TIM SO LON NHAT VA SO NHO NHAT                                  -" << endl;
cout<<"9 .  VE HINH CHU NHAT BANG DAU SAO                                   -" << endl;
cout<<"10.  VE HINH TAM GIAC BANG DAU SAO                                   -" << endl;
cout<<"11.  VE HINH THOI BANG DAU SAO                                       -" << endl;
cout<<"12.  ĐEM SO SO LUONG SO SO NGUYEN DUONG                              -" << endl;
cout<<"13.  KIEM TRA SO CHINH PHUONG                                        -" << endl;
    int choose;
    int n;
    cout <<" lua chon so : ";
          cin >> choose;
    switch(choose){
             case 1:{
         int x;
            cout <<" nhap vao x  = ";
            cin >> x;
            int y;
            cout <<" nhap vao y = ";
            cin >> y ;
            cout << " x^y = " << exponential(x,y)<<endl;
            break;
          }
         case 2:{
             cout<< " nhap vao so giai thua : ";
             cin >> n;
             cout << n << " ! = " << factorial(n) << endl;
             break;
         }
         case 3:{
        cout<<" phuong trinh bac hai co dang ax2 + bx + c " <<endl;
            int a; cout<< " nhap a = "; cin >> a;
          
            int b; cout<< " nhap b = "; cin >> b;
            int c; cout<< " nhap c = "; cin >> c;
             pt_bac_2(a,b,c);
             break;
                }
         case 4:{
     
            int n;
            cout<<" nhap vao so luong hoc sinh : ";
            cin >> n;
            height(n);
             break;
         }
         case 5:{
             int n; 
            cout<<" nhap so nguyen to de kiem tra : ";
            cin >> n;
            number_prime(n);
            break;
         }
         case 6:{
       int n;
             cout<< " nhap n = ";
             cin>>n;
             cout << " cac so nguyen to cua n la : ";
           for(int i = 1;i<=n;i++){
                  if(lish_numbers_primes(i)){
                         cout << i << " ";
                  }                 
           }
           break;
         }
         case 7:{
     int enter_number;
            cout<<" nhap vao so tu nhien : ";
            cin >> enter_number;
           common_convention(enter_number);    
          break;
                }
          case 8:{
                  int n;
                 cout << " nhap vao so phan tu : ";
                 cin >> n;
                 MAX_MIN(n);            
                }
          case 9:{
            int length; cout << " nhap vao chieu dai hinh chu nhat :";
            cin >> length;
            int width;
            cout << " nhap vao chieu rong hinh chu nhat : ";
            cin >> width;
            rectangle(length,width); 
            break;
          }
         case 10:{
            int floor; 
            cout << " nhap vao so tang cua tam giac : ";
            cin >> floor;
            triangle(floor);   
            break;                                                          // floor : tầng
         }
         case 11:{
              int floor;
              cout << " nhap n = ";
              cin >> floor;
              cout<<endl;
              rhombus(floor);
         }
         case 12:{
              int n;
              cout << " nhap vao so tu nhien : ";
              cin >> n;
              while(n<0){
                   cout << " so khong hop le ! vui long nhap lai ";
                   cin >> n;
                   if(n>0){
                        break;
                          }
       
    }
              count_number(n);
              break;
         }
         case 13:{
              int square_number; 
              cout << " nhap vao so de kiem tra ";
              cin >> square_number;
              check_square_numbers(square_number);
              
              break;
         }
                                                                          // square number : số chính chương 
         } 
  }
    return 0;
}
