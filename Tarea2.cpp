#include <iostream>
#include <iomanip>
#include <cmath>
char op;
using namespace std;
void MenuOperaciones() {
  // 1. Suma, Resta, Multiplicación y División de dos números
  int opcion;
  double x = 0, y = 0, respuesta = 0;
  cout << "Elija que operación quiere hacer:\n1. Suma\n2.Resta\n3.Multiplicación\n4.División\n5.Todas\n";
  cin >> opcion;
  switch (opcion) {
  case 1: // Suma
    cout << "Porfavor ingrese un número: ";
    cin >> x;
    cout << "Porfavor ingrese otro número: ";
    cin >> y;
    cout << "La suma es: " << x + y << endl;
    break;
  case 2: // Resta
    cout << "Recordatorio - La resta no es conmutativa" << endl;
    cout << "Porfavor ingrese un número: ";
    cin >> x;
    cout << "Ingrese cuanto desea restar: ";
    cin >> y;
    cout << "La Resta es: " << x - y << endl;
    break;
  case 3: // Multiplicar
    cout << "Porfavor ingrese un número: ";
    cin >> x;
    cout << "Porfavor ingrese un número: ";
    cin >> y;
    cout << "El producto total es: " << x * y << endl;
    break;
  case 4: // division
    cout << "Porfavor ingrese un número: ";
    cin >> x;
    cout << "Porfavor ingrese un número: ";
    cin >> y;

    if (y == 0) {
      cout << "No se puede dividir entre cero" << endl;
    } else {
      respuesta = x / y;
      cout << "El cosiente es: " << respuesta << endl;
    }
    break;
  case 5:
    cout << "Porfavor ingrese un número: ";
    cin >> x;
    cout << "Porfavor ingrese un número: ";
    cin >> y;
    cout << "Suma: " << x + y << endl;
    cout << "Resta: " << x - y << endl;
    cout << "Multiplicación: " << x * y << endl;
    cout << "División: " << x / y << endl;
    break;

  default:
    cout << "Esa opción no existe.";
    break;
  }
  cout<<"Desea continuar? (s/n) ";
  cin>>op;
  if (op=='s'){MenuOperaciones();}
  if (op=='n'){cout<<' ';}
}
void paroimpar() {
  int n;
  cout << "Ingrese un numero entero: ";
  cin >> n; // si el modulo de 2 me da 0 entonces es par, cualquier otro resultado es impar
  if (n % 2 == 0) {
    cout << n << " es un numero par." << endl;
  } else {
    cout << n << " es un numero impar." << endl;
  }

  cout<<"Desea continuar? (s/n) ";
  cin>>op;
  if (op=='s'){paroimpar();}
  if (op=='n'){cout<<' ';}
}
void convertirMedidas() {
  double km = 0, mi = 0, m = 0, inch = 0, lb = 0, kg = 0;
  cout << " Programa de Conversiones - Por Sebastián Holweger\n";
  // km a mi
  cout << "Ingresa la distancia en km: ";
  cin >> km;
  mi = km * 0.621371;
  // metros a pulgadas
  cout << "Ingrese la distancia en metros: ";
  cin >> m;
  inch = m * 39.3701;
  // libras a kilos
  cout << "Ingrese cantidad de libras: ";
  cin >> lb;
  kg = lb * 0.453592;
  // kg a libras
  cout << "Ingrese el peso en kilogramos: ";
  cin >> kg;
  lb = kg * 2.20462;
  // Imprimir conversiones
  cout << km << " km es igual a " << mi << " millas." << endl;
  cout << m << " m es igual a " << inch << " pulgadas." << endl;
  cout << lb << " lb es igual a " << kg << " kg" << endl;
  cout << kg << " kg es igual a " << lb << " libras." << endl;

  cout<<"Desea continuar? (s/n) ";
  cin>>op;
  if (op=='s'){convertirMedidas();}
  if (op=='n'){cout<<' ';}
}
void palindromo() {
  /* Determinar si una palabra o un número es palíndromo */
  int opc = 0;
  int numero, numalreves = 0, modulo, numero_original;
  string pal;
  bool valor = true;
  cout << " Determine si es palindromo - Por Sebastian Holweger" << endl;
  cout << "Elija que desea ingresar: 1.palabra 2.numero\n";
  cin >> opc;
  switch (opc) {
  case 1: // Palabra
    cout << "Ingrese una palabra: ";
    cin >> pal; // ingreso la palabra
    transform(pal.begin(), pal.end(), pal.begin(), ::tolower); // convierto la palabra a minúsculas
    pal.erase(remove_if(pal.begin(), pal.end(), ::isspace), pal.end()); // elimino los espacios de la palabra

    for (int i = 0; i < pal.length() / 2; i++) { // Para que i sea menor al tamaño de la palabra dividido 2 (para voltear la palabra, si no se divide seria como darlo vuelta dos veces y quedaria la misma palabra qque al inicio)
      if (pal[i] != pal[pal.length() - 1 - i]) { // si palabra y palabra inversa son diferentes entonces = false
        valor = false;
        break;
      }
    }

    if (valor) { // si bool = true, entonces es un palindromo
      cout << "La palabra " << pal << " es palindromo." << endl;
    } else { // sino lo es, entonces NO es un palindromo
      cout << "La palabra " << pal << " no es palindromo." << endl;
    }
    break;
  case 2: // Numero
    cout << "Ingrese un numero entero: ";
    cin >> numero; // ingresa el numero

    numero_original = numero; // guardo el numero en una variable

    while (numero != 0) {
      modulo = numero % 10; // guardamos el modulo 10 del numero
      numalreves = numalreves * 10 + modulo; // El ciclo while hara que este modulo al sumarse a la variable, determine si es palindromo o no
      numero = numero / 10; // utilizo num para cerrar el ciclo while, cuando me de 0 tendre mi resultado y rompera el ciclo
    }
    // imprimo mi resultado
    if (numero_original == numalreves) { // si el numero original y el numero invertido son iguales es un palindromo
      cout << "El numero " << numero_original << " es palindromo." << endl;
    } else {
      cout << "El numero " << numero_original << " no es palindromo." << endl; // si no son iguales NO es un palindromo
    }
    break;

  default:
    break;
  }

  cout<<"Desea continuar? (s/n) ";
  cin>>op;
  if (op=='s'){palindromo();}
  if (op=='n'){cout<<' ';}
}
void arabigosaromano() {
   int numero;
    int unidades, decenas, centenas, millares,dmillares;
    cout <<"Convertidor de numeros decimales a romanos hasta 99,999 - Por: Sebastian Holweger"<< endl;
    cout << "Ingresar un numero: ";
    cin>> numero;
    cout <<"El numero en romano es: ";
if (numero>9999){
        cout<<"el - significa que se multiplica por 1000\n R: ";
    }
  unidades=numero % 10; 
  numero /=10;
  decenas=numero % 10; 
  numero /=10;
  centenas=numero % 10; 
  numero /=10;
  millares=numero % 10; 
  numero /=10;
  dmillares=numero % 10; 
  numero /=10;

  switch (dmillares)
    {   
        case 1: cout <<"-X"; break;
        case 2: cout <<"-XX"; break;
        case 3: cout <<"-XXX"; break;
        case 4: cout <<"-XL"; break;
        case 5: cout <<"-L"; break;
        case 6: cout <<"-LX"; break;
        case 7: cout <<"-LXX"; break;
        case 8: cout <<"-LXXX"; break;
        case 9: cout <<"-XC"; break;
        
    }  
  switch (millares)
    {   
        case 1: cout <<"M"; break;
        case 2: cout <<"MM"; break;
        case 3: cout <<"MMM"; break;
        case 4: cout <<"IV"; break;
        case 5: cout <<"V"; break;
        case 6: cout <<"VI"; break;
        case 7: cout <<"VII"; break;
        case 8: cout <<"VIII"; break;
        case 9: cout <<"IX"; break;
        
    
    }  
    switch (centenas)
    {
    case 1: cout<<"C"; break;
    case 2: cout<<"CC"; break;
    case 3: cout<<"CCC"; break;
    case 4: cout<<"CD"; break;
    case 5: cout<<"D"; break;
    case 6: cout<<"DC"; break;
    case 7: cout<<"DCC"; break;
    case 8: cout<<"DCC"; break;
    case 9: cout<<"CM"; break;

    
    default:
        break;
    }
    switch (decenas)
    {   
        case 1: cout <<"X"; break;
        case 2: cout <<"XX"; break;
        case 3: cout <<"XXX"; break;
        case 4: cout <<"XL"; break;
        case 5: cout <<"L"; break;
        case 6: cout <<"LX"; break;
        case 7: cout <<"LXX"; break;
        case 8: cout <<"LXXX"; break;
        case 9: cout <<"XC"; break;
    } 
    switch (unidades)
    {   
        case 1: cout <<"I"; break;
        case 2: cout <<"II"; break;
        case 3: cout <<"III"; break;
        case 4: cout <<"IV"; break;
        case 5: cout <<"V"; break;
        case 6: cout <<"VI"; break;
        case 7: cout <<"VII"; break;
        case 8: cout <<"VIII"; break;
        case 9: cout <<"IX"; break;
    } 
    cout  << endl;
    getchar(); 
    
    cout<<"Desea continuar? (s/n) ";
  cin>>op;
  if (op=='s'){arabigosaromano();}
  if (op=='n'){cout<<' ';}

    }
string enterosaletras(int num) {

string unidades[20] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve", "diez", 
                    "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};
string decenas[10] = {"", "", "veinti", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
string centenas[10] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};

  if (num < 0) {
    num *= -1;
    return "Menos " + enterosaletras(num);
  }

  if (num == 0) {
    return "Cero";
  }
  if (num < 20) {
    return unidades[num];
  }
  if (num < 100) {
    if (num == 20) {
      return "Veinte";
    }
    if (num % 10 == 0) {
      return decenas[num / 10];
    } else if (num > 20 && num < 30) {
      return "veinti" + unidades[num % 10];
    } else {
      return decenas[num / 10] + " y " + unidades[num % 10];
    }
  }
  if (num < 1000) {
    if (num == 100) {
      return "Cien";
    } else if (num % 100 == 0) {
      return centenas[num / 100];
    } else {
      return centenas[num / 100] + " " + enterosaletras(num % 100);
    }
  }
  if (num == 1000000) {
    return "Un Millon";
  }
  if (num < 1000000) {

    if (num == 1000) {
      return "Mil";
    }
    if (num > 1000 && num < 1999) {
      return "Mil " + enterosaletras(num % 1000);
    }
    if (num % 1000 == 0) {
      return enterosaletras(num / 1000) + " mil";
    } else if (num % 1000 < 100) {
      return enterosaletras(num / 1000) + " mil " + enterosaletras(num % 1000);
    } else {
      return enterosaletras(num / 1000) + " mil " + enterosaletras(num % 1000);
    }
  }
  return "";

}
void tablamultiplicar() {
  cout<<"Programa de Tablas de Multiplicar\n- Por Sebastian Holweger\n";
  double n = 0; 
    cout << "Ingrese la tabla de multiplicar que desea: " << endl;
    cin >> n;
  for (int x = 1; x <= 10; x++) {
    cout << n << " * " << x << " = " << n * x << endl;
  }

cout<<"Desea continuar? (s/n) ";
  cin>>op;
  if (op=='s'){tablamultiplicar();}
  if (op=='n'){cout<<' ';}

}
void tablashastadiez() {
  cout << "Tablas de Multiplicar del 1 al 10 - Sebastian Holweger" << endl;
  for (int t = 1; t <= 10; t++) {
    for (int n = 1; n <= 10; n++) {
      cout << t << " X " << n << " = " << t * n << endl;
    }
    cout << endl;
  }

}
void MultiplicacionManual() {
  int num1, num2;
  cout << "Programa de multiplicacion manual - Forma Grafica - Sebastian Holweger" << endl;
  cout << "Ingrese dos numeros enteros a multiplicar: ";
  cin >> num1 >> num2;
  int producto = num1 * num2; // Calcula el producto de los dos números ingresados

  // Muestra los números y la línea de separación
  cout << " " << setw(to_string(num2).length()) << num1 << endl;
  cout << "x" << num2 << endl;
  cout << "-----" << endl;

  int contador_digitos_num2 = 0; // Contador para llevar la cuenta de los dígitos de num2
  while (num2 > 0) {
    int digito_num2 = num2 % 10; // Obtiene el último dígito de num2
    int resultado_parcial = num1 * digito_num2; // Calcula el resultado parcial
    cout << setw(to_string(producto).length() - contador_digitos_num2) << resultado_parcial << endl; // Muestra el resultado parcial
    num2 /= 10; // Elimina el último dígito de num2
    contador_digitos_num2++; // Incrementa el contador de dígitos de num2
  }

  // Muestra la línea de separación y el resultado final
  cout << "-----" << endl;
  cout << producto << endl;

cout<<"Desea continuar? (s/n) ";
  cin>>op;
  if (op=='s'){MultiplicacionManual();}
  if (op=='n'){cout<<' ';}

}
void decimales_binario() {
  int decimal, cociente, residuo, binario = 0, digito = 1;

  cout << "Porfavor ingrese un numero decimal: ";
  cin >> decimal;

  cociente = decimal;

  while (cociente != 0) {
    residuo = cociente % 2;
    cociente = cociente / 2;
    binario += residuo * digito;
    digito *= 10;
  }

  cout << "El numero convertido a binario es: " << binario << endl;


  cout<<"Desea continuar? (s/n) ";
  cin>>op;
  if (op=='s'){decimales_binario();}
  if (op=='n'){cout<<' ';}

}
void decimales_hexadecimales() {
  int decimal, cociente, residuo, i = 0;
  char hexadecimal[100];

  cout << "Ingrese un número decimal: ";
  cin >> decimal;

  cociente = decimal;

  while (cociente != 0) {
    residuo = cociente % 16;
    if (residuo < 10) {
      hexadecimal[i] = residuo + '0';
    } else {
      hexadecimal[i] = residuo + 55;
    }
    i++;
    cociente = cociente / 16;
  }

  cout << "El número hexadecimal es: ";
  for (int j = i - 1; j >= 0; j--) {
    cout << hexadecimal[j];
  }
  cout << endl;


  cout<<"Desea continuar? (s/n) ";
  cin>>op;
  if (op=='s'){decimales_hexadecimales();}
  if (op=='n'){cout<<' ';}

}
void imc() {
double peso, altura, imc;
  
  cout << "Ingrese su peso en kilogramos: ";
  cin >> peso;

  cout << "Ingrese su altura en metros: ";
  cin >> altura;

  imc = peso / (altura * altura);

  cout << "Su índice de masa corporal es: " << imc << endl;

  if (imc < 18.5) {
    cout << "Tiene un peso bajo" << endl;
  } else if (imc < 25) {
    cout << "Su peso es normal" << endl;
  } else if (imc < 30) {
    cout << "Tiene sobrepeso" << endl;
  } else {
    cout << "Tiene obesidad" << endl;
  }

} 
void dolares() {
  int opcion = 0;
  double cantidad = 0.0;

  cout << "Bienvenido al convertidor de moneda USD/GTQ - Por Sebastian Holweger" << endl;
  cout << "1. Convertir de quetzales a dólares\n";
  cout << "2. Convertir de dólares a quetzales\n";
  cout << "Ingrese una opción: ";
  cin >> opcion;

  switch (opcion) {
  case 1:
    cout << "Ingrese la cantidad de quetzales: ";
    cin >> cantidad;
    cout << cantidad << " quetzales equivalen a " << cantidad * 0.129 << " dólares.\n";
    break;
  case 2:
    cout << "Ingrese la cantidad de dólares: ";
    cin >> cantidad;
    cout << cantidad << " dólares equivalen a " << cantidad * 7.76 << " quetzales.\n";
    break;
  default:
    cout << "Opción inválida. Saliendo del programa...\n";
    break;
  }

cout<<"Desea continuar? (s/n) ";
  cin>>op;
  if (op=='s'){dolares();}
  if (op=='n'){cout<<' ';}

}
int vocales() {
  string texto;
  int contador = 0;
 cout << "\nBienvenido al Contador de Vocales - Por Sebastian Holweger" << endl;
  cout << "Ingresa una palabra: ";
  cin>>texto;

  for (int i = 0; i < texto.length(); i++) {
    char letra = tolower(texto[i]); // convertir la letra a minúscula para comparar
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
      contador++;
    }
  }
  cout << "La palabra tiene " << contador << " vocales." << endl;
  return 0;

  cout<<"Desea continuar? (s/n) ";
  cin>>op;
  if (op=='s'){vocales();}
  if (op=='n'){cout<<' ';}
}
void Hipotenusa() {
  double c1 = 0, c2 = 0, hipotenusa = 0;
  cout << "Programa para el Calculo de la Hipotenusa - Por sebastián Holweger " << endl;
  cout << "_______________________________________________________________________\n";
  cout << "Por favor ingrese el primer cateto: ";
  cin >> c1;
  cout << "Porfavor ingrese el segundo Cateto: ";
  cin >> c2;
  hipotenusa = sqrt((c1 * c1) + (c2 * c2));
  cout << "\nLa hipotenusa es: " << hipotenusa<<endl;

cout<<"Desea continuar? (s/n) ";
  cin>>op;
  if (op=='s'){Hipotenusa();}
  if (op=='n'){cout<<' ';}

}
void Uber() {
double kmRecorridos;
  const double TARIFA_BASE = 10.0; //mi tarifa base sera siempre de Q10
  const double TARIFA_KM = 5.0; //la tarifa por km sera de 5km
  double totalCobrar;

  cout << "Programa para calcular el cobro de un Uber segun km recorridos - Por Sebastian Holweger \n";
  cout<< "La tarfia base es de: Q"<<TARIFA_BASE<<" y por km recorrido es: Q"<<TARIFA_KM<<endl;
  cout << "Ingrese los kilómetros recorridos: ";
  cin >> kmRecorridos; //ingreso mis datos

  totalCobrar = TARIFA_BASE + (kmRecorridos * TARIFA_KM); // Cálculo del total a cobrar

  cout << fixed << setprecision(2); //Le declaro dos decimales fijos
  cout << "El total a cobrar es: Q" << totalCobrar << endl;
  return;

cout<<"Desea continuar? (s/n) ";
  cin>>op;
  if (op=='s'){Uber();}
  if (op=='n'){cout<<' ';}

} 

string unidades[20] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve", "diez", 
                        "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};
    string decenas[10] = {"", "", "veinti", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    string centenas[10] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};
string convertir(int num) {
    if (num < 0) {
        num *= -1;
        return "Menos " + convertir(num);
    }

    if (num == 0) {
        return "Cero";
    }
    if (num < 20) {
        return unidades[num];
    }
    if (num < 100) {
        if (num == 20) {
        return "Veinte";
        }
        if (num % 10 == 0) {
        return decenas[num / 10];
        } else if (num > 20 && num < 30) {
        return "veinti" + unidades[num % 10];
        } else {
        return decenas[num / 10] + " y " + unidades[num % 10];
        }
    }
    if (num < 1000) {
        if (num == 100) {
        return "Cien";
        } else if (num % 100 == 0) {
        return centenas[num / 100];
        } else {
        return centenas[num / 100] + " " + convertir(num % 100);
        }
    }
    if (num == 1000000) {
        return "Un Millon";
    }
    if (num < 1000000) {

        if (num == 1000) {
        return "Mil";
        }
        if (num > 1000 && num < 1999) {
        return "Mil " + convertir(num % 1000);
        }
        if (num % 1000 == 0) {
        return convertir(num / 1000) + " mil";
        } else if (num % 1000 < 100) {
        return convertir(num / 1000) + " mil " + convertir(num % 1000);
        } else {
        return convertir(num / 1000) + " mil " + convertir(num % 1000);
        }
    }
    return "";
    }
string convertirDecimal(double num) {
    string result = "";
    int parteEntera = (int)num;
    int parteDecimal = (int)round((num - parteEntera) * 100); //Obtenemos los dos primeros dígitos de la parte decimal
    if (parteDecimal<0){
        parteDecimal*=-1;
    }
    if (num < 0) {
        result += "Menos ";
        parteEntera *= -1;
    }
    result += convertir(parteEntera);
    result += " punto ";
    if (parteDecimal < 10) {
        result += "cero ";
    } 
    result += convertir(parteDecimal);
    return result;

    cout<<"\n\nDesea continuar? (s/n) ";
  cin>>op;
  if (op=='s'){MenuOperaciones();}
  if (op=='n'){cout<<"Gracias Por utilizar el Programa!";}
    }
void Cajero() {
int saldo = 5000;
    int opcion, cantidad;
    
    cout << "Bienvenido al servicio de cajero automatico - Por Sebastian Holweger" << endl << endl;
    cout << "1. Consultar saldo" << endl;
    cout << "2. Retirar dinero" << endl;
    cout << "3. Depositar dinero" << endl;
    cout << "4. Salir" << endl << endl;
    
    do {
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        
        switch(opcion) {
            case 1:
            cout << fixed << setprecision(2); 
                cout << "Su saldo actual es: Q" << saldo << endl << endl;
                break;
            case 2:
                cout << "Ingrese la cantidad que desea retirar: Q";
                cin >> cantidad;
                if(cantidad > saldo) {
                    cout << "Fondos insuficientes. Por favor intente nuevamente." << endl << endl;
                } else {
                    saldo -= cantidad;
                    cout << fixed << setprecision(2); 
                    cout << "Ha retirado: Q" << cantidad << endl;
                    cout << "Su saldo actual es: Q" << saldo << endl << endl;
                }
                break;
            case 3:
                cout << "Ingrese la cantidad que desea depositar: Q";
                cin >> cantidad;
                saldo += cantidad;
                cout << fixed << setprecision(2); 
                cout << "Ha depositado: Q" << cantidad << endl;
                cout << "Su saldo actual es: Q" << saldo << endl << endl;
                break;
            case 4:
                cout << "Le agradecemos por utilizar nuestro servicio de cajero automata . Hasta la proxima..." << endl;
                break;
            default:
                cout << "Opcion invalida. Por favor intente con otra opcion." << endl << endl;
                break;
        }
        
    } while(opcion != 4);
    
    return ;

cout<<"Desea continuar? (s/n) ";
  cin>>op;
  if (op=='s'){Cajero();}
  if (op=='n'){cout<<' ';}

} 

void Triangulo(int height) {
    for (int row = 0; row < height; row++) {
        for (int col = 0; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }
}
void Cuadrado(int side) {
    for (int row = 0; row < side; row++) {
        for (int col = 0; col < side; col++) {
            cout << "* ";
        }
        cout << endl;
    }
}
void Rectangulo(int width, int height) {
    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            cout << "* ";
        }
        cout << endl;
    }
}
void rombo(){
    int altura;
   cout << "Ingrese la altura del rombo: ";
   cin >> altura;

   for(int i = 1; i <= altura; i++) {
      for(int j = 1; j <= altura - i; j++) {
         cout << "  ";
      }
      for(int k = 1; k <= 2*i - 1; k++) {
         cout << "* ";
      }
      cout << endl;
   }

   for(int i = altura - 1; i >= 1; i--) {
      for(int j = 1; j <= altura - i; j++) {
         cout << "  ";
      }
      for(int k = 1; k <= 2*i - 1; k++) {
         cout << "* ";
      }
      cout << endl;
   }
}
void circulo(){
    int radius;
    cout << "Ingrese el radio del circulo: ";
    cin >> radius;

    int diameter = 2 * radius;
    int center = radius;

    for (int y = 0; y <= diameter; y++) {
        for (int x = 0; x <= diameter; x++) {
            int distance = sqrt((x - center) * (x - center) + (y - center) * (y - center));

            if (distance < radius) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

}
void Fig_geo() {
  int option;
    cout << "Bienvenido al programa de dibujo!" << endl;
    do {
        cout << "Seleccione la figura que desea dibujar:" << endl;
        cout << "1. Triangulo" << endl;
        cout << "2. Cuadrado" << endl;
        cout << "3. Rectangulo" << endl;
        cout << "4. Rombo" << endl;
        cout << "5. Circulo" << endl;
        cout << "6. Salir" << endl;
        cin >> option;
        switch (option) {
            case 1:
                int height;
                cout << "Ingrese la altura del triangulo: ";
                cin >> height;
                Triangulo(height);
                break;
            case 2:
                int side;
                cout << "Ingrese el lado del cuadrado: ";
                cin >> side;
                Cuadrado(side);
                break;
            case 3:
                int width, height2;
                cout << "Ingrese el ancho del rectangulo: ";
                cin >> width ;
                cout << "Ingrese el alto del rectangulo: ";
                cin>> height2;
                Rectangulo(width, height2);
                break;
            case 4:
               rombo();
                break;
            case 5:
               circulo();
                break;
            case 6:
                cout << "Adios!" << endl;
                break;
            default:
                cout << "Opcion invalida, por favor intente de nuevo." << endl;
        }
    } while (option != 6);
    return;

    cout<<"Desea continuar? (s/n) ";
  cin>>op;
  if (op=='s'){Fig_geo();}
  if (op=='n'){cout<<' ';}
}
void temperaturas(){
  double temperatura, celsius, fahrenheit;    
    int elegir;
    char menu;
    cout<<"Programa de Conversion de Temperatura - Por Sebastian Holweger"<<endl;
    cout<<" Elija su opción: 1.Celsius a Farenheit 2.Farenheit a Celsiu 3.Salir"<<endl;
    cin>>elegir;
    do
    {
        switch (elegir)
    {
    case 1:
         cout << "Ingrese una temperatura en grados Celsius: ";
    cin >> celsius;
    fahrenheit = (celsius * 1.8) + 32;
    cout << celsius << " grados Celsius son " << fahrenheit << " grados Fahrenheit." << endl;
    cout<<"Desea salir? (s/n)"<<endl;
    cin>>menu;
    if (menu=='n'){
    temperaturas();
    }
        break;
    case 2:
        cout << "Ingrese una temperatura en grados Fahrenheit: ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) / 1.8;
    cout << fahrenheit << " grados Fahrenheit son " << celsius << " grados Celsius." << endl;
    cout<<"Desea salir? (s/n)"<<endl;
    cin>>menu;
    if (menu=='n'){
    temperaturas();
    }
        break;
    default:
        break;
    } 
    } while (menu!='s');
}

int main() {
  // Hecho Por Sebastian Holweger :D
  int opcion;
  char opc;
  cout << "======================================================================" << endl;
  cout << "Bienvenido al Menu de programas básicos - Hecho Por Sebastian Holweger" << endl;
  cout << "======================================================================" << endl;
  cout << "Por favor elija una opción: ";
  cout << "\n1. Suma, Resta, Multiplicación y División de dos números\n2.¿Par o impar?\n3.Convertir de km a mi, m a pulgadas, de lb a kg y viceversa\n4.Palindromo de numeros o letras.\n5.Números arábigos a romanos (mínimo 1,000)\n6.Números enteros a letras\n7.Números enteros con decimal a letras\n8.Tabla de multiplicar\n9.Tablas del 1 al 10\n10.Multiplicación Manual - Forma Grafica\n11.Números decimales a binario\n12.Números decimales a hexadecimales\n13. Figuras Geométricas Básicas.\n14.Conversion de Temperaturas\n15.Simulación de un Cajero (Autómata)\n16.Calcular la hipotenusa\n17.Indice de Masa Corporal\n18.Quetzal a Dolar y Viceversa\n19.Contador de Vocales\n20.Servicio de cobro para Uber\n21.Salir\n";
  cin >> opcion;

do
{
  switch (opcion) {
  case 1:
    MenuOperaciones();
    cout << "¿Quieres probar otra opcion? s/n\n";
    cin >> opc;
    if (opc == 's')
      main();
    if (opc=='n'){cout<<"Gracias Por utilizar el Programa!";}
    break;
  case 2:
    paroimpar();
    cout << "¿Quieres probar otra opcion? s/n\n";
    cin >> opc;
    if (opc == 's')
      main();
    if (opc=='n'){cout<<"Gracias Por utilizar el Programa!";}
    break;
  case 3:
    convertirMedidas();
    cout << "¿Quieres probar otra opcion? s/n\n";
    cin >> opc;
    if (opc == 's')
      main();
    if (opc=='n'){cout<<"Gracias Por utilizar el Programa!";}
    break;
  case 4:
    palindromo();
    cout << "¿Quieres probar otra opcion? s/n\n";
    cin >> opc;
    if (opc == 's')
      main();
    if (opc=='n'){cout<<"Gracias Por utilizar el Programa!";}
    break;
  case 5:
    arabigosaromano();
    cout << "¿Quieres probar otra opcion? s/n\n";
    cin >> opc;
    if (opc == 's')
      main();
    if (opc=='n'){cout<<"Gracias Por utilizar el Programa!";}
    break;
  case 6:
     int numero;
  cout << "Programa para trabajar con numeros enteros hasta 1,000,000 - Por Sebastian Holweger ";
  cout << "Ingrese un numero entero: ";
  cin >> numero;
  cout << "El numero: " << numero << " se escribe: " << enterosaletras(numero)<<endl;
  cout << "¿Quieres probar otra opcion? s/n\n";
    cin >> opc;
    if (opc == 's')
      main();
    if (opc=='n'){cout<<"Gracias Por utilizar el Programa!";}
  return 0;
    break;
  case 7:
    double nume;
    cout << "Programa para trabajar con numeros enteros hasta 1,000,000 y DOS decimales - Por Sebastian Holweger \n";
    cout << "Ingrese un numero: ";
    cin >> nume;
    cout << fixed << setprecision(2); 
    if (floor(nume) == nume) { // comprobamos si es un número entero
        cout << "El numero: " << nume << " se escribe: " << convertir((int)nume) << endl;
    } else {
        cout << "El numero: " << nume << " se escribe: " << convertirDecimal(nume) << endl;
    }

cout << "¿Quieres probar otra opcion? s/n\n";
    cin >> opc;
    if (opc == 's')
      main();
     if (opc=='n'){cout<<"Gracias Por utilizar el Programa!";}

    return 0;
    break;
  case 8:
    tablamultiplicar();
    cout << "¿Quieres probar otra opcion? s/n\n";
    cin >> opc;
    if (opc == 's')
      main();
    if (opc == 'n')
    if (opc=='n'){cout<<"Gracias Por utilizar el Programa!";}
    break;
  case 9:
    tablashastadiez();
    cout << "¿Quieres probar otra opcion? s/n\n";
    cin >> opc;
    if (opc == 's')
      main();
    if (opc=='n'){cout<<"Gracias Por utilizar el Programa!";}
    break;
  case 10:
    /* Crear de forma gráfica la Multiplicación Manual */
    MultiplicacionManual();
    cout << "¿Quieres probar otra opcion? s/n\n";
    cin >> opc;
    if (opc == 's')
      main();
      if (opc=='n'){cout<<"Gracias Por utilizar el Programa!";}
    break;
  case 11:
    decimales_binario();
    cout << "¿Quieres probar otra opcion? s/n\n";
    cin >> opc;
    if (opc == 's')
      main();
      if (opc=='n'){cout<<"Gracias Por utilizar el Programa!";}
    break;
  case 12:
    decimales_hexadecimales();
    cout << "¿Quieres probar otra opcion? s/n\n";
    cin >> opc;
    if (opc == 's')
      main();
      if (opc=='n'){cout<<"Gracias Por utilizar el Programa!";}
    break;
  case 13:
    Fig_geo();
   cout << "¿Quieres probar otra opcion? s/n\n";
    cin >> opc;
    if (opc == 's')
      main();
      if (opc=='n'){cout<<"Gracias Por utilizar el Programa!";}
    break;
  case 14:
    temperaturas();
    cout << "¿Quieres probar otra opcion? s/n\n";
    cin >> opc;
    if (opc == 's')
      main();
      if (opc=='n'){cout<<"Gracias Por utilizar el Programa!";}
    break;
  case 15:
    Cajero();
    cout << "¿Quieres probar otra opcion? s/n\n";
    cin >> opc;
    if (opc == 's')
      main();
      if (opc=='n'){cout<<"Gracias Por utilizar el Programa!";}
    break;
  case 16:
    Hipotenusa();
    cout << "¿Quieres probar otra opcion? s/n\n";
    cin >> opc;
    if (opc == 's')
      main();
      if (opc=='n'){cout<<"Gracias Por utilizar el Programa!";}
    break;
    //del 17 al 20 es libre...
  case 17: //Calcular Indice de Masa Corporal
    imc();
    cout<<"Desea continuar? (s/n) ";
  cin>>op;
  if (op=='s'){imc();}
  if (op=='n'){cout<<' ';}
   cout << "¿Quieres probar otra opcion? s/n\n";
    cin >> opc;
    if (opc == 's')
      main();
      if (opc=='n'){cout<<"Gracias Por utilizar el Programa!";}
  case 18: // Conversion de Quetzal a Dolar
    dolares();
   cout << "¿Quieres probar otra opcion? s/n\n";
    cin >> opc;
    if (opc == 's')
      main();
      if (opc=='n'){cout<<"Gracias Por utilizar el Programa!";}
    break;
  case 19: // Contador de vocales 
    vocales();
    cout << "¿Quieres probar otra opcion? s/n\n";
    cin >> opc;
    if (opc == 's')
      main();
    if (opc=='n'){cout<<"Gracias Por utilizar el Programa!";}
    break;
  case 20: //Programa cobro de Uber
    Uber();
    cout << "¿Quieres probar otra opcion? s/n\n";
    cin >> opc;
    if (opc == 's')
      main();
      if (opc=='n'){cout<<"Gracias Por utilizar el Programa!";}
    break;
  case 21:
    opc = 'n';
    if (opc=='n'){cout<<"Gracias Por utilizar el Programa!";}
    break;
  default:
    char opc;
    cout << "Esa no es una opción válida..." << endl;
    cout << "¿Quieres probar otra opcion? s/n\n";
    cin >> opc;
    if (opc == 's')
      main();
      if (opc=='n'){cout<<"Gracias Por utilizar el Programa!";}
      break;
  }
} while (opc!='n');

  system("pause");
   return 0;
}