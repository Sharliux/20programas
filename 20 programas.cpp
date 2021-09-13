#include <iostream>
#include <locale.h>
using namespace std;
main()
{
	setlocale(LC_ALL, "");
	int mes,dias,ano;
	int d,opcion, accion, inicio=0, fin=0, multiplicar=0, i=0, j=0,numero_multiplicar;
	int numero, unidades, decenas, centenas, millares,numeromultiplicar,multiplicar_tabla10,mul_tabla10;
	int number=0, x,multi_grafi1,multi_grafi2,resu_grafi,num_bi, binario[100];
	int digitoex[20],seleccion,agregar,saldo,saldoi,reintegro;
	int deci, residuo, resul_hexa, k = 0,catetoa,catetob,resu_cateto;
	int tarifa,precio;
	int anno;
	float Dto,Pd;
	float a;
	float b;
	float sum;
	float rest;
	float mult;
	float div;
	float milla, kilometro, metro, pulgada, libra, kilo;
	float c;
	float e;
	float Calificacion;
	float CalifAprobatoria;
	float CalifMinima;
	float CalifMaxima; 
	string palabra=" ";
	cout<<"\n\t______________________________________BIENVENIDO______________________________________"<<endl;
	cout<<"\n\t\t\t\tEscoge la accion que deseas realizar: "<<endl;
	cout<<"\n\t1. Suma, Resta, Multiplicación y División de dos números: "<<endl;
	cout<<"\n\t2. Determinar si un número es par o impar: "<<endl;
	cout<<"\n\t3. Convertir de kilómetros a millas, metros a pulgadas, de libras a kilos y viceversa: "<<endl;
	cout<<"\n\t4. Determinar si una palabra o un número es palíndromo: "<<endl;
	cout<<"\n\t5. Conversión de números arábigos a romanos: "<<endl;
	cout<<"\n\t6. Conversión de números enteros a letras: "<<endl;
	cout<<"\n\t7. Conversión de números enteros con decimal a letras: "<<endl;
	cout<<"\n\t8. Una tabla de multiplicar: "<<endl;
	cout<<"\n\t9. Todas las tablas de multiplicar del 1 al 10: "<<endl;
	cout<<"\n\t10. Crear de forma gráfica la multiplicación manual: "<<endl;
	cout<<"\n\t11. Conversión de números decimales a binario: "<<endl;
	cout<<"\n\t12. Conversión de números decimales a hexadecimales: "<<endl;
	cout<<"\n\t13. Crear Figuras Geométricas Básicas: "<<endl;
	cout<<"\n\t14. Mover un punto en toda la pantalla: "<<endl;
	cout<<"\n\t15. Simular un Cajero Automático: "<<endl;
	cout<<"\n\t16. Calcular la hipotenusa: "<<endl;
	cout<<"\n\t17. Descuento: "<<endl;
	cout<<"\n\t18. Dias del mes: "<<endl;
	cout<<"\n\t19. Calificaciones minima, maxima y aprobatoria: "<<endl;
	cout<<"\n\t20. Calcular año bisiesto: "<<endl;
	cin>>accion;
	switch (accion)
{
case 1:
	cout<<"\n\tSeleccione la opcion que desea realizar: "<<endl;
	cout<<"\n01. Suma "<<endl;
	cout<<"\n02. Resta"<<endl;
	cout<<"\n03. Multiplicacion"<<endl;
	cout<<"\n04. Division"<<endl;
	cin>>opcion;
		switch (opcion)
	{
case 01:
		cout<<"\nIngrese el primer numero: "<<endl;
		cin>>a;
		cout<<"\nIgrese el segundo numero: "<<endl;
		cin>>b;
		sum=a+b;
		cout<<"\nEl resultado de la suma es: "<<sum<<endl;
			cout<<"Desea hacer otra operacion?"<<endl;
		break;
	case 02:
		cout<<"\nIngrese el primer numero: "<<endl;
		cin>>a;
		cout<<"\nIgrese el segundo numero: "<<endl;
		cin>>b;
		rest=a-b;
		cout<<"\nEl resultado de la resta es: "<<rest<<endl;
		break;
	case 03:
		cout<<"\nIngrese el primer numero: "<<endl;
		cin>>a;
		cout<<"\nIgrese el segundo numero: "<<endl;
		cin>>b;
		mult=a*b;
		cout<<"\nEl resultado de la multiplicacion es: "<<mult<<endl;
		break;
	case 04:
		cout<<"\nIngrese el primer numero: "<<endl;
		cin>>a;
		cout<<"\nIgrese el segundo numero: "<<endl;
		cin>>b;
		div=a/b;
		cout<<"\nEl resultado de la division es: "<<div<<endl;     
		break;
		}
		break;
case 2:
		cout << "\n\tIngrese un número: "<<endl;
 		 cin >> numero;
 		 if ( numero % 2 == 0){
     	 cout << numero << " es par."<<endl;}
  		else
      	cout << numero << " es impar."<<endl;
     	 break;
case 3:
    	cout<<"\n\tIngrese el la opcion que desea realizar: "<<endl;
    	cout<<"\n1. kilometros a millas: "<<endl;
    	cout<<"\n2. Metros a pulgadas: "<<endl;
    	cout<<"\n3. Libras a kilos: "<<endl;
    	cout<<"\n4. Millas a kilometros: "<<endl;
    	cout<<"\n5. Pulgadas a Metros: "<<endl;
    	cout<<"\n6. Kilos a libras: "<<endl;
    	cin>>opcion;
    	switch (opcion)
    	{
			case 1:
    			cout<<"\n\tIgrese la cantidad de kilometros que desea convertir: "<<endl;
    			cin>>kilometro;
    			kilometro=kilometro*0.621371;
    			cout<<"La conversion de kilometros a millas es: "<<kilometro<<endl;
    			break;
    		case 2:
    			cout<<"\n\tIgrese la cantidad de Metros que desea convertir: "<<endl;
    			cin>>metro;
    			metro=metro*0.0254;
    			cout<<"La conversion de metros a pulgadas es: "<<metro<<endl;
    			break;
    		case 3:
    			cout<<"\n\tIgrese la cantidad de Libras que desea convertir: "<<endl;
    			cin>>libra;
    			libra=libra*2.20462;
    			cout<<"La conversion de libras a kilos es: "<<libra<<endl;
    			break;
    		case 4:
    			cout<<"\n\tIgrese la cantidad de millas que desea convertir: "<<endl;
    			cin>>milla;
    			milla=milla*1.60934;
    			cout<<"La conversion de millas a kilometros es: "<<milla<<endl;
    			break;
    		case 5:
    			cout<<"\n\tIgrese la cantidad de pulgadas que desea convertir: "<<endl;
    			cin>>pulgada;
    			pulgada=pulgada*0.0254;
    			cout<<"La conversion de pulgadas a metros es: "<<pulgada<<endl;
    			break;
    		case 6:
    			cout<<"\n\tIgrese la cantidad de kilos que desea convertir: "<<endl;
    			cin>>kilo;
    			kilo=kilo*2.20462;
    			cout<<"La conversion de kilos a libras es: "<<kilo<<endl;
    			break;		
    	}
    	break;
case 4:
    	cout<<"\n\tIngrese palabra "<<endl;
    	cin >> palabra;
            if(palabra[i]==palabra[j]){
                cout<<"es palindroma "<<endl;
            }
            else{
                cout<<"no lo es "<<endl;}
            break;
case 5:
		cout<< "\n\tIngrese un numero: "<<endl;
 	cin>> numero;
 	unidades = numero % 10; numero /= 10;
 	decenas = numero % 10; numero /= 10;
 	centenas = numero % 10; numero /= 10;
 	millares = numero % 10; numero /= 10;

 		switch (millares)
 	{
  	case 1: cout<<"\nEl numero romano es: "<<"M"; break;
  	case 2: cout<<"\nEl numero romano es: "<<"MM"; break;
  	case 3: cout<<"\nEl numero romano es: "<<"MMM"; break;
	}
 
 	switch (centenas)
 	{
  	case 1: cout<<"\nEl numero romano es: "<<"C"; break;
  	case 2: cout<<"\nEl numero romano es: "<<"CC"; break;
  	case 3: cout<<"\nEl numero romano es: "<<"CCC"; break;
  	case 4: cout<<"\nEl numero romano es: "<<"CD"; break;
  	case 5: cout<<"\nEl numero romano es: "<<"D"; break;
  	case 6: cout<<"\nEl numero romano es: "<<"DC"; break;
  	case 7: cout<<"\nEl numero romano es: "<<"DCC"; break;
 	case 8: cout<<"\nEl numero romano es: "<<"DCCC"; break;
 	case 9: cout<<"\nEl numero romano es: "<<"CM"; break; 
 	} 
 
 	switch (decenas)
 	{
  	case 1: cout<<"\nEl numero romano es: "<<"X"; break;
  	case 2: cout<<"\nEl numero romano es: "<<"XX"; break;
  	case 3: cout<<"\nEl numero romano es: "<<"XXX"; break;
  	case 4: cout<<"\nEl numero romano es: "<<"XL"; break;
  	case 5: cout<<"\nEl numero romano es: "<<"L"; break;
  	case 6: cout<<"\nEl numero romano es: "<<"LX"; break;
  	case 7: cout<<"\nEl numero romano es: "<<"LXX"; break;
  	case 8: cout<<"\nEl numero romano es: "<<"LXXX"; break;
  	case 9: cout<<"\nEl numero romano es: "<<"XC"; break; 
 	}	
 
 	switch (unidades)
 	{
  	case 1: cout<<"\nEl numero romano es: "<<"I"; break;
  	case 2: cout<<"\nEl numero romano es: "<<"II"; break;
  	case 3: cout<<"\nEl numero romano es: "<<"III"; break;
  	case 4: cout<<"\nEl numero romano es: "<<"IV"; break;
  	case 5: cout<<"\nEl numero romano es: "<<"V"; break;
  	case 6: cout<<"\nEl numero romano es: "<<"VI"; break;
  	case 7: cout<<"\nEl numero romano es: "<<"VII"; break;
  	case 8: cout<<"\nEl numero romano es: "<<"VIII"; break;
  	case 9: cout<<"\nEl numero romano es: "<<"IX"; break;
 	}
	break;
	case 6:
	 cout<<"\n\tIngrese un numero"<<endl;
    cin>>x;
	if((x<1)||(x>1000)) cout<<"\n\tINGRESA UN NUMERO DEL 1 AL 1000\n";
	else
 
    {
        if(x>=1000)   {cout<<"MIL " ;x=x-1000;}
    	else if(x>=900)  {cout<<"NOVECIENTOS " ;x=x-900;}
       else if(x>=800)   {cout<<"OCHOCIENTOS " ;x=x-800;}
       else if(x>=700)   {cout<<"SETECIENTOS " ;x=x-700;}
       else if(x>=600)   {cout<<"SEISCIENTOS " ;x=x-600;}
       else if(x>=500)   {cout<<"QUINIENTOS "  ;x=x-500;}
       else if(x>=400)   {cout<<"CUATROCIENTOS "   ;x=x-400;}
       else if(x>=300)   {cout<<"TRESCIENTOS " ;x=x-300;}
       else if(x>=200)   {cout<<"DOSCIENTOS "  ;x=x-200;}
       else if(x>100)    {cout<<"CIENTO "  ;x=x-100;}
       else if(x==100)  {cout<<"CIEN"     ;x=x-100;}
        if(x>90) {cout<<"NOVENTA Y "   ;x=x-90; }
            if(x==90)   {cout<<"NOVENTA"  ;x=x-90; }  
            if(x>80) {cout<<"OCHENTA Y "   ;x=x-80; }
            if(x==80)   {cout<<"OCHENTA"  ;x=x-80; }
            if(x>70) {cout<<"SETENTA Y "   ;x=x-70; }
            if(x==70)   {cout<<"SETENTA"  ;x=x-70; }
            if(x>60) {cout<<"SESENTA Y "   ;x=x-60; }
            if(x==60)   {cout<<"SESENTA"  ;x=x-60; }
            if(x>50) {cout<<"CINCUENTA Y " ;x=x-50; }
            if(x==50)   {cout<<"CINCUENTA"    ;x=x-50; }
            if(x>40) {cout<<"CUARENTA Y "  ;x=x-40; }
            if(x==40)   {cout<<"CUARENTA" ;x=x-40; }
            if(x>30) {cout<<"TREINTA Y "   ;x=x-30; }
            if(x==30)   {cout<<"TREINTA"  ;x=x-30; }
            if(x>20) {cout<<"VEINTI"       ;x=x-20; }
            if(x==20)   {cout<<"VEINTE"       ;x=x-20; }
        if(x>=16)    {cout<<"DIECI"        ;x=x-10; }
       else if(x==15)   {cout<<"QUINCE"       ;x=x-15; }
       else if(x==14)   {cout<<"CATORCE"  ;x=x-14; }
       else if(x==13)   {cout<<"TRECE"        ;x=x-13; } 
       else if(x==12)   {cout<<"DOCE"     ;x=x-12; }
       else if(x==11)   {cout<<"ONCE"     ;x=x-11; }
       else if(x==10)   {cout<<"DIEZ"     ;x=x-10; }      
        if(x==9)    {cout<<"NUEVE"        ;x=x-9;  }
        if(x==8)    {cout<<"OCHO"     ;x=x-8;  }
        if(x==7)    {cout<<"SIETE"        ;x=x-7;  }
            if(x==6)    {cout<<"SEIS"     ;x=x-6;  }
       else if(x==5)    {cout<<"CINCO"        ;x=x-5;  }
       else if(x==4)    {cout<<"CUATRO"       ;x=x-4;  }
       else if(x==3)    {cout<<"TRES"     ;x=x-3;  }
       else if(x==2)    {cout<<"DOS"      ;x=x-2;  }
       else if(x==1)    {cout<<"UNO"      ;x=x-1;  }
       }
		break;
case 7:
	cout<<"NO DISPONIBLE"<<endl;
case 8:
		do
            {
            cout << "Ingrese su el numero de la tabla de multiplicar: "<<"\n";
            cin >> numero_multiplicar;
            }while ((numero_multiplicar<1)|| (numero_multiplicar>10));

            for (int i = 1; i <= 10; i++)
            {
            cout<<numero_multiplicar<<" * "<< i <<" = "<<numeromultiplicar*i<<endl;
            }
            break; 
    case 9:
    	  for (int a = 1; a <= 10; a++)
            {
            cout<<"_"<<endl;
            for (int i = 1; i<=10; i++){
            mul_tabla10 = a * i;
            cout<< a<<" * "<<i<<" = "<<mul_tabla10<<endl;
            }
            }
            break;
    case 10:
    	  cout<<"Ingrese el primer numero a multiplicar."<<endl;
            cin>> multi_grafi1;
            cout<<"Ingrese el segundo numero a multiplicar."<<endl;
            cin>>multi_grafi2;
            cout<<"\n";

            resu_grafi = multi_grafi1 * multi_grafi2;

            cout<<multi_grafi1<<endl;
            cout<<multi_grafi2<<endl;
            cout<<"------------------------------"<<endl;
            cout<<resu_grafi<<endl;

            break;
    case 11:
    	printf("Ingrese el numero: ");
             fflush(stdin);
              scanf("%d",&x);
              for(i=100;i>0;i--);
              {
               binario[i]=x%2;
               x=x/2;
             }
              for(i=1;i<=100;i++)
              {
               if(binario[i]==1)
               {
                for(j=i;j<=100;j++)
                {
                     printf("%d",binario[j]);
                }
                break;
            }
             }
            break;
    case 12:
    	cout << "Ingrese el numero decimal a convertir: " << endl;
              cin >> deci;

            do
            {
                residuo = deci % 16;
                resul_hexa = deci / 16;
                digitoex[k] = residuo;
                deci = resul_hexa;
                k++;
            } while (resul_hexa > 15);

            digitoex[k] = resul_hexa;

            cout << "El equivalente en hexadecimal es: ";

            for (int j = i; j >= 0; j--)
                        {
                if (digitoex[j] == 10)
                {
                    cout << "A";
                }
                else if (digitoex[j] == 11)
                {
                    cout << "B";
                }
                else if (digitoex[j] == 12)
                {
                    cout << "C";
                }
                else if (digitoex[j] == 13)
                {
                    cout << "D";
                }
                else if (digitoex[j] == 14)
                {
                    cout << "E";
                }
                else if (digitoex[j] == 15)
                {
                    cout << "F";
                }
                else
                {
                    cout << digitoex[j];
                }
            }
            cout << endl;
            break;
case 13:
	cout<<"NO DISPONIBLE"<<endl;
	break;
case 14:
	cout<<"NO DISPONIBLE"<<endl;
	break;
case 15:
	cout <<"\tBienvenido a su Cajero Automatico"<< endl;
			cout<<"\n(1) Ingreso en Cuenta" << endl;
    		cout<<"(2) Reintegro" << endl;
    		cout<<"(3) Ver Saldo de Cuenta" << endl;
    		cout<<"(4) Salir" << endl;
    		cout<<"\nIndica el numero de opcion que desees ejecutar:  ";
    		cin>>seleccion;
    		
    		if(seleccion==1){
    			cout<<"\nIngrese la Cantidad a Depositar: ";
    			cin>>agregar;
    			saldo = saldoi + agregar;
    			cout<<"\nCantidad Disponible en Cuenta: "<<saldo;
			}
    		else if(seleccion==2){
    			cout<<"\nCuanta cantidad desea retirar: ";
    			cin>>reintegro;
    			if(reintegro>1000){
    				cout<<"\nLa cantidad digitada es mayor a 1000, Digite de nuevo la cantidad a retirar: ";
    				cin>>reintegro;
				}
				saldo = saldoi - reintegro;
				cout<<"\nCantidad disponible en Cuenta: "<<saldo;
			}
			else if(seleccion==3){
				cout<<"\nLa cantidad disponible en cuenta es de: "<<saldoi;
			}
			else if(seleccion==0){
				cout<<"Gracias por Utilizar Nuestro Cajero Automatico";
			}
			else{
				cout<<"Se equivoco de opcion de menu";
			}
			cin.get();
			break;
case 16:
	    cout<<"Ingrese el cateto a"<<endl;
            cin>>catetoa;
            cout<<"Ingresar el cateto b"<<endl;
            cin>>catetob;
            resu_cateto = (catetoa * catetoa)+(catetob * catetob);
            cout<<"La hipotenusa es de: "<<resu_cateto<<endl;
            break;
case 17:
		cout<<"ingrese la tarifa"<<endl; 
	cin>>tarifa;
	cout<<"ingrese precio total"<<endl; 
	cin>>precio;
	Dto = tarifa-precio;
	Pd = Dto*100/tarifa;
	cout<<"porcentaje de descuento:"<<Pd <<endl;
    break;
case 18:
	cout<<" \n\t\tingrese el mes: ";
    cin>>mes;
    cout<<" \n\tIngrese el año: ";
    cin>>ano;
 
		switch (mes)
		{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		cout<<"\n\tEl mes tiene\n"<<dias<<"31"<<endl;
		break;
		case 4: case 6: case 9: case 11:
			dias=30;
		break;
		case 2:if(ano%4==0)
			dias = 28;
    		else
			dias=29;
			break;
			default:
			printf("\n\tEl mes no es válido\n");
			break;
			}
				cout<<dias<<endl;
				break;
case 19:
	cout<<"Ingrese primer calificacion : "<<endl;
	cin >> a; 
	cout<<"Ingrese segunda calificacion : "<<endl;
	cin>> b; 
	cout<<"Ingrese tercera calificacion : "<<endl;
	cin>> c; 
	cout<<"Ingrese cuarta calificacion : "<<endl;
	cin>> e;
	Calificacion = (a+b+c+e/4);
	if (Calificacion<0) 
	{
		cout << "error" << Calificacion;
	}
	else 
	if (Calificacion>100)
	{
		cout << "error" << Calificacion;
	}
	else 
	if (Calificacion>=61)
	{
		cout << "Tu calificacion es: " << Calificacion << "Aprobaste el curso" << endl;
	}
	else
	{
		cout << "Tu calificacion es: " << Calificacion << "Reprobaste el curso" << endl;
	}
	break;
case 20:
 printf ("Ingresa el año: ");
    scanf("%d", &anno);

    if((anno%4==0) &&(anno % 100!=0) || (anno%400==00))
    {
    printf("El año %d es bisiesto: \n", anno);
    }
    else{
    printf("El año %d no es bisiesto: ", anno);
    }
		break;
	}
		cout<<"\n\tDesea hacer otra operacion?"<<endl;
        cout<<"si = 1"<<endl;
        cout<<"no = 2"<<endl;
        cin>> d;
        if (d==1)
        {
        system("cls");
        return    main();
        }else{
        return 0;
		}
	}
	

