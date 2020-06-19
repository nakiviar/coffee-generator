#include <iostream>
#include<conio.h>
#include <windows.h>

using namespace std;

typedef int _stdcall (*inpfuncPtr)(int portaddr);
typedef void _stdcall (*oupfuncPtr)(int portaddr, int datum);

void outport(int port, int value)
{
     HINSTANCE hLib;
     oupfuncPtr oup32;

     
     hLib = LoadLibrary("inpout32.dll");

     if (hLib == NULL) {
          cout<<"falla en cargar impout32.dll"<<endl;
          return;
     }


     oup32 = (oupfuncPtr) GetProcAddress(hLib, "Out32");

     if (oup32 == NULL) {
          cout<<"Obtener la direccion del proceso para Oup32 fallo"<<endl;
          return;
     }
     
     (oup32)(port, value);
     
     FreeLibrary(hLib);
}


int main()
{   int n,salida,func,funct;
   	short estado;	
	   system("color 0E");

		

   	cout<<"\t\t  /~~~~~~~~~~~~~~~~~~~/|  | |"<<endl;
		Sleep(80);
    cout<<"\t\t /              /######/  / | "<<endl;
    	Sleep(80);
	cout<<"\t\t/              /______/  /  |"<<endl;
		Sleep(80);
	cout<<"\t\t========================= /|| "<<endl;
		Sleep(80);
	cout<<"\t\t |_______________________|/||"<<endl;
		Sleep(80);
	cout<<"\t\t |  \\****/     \\__,,__/    ||"<<endl;
		Sleep(80);
	cout<<"\t\t |===\\**/       __,,__     ||           DISPENSADOR DE CAFE   "<<endl;
	Sleep(80);
	cout<<"\t\t |______________\\====/%____||    PRESIONE UNA TECLA PARA CONTINUAR"<<endl;
		Sleep(80);
	cout<<"\t\t |   ___        /~~~~\\ %  /||"<<endl;
		Sleep(80);
	cout<<"\t\t_|  |===|===   /      \\%_/  |"<<endl;
		Sleep(80);
	cout<<"\t\t||  |###|     |########| | /"<<endl;
		Sleep(80);
	cout<<"\t\t|___\\###/______\\######/__|/"<<endl;
		Sleep(80);
	cout<<"\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	
getche ();


system ("cls");

cout<<"\t\t  ~                                              ,-----.		"<<endl;
cout<<"\t\t    ~                                           _r-----i 	"<<endl;
cout<<"\t\t  .---.                                         \\      |-. "<<endl;
cout<<"\t\t  `---'=.                                        |     | |	"<<endl;
cout<<"\t\t  |V1 | |                                        |     | | "<<endl;
cout<<"\t\t  |   |='                                        |     |'	"<<endl;
cout<<"\t\t  `---'                                          (=====)   	"<<endl;
cout<<"\t\t VASO PARA CAFE CALIENTE: PRESIONE[ A ] 		DISPENSAR NESCAFE: PRESIONE[ A= Q ; B=G ]	"<<endl;
cout<<"\t\t                       					 "<<endl;
cout<<"\t\t   .=%%=. 									"<<endl;
cout<<"\t\t ,|`=%%='|                                       \\====/%	 "<<endl;
cout<<"\t\t ||      |                                       /~~~~\\ % 	"<<endl;
cout<<"\t\t `|      |                                      /      \\%	"<<endl;
cout<<"\t\t  |      |                                     |########| "<<endl;
cout<<"\t\t   `-__-'                                       \\######/	"<<endl;
cout<<"\t\t  VASO PARA CAFE FRIO: PRESIONE[ B ]         DISPENSAR ALTOMAYO: PRESIONE[ A=W ; B=H ] "<<endl;
cout<<"\t\t                       					 "<<endl;
cout<<"\t\t                       					 "<<endl;
cout<<"\t\t            ________   .==.             					 "<<endl;
cout<<"\t\t           [________>c((_  )    DISPENSAR CUCHARA  PRESIONE[ E ]       					 "<<endl;
cout<<"\t\t                       '=='					 "<<endl;
                                        
	
	

    cout<<"\n\n\t\t                      Elegir opcion [  ]"<<"\b\b\b";
    cout<<"\n\n\n\t\t                           [P] SALIR DEL PROGRAMA                         "<<endl;
	
	  
     n=getch();
    
   
		while(1)
		{
	    //DISPENSAR VASO GRANDE
    		 	estado=GetKeyState('A') & 0x8000;
  	if(estado)
  		{	salida=1;	
   			outport(0x378,salida);
   			Sleep(3000);
   			salida=0;
   			outport(0x378,salida);
  			
   			
	 	}
	    //DISPENSAR VASO PEQUEÑO
	 		 	estado=GetKeyState('B') & 0x8000;
  	if(estado)
  		{	salida=2;	
   			outport(0x378,salida);
   			Sleep(3000);
   			salida=0;
   			outport(0x378,salida);
   		
  			
	 	}
		 //DISPENSAR BEBIDA 1 A
	 	 	estado=GetKeyState('Q') & 0x8000;
  	if(estado)
  		{   salida=16;	
   			outport(0x378,salida);
   			Sleep(550);
   			salida=0;
   			outport(0x378,salida);	
   			Sleep(600);
		    salida=4;	
   			outport(0x378,salida);
   			Sleep(3000);
   			salida=0;
   			outport(0x378,salida);
   			salida=64;	
   			outport(0x378,salida);
   			Sleep(300);
   			salida=0;
   			outport(0x378,salida);
   			Sleep(100);
  			salida=16;	
   			outport(0x378,salida);
   			Sleep(665);
   			salida=0;
   			outport(0x378,salida);
   			}
   			
   		//DISPENSAR BEBIDA 1 B
	 	 	estado=GetKeyState('G') & 0x8000;
  	if(estado)
  		{   salida=16;	
   			outport(0x378,salida);
   			Sleep(285);
   			salida=0;
   			outport(0x378,salida);	
   			Sleep(600);
		    salida=4;	
   			outport(0x378,salida);
   			Sleep(2200);
   			salida=0;
   			outport(0x378,salida);
   			salida=64;	
   			outport(0x378,salida);
   			Sleep(300);
   			salida=0;
   			outport(0x378,salida);
   			Sleep(100);
  			salida=16;	
   			outport(0x378,salida);
   			Sleep(650);
   			salida=0;
   			outport(0x378,salida);
	 	}
		//DISPENSAR BEBIDA 2 A
	 	 	estado=GetKeyState('W') & 0x8000;
  	if(estado)
  		{	salida=16;	
   			outport(0x378,salida);
   			Sleep(890);
   			salida=0;
   			outport(0x378,salida);	
   			Sleep(600);
		    salida=8;	
   			outport(0x378,salida);
   			Sleep(2200);
   			salida=0;
   			outport(0x378,salida);
   			salida=64;	
   			outport(0x378,salida);
   			Sleep(300);
   			salida=0;
   			outport(0x378,salida);
   			Sleep(100);
  			salida=16;	
   			outport(0x378,salida);
   			Sleep(300);
   			salida=0;
   			outport(0x378,salida);
	 	}
	 	//DISPENSAR BEBIDA 2 B
	 	 	estado=GetKeyState('H') & 0x8000;
  	if(estado)
  		{	salida=16;	
   			outport(0x378,salida);
   			Sleep(650);
   			salida=0;
   			outport(0x378,salida);	
   			Sleep(600);
		    salida=8;	
   			outport(0x378,salida);
   			Sleep(2200);
   			salida=0;
   			outport(0x378,salida);
   			salida=64;	
   			outport(0x378,salida);
   			Sleep(300);
   			salida=0;
   			outport(0x378,salida);
   			Sleep(100);
  			salida=16;	
   			outport(0x378,salida);
   			Sleep(270);
   			salida=0;
   			outport(0x378,salida);
	 	}
	    //DISPESAR CUCHARA
	 	estado=GetKeyState('E') & 0x8000;
  	if(estado)
  		{	Sleep(500);
		  	salida=32;	
   			outport(0x378,salida);
   			Sleep(175);
   			salida=0;
   			outport(0x378,salida);
   			Sleep(100);
   			salida=128;
   			outport(0x378,salida);
   			Sleep(5000);
   			salida=0;
			outport(0x378,salida);   			
	 	}
		
        //SALIR
        estado=GetKeyState('P') & 0x8000;
  		if(estado)
  		{system("cls");
		cout<<"\n\t\t GRACIAS POR USAR EL PROGRAMA uwu"<<endl;
	
            break;
		}
        }
    
    
    getch();
	return 0;		
}  	
    	

