#include <locale.h>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

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
void cikis_goruntu();
void kare1();
void kumsaati1();
void dikucgen1();
void yildiz1();

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
    	cikis_goruntu();
	}
	else {
    int sayi = atoi(karakter);
    switch(sayi)
    {
    	case 1:
    		printf("Hey everybody is coder.!");
    		break;
    	case 2:
    		printf("Python dayd�m %20 deyim ...");
    		break;
    	case 3:
    		printf("Ay�p Bir�ey  ... ");
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
    if(karakter[0] == 'c' || karakter[0] == 'C') cikis_goruntu();
	switch(sayi)
    {
    	case 1:
	kare1();    	
		break;
    	case 2:
    		printf("Python dayd�m %20 deyim ...");
    		break;
    	case 3:
    		printf("Ay�p Bir�ey  ... ");
    		break;
    	case 4:
    		sekil_menu();
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
	printf("\n��k�� ��in C, Yeni De�er ��in Herhangi bir tu�a bas�n");
    cikis=getch();
    if(cikis=='C' || cikis=='c'){cikis_goruntu();}
    else{system("cls");kumsaati(5);}
}
void dikucgen(int buyukluk){
    char sol[buyukluk];
    for(i = 0;i< buyukluk;i++){
        sol[i] = '*';   
        }
    for(j = 0;j < buyukluk;j++)
    {
        sol[j] = 160;
       for(i = 0;i< buyukluk;i++)
       {
       	printf("%c",sol[i]);
	   }
	   printf("\n");
    }
    printf("\n��k�� ��in C, Yeni De�er ��in Herhangi bir tu�a bas�n");
    cikis=getch();
    if(cikis=='C' || cikis=='c'){cikis_goruntu();}
    else{system("cls");dikucgen(5);}
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
	printf("\n��k�� ��in C, Yeni De�er ��in Herhangi bir tu�a bas�n");
    cikis=getch();
    if(cikis=='C' || cikis=='c'){cikis_goruntu();}
    else{system("cls");baklava(5);}
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
for(c = 0;c < buyukluk-say;c++)	printf(" ");	
for(c= 0;c < buyukluk;c++) {
printf("%c",ters[c]);}
for(c = 0;c<say;c++){
	printf("  ");
}
say++;
for(c = 0;c < buyukluk;c++)	{
	printf("%c",ucgen[c]);
}
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
    if(cikis=='C' || cikis=='c'){cikis_goruntu();}
    else{system("cls");kare(5);}
}
void don(){
	system("cls");
	menu();
}
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
    
    
    char karakter[2];
    scanf("%s",karakter);
    int sayi = atoi(karakter);
	switch(sayi)
	{
		case 1:
			printf("");
			break;
		case 2:
			don();
			break;
		case 3:
			printf("");
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
	setlocale(LC_ALL,"C");
	printf("\n��k�� ��in C, Yeni De�er ��in Herhangi bir tu�a bas�n");
    cikis=getch();
    if(cikis=='C' || cikis=='c'){cikis_goruntu();}
    else{system("cls");yildiz1();}
}
void kare1(){
	setlocale(LC_ALL,"Turkish");
	printf("Kum saatinin b�y�kl���n� giriniz:");
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
	dikucgen1(buyuk);
}
// � - 
// i - 0x89

