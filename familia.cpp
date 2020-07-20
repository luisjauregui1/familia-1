#include <iostream>
#include <stdio.h>  
#include <windows.h>  
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  

using namespace std;
 
int main()
{
    int valida = 1;
    int clave,op,i;
 
    do
    {
        gotoxy(0,0);cout << "Introduzca su clave : ";
        gotoxy(50,0);cout << "la clave es: 1" << endl;
        gotoxy(21,0);cin >> clave;
        fflush( stdin );
        if (clave != valida) 
            gotoxy(35,0);cout << "No valida" << endl;
    }
    while (clave != valida);
 
    gotoxy(0,1);cout << "Aceptada." << endl;
    
    for(int i=0;i<112;i++)
    	{ 
    	gotoxy (i,2);cout << "*" << endl;
    	gotoxy (i,4); cout << "*" << endl;
		}
	
	
    
    gotoxy(2,3);cout << "familia" << endl;
    gotoxy(26,3);cout << "famialPorMiMadre" << endl;
    gotoxy(46,3);cout << "familiaPorMiPapa" << endl;
    gotoxy(67,3);cout << "papas de los papas" <<endl;
    gotoxy(92,3);cout << "papas de los papas" <<endl;
    
    gotoxy(2,6); cout << "papas" << endl;
    gotoxy(2,10); cout << "hermanas" << endl;
    gotoxy(2,15); cout << "" << endl;
    gotoxy(2,16); cout << "" << endl;
    gotoxy(2,20); cout << "" << endl;
    
    gotoxy(26,6);cout << "Padres  " << endl;
    gotoxy(26,10);cout << "Hermanos" << endl;
    gotoxy(26,15);cout << "" << endl;
   	gotoxy(26,16);cout << "" << endl;
   	gotoxy(26,20);cout << "" << endl;
   	gotoxy(26,21);cout << "" << endl;
   	
   	gotoxy(46,6);cout << "padres" << endl;
   	
   	
    gotoxy(46,10);cout << "hermanos" << endl;
    
    
   	

   	gotoxy(67,6);cout << "papas de mi abuela" << endl;
   	gotoxy(67,7);cout << "" << endl;
    gotoxy(67,10);cout << "papas de mi abuelo" << endl;
    gotoxy(67,15);cout << "" << endl;
    ;
    
    gotoxy(92,6);cout << "papas de mi abuela" << endl;
    gotoxy(92,10);cout << "papas de mi abuelo" << endl;
    gotoxy(92,11);cout << "" << endl;
    
    
    
    
    gotoxy (1,26); cout << "las opciones van de 1 a 20" << endl;
    gotoxy (1,27); cout << "de arriba hacia abajo y de izquierda a derecha" << endl;
    gotoxy(1,28);cin >> op;
    switch(op)
    { 
    	case 1: 
    		cout << "vanesa casillas y leonardo fernandez" << endl;
    	break;
    	case 2: 
			cout << "brenda y galilea Fernandez" << endl;    	
    	break;
    	case 3: 
    		cout << "Gloria y Franicisco" << endl;
    	break;
    	case 4: 
    	 	cout << "cesar y paty casillas" << endl;
    	break;
    	case 5: 
    		cout << "Irma y Gustavo Fernandez" << endl;
    	break;
    	
    	case 7: 
    		cout << "mercedez y luis casillas " << endl;
    	break;
    	case 8: 
    		cout << "Francisco y marta casillas" << endl;
    	break;
    	case 9: 
    		cout << "Carlos y Sofia salgado" << endl;
    	break;
    	case 10: 
    		cout << "pepe y rosa Fernandez" << endl;
    	break;
    	
    	
    	
    	default:
    		cout << "No selecciono ninguna opcion" << endl;
    	
	}
    
    return 0;
}
