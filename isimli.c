#include <locale.h>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

void menu();
void it(int sayi);
void hesapmakinesimenu();
void denklem_cozme();
void sekil_menu();
void fibonacci();
void sekil_menu();
void kumsaati(int buyuk);
void dikucgen(int buyukluk);
void baklava(int buyuk);
void tersucgen(int buyukluk);
void yildiz1();
void ucgen(int buyukluk);
void yildiz(int buyukluk);
void daire(int buyukluk);
void kare(int buyukluk);
void don();
void fibonacci();
void fiboislem();

void cikis_ana();
void kare1();
void kumsaati1();
void dikucgen1();
void yildiz1();
void baklava1();

void hesapmakinesi();
void hesapmakinesi_menusu();

void toplam();
void cikar();
void bol();
void carp();
void ebob();
void ekok();
void n_ussu();
void faiz();
void faktoriyel();
void karekok_bulma();
//��k��lar
void cikis_goruntu();
void cikis_sekil();
void cikis_hesap();


void denklem_cozme();
void denklem_menu();

int j,a,i,b,c;
char cikis;

main(){
	menu();
}
void menu(){
    system("color E"); 
    setlocale(LC_ALL,"unicode");
    int i=0,a=0;
    //BA�LA
    printf("%c",0xC9);//BA�LA �ST
    for(i=0;i< 35;i++)  printf("%c",0xCD); 
    printf("%c\n",0XBB); // SON �ST
    printf("%c              ANA MEN%c             %c\n",0xba,0x9a,0xba);
    printf("%c",0xCC);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD);
    printf("%c",0xB9);
    printf("\n");
    
    for(a=0;a<10;a++){//Menu B�y�kl�k Ayar�
    if(a == 0)   {
        printf("%c",0XBA);
            for(i=0;i< 10;i++)  printf(" ");    //ORTA ALT
            setlocale(LC_ALL,"Turkish");
                printf("1.Hesap Makinesi");
            setlocale(LC_ALL,"C");
            for(i=0;i< 9;i++)   printf(" ");
        printf("%c",0XBA);
        printf("\n");
     }
     else if(a==1)
     {
        printf("%c",0XBA);
        for(i=0;i< 10;i++)  printf(" ");    //ORTA ALT
        printf("2.Fibonacci     ");
        for(i=0;i< 9;i++)   printf(" ");
        printf("%c",0XBA);
        printf("\n");
     }else if(a==2)
     {
        printf("%c",0XBA);
        for(i=0;i< 10;i++)  printf(" ");    //ORTA ALT
        setlocale(LC_ALL,"Turkish");
        printf("3.Denklem ��zme ",0x87,0x94); 
        setlocale(LC_ALL,"C");
        for(i=0;i< 9;i++)   printf(" ");
        printf("%c",0XBA);
        printf("\n");
     }
     else if(a == 3)
     {
        printf("%c",0XBA);
        for(i=0;i< 10;i++)  printf(" ");    //ORTA ALT
        setlocale(LC_ALL,"Turkish");
        printf("4.�ekil �izme   ",0x9E,0x87);
        setlocale(LC_ALL,"C");
        for(i=0;i< 9;i++)   printf(" ");
        printf("%c",0XBA);
        printf("\n");
     }
     else if(a==9)
     {
        printf("%c",0XBA);
            for(i=0;i< 5;i++)   printf(" ");    //ORTA ALT
            setlocale(LC_ALL,"Turkish");
                printf("��k�� ��in C'ye bas�n�z   ");
            setlocale(LC_ALL,"C");
            for(i=0;i< 4;i++)   printf(" ");
        printf("%c",0XBA);
        printf("\n");
     }
     else {
    printf("%c",0XBA);
        for(i=0;i< 35;i++)  printf(" ");    //ORTA ALT
    printf("%c",0XBA);
    printf("\n");   
     }  
	 }
        //ALT
    printf("%c",0XC8);
    for(i=0;i< 35;i++)  {
    printf("%c",0xCD); }
    printf("%c",0XBC);
    char karakter[2];
    scanf("%s",&karakter);
    
    if(karakter[0] == 'c' || karakter[0] == 'C')
    {
    	system("cls");
    	exit(0);
	}
	else {
    int sayi = atoi(karakter);
    switch(sayi)
    {
    	case 1:{	
    		system("cls");
			hesapmakinesi_menusu();	
			}
    		break;
    	case 2:
    		{
    			system("cls");
    			fibonacci();
			}
    		break;
    	case 3:
    		denklem_cozme();
    		break;
    	case 4:
    		sekil_menu();
    		break;
    	default:
    		
    		break;
	}    
		}
}
void sekil_menu(){
	system("cls");
    setlocale(LC_ALL,"unicode");
    int i=0,a=0;
    //BA�LA
    printf("%c",0xC9);//BA�LA �ST
    for(i=0;i< 35;i++)  printf("%c",0xCD); 
    printf("%c\n",0XBB); // SON �ST
    printf("%c",0xba);
        setlocale(LC_ALL,"Turkish");
    printf("             �EK�L MEN�            ",0x9a);
        setlocale(LC_ALL,"C");
    printf("%c\n",0xba);
    printf("%c",0xCC);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD);
    printf("%c",0xB9);
    printf("\n");
    
    for(a=0;a<10;a++){//Menu B�y�kl�k Ayar�
    if(a == 0)   {
        printf("%c",0XBA);
            for(i=0;i< 10;i++)  printf(" ");    //ORTA ALT
            setlocale(LC_ALL,"Turkish");
                printf("1.Dikd�rtgen �izme");
            setlocale(LC_ALL,"C");
            for(i=0;i< 7;i++)   printf(" ");
        printf("%c",0XBA);
        printf("\n");
     }
     else if(a==1)
     {
        printf("%c",0XBA);
        for(i=0;i< 10;i++)  printf(" ");    //ORTA ALT
                    setlocale(LC_ALL,"Turkish");
        printf("2.Y�ld�z �izme   ");
                    setlocale(LC_ALL,"C");
        for(i=0;i< 8;i++)   printf(" ");
        printf("%c",0XBA);
        printf("\n");
     }else if(a==2)
     {
        printf("%c",0XBA);
        for(i=0;i< 10;i++)  printf(" ");    //ORTA ALT
        setlocale(LC_ALL,"Turkish");
        printf("3.Kum Saati �izme",0x87,0x94); 
        setlocale(LC_ALL,"C");
        for(i=0;i< 8;i++)   printf(" ");
        printf("%c",0XBA);
        printf("\n");
     }
     else if(a == 3)
     {
        printf("%c",0XBA);
        for(i=0;i< 10;i++)  printf(" ");    //ORTA ALT
        setlocale(LC_ALL,"Turkish");
        printf("4.Baklava �izme ",0x9E,0x87);
        setlocale(LC_ALL,"C");
        for(i=0;i< 9;i++)   printf(" ");
        printf("%c",0XBA);
        printf("\n");
     }
     else  if(a==4)
     {
     	printf("%c",0XBA);
        for(i=0;i< 10;i++)  printf(" ");    //ORTA ALT
        setlocale(LC_ALL,"Turkish");
        printf("5.��gen �izme   ",0x9E,0x87);
        setlocale(LC_ALL,"C");
        for(i=0;i< 9;i++)   printf(" ");
        printf("%c",0XBA);
        printf("\n");
	 }
     else if(a==9)
     {
        printf("%c",0XBA);
            for(i=0;i< 5;i++)   printf(" ");    //ORTA ALT
            setlocale(LC_ALL,"Turkish");
                printf("��k�� ��in C'ye bas�n�z   ");
            setlocale(LC_ALL,"C");
            for(i=0;i< 4;i++)   printf(" ");
        printf("%c",0XBA);
        printf("\n");
     }
     else {
    printf("%c",0XBA);
        for(i=0;i< 35;i++)  printf(" ");    //ORTA ALT
    printf("%c",0XBA);
    printf("\n");   
     }  
	 }
        //ALT
    
	printf("%c",0XC8);
    for(i=0;i< 35;i++)  {
    printf("%c",0xCD); }
    printf("%c",0XBC);
    char karakter[2];
    scanf("%s",&karakter);
    int sayi = atoi(karakter);
    if(karakter[0] == 'c' || karakter[0] == 'C') cikis_ana();
	switch(sayi)   {
    	case 1:
	kare1();    	
		break;
    	case 2:
    		yildiz1();
    		break;
    	case 3:
    		kumsaati1();
    		break;
    	case 4:
    		baklava1();
    		break;
    	case 5:
    		dikucgen1();
    		break;
    	default:
    		break;
	}    
}
void kumsaati(int buyuk){	
//�st K�s�m
	system("cls");
	char yildiz[buyuk];
	char tersy[buyuk];
	for(i = 0;i< buyuk;i++)	{
		yildiz[i] = '*';
		tersy[i] = '*';
	}
	for(c = 0;c< buyuk-1;c++)	{
		yildiz[c] = ' ';
		tersy[buyuk-c-1] = ' ';
		for(a = 0;a<buyuk;a++)	printf("%c",yildiz[a]); // y�ld�z
		for(b = 0;b<buyuk;b++) 	printf("%c",tersy[b]); // tersy
	printf("\n");
	}
	yildiz[buyuk-1] = ' ';
	tersy[0] = ' ';
//Alt k�s�m
int c1=0;
	for(c1 =0; c1< buyuk-1;c1++)	{
		yildiz[c1] = '*';//Bo�luk karakteri ascii kodu
		tersy[buyuk-c1-1] = '*';//Bo�luk karakteri ascii kodu
		for(b = 0;b<buyuk;b++) 	printf("%c",tersy[b]);
		for(a = 0;a<buyuk;a++)	printf("%c",yildiz[a]);
	printf("\n");
	}
	setlocale(LC_ALL,"Turkish");
	printf("\n��k�� ��in C, Yeni De�er ��in Herhangi bir tu�a bas�n");
	setlocale(LC_ALL,"C");
    cikis=getch();
    if(cikis=='C' || cikis=='c'){cikis_sekil();}
    else{system("cls");kumsaati1();}
}
void dikucgen(int buyukluk){
	system("cls");
    char sol[buyukluk];
    for(i = 0;i< buyukluk;i++){
        sol[i] = '*';   
        }
    for(j = 0;j < buyukluk;j++)
    {
        sol[j] = ' ';
       for(i = 0;i< buyukluk;i++)
       {
       	printf("%c",sol[i]);
	   }
	   printf("\n");
    }
    setlocale(LC_ALL,"Turkish");
    printf("\n��k�� ��in C, Yeni De�er ��in Herhangi bir tu�a bas�n");
    setlocale(LC_ALL,"C");
    cikis=getch();
    if(cikis=='C' || cikis=='c'){cikis_sekil();}
    else{system("cls");dikucgen1();}
}
void baklava(int buyuk){
//�st K�s�m
	system("cls");
	char yildiz[buyuk];
	char tersy[buyuk];
	for(i = 0;i< buyuk;i++)	{
		yildiz[i] = ' ';
		tersy[i] = ' ';
	}
	for(c =0; c < buyuk;c++)	{
		yildiz[c] = '*';//Bo�luk karakteri ascii kodu
		tersy[buyuk-c-1] = '*';//Bo�luk karakteri ascii kodu
		for(b = 0;b<buyuk;b++) 	printf("%c",tersy[b]);
		for(a = 0;a<buyuk;a++)	printf("%c",yildiz[a]);
	printf("\n");
	}
	int c1 =0;
	for(c1 = 0;c1< buyuk;c1++)	{
		yildiz[c1] = ' ';
		tersy[buyuk-c1-1] = ' ';
		for(a = 0;a<buyuk;a++)	printf("%c",yildiz[a]); // y�ld�z
		for(b = 0;b<buyuk;b++) 	printf("%c",tersy[b]); // tersy
	printf("\n");
	}
	setlocale(LC_ALL,"Turkish");
	printf("\n��k�� ��in C, Yeni De�er ��in Herhangi bir tu�a bas�n");
	setlocale(LC_ALL,"C");
    cikis=getch();
    if(cikis=='C' || cikis=='c'){cikis_sekil();}
    else{system("cls");baklava1();}
}
void yildiz(int buyukluk){

	int say = 0;
	ucgen(buyukluk);
	//Orta K�s�m
	char kari[buyukluk];
	char ucgen[buyukluk];
	char ters[buyukluk];
	for(a= 0;a<buyukluk;a++)
	{
		ters[a] = '*';
		ucgen[a] = '*';
		kari[a]='*';
	}
	
	for(j=0;j<buyukluk;j++) {//Bo�luk
for(c = 0;c < buyukluk;c++)		printf("%c",ucgen[c]);
for( c = 1;c < buyukluk*2;c++)	printf("%c",kari[j]);
for(c= 0;c < buyukluk;c++) printf("%c",ters[c]);
printf("\n");	
ucgen[j] = ' ';
ters[buyukluk-j-1] = ' ';
}
for(a= 0;a<buyukluk;a++){
		ters[a] = '*';
		ucgen[a] = '*';
		kari[a]='*';
	}
//Alt K�s�m
	for(j=0;j<buyukluk;j++) {//Bo�luk
for(c = 0;c < buyukluk-say-1;c++)	printf(" ");
if(j!=0)printf("*");	

for(c= 0;c < buyukluk;c++) {
printf("%c",ters[c]);}
if(j!=0) printf(" ");
for(c = 0;c<say-1;c++){
	printf("  ");
}
say++;
for(c = 0;c < buyukluk;c++)	{
	printf("%c",ucgen[c]);
}
printf("*");
printf("\n");	
ucgen[j] = ' ';
ters[buyukluk-j-1] = ' ';
}
}
void tersucgen(int buyukluk){
	char sag[buyukluk];
	for(j = buyukluk; j >0 ;j--) 
	{
		sag[j]='*';
	}
	for(j = buyukluk;j>0;j--)
    {
        sag[j] = 160;//Bo�luk
       for(i = 0;i< buyukluk;i++)
       {
       	printf("%c",sag[i]);
	   }
	   printf("\n");
    }
	
}
void ucgen(int buyukluk){
	system("cls");
	char sol[buyukluk];
	char sag[buyukluk];
	for(a = 0;a < buyukluk;a++)
	{
	sol[a] = ' ';
	sag[a] = ' ';
	}
	
	for(i = 0;i< buyukluk;i++)
	{
			for(c = 0;c<buyukluk;c++) printf(" ");
	sol[buyukluk-i-1] = '*';
	for(a=0;a<buyukluk;a++) //Bo�luk
printf("%c",sol[a]);
	sag[i] = '*';
	for( b=1;b<buyukluk;b++)
printf("%c",sag[b]);

	printf("\n");
	
	}
}
void yucgen(int buyukluk){
	char ucgen[buyukluk];
	for(b = 0;b <  buyukluk;b++)
	{
		ucgen[b] = '*';
	}
	for(c = buyukluk; c > 0;c--)
	{
		ucgen[c] = ' ';
		for(a = 0;a < buyukluk;a++) printf("%c",ucgen[a]);
		printf("\n");
	}
}
void kare(int buyukluk){
	for(i = 0; i< buyukluk;i++)
	{
		for(j = 0;j< buyukluk;j++)	printf("*");
		printf("\n");
	}
	setlocale(LC_ALL,"Turkish");
	printf("\n��k�� ��in C, Yeni De�er ��in Herhangi bir tu�a bas�n");
	setlocale(LC_ALL,"C");
    cikis=getch();
    if(cikis=='C' || cikis=='c'){cikis_sekil();}
    else{system("cls");kare1();}
}
void don(){
	system("cls");
	menu();
}
//��k��lar
void cikis_goruntu(){
	system("cls");
    system("color E"); 
    setlocale(LC_ALL,"unicode");
    int i=0,a=0;
    //BA�LA
    printf("%c",0xC9);//BA�LA �ST
    for(i=0;i< 35;i++)  printf("%c",0xCD); 
    printf("%c\n",0XBB); // SON �ST
    printf("%c",0XBA);
    for(i=0;i< 10;i++)  printf(" ");    //ORTA ALT
    setlocale(LC_ALL,"Turkish");
    printf("�IKI� MEN�      ");
    setlocale(LC_ALL,"C");
    for(i=0;i< 9;i++)   printf(" ");
    printf("%c",0XBA);
    printf("\n");
    printf("%c",0xCC);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD);
    printf("%c",0xB9);
    printf("\n");
    	
    for(a=0;a<5;a++){//Menu B�y�kl�k Ayar�
    if(a==0)
    {
        printf("%c",0XBA);
        for(i=0;i< 10;i++)  printf(" ");    //ORTA ALT
        setlocale(LC_ALL,"Turkish");
        printf("1.�nceki Men�   ");
        setlocale(LC_ALL,"C");
        for(i=0;i< 9;i++)   printf(" ");
        printf("%c",0XBA);
        printf("\n");
    }else if(a==1)
    {
        printf("%c",0XBA);
        for(i=0;i< 10;i++)  printf(" ");    //ORTA ALT
        setlocale(LC_ALL,"Turkish");
        printf("2.Ana Men�      ",0x87,0x94); 
        setlocale(LC_ALL,"C");
        for(i=0;i< 9;i++)   printf(" ");
        printf("%c",0XBA);
        printf("\n");
     }
     else if(a == 2)
     {
        printf("%c",0XBA);
        for(i=0;i< 10;i++)  printf(" ");    //ORTA ALT
        setlocale(LC_ALL,"Turkish");
        printf("3.Program Sonu  ",0x9E,0x87);
        setlocale(LC_ALL,"C");
        for(i=0;i< 9;i++)   printf(" ");
        printf("%c",0XBA);
        printf("\n");
     }
     else {
    printf("%c",0XBA);
        for(i=0;i< 35;i++)  printf(" ");    //ORTA ALT
    printf("%c",0XBA);
    printf("\n");   
    } 
    }
        //ALT
    printf("%c",0XC8);
    for(i=0;i< 35;i++){
    printf("%c",0xCD);}
    printf("%c",0XBC);
    
    
  
}
void cikis_ana(){
	setlocale(LC_ALL,"C");
	cikis_goruntu();
  char karakter[2];
    scanf("%s",karakter);
    int sayi = atoi(karakter);
	switch(sayi)
	{
		case 1:
			don();
			break;
		case 2:
			don();
			break;
		case 3:
			exit(0);
			break;		
	}
}
void cikis_hesap(){
setlocale(LC_ALL,"C");
	cikis_goruntu();
  char karakter[2];
    scanf("%s",karakter);
    int sayi = atoi(karakter);
	switch(sayi)
	{
		case 1:
			{
		system("cls");
			hesapmakinesi_menusu();
			break;	}
		case 2:
			don();
			break;
		case 3:
			exit(0);
			break;		
	}

}
void cikis_sekil(){
setlocale(LC_ALL,"C");
	cikis_goruntu();
  char karakter[2];
    scanf("%s",karakter);
    int sayi = atoi(karakter);
	switch(sayi)
	{
		case 1:
		sekil_menu();
			break;
		case 2:
			don();
			break;
		case 3:
			exit(0);
			break;		
	}
}
int buyuk =0;
void kumsaati1(){
	setlocale(LC_ALL,"Turkish");
	printf("Kum saatinin b�y�kl���n� giriniz:");
	scanf("%i",&buyuk);
	kumsaati(buyuk);
	setlocale(LC_ALL,"C");
}
void yildiz1(){
	setlocale(LC_ALL,"Turkish");
	printf("��kartaca��n�z y�ld�z�n b�y�kl���n� giriniz.");
	int a = 0;
	scanf("%i",&a);
	system("cls");
	yildiz(a);
	printf("\n��k�� ��in C, Yeni De�er ��in Herhangi bir tu�a bas�n");
	setlocale(LC_ALL,"C");
    cikis=getch();
    if(cikis=='C' || cikis=='c'){cikis_sekil();}
    else{system("cls");yildiz1();}
}
void kare1(){
	setlocale(LC_ALL,"Turkish");
	printf("Dikd�rtgenin b�y�kl���n� giriniz:");
	setlocale(LC_ALL,"C");
	scanf("%i",&buyuk);
	system("cls");
	kare(buyuk);
}
void baklava1(){
	setlocale(LC_ALL,"Turkish");
	printf("Baklava b�y�kl���n� giriniz:");
	setlocale(LC_ALL,"C");
	scanf("%i",&buyuk);
	baklava(buyuk);
}
void dikucgen1(){
	setlocale(LC_ALL,"Turkish");
	printf("��genin b�y�kl���n� giriniz:");
	setlocale(LC_ALL,"C");
	scanf("%i",&buyuk);
	dikucgen(buyuk);
}
// � - 
// i - 0x89




void toplam(){
	int sayi1,sayi2;
	printf("1.Say�y� Girin:");
	scanf("%d",&sayi1);
	printf("2.Say�y� Girin:");
	scanf("%d",&sayi2);
	system("cls");printf("**************\n");printf("%d+%d=%d",sayi1,sayi2,sayi1+sayi2);printf("\n**************");
	printf("\n��k�� ��in C, Yeni De�er ��in Herhangi bir tu�a bas�n");
	cikis=getch();
	if(cikis=='C' || cikis=='c'){cikis_hesap();}
	else{system("cls");toplam();}
}
void cikar(){
	int sayi1,sayi2;
	printf("1.Say�y� Girin:");
	scanf("%d",&sayi1);
	printf("2.Say�y� Girin:");
	scanf("%d",&sayi2);
	system("cls");printf("**************\n");printf("%d-%d=%d",sayi1,sayi2,sayi1-sayi2);printf("\n**************");
	printf("\n��k�� ��in C, Yeni De�er ��in Herhangi bir tu�a bas�n");
	cikis=getch();
	if(cikis=='C' || cikis=='c'){cikis_hesap();}
	else{system("cls");cikar();}
}
void bol(){
	int sayi1,sayi2;
	printf("1.Say�y� Girin:");
	scanf("%d",&sayi1);
	printf("2.Say�y� Girin:");
	scanf("%d",&sayi2);
	system("cls");printf("**************\n");printf("%d/%d=%f",sayi1,sayi2,(float)sayi1/sayi2);printf("\n**************");
	printf("\n��k�� ��in C, Yeni De�er ��in Herhangi bir tu�a bas�n");
	cikis=getch();
	if(cikis=='C' || cikis=='c'){cikis_hesap();}
	else{system("cls");bol();}
}
void carp(){
	int sayi1,sayi2;
	printf("1.Say�y� Girin:");
	scanf("%d",&sayi1);
	printf("2.Say�y� Girin:");
	scanf("%d",&sayi2);
	system("cls");printf("**************\n");printf("%d.%d=%d",sayi1,sayi2,sayi1*sayi2);printf("\n**************");
	printf("\n��k�� ��in C, Yeni De�er ��in Herhangi bir tu�a bas�n");
	cikis=getch();
	if(cikis=='C' || cikis=='c'){cikis_hesap();}
	else{system("cls");carp();}
}
void ebob(){
	int sayi1,sayi2,adim=0,ebobsay;
	printf("1.Say�y� Girin:");
	scanf("%d",&sayi1);
	printf("2.Say�y� Girin:");
	scanf("%d",&sayi2);
	for(adim=sayi1*sayi2;adim>=1;adim--){
	if(sayi1%adim==0&&sayi2%adim==0){ebobsay=adim;break;}}
	if(ebobsay!=1)printf("%d ve %d say�lar�n�n Ebobu=%d",sayi1,sayi2,adim);
	else printf("Say�lar�n Ebobu Yoktur.");
	printf("\n��k�� ��in C, Yeni De�er ��in Herhangi bir tu�a bas�n");
	cikis=getch();
	if(cikis=='C' || cikis=='c'){cikis_hesap();}
	else{system("cls");ebob();}
	
}
void ekok(){
	int sayi1,sayi2,adim,ekoksay;
	printf("1.Say�y� Girin:");
	scanf("%d",&sayi1);
	printf("2.Say�y� Girin:");
	scanf("%d",&sayi2);
	for(adim=1;adim<sayi1*sayi2;adim++){
	if(adim%sayi1==0&&adim%sayi2==0){ekoksay=adim;break;}}
	if(ekoksay!=sayi1*sayi2) printf("%d ve %d say�lar�n�n Ekoku=%d",sayi1,sayi2,adim);
	else printf("Sayilarin EKOKU Yoktur.");
	
	printf("\n��k�� ��in C, Yeni De�er ��in Herhangi bir tu�a bas�n");
	cikis=getch();
	if(cikis=='C' || cikis=='c'){cikis_hesap();}
	else{system("cls");ekok();}
}
void n_ussu(){
	int sayi,ussu,yenisayi,ussuilk;
	printf("Say�y� Girin:");
	scanf("%d",&sayi);
	yenisayi=sayi;
	printf("�ss� Girin:");
	scanf("%d",&ussu);
	ussuilk=ussu;
	do {ussu--;yenisayi=sayi*yenisayi;
} while(ussu>1);
printf("%d Say�s�n�n %d �st� = %d",sayi,ussuilk,yenisayi);
	printf("\n��k�� ��in C, Yeni De�er ��in Herhangi bir tu�a bas�n");
	cikis=getch();
	if(cikis=='C' || cikis=='c'){cikis_hesap();}
	else{system("cls");n_ussu();}
}
void faiz(){
	float para,faizoran;
	int ay,ilkay;
	char secim;
	printf("Para Miktar�n�z� Girin:");
	scanf("%f",&para);
	printf("Ayl�k Faiz Oran�n�z� Girin:");
	scanf("%f",&faizoran);
	printf("Kac Ayl�k Faize Yat�racaks�n:");
	scanf("%d",&ay);
	ilkay=ay;
	faizoran=(float)faizoran/100;
	while(ay>0){
		para+=(float)para*faizoran;
		ay--;
	}
	printf("%d Ay Sonra Para Miktar�n:%f Olacak.",ilkay,para);
	printf("\n��k�� ��in C, Yeni De�er ��in Herhangi bir tu�a bas�n");
	cikis=getch();
	if(cikis=='C' || cikis=='c'){cikis_hesap();}
	else{system("cls");faiz();}
}
void faktoriyel(){
	long long sayi,yenisayi;
	printf("Say�n�z� Girin:");
	scanf("%lld",&sayi);
	yenisayi=sayi--;
	while(sayi>1){
		yenisayi=yenisayi*sayi;
		sayi--;
	}
	printf("Fakt�riyelin Sonucu = %lld",yenisayi);
	printf("\n��k�� ��in C, Yeni De�er ��in Herhangi bir tu�a bas�n");
	cikis=getch();
	if(cikis=='C' || cikis=='c'){cikis_hesap();}
	else{system("cls");faktoriyel();}
}
void karekok_bulma(){
	int sayi,adim;
	printf("Karek�k� al�nacak bir say� giriniz:");
	scanf("%d",&sayi);
	for(adim=1;10000>adim;adim++){
		if(adim*adim==sayi){printf("%d Say�s�n�n Karek�k� = %d",sayi,adim);break;}
		}
		if (adim*adim!=sayi)printf("\a%d Say�s�n�n Karek�k� Yok.",sayi);
	printf("\n��k�� ��in C, Yeni De�er ��in Herhangi bir tu�a bas�n");
	cikis=getch();
	if(cikis=='C' || cikis=='c'){cikis_hesap();}
	else{system("cls");karekok_bulma();}
}
void hesapmakinesi_menusu(){
	system("color B"); 
    setlocale(LC_ALL,"C");
    int i=0,a=0;
    //BA�LA
    printf("%c",0xC9);//BA�LA �ST
    for(i=0;i< 35;i++)  printf("%c",0xCD); 
    printf("%c\n",0XBB); // SON �ST
        printf("%c",0XBA);
        for(i=0;i< 10;i++)  printf(" ");    //ORTA ALT
        setlocale(LC_ALL,"Turkish");
        printf("HESAP MAK�NES�  ");
        setlocale(LC_ALL,"C");
        for(i=0;i< 9;i++)   printf(" ");
        printf("%c",0XBA);
        printf("\n");

    setlocale(LC_ALL,"C");
    printf("%c",0xCC);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD);
    printf("%c",0xB9);
    printf("\n");
    for(a=0;a<12;a++){//Menu B�y�kl�k Ayar�
    if(a == 0)   {
        printf("%c",0XBA);
            for(i=0;i< 10;i++)  printf(" ");    //ORTA ALT
            setlocale(LC_ALL,"Turkish");
                printf("1.Toplama       ");
            setlocale(LC_ALL,"C");
            for(i=0;i< 9;i++)   printf(" ");
        printf("%c",0XBA);
        printf("\n");
    }
     else if(a==1)
    {
        printf("%c",0XBA);
        for(i=0;i< 10;i++)  printf(" ");    //ORTA ALT
        setlocale(LC_ALL,"Turkish");
        printf("2.��karma       ",0xfd);
        setlocale(LC_ALL,"C");
        for(i=0;i< 9;i++)   printf(" ");
        printf("%c",0XBA);
        printf("\n");
    }else if(a==2)
    {
        printf("%c",0XBA);
        for(i=0;i< 10;i++)  printf(" ");    //ORTA ALT
        setlocale(LC_ALL,"Turkish");
        printf("3.B�lme         "); 
        setlocale(LC_ALL,"C");
        for(i=0;i< 9;i++)   printf(" ");
        printf("%c",0XBA);
        printf("\n");
    }
     else if(a == 3)
    {
        printf("%c",0XBA);
        for(i=0;i< 10;i++)  printf(" ");    //ORTA ALT
        setlocale(LC_ALL,"Turkish");
        printf("4.�arpma        ",0xc7);
        setlocale(LC_ALL,"C");
        for(i=0;i< 9;i++)   printf(" ");
        printf("%c",0XBA);
        printf("\n");
    }
          else if(a == 4)
    {
        printf("%c",0XBA);
        for(i=0;i< 10;i++)  printf(" ");    //ORTA ALT
        setlocale(LC_ALL,"Turkish");
        printf("5.EBOB          ");
        setlocale(LC_ALL,"C");
        for(i=0;i< 9;i++)   printf(" ");
        printf("%c",0XBA);
        printf("\n");
    }
          else if(a == 5)
    {
        printf("%c",0XBA);
        for(i=0;i< 10;i++)  printf(" ");    //ORTA ALT
        setlocale(LC_ALL,"Turkish");
        printf("6.EKOK          ",0xc7);
        setlocale(LC_ALL,"C");
        for(i=0;i< 9;i++)   printf(" ");
        printf("%c",0XBA);
        printf("\n");
    }
          else if(a == 6)
    {
        printf("%c",0XBA);
        for(i=0;i< 10;i++)  printf(" ");    //ORTA ALT
        setlocale(LC_ALL,"Turkish");
        printf("7.N �ss�n� Bulma",0xc7);
        setlocale(LC_ALL,"C");
        for(i=0;i< 9;i++)   printf(" ");
        printf("%c",0XBA);
        printf("\n");
    }
          else if(a == 7)
    {
        printf("%c",0XBA);
        for(i=0;i< 10;i++)  printf(" ");    //ORTA ALT
        setlocale(LC_ALL,"Turkish");
        printf("8.Faiz Hesab�   ",0xc7);
        setlocale(LC_ALL,"C");
        for(i=0;i< 9;i++)   printf(" ");
        printf("%c",0XBA);
        printf("\n");
    }
          else if(a == 8)
    {
        printf("%c",0XBA);
        for(i=0;i< 10;i++)  printf(" ");    //ORTA ALT
        setlocale(LC_ALL,"Turkish");
        printf("9.Fakt�riyel Al ",0xc7);
        setlocale(LC_ALL,"C");
        for(i=0;i< 9;i++)   printf(" ");
        printf("%c",0XBA);
        printf("\n");
    }
          else if(a == 9)
    {
        printf("%c",0XBA);
        for(i=0;i< 10;i++)  printf(" ");    //ORTA ALT
        setlocale(LC_ALL,"Turkish");
        printf("10.Karek�k Bulma",0xc7);
        setlocale(LC_ALL,"C");
        for(i=0;i< 9;i++)   printf(" ");
        printf("%c",0XBA);
        printf("\n");
    }
     else if(a==11)
    {
        printf("%c",0XBA);
            for(i=0;i< 5;i++)   printf(" ");    //ORTA ALT
            setlocale(LC_ALL,"Turkish");
                printf(" ��k�� ��in C'ye bas�n�z  ");
            setlocale(LC_ALL,"C");
            for(i=0;i< 4;i++)   printf(" ");
        printf("%c",0XBA);
        printf("\n");
    }
     else {
    printf("%c",0XBA);
        for(i=0;i< 35;i++)  printf(" ");    //ORTA ALT
    printf("%c",0XBA);
    printf("\n");   
    }  
	}
        //ALT
    printf("%c",0XC8);
    for(i=0;i< 35;i++){
    printf("%c",0xCD);}
    printf("%c",0XBC);
	hesapmakinesi();}

void hesapmakinesi(){
	setlocale(LC_ALL,"Turkish");
    char islem[2];
	printf("\n��lem Giriniz:");
	scanf("%s",&islem);
	int sayi = atoi(islem);
	if(islem[0]=='C' || islem[0]=='c'){cikis_ana();}//buraya cikis menusu gelecek
    else{
    switch(sayi) {
    case 1:system("cls");toplam();break;
	case 2:system("cls");cikar();break;
	case 3:system("cls");bol();break;
	case 4:system("cls");carp();break;
	case 5:system("cls");ebob();break;
	case 6:system("cls");ekok();break;
	case 7:system("cls");n_ussu();break;
	case 8:system("cls");faiz();break;
	case 9:system("cls");faktoriyel();break;
	case 10:system("cls");karekok_bulma();break;
	default:printf("\a\nHATA:1 ile 10 aras�nda bir say� tu�layin !!");hesapmakinesi();
}
}
}



void denklem_cozme() {
    
    char secim[2];
     int a,b,c,d,e,f,g,delta,denklem;

     setlocale(LC_ALL,"Turkish");
    printf("\nSe�ece�iniz i�lem=");
scanf("%c",&secim);
int sayi = atoi(secim); 
setlocale(LC_ALL,"C");
if(secim[0]=='c' || secim[0]=='C'){
cikis_ana();}
    
else{
    switch(sayi) 
 {
      case 1 : {
    denklem_yazma();
    break;
}
    case 2 : {
    birincidenklem();
    break;
}
   case 3 :
ikincidenklem();
break;  


default:{

setlocale(LC_ALL,"Turkish");
system("cls");
denklem_menu();
printf("\a\nL�TFEN 1 �LE 3 ARASINDA DE�ER G�R�N�Z.\n\n");
     break;}
}
}
}

denklem_yazma(){
     int a,b,c;
    system("cls");
    setlocale(LC_ALL,"Turkish");
    printf("\n\nVarsay�lan 2.dereceden denklemimiz ax�+bx+c �eklindedir.\n�stedi�iniz denklemi yazdyrmak i�in se�cenekler giriniz\n");
    printf("x�'nin katsay�s�n� giriniz="); scanf("%d",&a);
    printf("x'in katsay�s�n� giriniz="); scanf("%d",&b);
    printf("c'nin katsay�s�n� giriniz="); scanf("%d",&c);
    printf("�kinci Dereceden Denklemimiz : %dx�+%dx+%d",a,b,c);
    printf("\n��k�� i�in C, Yeni Deger ��in Herhangi bir tu�a basin");
    cikis=getch();
    if(cikis=='C' || cikis=='c'){cikis_ana1();}
    else{system("cls");denklem_yazma();}
    setlocale(LC_ALL,"C");
}
birincidenklem(){
    system("cls");
    setlocale(LC_ALL,"Turkish");
    printf("Denklem ax = b �eklindedir.\nL�tfen a'y� giriniz:'");
    float a,b;
    scanf("%i",&a);
    printf("\nL�tfen b'yi giriniz:'");
    scanf("%i",&b);
    float kok = a/b;
    printf("Bu denklemin k�k� %f dir.",kok);
    printf("\n��k�� ��in C, Yeni de�erler i�in herhangi bir tu�a bas�n�z.");
    cikis=getch();
    switch (cikis)
    {
	case 'c':{
		cikis_ana1();
	break;	}
	case'C':
		{
			cikis_ana1();
			break;
		}
	default:{
		system("cls");
		birincidenklem();
		break;
	}
    }
    
    setlocale(LC_ALL,"C");
    
}
ikincidenklem(){
    system("cls");
        double x1,x2;
        int a,b,c,delta;
        setlocale(LC_ALL,"Turkish");
    printf("Varsay�lan 2.dereceden denklemimiz ax�+bx+c �eklindedir.Bu denklemin k�klerini\na�a��daki sorulara verilen cevaplarla bulunmaktad�r.\n");
    printf("x�'nin katsay�s�n� giriniz="); scanf("%d",&a);
    printf("x'in katsay�s�n� giriniz="); scanf("%d",&b);
    printf("c'nin katsay�s�n� giriniz="); scanf("%d",&c);
    printf("Ykinci Dereceden Denklemimiz : %dx�+%dx+%d",a,b,c);
    delta = b*b - 4*a*c;
    printf("\nDelta= %d", delta);

  if (delta == 0)
    {
        x1 = -b / 2*a;
        printf("\n\ndelta = 0 k�kler e�it k�k = %d ", x1);
    }

    else if ( delta < 0 )
        printf("\n\ndelta < 0 denklemin k�kleri sanal k�kt�r. Reel k�k bulunamaz. ");

    else if( delta > 0)
    {
        x1 = (-b +(sqrt(delta))) / (2*a);
        x2 = (-b -(sqrt(delta))) / (2*a);
        printf("\n\n Denklemin ilk k�k� %.2f ve denklemin ikinci k�k� %.2f \n\n", x1,x2);
        
    }
    printf("\n��k�� ��in C, Yeni De�er ��in Herhangi bir tu�a bas�n");
    cikis=getch();
    if(cikis=='C' || cikis=='c'){cikis_ana1();}
    else{system("cls");ikincidenklem();}
    setlocale(LC_ALL,"C");
}
cikis_ana1(){
setlocale(LC_ALL,"C");
cikis_goruntu();

int islem;
scanf("%d",&islem);
switch(islem){
    case 1:denklem_cozme(); break;
    case 2:don();
    case 3:exit(0);
}
}
void denklem_menu(){
        system("color E"); 
    int i=0,a=0;
    setlocale(LC_ALL,"C");
    //BASLA
    printf("%c",0xC9);//BASLA �ST

    for(i=0;i< 35;i++)  printf("%c",0xCD); 
    printf("%c\n",0XBB); // SON �ST
    printf("%c",0XBA);
    for(i=0;i< 10;i++)  printf(" ");    //ORTA ALT
    setlocale(LC_ALL,"Turkish");
    printf("DENKLEM ��ZME   ");
    setlocale(LC_ALL,"C");
    for(i=0;i< 9;i++)   printf(" ");
    printf("%c",0XBA);
    printf("\n");
    printf("%c",0xCC);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD);
    printf("%c",0xB9);
    printf("\n");
    
    for(a=0;a<10;a++){//Menu B�y�kl�k Ayari
    if(a == 0)   {
        printf("%c",0XBA);
            for(i=0;i< 2;i++)  printf(" ");    //ORTA ALT
            setlocale(LC_ALL,"Turkish");
                printf("1- Denklem Yazma");
            setlocale(LC_ALL,"C");
            for(i=0;i< 17;i++)   printf(" ");
        printf("%c",0XBA);
        printf("\n");
     }
     else if(a==1)
     {
        printf("%c",0XBA);
        for(i=0;i< 2;i++)  printf(" "); 
                setlocale(LC_ALL,"Turkish");
   //ORTA ALT
        printf("2- 1.Dereceden K�k Bulma");
         setlocale(LC_ALL,"C");
        for(i=0;i< 9;i++)   printf(" ");
        printf("%c",0XBA);
        printf("\n");
     }else if(a==2)
     {
        printf("%c",0XBA);
        for(i=0;i< 2;i++)  printf(" ");    //ORTA ALT
        setlocale(LC_ALL,"Turkish");
        printf("3- 2.Dereceden K�k Bulma ",0x87,0x94); 
        setlocale(LC_ALL,"C");
        for(i=0;i< 8;i++)   printf(" ");
        printf("%c",0XBA);
        printf("\n");
     }
     
     else if(a==9)
     {
        printf("%c",0XBA);
            for(i=0;i< 5;i++)   printf(" ");    //ORTA ALT
            setlocale(LC_ALL,"Turkish");
                printf("��k�� ��in C'ye bas�n�z.  ");
            setlocale(LC_ALL,"C");
            for(i=0;i< 4;i++)   printf(" ");
        printf("%c",0XBA);
        printf("\n");
     }
     else {
    printf("%c",0XBA);
        for(i=0;i< 35;i++)  printf(" ");    //ORTA ALT
    printf("%c",0XBA);
    printf("\n");   
     }  
	 }
        //ALT
    printf("%c",0XC8);
    for(i=0;i< 35;i++)  {
    printf("%c",0xCD); }
    printf("%c",0XBC);
    denklem_cozme();
}

void fibonacci(){
    char cikis;
    setlocale(LC_ALL,"Turkish");
    long long terim,adim,sayi1=0,sayi2=1,sonraki;
    printf("Ka� Terimli Fibonacci �stersiniz:");
    scanf("%lld",&terim);
    for(adim=0;adim<terim;adim++) {
        if(adim<=1)sonraki=adim;
        else{sonraki=sayi1+sayi2;
        sayi1=sayi2;
        sayi2=sonraki;
        }
    printf("%lld\n",sonraki);
}
printf("\n��k�� ��in C, Yeni De�er ��in Herhangi bir tu�a bas�n");
    cikis=getch();
    if(cikis=='C' || cikis=='c'){cikis_fiboislem();}
    else{system("cls");fibonacci();}
}
cikis_fiboislem(){
	setlocale(LC_ALL,"C");
int anacikisfibo;
cikis_goruntu();
scanf("%d",&anacikisfibo);
switch(anacikisfibo){
case 1:system("cls");menu();break;
case 2:system("cls");menu();break;
case 3:system("cls");exit(0);break;
}
}
