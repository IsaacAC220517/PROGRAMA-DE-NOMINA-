//SISTEMA DE NOMINA 
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<locale.h>

	void gotoxy(int,int);
	int main(){
		
	setlocale(LC_ALL,"Spanish");
	
	int i,op,sm,fm,spd,semanal,quincenal,mensual,pc,dt;
	float ic=1.92;
	
	gotoxy(20,0);printf("---SISTEMA DE NÓMINA DE LA EMPRESA TECNO AYUDA S.A de C.V---");
	for(i=0;i<=100;i++){
		gotoxy(i,1);printf("*");
	}
		for(i=0;i<=50;i++){
		gotoxy(0,i);printf("*\n");
	}
		for(i=0;i<=50;i++){
		gotoxy(100,i);printf("*\n");
	}
	for(i=0;i<=100;i++){
		gotoxy(i,50);printf("*");
	}
	gotoxy(37,2);printf("---MENÚ DEL SISTEMA---");
	gotoxy(2,3);printf("1.Generar Nómina por Sueldo mensual");
	gotoxy(2,4);printf("2.Salir del sistema");
	gotoxy(2,6);printf("Eliga la opcion que desee ejecutar:");
	scanf("%d",&op);
	for(i=0;i<=100;i++){
	gotoxy(i,7);printf("*");
	}
	switch(op){
		case 1:
			gotoxy(37,8);printf("---LLENADO DE DATOS---");
			gotoxy(2,10);printf("Ingrese su sueldo mensual:");
			scanf("%d",&sm);
			gotoxy(35,10);printf("Su número de contrato es:1");
			gotoxy(65,10);printf("Ingrese su forma de pago:");
			scanf("%d",&fm);
			for(i=0;i<=100;i++){
			gotoxy(i,13);printf("*");
			}
			if(fm == semanal){
				spd=sm/30;
				gotoxy(2,12);printf("Su salairio por día es de:%d",spd);
				gotoxy(35,12);printf("Ingrese los días trabajados:");
				scanf("%d",&dt);
				gotoxy(37,14);printf("---NÓMINA COMPLETA---");
				gotoxy(2,16);printf("jajajaja HOLA");
			}
			else if(fm == quincenal){
				spd=sm/30;
				printf("Su sueldo por día es de:%d",spd);
			}
			else if(fm == mensual){
				printf("Hola JAJAJAJA xd");
			}
	}
	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	return 0;
	
	}
	
	void gotoxy(int x, int y){
	HANDLE Manipulador;
	COORD Coordenadas;
	Manipulador = GetStdHandle (STD_OUTPUT_HANDLE);
	Coordenadas.X= x;
	Coordenadas.Y= y;
	SetConsoleCursorPosition(Manipulador,Coordenadas);
}

void Centrar_Texto(const char *texto){
	
}
