//
//#include <stdio.h>
//#include <stdlib.h>
//
//
//#define DOLLAR   100
//#define QUARTER  25
//#define DIMES    10
//#define NICKEL   5
//#define PENNY    1
//
///* run this program using the console pauser or add your own getch, system("pause") or input loop */
//
//int main(int argc, char *argv[]) {
//int dollars; // dollar counts, 100 cents
//int quarters; // quarter counts, 25 cents
//int dimes; // dimes counts, 10 cents
//int nickels; // nickels counts, 5 cents
//int pennies; // pennies counts, 1 cents
//
//char name_I, surname_I; // initials of person
//int totalCents; // total cents of coins given
//int dollar_,change_; //total dollar and leftover change
//
//printf("Enter your initials:");
//scanf("%c%c",&name_I,&surname_I);
//
//printf("Enter count of dollars:");
//scanf("%d",&dollars);
//printf("Enter count of quarters:");
//scanf("%d",&quarters);
//printf("Enter count of dimes");
//scanf("%d",&dimes);
//printf("Enter count of nickels:");
//scanf("%d",&nickels);
//printf("Enter count of pennies:");
//scanf("%d",&pennies);
//
//
//// convert all coins in cents and get sumd
//totalCents = dollars*100 + quarters*25 + dimes*10 + nickels*5 + pennies*1;
//
//// find dollar and leftover change
//dollar_=totalCents/DOLLAR;
//change_=totalCents%DOLLAR,
//
//printf("ear %c. %c. \n",name_I,surname_I);
//printf("\t\t\tYou have %d $ and %d cents\n",dollar_,change_);
//
//
//return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//
//	int a,b,c,d,i;
//
//	for(i=1;i<=7;)
//	{
//	a=1;
//	a=b;
//	a+b=c;
//	b+c=d;
//	printf("%d\n",d);
//	}
//
//return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int i;
//	for(i=1;i<=50;i++)
//	{
//		if(i%5==0)
//		{
//			printf("%d\n",i);
//		}
//	}
//	
//return 0;
//}
//********************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//
//int main ()
//{
//	char operator;
//	double n1, n2;
//	
//	printf("Bir operator giriniz(+,-,*,/)");
//	scanf("%c",&operator);
//	printf("Iki sayi giriniz: ");
//    scanf("%lf %lf",&n1, &n2);
//	
//	
//	switch(operator)
//	{
//		case '+':
//			printf("%.1lf + %.1lf = %.1lf",n1,n2,n1+n2);
//			break;
//		case '-':
//			printf("%.1lf - %.1lf = %.1lf",n1,n2,n1-n2);
//			break;
//		case '*':
//			printf("%.1lf * %.1lf = %.1lf",n1,n2,n1*n2);
//			break;
//		case '/':
//			printf("%.1lf / %.1lf = %.1lf",n1,n2,n1/n2);
//			break;
//		default:
//			printf("HATA!!!OPERATOR DOGRU DEGIL.");			
//	}	
//	return 0;
//}
//
//
// Program to calculate the sum and average of positive numbers
// If the user enters a negative number, the sum and average are displayed.
//
//#include <stdio.h>
//
//int main() {
//
//   const int maxInput = 100;
//   int i;
//   double number, average, sum = 0.0;
//
//   for (i = 1; i <= maxInput; ++i) {
//      printf("%d. Enter a number: ", i);
//      scanf("%lf", &number);
//      
//      // go to jump if the user enters a negative number
//      if (number < 0.0) {
//         goto jump;
//      }
//      sum += number;
//   }
//
//jump:
//   average = sum / (i - 1);
//   printf("Sum = %.2f\n", sum);
//   printf("Average = %.2f", average);
//
//   return 0;
//}
// 
//#include <stdio.h>
//int main(){
//int num1, num2, more, less, i, sum=0; 
//  
// again: 
// printf("1.num: "); 
// scanf("%d",&num1); 
//  
// printf("2.num: "); 
// scanf("%d",&num2); 
//  
// if( num1==num2) 
// { 
//  goto again; 
// } 
// else 
// { 
//  if(num1>num2) 
//  { 
//   more=num1; 
//   less=num2; 
//  } 
//  
//     else  
//     { 
//      less=num1; 
//      more=num2; 
//     } 
//    }  
//    for(i=less; i<=more; i++) 
//    { 
//     sum=sum+i; 
// } 
// printf("total: %d",sum);
//}
//
//*************************************************************************
//#include <stdio.h> 
//#include <stdlib.h> 
// 
///* run this program using the console pauser or add your own getch, system("pause") or input loop */ 
// 
//void example1(){ 
//   
// FILE *out,*in; 
// double number; 
// int status; 
//  
// // Creating a File 
//// out=fopen("C:\\Users\\user\\Desktop\\myfile.txt","w"); 
////  
//// printf("Enter Your Number : "); 
//// status = scanf("%lf",&number); 
//// while(status != EOF){ 
////  fprintf(out,"%f",number); 
////  printf("Enter Your Number : "); 
////  status = scanf("%lf",&number); 
//// } 
////  
//// fclose(out); 
// 
// in=fopen("C:\\Users\\BEDÝRHAN\\Desktop\\programming\\notes\\deneme.txt","r");
// out=fopen("C:\\Users\\BEDÝRHAN\\Desktop\\programming\\notes\\deneme.txt","w"); 
//  
// status = fscanf(in,"%lf",&number); 
//  
// while(status == 1){ 
//  fprintf(out,"%.2f\n",number); 
//  status = fscanf(in,"%lf",&number); 
// } 
//  
// fclose(out); 
// fclose(in); 
//} 
// 
//int main(int argc, char *argv[]) { 
// 
// example1(); 
//  
// return 0; 
//}
//
//******************************************************************************************************
//#include <stdio.h>
//int main() {
//    int num;
//    printf("Enter an integer: ");
//    scanf("%d", &num);
//
//    // true if num is perfectly divisible by 2
//    if(num % 2 == 0)
//        printf("%d is even.", num);
//    else
//        printf("%d is odd.", num);
//    
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int i;
//	printf("Bir sayi giriniz:");
//	scanf("%d",&i);
//	if(i%2==0)
//		printf("Sayi cift krdsm.",i);
//	else
//		printf("sayi tek krdsm.",i);
//		
//		return 0;	
//}
//******************************************************************************************
//#include <stdio.h>
//int main() {
//    int n, i;
//    unsigned long long fact = 1;
//    printf("Enter an integer: ");
//    scanf("%d", &n);
//
//    // shows error if the user enters a negative integer
//    if (n < 0)
//        printf("Error! Factorial of a negative number doesn't exist.");
//    else {
//        for (i = 1; i <= n; ++i) {
//            fact *= i;
//        }
//        printf("Factorial of %d = %llu", n, fact);
//    }
//
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//int n,i;
//unsigned long long fact=1;
//printf("Bir tam sayi giriniz:");
//scanf("%d",&n);
//if(n<0)
//	printf("Sayi 0dan kucuk olamaz!..");
//	else{
//		for(i=1;i<=n;++i)
//		{fact*=i;
//		}
//		printf("Factorial of %d = %llu",n,fact);
//	}
//return 0;
//}*******************************************************************************************
//#include <stdio.h>
//int main() {
//
//  int i, n;
//
//  // initialize first and second terms
//  int t1 = 0, t2 = 1;
//
//  // initialize the next term (3rd term)
//  int nextTerm = t1 + t2;
//
//  // get no. of terms from user
//  printf("Enter the number of terms: ");
//  scanf("%d", &n);
//
//  // print the first two terms t1 and t2
//  printf("Fibonacci Series: %d, %d, ", t1, t2);
//
//  // print 3rd to nth terms
//  for (i = 3; i <= n; ++i) {
//    printf("%d, ", nextTerm);
//    t1 = t2;
//    t2 = nextTerm;
//    nextTerm = t1 + t2;
//  }
//
//  return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i,n;
//	int t1=0 , t2=1;
//	int nextTerm = t1+t2;
//	printf("Bi sayi giriniz:");
//	scanf("%d",&n);
//	printf("fibonacci serisi: %d, %d, ",t1,t2);
//	for(i=3;i<=n;++i)
//	{
//	printf("%d, ", nextTerm);
//	t1 = t2,
//	t2 = nextTerm;
//	nextTerm = t1 + t2;
//	}
//	return 0;
//}******************************************************************************************************
//#include <math.h>
//#include <stdio.h>
//
//int main() {
//    double base, exp, result;
//    printf("Enter a base number: ");
//    scanf("%lf", &base);
//    printf("Enter an exponent: ");
//    scanf("%lf", &exp);
//
//    // calculates the power
//    result = pow(base, exp);
//
//    printf("%.1lf^%.1lf = %.2lf", base, exp, result);
//    return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main ()
//{
//	double sayi,us,sonuc;
//	printf("Sayi giriniz: ");
//	scanf("%lf",&sayi);
//	printf("Us giriniz: ");
//	scanf("%lf",&us);
//	sonuc=pow(sayi,us);
//	printf("%.1lf^%.1lf=%.2lf",sayi,us,sonuc);
//	return 0;
//}
//**********************************************************************************************************
//#include <stdio.h>
//int main() {
//  int n, reversed = 0, remainder, original;
//    printf("Enter an integer: ");
//    scanf("%d", &n);
//    original = n;
//
//    // reversed integer is stored in reversed variable
//    while (n != 0) {
//        remainder = n % 10;
//        reversed = reversed * 10 + remainder;
//        n /= 10;
//    }
//
//    // palindrome if orignal and reversed are equal
//    if (original == reversed)
//        printf("%d is a palindrome.", original);
//    else
//        printf("%d is not a palindrome.", original);
//
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n,cevrilmis,kalan = 0,orijinal;
//	printf("Sayi giriniz:");
//	scanf("%d",&n);
//	orijinal=n;
//	while(n!=0){
//		kalan=n%10;
//		cevrilmis=cevrilmis*10+kalan;
//		n/=10;
//	}
//	if(orijinal==cevrilmis)
//	printf("%d bir polindromdur.",orijinal);
//	else
//	printf("%d bir polindrom degildir.",orijinal);
//	return 0;
//}
//*****************************************************************************************************************
//
//#include <stdio.h>
//int main()
//{
//double x=5.,y=3.,z;
//z=x*y;
//}
//printf("%lf\n",z);
//#include<stdio.h>
//int main()
//{ double x;
//double a=3,b=2;
//x=a/b;
//printf("%2.1lf",(int)x);
//return 0;}
//*******************************************************************************************************************
//#include <stdio.h>
//
//int main(){
//	
//	int v1,v2,final,ort;
//	printf("Vize 1 notunu gir:");
//	scanf("%d",&v1);
//	printf("Vize 2 notunu gir:");
//	scanf("%d",&v2);
//	printf("Final notunu gir:");
//	scanf("%d",&final);
//	
//	ort=(v1*30+v2*30+final*40)/100;
//	
//	if(ort>=40){
//		printf("Gectiniz");
//	}
//	else if(ort==40){
//		printf("gurtardýn gotu");
//	}
//	else{
//		printf("kaldiniz");
//	}
//	return 0;
//}
//**********************************************************************************************************************

//#include <stdio.h>
//
//int fonk(int a, int b) {
//
//if(a%3==0) return b*fonk(a-2,b+1);
//
//else if(a%5==0) return a+b;
//
//return a+fonk(a+1,b-1);
//
//}
//
//main() {
//
//printf("%d", fonk(11,4));
//
//}
//****************************************************************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//struct Employee{
//	int empnum;
//	char name[15];
//	double salary;
//};
//
//typedef struct Employee Employee;
//
//
//int main(int argc, char *argv[])
//	{
//		
//		
//	FILE *fp;
//	Employee e;
//	char request;
//	int recordnum;
//	fp=fopen("C:\\Users\\BEDÝRHAN\\Desktop\\programming\\Yeni Metin Belgesi.txt","w");
//	if (fp==NULL){
//		printf("file can not be created\n");
//		exit(0);
//	}
//	
//	do{
//		printf("Enter employee number:");
//		scanf("%d",&e.empnum);
//		fflush(stdin);
//		printf("Enter employee name:");
//		gets(e.name);
//		printf("Enter employee salary:");
//		scanf("%lf",&e.salary);
//		
//		fseek(fp,(e.empnum-1)*sizeof(Employee),SEEK_SET);
//		
//		fwrite(&e,sizeof(Employee),1,fp);
//		printf("Do you have more data?(Y/N):");
//		scanf("%c",&request);
//	}while (tolower(request)=='y');
//	
//	fclose(fp);
//	
//	//printf("size of Employee struct:%d\n",sizeof(Employee));
//	return 0;
//}***************************************************************************************************
//#include <stdio.h>
//int main(){
//	
//	int i,n,sum;
//	i=0;
//	sum=0;
//	printf("n degerini giriniz:");
//	scanf("%d",&n);
//	
//	while(i<=n){
//		sum=i+sum;
//		i++;
//	}
//	printf("sonuc:%d",sum);
//	return 0;
//}*******************************************************************************************************
//#include <stdio.h>
//int main(){
//	int sayi1,sayi2,buyuksayi,kucuksayi,kalan;
//	
//	printf("1. sayiyi giriniz:");
//	scanf("%d",&sayi1);
//	printf("2. sayiyi giriniz:");
//	scanf("%d",&sayi2);
//	while(sayi1<=0 || sayi2<=0);
//	
//	if(sayi1>sayi2){
//		buyuksayi=sayi1;
//		kucuksayi=sayi2;
//	}
//	else{
//		buyuksayi=sayi2;
//		kucuksayi=sayi1;
//	}
//	kalan=buyuksayi%kucuksayi;
//	while(kalan!=0){
//		if(kalan>=kucuksayi){
//			buyuksayi=kalan;
//		}
//		else{
//			buyuksayi=kucuksayi;
//			kucuksayi=kalan;
//		}
//		kalan=buyuksayi%kucuksayi;
//	}
//	printf("EBOB(%d,%d):%d",sayi1,sayi2,kucuksayi);
//
//	return 0;
//}**********************************************************************************************************
//#include <stdio.h>
//
//#include <math.h>
//
//main()
//
//{
//
//int a=2, b=8, c, d;
//
//c = sqrt(a*b);
//
//d = pow(a,c);
//
//while(d > 10) {
//
//d -= 2;
//
//c ++;
//
//}
//
//printf("%d", c*d);
//return 0;
//}**********************************************************************************************************
//#include<stdio.h>
//
//#include<conio.h>
//
//main()
//
//{
//
//int i,x,t=0;
//
//float ort;
//
///*
//
//for(i=0;i<5;i++)
//
//{
//
//printf("x : ");
//
//scanf("%d",&x);
//
//t = t + x;
//
//}
//
//*/
//
//i=0;
//
//while(i<5)
//
//{
//
//printf("x : ");
//
//scanf("%d",&x);
//
//t = t + x;
//
//i++;
//
//}
//
//ort = (float)t/i;
//
//printf("Sonuc : %f ",ort);
//
//getch();
//
//}**********************************************************************************************************
//#include <stdio.h>
//
//main()
//
//{
//
//int i, j, a=5, b=8;
//
//for(i=4;i<10;i+=2) {
//
//for(j=6;j>=3;j--) {
//
//if(i>j) a++;
//
//else b--;
//
//}
//
//}
//
//printf("%d",a*b);
//return 0;
//}****************************************************************************************************************
//#include <stdio.h>
//
//main()
//
//{
//
//int i, j, a=6;
//
//for(i=10;i>0;i-=2) {
//
//for(j=1;j<5;j++) {
//
//if(i%j==0) continue;
//
//else a+=j;
//
//}
//
//}
//
//printf("%d",a);
//return 0;
//}********************************************************************************************************************
//#include<stdio.h>
//int main(){
//	int sayi[]={10,20,30,40};
//	int i=0;
//	for (i<4;i++){
//		printf("%d\n",sayi[i]);
//	}
//	return 0;
//}**********************************************************************************************************************
// #include <stdio.h> 
//#include <stdlib.h> 
//#include <string.h>
// 
// int main(int argc, char *argv []) 
// {  
//     int i;
//     int frekans=0;
//     char aranan;  
//     char text[]="sjdajfdfhdjdahsj";
//     printf("metnin uzunluðu þudur: %d\n",strlen(text));
//     printf("aranan deðeri giriniz: ");
//     scanf("%c",&aranan);
//
//     for(i=0;i<strlen(text);i++){
//         if(text[i]==aranan){
//           frekans++;
//         }
//     }
//     printf("%c aranan deðeri %d defa bulunmuþtur ",aranan,frekans);
//
//    return 0;  
//}**********************************************************************************************************
//#include<stdio.h>
//#define SENT -1
//int main(){
// int data;
// list_node_t *ansp,
// *to_fillp, /* pointer to last node in list whose
// restp component is unfilled */
// *newp; /* pointer to newly allocated node */
//
// /* Builds first node, if there is one */
// scanf("%d", &data);
// if (data == SENT) {
// ansp = NULL;
// } else {
// ansp = (list_node_t *)malloc(sizeof (list_node_t));
// ansp->digit = data;
// to_fillp = ansp;
//
// /* Continues building list by creating a node on each
//23. iteration and storing its pointer in the restp component of the
//24. node accessed through to_fillp */
// for (scanf("%d", &data);
// data != SENT;
// scanf("%d", &data)) {
// newp = (list_node_t *)malloc(sizeof (list_node_t));
// newp->digit = data;
// to_fillp->restp = newp;
// to_fillp = newp;
// }
//
// /* Stores NULL in final node's restp component */
// to_fillp->restp = NULL;
// }
// return (ansp);
//}
// }**********************************************************************************************************
//#include<stdio.h>
//int main(){
//	int dizi1[5]={1,2,3,4,5};
//	int dizi2[3][2]={{0,1},{2,3},{4,5}};
//	
//	int i;
//	int j;
//	for(i=0;i<3;i++){
//		for(j=0;j<2;j++){
//			printf("%d\t",dizi2[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//}******************************************************************
//#include<stdio.h>
//int main(){
//	int satir,sutun;
//	printf("Satir ve sutun sayisini giriniz:  ");
//	scanf("%d%d",&satir,&sutun);
//	 int dizi[satir][sutun];
//	 int i,j;
//	 for(i=0;i<satir;i++){
//	 	for(j=0;j<sutun;j++){
//	 		printf("%d. satir ve %d. sutundaki sayiyi giriniz:",i+1,j+1);
//	 		scanf("%d",&dizi[i][j]);
//		 }
//  }
//	printf("-------------------------------------------------------------\nMatrisiniz:\n");
//	int k,l;
//	for (k=0;k<satir;k++){
//		for(l=0;l<sutun;l++){
//			printf("%d ",dizi[k][l]);
//		}printf("\n");
//	}
//	return 0;
//}
//0********************************************************************************* 
//#include <stdio.h>
//int main(){
//	int satir,sutun,i,j;
//	printf("satir sutun sayisini giriniz:");
//	scanf("%d%d",&satir,&sutun);
//	int dizi[satir][sutun];	
////	for(i=0;i<satir;i++){
////		for(j=0;j<sutun;j++){
////			printf("%d. satir ve %d. sütündaki sayiyi giriniz:",i+1,j+1);
////			scanf("%d",&dizi[i][j]);
////		}
////		printf("\n");
////	}
//	printf("-------------------------------------------------------------\nMatrisiniz:\n");
//
//}	//	printf("");
//	//	scanf("%d",&dizi[satir][sutun]);
//	int t,l,k;
//	for (t=0;t<satir;t++){
//		for(l=0;l<sutun;l++){
//				for(k=1;k<satir*sutun;k++){
//					printf("%d ",k);
//		}	printf("\n");
//	}
//}
//	return 0;
//}*********************************************************************************************
//#include <stdio.h>
//int main(){
//	int matrisbir[2][2];
//	int matrisiki[2][2];
//	int islemsonucu[2][2];
//	
//	printf("Lutfen birinci matrisi giriniz:\n");
//	int i,j;
//	for(i=0;i<2;i++)
//	for(j=0;j<2;j++){
//		printf("[%d][%d] Elemanini giriniz:",i+1,j+1);
//		scanf("%d",&matrisbir);
//	}
//	printf("Lutfen ikinci matrisi giriniz:\n");
//	
//	for(i=0;i<2;i++)
//	for(j=0;j<2;j++){
//		printf("[%d][%d] Elemanini giriniz:",i+1,j+1);
//		scanf("%d",&matrisiki);
//	}
//	
//	printf("Matrislerin toplami:\n");
//	for(i=0;i<2;i++){
//		for(j=0;j<2;j++){
//			islemsonucu[i][j] = matrisbir[i][j] + matrisiki[i][j];
//			printf("%d ",islemsonucu[i][j]);
//		}
//		printf("\n");
//	}	
////	printf("Matrislerin carpimi:\n");
////	for(i=0;i<2;i++){
////		for(j=0;j<2;j++){
////			for(k=0;k<2;k++){
////				islemsonucu[i][j] = matrisbir[i][k] * matrisiki[k][j];
////			}
////			printf("%d",islemsonucu[i][j]);
////		}
////		printf("\n");
////	}	
//	return 0;
//}
//}*****************************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
////	int sayisalloto[49]={0};
////	int i;
////	for(i=0;i<49;i++){
////		printf("%d\n",sayisalloto[i]);
////	}
////	
////	int rastgelesayi;
////	
////	srand(time(NULL));
////	rastgelesayi =1+rand()%49;
////	printf("%d",rastgelesayi);
//	int i;
//	int rastgelesayi;
//	srand(time(NULL));
//	int sayisalloto[49]={0};
//	printf("Satisal loto icin sayilar olusturuluyor...\n");
//	for(i=0;i<6;i++){
//		rastgelesayi=1+rand()%49;
//		while(sayisalloto[rastgelesayi-1]==1){
//			rastgelesayi=1+rand()%49;
//		}
//		sayisalloto[rastgelesayi-1]=1;
//		printf("%d\n",rastgelesayi);
//	}
//	printf("Sayisalloto cekilisi tammalanmistir...");	
//	return 0;
//}**********************************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	char sifre[80];
//	char sifrekontrol[80];
//	int j,i=1;
//	int yanlis;
//	while(i){
//		yanlis=0;
//		j=0;
//		printf("Lutfen olusturmak istediginiz parolanizi giriniz:\n");
//		scanf("%s",&sifre);
//		printf("Lutfen parolanizi tekrar giriniz:\n");
//		scanf("%s",&sifrekontrol);
//		while(!(sifre[j]=='\0' && sifrekontrol[j]=='\0')){
//			if(sifre[j] != sifrekontrol[j]){
//				printf("Girdiginiz sifreler ayni degil.Lutfen yazmis oldugunuz sifreleri kontrol ediniz\n");
//				yanlis=1;
//				break;
//			}
//			else{
//				j++;
//			}
//		}
//		if(yanlis==0){
//			printf("sifreleriniz eslesti. giris basarili.\n");
//		}
//	}
//	return 0;
//}
//*********************************************************************************************
//#include <stdio.h>
// int main(){
//// 	char harf = 'a';
//// 	printf("degiskeninizin degeri = %c\n",harf);
//// 	printf("degiskeninizin adresi = %X",&harf);
// 	
////  veritipi *degiskenadi;
//	
////	char harf = 'x';
//// 	char *a = &harf;
// 	
//// char harf = 'x';
//// printf("degiskenþnþzþn degeri = %c\n",harf);	
//// printf("degiskeninizin adresi = %X\n",&harf);	
//// 	
//// char *h=&harf;
//// printf("gostericinin degeri = %X",h);	
// 	
// 	//gostericinin dgereini bir arttýrdýk
//// 	char harf = 'c';
//// 	char *g=&harf;
//// 	printf("pointers degeri = %X\n",g);
//// 	g++;
//// 	printf("pointers yeni degeri = %X\n",g);
// 	
// 	
// 	char harf = 'c';
// 	char *g=&harf;
// 	printf("pointers degeri = %X\n",g);
// 	g++;
//	//g=g+5;
// 	printf("pointers yeni degeri = %X\n",g);
// 	
// 	return 0;
// }
// }************************************************************************************** 
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	
//	int *alan1 = malloc(10*sizeof(int));
//	int *alan2 = calloc(10,sizeof(int));
//	int i;
//	for(i=0;i<10;i++){
//		printf("alan1[%d] = %d \nalan2[%d] = %d ",i,alan1[i],i,alan2[i]);
//	}
//	return 0;
//}
//}*************************************************************************************
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//#define SIZE 10
//
//void print_array(int* a, int size);
//int* allocate_array(int size);
//int* resize_array(int* a, int size);
//
//int main()
//{
//	int i = 0;
//
//	int* a = allocate_array(SIZE);
//
//	for(i=0; i<SIZE; i++)
//	{
//		a[i] = i;
//	}
//
//	print_array(a, SIZE);
//
//	a = resize_array(a, SIZE * 2);
//
//	print_array(a, SIZE * 2);
//
//	return EXIT_SUCCESS;
//}
//
//int* allocate_array(int size)
//{
//	int* a = malloc(size * sizeof(int)); 
//	memset(a, 0, SIZE*sizeof(int));
//
//	return a;
//}
//
//int* resize_array(int* a, int size)
//{
//	int* new_a = realloc(a, size);
//
//	return new_a;
//}
//
//void print_array(int* a, int size)
//{
//	int i = 0;
//
//	printf("Array starts at %p\n", a);
//	
//	for(i=0; i<size; i++)
//	{
//		printf("%d ", a[i]);
//	}
//
//	printf("\n");
//}*************************************************************************************************
//#include <stdio.h>
//int main(){
//
//FILE *dosya;
//dosya=fopen("C:\\Users\\BEDÝRHAN\\Desktop\\yeni.txt","w");
//
//	return 0;
//}****************************************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//
////void hafta(){
////	printf("pazartesi\n");
////	printf("sali\n");
////	printf("carsamba\n");
////	printf("persembe\n");
////	printf("cuma\n");
////}
////	int kare(int sayi){
////		return sayi*sayi;
////	}
//int main(){
////	hafta();
////	int i;
////	printf("karesi alinacak sayiyi giriniz:");
////	scanf("%d",&i);
////	printf("%d",kare(i));
//
//	return 0;
//}*********************************************************************************************
//#include <stdio.h>
//#define pi 3.1415
//#define buyuksayi(sayi1,sayi2) (sayi1>sayi2) ? sayi1 : sayi2
//int main(){
//	
//	printf("%d",buyuksayi(10,5));
//	return 0;
//}*********************************************************************************************
//--------------------------------sona eleman ekleme-----------------------------
//#include <stdio.h>
//#include <stdlib.h>
//struct dugum{
//	int veri;
//	struct dugum * gosterici;
//};
//
//struct dugum * bas = NULL;
//struct dugum * gecici=NULL;
//
//
//void sonaEkle ( int sayi )
//{
//	struct dugum * eklenecek;
//	eklenecek = (struct dugum * )malloc(sizeof(struct dugum));
//	eklenecek->veri=sayi;
//	eklenecek->gosterici=NULL;
//	
//	if(bas==NULL)
//	{
//		bas=eklenecek;
//	}
//	else
//	{
//		gecici=bas;
//		while(gecici->gosterici!=NULL)
//		{
//			gecici=gecici->gosterici;
//		}
//		gecici->gosterici=eklenecek;
//	}
//}
//void yazdir ()
//{
//	gecici=bas;
//	while( gecici->gosterici!=NULL)
//	{
//		printf("%d",gecici->veri);
//		gecici=gecici->gosterici;
//	}
//	printf("%d",gecici->veri);
//}
//int main(){
//	int adet=0;
//	while(adet!=5)
//	{
//	int sayi;
//	printf("bir sayi girin:");
//	scanf("%d",&sayi);
//	sonaEkle(sayi);	
//	adet++;
//	}
//	yazdir();
//	return 0;
//}*******************************************************************************************************
//-------------------------basa eleman ekleme------------------------------------
//#include <stdio.h>
//#include <stdlib.h>
//struct dugum{
//	int veri;
//	struct dugum * gosterici;
//};
//
//struct dugum * bas = NULL;
//struct dugum * gecici=NULL;
//
//
//void basaEkle ( int sayi )
//{
//	struct dugum * eklenecek;
//	eklenecek = (struct dugum * )malloc(sizeof(struct dugum));
//	eklenecek->veri=sayi;
//	eklenecek->gosterici=bas;
//	bas=eklenecek;
//}
//void yazdir ()
//{
//	gecici=bas;
//	while( gecici->gosterici!=NULL)
//	{
//		printf("%d",gecici->veri);
//		gecici=gecici->gosterici;
//	}
//	printf("%d",gecici->veri);
//}
//int main(){
//	int adet=0;
//	while(adet!=5)
//	{
//	int sayi;
//	printf("bir sayi girin:");
//	scanf("%d",&sayi);
//	basaEkle(sayi);	
//	adet++;
//	}
//	yazdir();
//	return 0;
//}
//*******************************************************************************************************
//------------------------------------basa ve sona ve araya eleman ekleme------------------------
//#include<stdio.h>
//#include<stdlib.h>
//struct node{
//	int data;
//	struct node * next;
//};
//struct node * start=NULL;
//struct node * temp=NULL;
//
//void basaEkle (int veri)
//{
//	struct node * eleman;
//	eleman=(struct node*)malloc(sizeof(struct node));
//	eleman->data=veri;
//	eleman->next=start;
//	start=eleman;
//}
//void sonaEkle (int veri)
//{
//	struct node * eleman;
//	eleman=(struct node*)malloc(sizeof(struct node));
//	eleman->data=veri;
//	eleman->next=NULL;
//	
//	if(start==NULL)
//	{
//		start = eleman;
//	}
//	else
//	{
//		temp=start;
//		while(temp->next!=NULL)
//		{
//			temp=temp->next;
//		}
//		temp->next=eleman;
//	}
//}
//void arayaEkle (int n, int veri)
//{
//	
//	struct node *eleman;
//	eleman = (struct node*)malloc(sizeof(struct node));
//	eleman->data=veri;
//	
//	temp=start;
//	while(temp->next->data!=n)
//	{
//		temp=temp->next;
//	}
//	struct node*temp2;
//	temp2=(struct node*)malloc(sizeof(struct node));
//	temp2=temp->next;
//	temp->next= eleman;
//	eleman->next=temp2;
//}
//
//void bastanSil()
//{
//	if(start!=NULL)
//	{
//		temp=start->next;
//		free(start);
//		start=temp;
//	}
//	else
//	free(start);
//}
//
//void sondanSil()
//{
//	if(start->next!=NULL)
//	{
//		
//		temp=start;
//		while(temp->next->next!=NULL)
//		{
//			temp=temp->next;
//		}
//		free(temp->next);
//		temp->next=NULL;
//		
//	}
//	else
//	bastanSil();
//}
//void aradanSil(int veri)
//{
//	temp=start;
//	if(temp->data==veri)
//	{
//		bastanSil();
//	}
//	else
//	{
//		struct node* temp2;
//		temp2=(struct node *)malloc(sizeof(struct node));
//		
//		while(temp->next->data!=veri)
//		{
//			temp=temp->next->next;
//		}
//		if(temp->next->next==NULL)
//		{
//			sondanSil();
//		}
//		else
//		temp2= temp->next->next;
//		free(temp->next);
//		temp->next=temp2;
//	}
//}
//void yazdir()
//{
//	system("cls");
//	if(start!=NULL)
//	{
//	temp=start;
//	while(temp->next!=NULL)
//	{
//		printf("%d ",temp->data);
//		temp = temp->next;
//	}
//	printf("%d\n",temp->data);
//	}
//	
//	else
//	printf("Eleman yok");
//}
//int main(){
//	int sayi,adet=0,secim,n;
//	while(adet!=6)
//	{
//		printf("basa eleman eklemek icin 1 \n");
//		printf("sona eleman eklemek icin 2 \n");
//		printf("bastan eleman silmek icin 4 \n");
//		printf("sondan eleman silmek icin 5 \n");	
//		printf("araya eleman eklemek için 3 \n");
//		printf("aradan eleman silmek icin 6 \n");
//		printf("seciminizi yapýn \n");
//	
//		scanf("%d",&secim);
//		switch(secim)
//		{
//			case 1: printf("basa eklenecek eleman deðeri:\n");
//			scanf("%d,",&sayi);
//			basaEkle(sayi);
//			yazdir();
//			printf("\n");
//			break;
//			case 2: printf("sona eklenecek eleman deðeri:\n");
//			scanf("%d,",&sayi);
//			sonaEkle(sayi);
//			yazdir();
//			break;
//			case 3: 
//			printf("hangi sayýdan once:");
//			scanf("%d",&n);
//			printf("araya eklenecek eleman deðeri:\n");
//			scanf("%d,",&sayi);
//			arayaEkle(n,sayi);
//			yazdir();
//			break;
//			case 4: 
//			bastanSil();
//			yazdir();
//			printf("\n");
//			break;
//			case 5: 
//			sondanSil();
//			yazdir();
//			printf("\n");
//			break;
//			case 6: 
//			aradanSil(sayi);	printf("aradn silinecek elamanin degeri:"); scanf("%d",&sayi);
//			yazdir();
//			printf("\n");
//			break;
//		}
//		adet++;
//	}	
//	return 0;
//}*********************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int secim;
//	printf("nike 1\nadidas 2\npuma 3\nnew balance 4\nyour select:");
//	printf("Enter")
//	switch(secim);
//	
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//return 0;
//}************************************************************************************************
//#include<stdio.h>
//int findMax(int x,int y,int z){
//	int max = x;
//	if(y>max)
//	max=y;
//	if(z>max)
//	max=z;
//	
//	return max;
//}
//int main(){
//	int a,b,c;
//	int cont = 1;
//	while (cont == 1){
//		printf("enter 3 numbers:");
//		scanf("%d%d%d",&a,&b,&c);
//		int max=findMax(a,b,c,);
//		printf("\nMax is:%d\n",max);
//		printf("do you want to continue? (print 1 to exit)");
//		scanf("%d",&cont);
//	}
//}******************************************************************************************************
//#include<stdio.h>
//int main(){
//	int i=1;
//	int n;
//	printf("enter odd number till:");
//	scanf("%d",&n);
//	printf("odd numbers from 1 to %d are:\n",n);
//	while(i<=n-2){
//		i=i+2;
//		printf("%d ",i);
//	}
//return 0;
//}
//******************************************************************************************************
//#include<stdio.h>
//int main(){
//	int h,s,m;
//	printf("enter the hours:");
//	scanf("%d",&h);
//	m=h*60;
//	s=m*60;
//	printf("%d hours = %d minutes\n",h,m);
//	printf("%d hours = %d seconds\n",h,s);
//	return 0;
//}
//*********************************************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//
// 
// /*Write a program in C to show the simple structure of a function.Go to the editor
//Expected Output :
//
//The total is :  11 
//	*/
//	
//	void sum(int number1, int number2,int summ){
//		 summ = number1 + number2;
//		return sum;
//	}
//	
//	int main(){
//		int a= 5;
//		int b= 6;
//		printf("enter number1: \n");
//	    printf("enter a number2: \n");
//	
//		
//		 result = sum(a,b);
//		printf("the sum of %d and %d is %d");
//	
//	return 0;
//	}
//************************************************************************************************************
//#include<stdio.h>
//void sum(int a,int b,int *sonuc){
//	
//    *sonuc=a+b;
//}
//
//int main(void){
//	
//	int toplam;
//	int a=5;
//	int b=6;
//sum(a,b,&toplam);
//printf("%d",toplam);
//	return 0;
//}
//**************************************************************************************************************************
//#include<stdio.h>
//void number(int a,int b,float *c){
//	*c =a*a;
//}
//int main(void){
//	int sayi=20;
//	float sonuc;
//	number(sayi,sayi,&sonuc);
//	printf("%f",sonuc);
//	return 0;
//}
//*******************************************************************************************************************
//#include<stdio.h>
//  int main(){
//  	int sayi=20;
//  	int sayi2=20;
//  	float square;
//  	square=number(sayi,sayi2);
//  	printf("The square is: %f\n",square);
//  	
//  	return 0;
//  	
//  }
//
//int number(int a,int b){
//	int kare;
//	kare = a * b;
//	return kare;
//}
//*******************************************************************************************************************

//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	
//	
//	int mid1[10];
//	int mid2[10];
//	int final[10];
//	float grade[10];
//	int i;
//	int k;
//	for(i=1;i<=10;i++){
//		printf("enter student %d 's midterm 1 grades:\n",i);
//		scanf("%d",&mid1[i]);
//		printf("enter student %d 's midterm 2 grades:\n",i);
//		scanf("%d",&mid2[i]);
//		printf("enter student %d 's final grades:\n",i);
//		scanf("%d",&final[i]);
//		}
//		for(k=1;k<=10;k++){
//		grade[k] = (25*mid1[k] + 25*mid2[k] + 50*final[k]) / 100;
//		printf("student %d 's grade:%f\n",k,grade[k]);
//		if(grade[k]>90){
//			printf("student %d 's letter grade:A\n",k);
//		}
//		else if(grade[k]<90 || grade[k]>75){
//			printf("student %d 's letter grade:B\n",k);
//		}
//		else if(grade[k]<75 || grade[k]>55){
//			printf("student %d 's letter grade:C\n",k);
//		}
//		else {
//			printf("student %d 's letter grade:FAILED\n",k);
//		}
//		}
//	return 0;
//}
//*******************************************************************************************************
//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//
//int dot(char *str){
//
//	int i=0;
//	for(i=0;i<strlen(str);i++){
//		if(str[i]=='.'){
//			return 1;
//			
//		}	
//	}
//	return 0;
//}
//int main(){
//	
//	char arr[10];
//	printf("enter a string:");
//	scanf("%s",arr);
//	printf("%d",dot(arr));
//	return 0;
//}
//***********************************************************************************************************
//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//
//int spaceNum(char *str){
//	int k=0;
//	int i=0;
//	for(i=0;i<strlen(str);i++){
//		if(str[i]==' '){
//			k++;	
//			if (str[i-1]==' ')
//				k--;
//		}
//	}
//	return k;
//}
//int main(){
//	char str[30];
//	gets(str);
//	printf("space count is:%d",spaceNum(str));
//	return 0;
//}

//**********************************
//#include<stdio.h>
//#include<stdlib.h>
//void denisa(int i,int k,int *j){
//	*j=i*k;
//	*j=*j/k;
//	*j=*j+k+i;
//
//	}
//int main(void){
//	int f=5;
//	int l=8;
//	int sonuc;
//	denisa(f,l,&sonuc);
//		printf("%d",sonuc);
//	
//	
//	return 0;
//}
//******************************************************************************************
//#include <stdio.h>
//int main() {
//
//  int i, n;
//
//  // initialize first and second terms
//  int t1 = 0, t2 = 1;
//
//  // initialize the next term (3rd term)
//  int nextTerm = t1 + t2;
//
//  // get no. of terms from user
//  printf("Enter the number of terms: ");
//  scanf("%d", &n);
//
//  // print the first two terms t1 and t2
//  printf("Fibonacci Series: %d, %d, ", t1, t2);
//
//  // print 3rd to nth terms
//  for (i = 3; i <= n; ++i) {
//    printf("%d, ", nextTerm);
//    t1 = t2;
//    t2 = nextTerm;
//    nextTerm = t1 + t2;
//  }
//
//  return 0;
//}
//********************************************************************************************
//#include<stdio.h>    
//void main ()    
//{    
//    int i, j,temp;     
//    int a[10] = { 10, 9, 7, 101, 23, 44, 12, 78, 34, 23};     
//    for(i = 0; i<10; i++)    
//    {    
//        for(j = i+1; j<10; j++)    
//        {    
//            if(a[j] > a[i])    
//            {    
//                temp = a[i];    
//                a[i] = a[j];    
//                a[j] = temp;     
//            }     
//        }     
//    }     
//    printf("Printing Sorted Element List ...\n");    
//    for(i = 0; i<10; i++)    
//    {    
//        printf("%d\n",a[i]);    
//    }    
//}
//********************************************************************************************************
//#include<stdio.h>
//int main(){
//	int n;
//	int count;
//	printf("enter a number:");
//	scanf("%d",&n);
//	while(n!=0){
//		n=n/10;
//		count++;
//	}
//	printf("number of digits:%d",count);
//	return 0;
//}
//**********************************************************************************************************
//#include <stdio.h>
//#define BASE 10 /* Constant */
//
//int main()
//{
//    long long num, n;
//    int i, lastDigit;
//    int freq[BASE];
//
//    /* Input number from user */
//    printf("Enter any number: ");
//    scanf("%lld", &num);
//
//    /* Initialize frequency array with 0 */
//    for(i=0; i<BASE; i++)
//    {
//        freq[i] = 0;
//    }
//
//    /* Copy the value of 'num' to 'n' */
//    n = num; 
//
//    /* Run till 'n' is not equal to zero */
//    while(n != 0)
//    {
//        /* Get last digit */
//        lastDigit = n % 10;
//
//        /* Remove last digit */
//        n /= 10;
//
//        /* Increment frequency array */
//        freq[lastDigit]++;
//    }
//
//    /* Print frequency of each digit */
//    printf("Frequency of each digit in %lld is: \n", num);
//    for(i=0; i<BASE; i++)
//    {
//        printf("Frequency of %d = %d\n", i, freq[i]);
//    }
//
//    return 0;
//}
//***********************************************************************************************************************
//#include<stdio.h>
//#include<stdlib.h>
//
//void maxNum(int i,int j,int k){
//	printf("enter 3 integer:");
//	scanf("%d%d%d",&i,&j,&k);
//	
//	if(i>j && i>k){
//		printf("%d is max number.",i);
//	}
//	if(j>i && j>k){
//		printf("%d is max number.",j);
//	}
//	if(k>j && k>i){
//		printf("%d is max number.",k);
//	}
//}
//int main(void){
//	int a,b,c;
//	maxNum(a,b,c);
//	return 0;
//}
//*****************************************************************************************************************
//#include<stdio.h>
//#include<stdlib.h>
//#define BASE 10
//int main(){
//	int array[BASE];
//	int i,j,oddCount,evenCount;
//	printf("enter 10 integers:");
//	for(i=0;i<BASE;i++){
//	scanf("%d",&array[i]);
//	}
//	for(j=0;j<BASE;j++){
//	
//		if(array[j]%2==0){
//			evenCount++;
//		}		
//		else if(array[j]%2!=0){
//			oddCount++;
//		}		
//	
//	}
//	printf("odd count:%d",oddCount);
//	printf("even count:%d",evenCount);	
//	
//	return 0;
//}
//*******************************************************************************************************************
//#include<stdio.h>
//int main(){
//	int num,lastDigit;
//	int i,j,count;
//	printf("enter an integer:");
//	scanf("%d",&num); 
//	lastDigit=num%10;
//	printf("last digit is %d\n",lastDigit);
//	for(i=1;i<100;i++){
//		num=num/10;
//		if(num==0){
//			printf("your digit count is %d\n",i);
//			count=i;
//			break;
//		}
//	}
//	return 0;
//}
//*********************************************************************************************************
//int main(){
//    int num;
//    int lastDigit;
//    int remain;
//    printf("enter a number: ");
//    scanf("%d",&num);
//    remain=num%10;
//    printf("the lastDigit is: %d\n",remain);
//    
//
//    return 0;
//}
//***********************************************************************************************
//int main(){
//    int num;
//    int remain1,lastDigit;
//    printf("enter a number: ");
//    scanf("%d",&num);
//    remain1=num%100;
//    lastDigit=remain1/10;
//    printf("the last digit is: %d\n",lastDigit);
//    return 0;
//}
//*********************************************************************************************
//int main(){
//    int num,remain,lastDigit;
//    printf("enter a number: ");
//    scanf("%d",&num);
//    remain=num/10;
//    printf("the remain is : %d\n",remain);
//    lastDigit=remain%10;
//    printf("the second lastDigit is %d\n",lastDigit);
//    return 0;
//}
//**********************************************************************************************
//#include<stdio.h>
//int main(){
//	int i,n,j,max;
//	for(i=0;i<100;i++){
//		printf("enter number:");
//		scanf("%d",&n);
//		printf("enter number:");
//		scanf("%d",&j);
//		if(n == -1 || j == -1){
//			break;		
//		}
//		else if(n>j){
//			max=n;
//		}
//		else if(j>n){
//			max=j;
//		}
//	}
//	printf("%d is max.",max);
//	return 0;
//}
//*************************************************************************************************
//#include<stdio.h>
//int main(){
//	int i,n,j,sum=0;
//	float average;
//	for(i=1;i<100;i++){
//		printf("enter grade:");
//		scanf("%d",&n);
//		if(n>100 || n<-1){
//			printf("your grade doesn't exist\n");
//		}
//		printf("enter grade:");
//		scanf("%d",&j);
//		if(j>100 || j<-1){
//			printf("your grade doesn't exist\n");
//		}
//		if(n == -1 || j == -1){
//			break;		
//		}
//		
//		sum=sum+n+j;
//		average=sum/i;
//	}
//	printf("%f is average.",average);
//	return 0;
//}
//********************************************************************************
//#include<stdio.h>
//int main(){
//	int i,n,sum=0;
//	float average;
//	for(i=1;i<100;i++){
//		printf("enter grade:");
//		scanf("%d",&n);
//		if(n>100 || n<-1){
//			printf("your grade doesn't exist\n");
//		}
//		if(n == -1){
//			break;		
//		}
//		sum=sum+n;
//		average=sum/i;
//	}
//	printf("%f is average.",average);
//	return 0;
//}
//***************************************************************************************
//#include<stdio.h>
//int main(){
//	int sum=0,i,n1=0,n2=1;
//	for(i=1;i<=50;++i){
//		n1=n2;
//		n2=sum;
//		sum=n1+n2;
//		printf("%d ",sum);
//	}	
//	return 0;
//}
//***************************************************************************************
//int main(){
//      int i,n;
//      int t1=0,t2=1;
//      int nextTerm= t1+t2;
//      printf("enter the number of terms: ");
//      scanf("%d",&n);
//      printf("fibonacci series: %d %d ",t1,t2);
//      for(i=3;i<=n;++i)
//      {
//          printf("%d ",nextTerm);
//          t1=t2;
//          t2=nextTerm;
//          nextTerm=t1+t2;
//      }
//      return 0;
//  }
//****************************************************************************************
//#include<stdio.h>
//int main(){
//	int i;
//	for(i=1;i<=100;i++){
//		printf("%d ",i);
//	}
//	return 0;
//}
//****************************************************************************************
//#include<stdio.h>
//int main(){
//	int i,j;
//	for(i=1;i<100;i++){
//		for(j=1;j<i;j++){
//			if(i%j==0){
//				printf("%d is not prime\n",i);
//			}
//	
//		}
//		
//	}
//	return 0;
//}
//*******************************************************************************
//#include<stdio.h>  
//int main(){    
//int n,i,m=0,flag=0;    
//printf("Enter the number to check prime:");    
//scanf("%d",&n);    
//m=n/2;    
//for(i=2;i<=m;i++)    
//{    
//if(n%i==0)    
//{    
//printf("Number is not prime");    
//flag=1;    
//break;    
//}    
//}    
//if(flag==0)    
//printf("Number is prime");     
//return 0;  
// }    

//***************************************************************************************
//#include<stdio.h>
//int main(){
//	int dizi1[5]={1,2,3,4,5};
//	int dizi2[3][2]={{0,1},{2,3},{4,5}};
//	
//	int i;
//	int j;
//	for(i=0;i<3;i++){
//		for(j=0;j<2;j++){
//			printf("%d\t",dizi2[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//*************************************************************************************************************************************************
//int main(){
// 	int a[2][3],i,j,sum=0;
// 	printf("enter elements of Matrix: ");
// 	for(i=0;i<2;i++){
// 		for(j=0;j<3;j++){
// 			scanf("%d",&a[i][j]);
//		 }
//	 }
//	 
//	 printf("matrix is :\n");
//	 for(i=0;i<2;i++){
//	 	for(j=0;j<3;j++){
//	 		printf("%d\t",a[i][j]);
//	 		sum=sum+a[i][j];
//			 	 }
//			 	 printf("\n");
//	 }
//	 printf("\nsum=%d",sum);
// }
//***************************************************************************************************************************************************
// Program to calculate the sum of numbers (10 numbers max)
// If the user enters a negative number, it's not added to the result

//#include <stdio.h>
//int main() {
//   int i;
//   double number, sum = 0.0;
//
//   for (i = 1; i <= 10; ++i) {
//      printf("Enter a n%d: ", i);
//      scanf("%lf", &number);
//
//      if (number < 0.0) {
//         continue;
//      }
//
//      sum += number; // sum = sum + number;
//   }
//
//   printf("Sum = %.2lf", sum);
//
//   return 0;
//}
//********************************************************************************************************************************************************
// Program to calculate the sum of numbers (10 numbers max)
// If the user enters a negative number, the loop terminates
//
//#include <stdio.h>
//
//int main() {
//   int i;
//   double number, sum = 0.0;
//
//   for (i = 1; i <= 10; ++i) {
//      printf("Enter n%d: ", i);
//      scanf("%lf", &number);
//
//      // if the user enters a negative number, break the loop
//      if (number < 0.0) {
//         break;
//      }
//
//      sum += number; // sum = sum + number;
//   }
//
//   printf("Sum = %.2lf", sum);
//
//   return 0;
//}
//*********************************************************************************************************************************
//#include<stdio.h>
//int findMax(int n1,int n2,int n3){
//	int max,i;
//	if(n1>n2 && n1>n3){
//		max=n1;
//	}
//	else if(n2>n1 && n2>n3){
//		max=n2;
//	}
//	else{
//		max=n3;
//	}
//	return max;
//}
//int main(void){
//	int a,b,c,maximum;
//	printf("enter 3 numbers:");
//	scanf("%d%d%d",&a,&b,&c);
//	maximum=findMax(a,b,c);
//	printf("%d is maximum.",findMax(a,b,c));
//	return 0;
//}
///************************************************************************************************************************************
//#include<stdio.h>
//void findMax(int n1,int n2,int n3){
//	int max;
//	if(n1>n2 && n1>n3){
//		max=n1;
//	}
//	else if(n2>n1 && n2>n3){
//		max=n2;
//	}
//	else{
//		max=n3;
//	}
//	printf("%d is maximum.",max);
//}
//int main(void){
//	int a,b,c,maximum;
//	printf("enter 3 numbers:");
//	scanf("%d%d%d",&a,&b,&c);
//	findMax(a,b,c);
//
//	return 0;
//}
//**********************************************************************************************************************************
//int findMax(int,int,int);
//int main(){
//	int a,b,c;
//	printf("enter the values:");
//	scanf("%d %d %d",&a,&b,&c);
//	int findMax(a,b,c);
//	printf("%d is maximum.",findMax(a,b,c));
//	return 0;
//}
//int findMax(int a,int b,int c){
//	int max;
//	if((a>b)&&(a>c))
//	   max=a;
//		
//	else if((b>c) &&(a<b))
//		max=b;
//	
//	else if((c>b)&&(a<c))
//	    max=c;
//	
//	return max;
//}
//***************************************************************************************************************************************
//#include<stdio.h>
//int findMax(int n1,int n2,int n3){
//	int max,i;
//	if(n1>n2 && n1>n3){
//		max=n1;
//	}
//	else if(n2>n1 && n2>n3){
//		max=n2;
//	}
//	else{
//		max=n3;
//	}
//	return max;
//}
//int main(void){
//	int a,b,c,maximum,i;
//	printf("enter 3 numbers:");
//	scanf("%d%d%d",&a,&b,&c);
//	for(i=0;i<3;i++){
//	if(a<0 || b<0 || c<0){
//		exit(1);
//	}
//	}
//	maximum=findMax(a,b,c);
//	printf("%d is maximum.",findMax(a,b,c));
//	return 0;
//}
//**************************************************************************************************************************************
//#include<stdio.h>
//int main(){
//	int arr[10];
//	int i;
//	printf("enter elements:");
//	for(i=0;i<10;i++){
//		scanf("%d",&arr[i]);
//		if(arr[i]<0){
//			arr[i]=arr[i]*-1;
//		}
//	}
//	printf("absolute array:\n");
//	for(i=0;i<10;i++){
//	printf("%d\t",arr[i]);
//	}
//	return 0;
//}
//*****************************************************************************************************************************************
//#include<stdio.h>
//int main(){
//	int arr[10];
//	int i,sum=0;
//	float mean;
//	printf("enter the elements:");
//	for(i=0;i<10;i++){
//		scanf("%d",&arr[i]);
//		sum=sum+arr[i];
//	}
//	mean=sum/10;
//	printf("mean of the values:%f",mean);
//	return 0;
//}
//*****************************************************************************************************************************************
//#include<stdio.h>
//int main(){
//	int arr[5];
//	int i,j;
//	printf("enter elements:");
//	for(i=0;i<5;i++){
//		scanf("%d",&arr[i]);
//	}
//	for(i=0;i<5;i++){
//		j=arr[4-i];
//		arr[i]=j;
//		printf("%d\t",arr[i]);
//	}
//	return 0;
//}
//*********************************************************************************************************************************************
//#include<stdio.h>
//int main(){
//	char arr[5];
//	int i;
//	char j;
//	printf("enter elements:");
//	for(i=0;i<5;i++){
//		scanf("%c",&arr[i]);
//	}
//	for(i=0;i<5;i++){
//		j=arr[4-i];
//		arr[i]=j;
//		printf("%c\t",arr[i]);
//	}
//	return 0;
//}
//**********************************************************************************************************************************************
//#include<stdio.h>
//int main(){
//	int i,a,b,mod;
//	printf("enter 2 numbers:");
//	scanf("%d%d",&a,&b);
//	for(i=0;i<=a;i+b){
//		if(i>a){
//			mod=a-i;
//		//	break;
//		}
//	}
//	printf("mod is %d",mod);
//	return 0;
//}
//******************************************************************************************************************
//Write a program which prints the max value of an array. Use function with the prototype below:
//void findmax( int arr[], int n, int *max)
//#include<stdio.h>
//void main(){
//	int arr[10];
//	int n=10;
//	int max;
//	int i;
//	printf("enter the values:");
//	for(i=0;i<10;i++){
//	scanf("%d",&arr[i]);
//	}
//	findmax(arr[10],n,&max);
//	return 0;
//}
// void findmax( int arr[], int n, int *max){
// 	int j,i;
// 	for(i=0;i<n;i++){
// 		for(j=0;j<n;j++){
// 			if(i>j){
// 				max=arr[i];
//			 }
//			else{
//				continue;
//			}
//		 }
//	 }
//	 printf("%d is max.",max);
// }
//**************************************************************************************************************************************
//#include<stdio.h>
//typedef struct
//{
//	int x;
//	int y;
//} point;
//
//double euclidean_dist(point p1,point p2)
//{
//	int x_dist = (p1.x-p2.x);
//	int y_dist = (p1.y-p2.y);
//	return sqrt(x_dist*x_dist + y_dist*y_dist);
//}
//double arr_euclidean_dist(point_arr[],int size){
//	for(int i=0; i<size;i++){
//		for(int j=i+1;j<size;j++){
//			double dist= euclidean_dist(arr[i],arr[j]);
//			printf("euclidean distance between p%d and p%d is %f",i,j,dist);
//		}
//		
//	}
//}
//int main(){
//	point p1={3,5},p2={4,5},p3{2,7},p4{4,5};
//	printf("the euclidean is %d",euclidean_dist(p1,p2));
//	point p_arr[4];
//	p_arr[0]=p1;
//	p_arr[1]=p2;
//	p_arr[2]=p3;
//	p_arr[3]=p4;
//	
//	arr_euclidean_dist(p_arr,4)
//	
//}
//***********************************************************************************************************************
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct student{
//	int midterm1[10];
//	int midterm2[10];
//	int final[10];
//}grades;
//int assign_grade(int midterm1[10],int midterm2[10],int final[10]){
//	int i;
//	for(i=1;i<=10;i++){
//	midterm1[i] = rand()%100+1;
//	midterm2[i] = rand()%100+1;
//	final[i] = rand()%100+1;
//	printf("student %d's midterm 1 result %d\n",i,midterm1[i]);
//	printf("student %d's midterm 2 result %d\n",i,midterm2[i]);
//	printf("student %d's final result %d\n",i,final[i]);
//	}
//}
//int calculate_average_exam(int midterm1[10],int midterm2[10],int final[10],int averageMid1,int averageMid2,int averageFinal){
//	int sumMid1 = 0;
//	int sumMid2 = 0;
//	int sumFinal = 0;
//	int i;
//	for(i=1;i<=10;i++){
//		sumMid1 =sumMid1 + midterm1[i];
//		sumMid2 =sumMid2 + midterm2[i];
//		sumFinal =sumFinal + final[i];
//	}
//	averageMid1=sumMid1/10;
//	averageMid2=sumMid2/10;
//	averageFinal=sumFinal/10;
//	printf("average of midterm 1:%d\n",averageMid1);
//	printf("average of midterm 2:%d\n",averageMid2);
//	printf("average of final:%d\n",averageFinal);
//}
//int print_letter_grades(int midterm1[10],int midterm2[10],int final[10]){
//	float grade[10];
//	int i;
//	for(i=1;i<=10;i++){
//		grade[i] = (25*midterm1[i] + 25*midterm2[i] + 50*final[i]) / 100;
//		printf("student %d 's grade:%f\n",i,grade[i]);
//		if(grade[i]<100 && grade[i]>90  ){
//			printf("student %d 's letter grade:A\n",i);
//		}
//		else if(grade[i]<90 && grade[i]>75){
//			printf("student %d 's letter grade:B\n",i);
//		}
//		else if(grade[i]<75 && grade[i]>55){
//			printf("student %d 's letter grade:C\n",i);
//		}
//		else {
//			printf("student %d 's letter grade:FAILED\n",i);
//		}
//		}
//}
//int main(void){
//	struct student grades;
//	int averageMid1,averageMid2,averageFinal;
//	assign_grade(grades.midterm1,grades.midterm2,grades.final);
//	calculate_average_exam(grades.midterm1,grades.midterm2,grades.final,averageMid1,averageMid2,averageFinal);
//	print_letter_grades(grades.midterm1,grades.midterm2,grades.final);
//	return 0;
//}
//***********************************************************************************************************************************
//#include<stdio.h>
//int main(){
//	int i=12;
//	printf("number : %d\n",i);
//	printf("number's adress: %p",&i);	
//	return 0;
//}
//************************************************************************************************************************************
//#include <stdio.h>
//int main()
//{
//   int* pc, c;
//   
//   c = 22;
//   printf("Address of c: %p\n", &c);
//   printf("Value of c: %d\n\n", c);  // 22
//   
//   pc = &c;
//   printf("Address of pointer pc: %p\n", pc);
//   printf("Content of pointer pc: %d\n\n", *pc); // 22
//   
//   c = 11;
//   printf("Address of pointer pc: %p\n", pc);
//   printf("Content of pointer pc: %d\n\n", *pc); // 11
//   
//   *pc = 2;
//   printf("Address of c: %p\n", &c);
//   printf("Value of c: %d\n\n", c); // 2
//   return 0;
//}
//*****************************************************************************************************************************************
//#include<stdio.h>
//int main(){
//	int arr[10];
//	int i;
//	for(i=0;i<10;i++){
//		printf("&arr[%d]=%p\n",i,&arr[i]);
//		
//	}
//	printf("adress of array:%p",arr);
//	
//	
//	
//	return 0;
//}
//****************************************************************************************************************************
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//struct computer{
//	int ram;
//	int ssd;
//	char renk[10];
//	char islemci[5];
//	char marka[10];
//}pc1,pc2,pc3,pc4;
//
//int main(){
//	
//	pc1.ram=16;
//	pc2.ram=17;
//	pc3.ram=18;
//	pc4.ram=19; 
//	pc1.ssd=300;
//	pc2.ssd=400;
//	pc3.ssd=500;
//	pc4.ssd=600;
//	strcpy(pc1.renk,"beyaz");
//	strcpy(pc2.renk,"siyah");
//	strcpy(pc3.renk,"denisa");
//	strcpy(pc4.renk,"bedo");
//	printf("enter the color of pc1\n");
//	gets(pc1.renk);
//	puts(pc1.renk);
//	
//	
//	
//	
//	return 0;
//}
//************************************************************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//struct person {
//   int age;
//   float weight;
//   char name[30];
//};
//
//int main()
//{
//   struct person *ptr;
//   int i, n;
//
//   printf("Enter the number of persons: ");
//   scanf("%d", &n);
//
//    //allocating memory for n numbers of struct person
//   ptr = (struct person*) malloc(n * sizeof(struct person));
//
//   for(i = 0; i < n; ++i)
//   {
//       printf("Enter first name , age and weight respectively: ");
//
//       // To access members of 1st struct person,
//       // ptr->name and ptr->age is used
//
//        //To access members of 2nd struct person,
//        //(ptr+1)->name and (ptr+1)->age is used
//       scanf("%s %d %f", (ptr+i)->name, &(ptr+i)->age, &(ptr+i)->weight);
//   }
//
//   printf("Displaying Information:\n");
//   for(i = 0; i < n; ++i)
//       printf("Name: %s\tAge: %d\n Weight: %f\n", (ptr+i)->name, (ptr+i)->age,(ptr+i)->weight);
//
//   return 0;
//}

//********************************************************************************************************************************
//// Program to calculate the sum of n numbers entered by the user
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//  int n, i, *ptr, sum = 0;
//
//  printf("Enter number of elements: ");
//  scanf("%d", &n);
//
//  ptr = (int*) malloc(n * sizeof(int));
// 
//  // if memory cannot be allocated
//  if(ptr == NULL) {
//    printf("Error! memory not allocated.");
//    exit(0);
//  }
//
//  printf("Enter elements: ");
//  for(i = 0; i < n; ++i) {
//    scanf("%d", ptr + i);
//    sum += *(ptr + i);
//  }
//
//  printf("Sum = %d", sum);
//  
//  // deallocating the memory
//  free(ptr);
//
//  return 0;
//}
//*************************************************************************************************
// Program to calculate the sum of n numbers entered by the user

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//  int n, i, *ptr, sum = 0;
//  printf("Enter number of elements: ");
//  scanf("%d", &n);
//
//  ptr = (int*) calloc(n, sizeof(int));
//  if(ptr == NULL) {
//    printf("Error! memory not allocated.");
//    exit(0);
//  }
//
//  printf("Enter elements: ");
//  for(i = 0; i < n; ++i) {
//    scanf("%d", ptr + i);
//    sum += *(ptr + i);
//  }
//
//  printf("Sum = %d", sum);
//  free(ptr);
//  return 0;
//}
//******************************************************************************************************
#include <stdio.h>
#include <stdlib.h>

int main() {
  int *ptr, i , n1, n2;
  printf("Enter size: ");
  scanf("%d", &n1);

  ptr = (int*) malloc(n1 * sizeof(int));

  printf("Addresses of previously allocated memory:\n");
  for(i = 0; i < n1; ++i)
    printf("%pc\n",ptr + i);

  printf("\nEnter the new size: ");
  scanf("%d", &n2);

  // rellocating the memory
  ptr = realloc(ptr, n2 * sizeof(int));

  printf("Addresses of newly allocated memory:\n");
  for(i = 0; i < n2; ++i)
    printf("%pc\n", ptr + i);
  
  free(ptr);

  return 0;
}
//****************************************************************************************************************
//#include <stdio.h>
//struct person
//{
//   int age;
//   float weight;
//};
//
//int main()
//{
//    struct person *personPtr, person1;
//    personPtr = &person1;   
//
//    printf("Enter age: ");
//    scanf("%d", &personPtr->age);
//
//    printf("Enter weight: ");
//    scanf("%f", &personPtr->weight);
//
//    printf("Displaying:\n");
//    printf("Age: %d\n", personPtr->age);
//    printf("weight: %f", personPtr->weight);
//
//    return 0;
//}
//**************************************************************************************************************
#include<stdio.h>
#include<stdlib.h>
struct kisi{
	int yas;
	float kilo;
	char isim[10];
};
int main(){
	struct kisi *ptr;
	int i,n;
	printf("kisi sayisini giriniz:");
	scanf("%d",&n);
	ptr=(struct kisi*)malloc(n * sizeof(struct kisi));
	for(i=0;i<n;i++){
		printf("kisinin ismini , yasini ve kilosunu giriniz:");
		scanf("%s %d %f",&(ptr+i)->isim,&(ptr+i)->yas,&(ptr+i)->kilo);
	}
	printf("kisilerin bilgileri:\n");
	for(i=0;i<n;i++){
		printf("isim: %s\tyas: %d\tkilo: %f\n",(ptr+i)->isim,(ptr+i)->yas,(ptr+i)->kilo);
	}
	return 0;
}
