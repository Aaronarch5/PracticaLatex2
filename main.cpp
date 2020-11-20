//Práctca 2: CALCULADORA DE MATRICES
//ARCHUNDIA BAZÁN AARÓN ANTONIO, GUERRERO VÉLEZ ELISEO MILTON, HERNÁNDEZ VÁZQUEZ CÁSAR ATURO
#include <iostream>
#include <clocale>

using namespace std;

void operacionesDisponibles();
void sumaMatrices();
void restaMatrices();
void multiplicacionMatrices();
void transpuesta();

int main()
{
	setlocale(LC_ALL,"");
	int operacion{0};
	do
	{
	operacionesDisponibles();
	cout<<"Seleccione la operación que desea realizar: ";
	cin>>operacion;
	cout<<endl;
	
		switch(operacion)
		{
			case 1: 
					sumaMatrices();
					break;
			case 2: 
					restaMatrices();
					break;
			case 3:
					multiplicacionMatrices();
					break;
			case 4:
					transpuesta();
					break;
			case 5:
					break;
		}
	} while(operacion!=5);
 return 0;
}

void operacionesDisponibles()
{
	cout<<"CALCULADORA DE MATRICES"<<endl;
	cout<<"BIENVENIDO..."<<endl;
	cout<<" "<<endl;
	cout<<"Listado de Operaciones de Matrices Disponibles:"<<endl;
	cout<<"______________________________________"<<endl;
	cout<<" "<<endl;
	cout<<"1. SUMA (A+B) "<<endl;
	cout<<"2. RESTA (A-B)"<<endl;
	cout<<"3. MULTIPLICACIÓN (A*B)"<<endl;
	cout<<"4. MATRIZ TRANSPUESTA "<<endl;
	cout<<"5. SALIR DEL PROGRAMA "<<endl;
	cout<<" "<<endl;
}

void sumaMatrices() //Función para la suma de matrices A y B
{
	//Declaración de variables para las filas y columnas de las matrices A y B
	int filasA{0}, columnasA{0};
	int filasB{0}, columnasB{0};
	
	//Se imprime encabezado para la suma
	cout<<" "<<endl;
	cout<<"----------------------SUMA DE MATRICES-----------------------"<<endl;
	cout<<" "<<endl;
	cout<<"|||| ¡NOTA!: Las Matrices deben ser del mismo tamaño ||||"<<endl;
	cout<<"_____________________________________________________________"<<endl;
	

	//Se le solicita al usuario indicar filas y columnas de la matriz A
	cout<<" "<<endl;
	cout<<"* Inserte número de filas para la matriz A: ";
	cin>>filasA;
	cout<<endl;
	cout<<"* Inserte número de columnas para la matriz A: ";
	cin>>columnasA;
	cout<<endl;

	//Se le solicita al usuario indicar filas y columnas de la matriz B
	cout<<"* Inserte número de filas para la matriz B: ";
	cin>>filasB;
	cout<<endl;
	cout<<"* Inserte número de columnas para la matriz B: ";
	cin>>columnasB;
	cout<<endl;
	
	if(filasA==filasB&columnasA==columnasB) //Si las matrices A y B son del mismo tamaño entonces llevar a cabo la operación
	{
		//Inserta los valores para cada elemento de la matriz A
		cout<<" "<<endl;
    	cout <<"DATOS PARA LA MATRIZ A: "<<endl;
		int A[filasA][columnasA];
		for(size_t i{0}; i<filasA; i++)
			{
        	for(size_t j{0}; j<columnasA; j++)
				{
            	cout <<"Matriz["<<i<<"]["<<j<<"]: ";
            	cin >> A[i][j];
        		}
    		}
    
		//Inserta los valores para cada elemento de la matriz B
		cout<<" "<<endl;
    	cout <<"DATOS PARA LA MATRIZ B: "<<endl;
		int B[filasB][columnasB];
	
		for(size_t i{0}; i<filasB; i++)
			{
        	for(size_t j{0}; j<columnasB; j++)
				{
            	cout <<"Matriz["<<i<<"]["<<j<<"]: ";
           		cin >> B[i][j];
        		}
    		}
    	
    	//Suma en la Matriz C
    	int filasC=filasA;
		int columnasC=columnasA;
    	int C[filasC][columnasC];
    	for(size_t i{0};i<filasC;i++)
			{
        	for(size_t j{0}; j<columnasC;j++)
            	{
            		C[i][j] = A[i][j] + B[i][j];	
				}
			}
    	
    	
    	//Imprime Matriz A
    	cout<<"____________________________________"<<endl;
    	cout<<" "<<endl;
    	cout<<"MATRIZ A"<<endl;
    	cout<<" "<<endl;
    	for(size_t i{0};i<filasA;i++)
		{
    	cout <<" | ";
    	for(size_t j{0}; j<columnasA; j++)
        	{
				cout<<A[i][j]<<" ";
 			}
        	cout << "|"<<endl;
    	}
    	cout<<" "<<endl;
    	
    	
    	//Imprime Matriz B
    	cout<<"MATRIZ B"<<endl;
    	cout<<" "<<endl;
    	for(size_t i{0};i<filasB;i++)
		{
    	cout <<" | ";
    	for(size_t j{0}; j<columnasB; j++)
        	{
				cout<<B[i][j]<<" ";
 			}
        	cout << "|"<<endl;
    	}
    	cout<<" "<<endl;
    	
    	
			
		//Imprime Matriz C
    	cout<<"MATRIZ C = A+B"<<endl;
    	cout<<" "<<endl;
    	
		for(size_t i{0};i<filasC;i++)
		{
    	cout <<" | ";
    	for(size_t j{0}; j<columnasC; j++)
        	{
				cout<<C[i][j]<<" ";
 			}
        	cout << "|"<<endl;
    	}
    	cout<<" "<<endl;
    	
    	
	}
		else    //Imprime un aviso que no se pudo llevar a cabo la operación por la diferencia de dimensiones 
			{
				cout<<" "<<endl;
				cout<<"                       ¡¡¡¡¡AVISO!!!!!"<<endl;
				cout<<"_____________________________________________________________"<<endl;
					cout<<" "<<endl;
				cout<<"               NO SE PUEDE REALIZAR LA OPERACIÓN"<<endl;
				cout<<" "<<endl;
				cout<<"                 NO TIENEN LA MISMA DIMENSIÓN"<<endl;
				cout<<"_____________________________________________________________"<<endl;
				cout<<" "<<endl;
			}
}



void restaMatrices() //Función para la resta de matrices A y B
{
	//Declaración de variables para las filas y columnas de A y B
	int filasA{0}, columnasA{0};
	int filasB{0}, columnasB{0};
	
	//Se imprime encabezado para la resta
	cout<<" "<<endl;
	cout<<"----------------------RESTA DE MATRICES-----------------------"<<endl;
	cout<<" "<<endl;
	cout<<"|||| ¡NOTA!: Las Matrices deben ser del mismo tamaño ||||"<<endl;
	cout<<"_____________________________________________________________"<<endl;
	

	//Se le solicita al usuario ndicar filas y columnas de la matriz A
	cout<<" "<<endl;
	cout<<"* Inserte número de filas para la matriz A: ";
	cin>>filasA;
	cout<<endl;
	cout<<"* Inserte número de columnas para la matriz A: ";
	cin>>columnasA;
	cout<<endl;
	
	//Se le solicita al usuario ndicar filas y columnas de la matriz B
	cout<<"* Inserte número de filas para la matriz B: ";
	cin>>filasB;
	cout<<endl;
	cout<<"* Inserte número de columnas para la matriz B: ";
	cin>>columnasB;
	cout<<endl;
	
	
	if(filasA==filasB&columnasA==columnasB) //Si la matriz A y B tienen el mismo tamaño entonces se realiza la operación
	{
		//Inserta los valores para cada elemento de la matriz B
		cout<<" "<<endl;
    	cout <<"DATOS PARA LA MATRIZ A: "<<endl;
		int A[filasA][columnasA];
		for(size_t i{0}; i<filasA; i++)
			{
        	for(size_t j{0}; j<columnasA; j++)
				{
            	cout <<"Matriz["<<i<<"]["<<j<<"]: ";
            	cin >> A[i][j];
        		}
    		}
    
		//Inserta los valores para cada elemento de la matriz B
		cout<<" "<<endl;
    	cout <<"DATOS PARA LA MATRIZ B: "<<endl;
		int B[filasB][columnasB];
	
		for(size_t i{0}; i<filasB; i++)
			{
        	for(size_t j{0}; j<columnasB; j++)
				{
            	cout <<"Matriz["<<i<<"]["<<j<<"]: ";
           		cin >> B[i][j];
        		}
    		}
    	
    	//Suma en la Matriz C
    	int filasC=filasA;
		int columnasC=columnasA;
    	int C[filasC][columnasC];
    	for(size_t i{0};i<filasC;i++)
			{
        	for(size_t j{0}; j<columnasC;j++)
            	{
            		C[i][j] = A[i][j] - B[i][j];	
				}
			}
    	
    	//Imprime Matriz A
    	cout<<"____________________________________"<<endl;
    	cout<<" "<<endl;
    	cout<<"MATRIZ A"<<endl;
    	cout<<" "<<endl;
    	for(size_t i{0};i<filasA;i++)
		{
    	cout <<" | ";
    	for(size_t j{0}; j<columnasA; j++)
        	{
				cout<<A[i][j]<<" ";
 			}
        	cout << "|"<<endl;
    	}
    	cout<<" "<<endl;
    	
    	
    	//Imprime Matriz B
    	cout<<"MATRIZ B"<<endl;
    	cout<<" "<<endl;
    	for(size_t i{0};i<filasB;i++)
		{
    	cout <<" | ";
    	for(size_t j{0}; j<columnasB; j++)
        	{
				cout<<B[i][j]<<" ";
 			}
        	cout << "|"<<endl;
    	}
    	cout<<" "<<endl;
    	
    	
			
		//Imprime Matriz C
    	cout<<"MATRIZ C = A-B"<<endl;
    	cout<<" "<<endl;
    	
		for(size_t i{0};i<filasC;i++)
		{
    	cout <<" | ";
    	for(size_t j{0}; j<columnasC; j++)
        	{
				cout<<C[i][j]<<" ";
 			}
        	cout << "|"<<endl;
    	}
    	cout<<" "<<endl;
    	
    	
	}
		else //Imprime un aviso que no se pudo llevar a cabo la operación por la diferencia de dimensiones 
			{
				cout<<" "<<endl;
				cout<<"                       ¡¡¡¡¡AVISO!!!!!"<<endl;
				cout<<"_____________________________________________________________"<<endl;
					cout<<" "<<endl;
				cout<<"               NO SE PUEDE REALIZAR LA OPERACIÓN"<<endl;
				cout<<" "<<endl;
				cout<<"                 NO TIENEN LA MISMA DIMENSIÓN"<<endl;
				cout<<"_____________________________________________________________"<<endl;
				cout<<" "<<endl;
			}
}


void multiplicacionMatrices() //Función para la multiplicaación de matrices A y B
{
	//Declaracion de variables para las filas y columnas de la matriz A y B
	int filasA{0}, columnasA{0};
	int filasB{0}, columnasB{0};
	
	//Se imprime encabezado para la multiplicación
	cout<<" "<<endl;
	cout<<"----------------------MULTIPLICACIÓN DE MATRICES-----------------------"<<endl;
	cout<<" "<<endl;
	cout<<"|||| ¡NOTA!: EL NUMERO DE COLUMNAS DE A  ||||"<<endl;
	cout <<"|||| DEBE SER EL MISMO NUMERO DE FILAS DE B  ||||"<<endl;
	cout<<"_____________________________________________________________"<<endl;	
	
	
	//Se le solicita al usuario Indicar filas y columnas de la matriz A
	cout<<" "<<endl;
	cout<<"* Inserte número de filas para la matriz A: ";
	cin>>filasA;
	cout<<endl;
	cout<<"* Inserte número de columnas para la matriz A: ";
	cin>>columnasA;
	cout<<endl;

	//Inserta los valores para cada elemento de la matriz A
	cout<<" "<<endl;
    	cout <<"DATOS PARA LA MATRIZ A: "<<endl;
		int A[filasA][columnasA];
		for(size_t i{0}; i<filasA; i++)
			{
        	for(size_t j{0}; j<columnasA; j++)
				{
            	cout <<"Matriz["<<i<<"]["<<j<<"]: ";
            	cin >> A[i][j];
        		}
    		}
    		
    		
	//Se le solicita al usuario indicar filas y columnas de la matriz B
	cout<<"* Inserte número de filas para la matriz B: ";
	cin>>filasB;
	cout<<endl;
	cout<<"* Inserte número de columnas para la matriz B: ";
	cin>>columnasB;
	cout<<endl;
	
	//Inserta los valores para cada elemento de la matriz B
	cout<<" "<<endl;
    	cout <<"DATOS PARA LA MATRIZ B: "<<endl;
		int B[filasB][columnasB];
	
		for(size_t i{0}; i<filasB; i++)
			{
        	for(size_t j{0}; j<columnasB; j++)
				{
            	cout <<"Matriz["<<i<<"]["<<j<<"]: ";
           		cin >> B[i][j];
        		}
    		}
    		
    	
    	//Imprime Matriz A
    	cout<<"____________________________________"<<endl;
    	cout<<" "<<endl;
    	cout<<"MATRIZ A"<<endl;
    	cout<<" "<<endl;
    	for(size_t i{0};i<filasA;i++)
		{
    	cout <<" | ";
    	for(size_t j{0}; j<columnasA; j++)
        	{
				cout<<A[i][j]<<" ";
 			}
        	cout << "|"<<endl;
    	}
    	cout<<" "<<endl;
    	
    	
    	//Imprime Matriz B
    	cout<<"MATRIZ B"<<endl;
    	cout<<" "<<endl;
    	for(size_t i{0};i<filasB;i++)
		{
    	cout <<" | ";
    	for(size_t j{0}; j<columnasB; j++)
        	{
				cout<<B[i][j]<<" ";
 			}
        	cout << "|"<<endl;
    	}
    	cout<<" "<<endl;
		
	//Declaración Matriz C
    int filasC=filasA;
	int columnasC=columnasA;
    int C[filasC][columnasC];
    		
			
			
	//Multiplicación de las Matrices		
	if(columnasA == filasB) //Si las columnas de A y las filas de A entonces realiza la operación
	{
        for(int i{0};i<filasA;i++)
		{
            for(int j{0};j<columnasB;j++)
			{
                C[i][j] = 0;
                for( int k = 0; k < columnasA;k++)
                {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }
	
	
	 //Imprime Matriz C
	 	cout<<" "<<endl;
		cout << "C = A*B:";
    	cout<<" "<<endl;
    	
		for(size_t i{0};i<filasC;i++)
		{
    	cout <<" | ";
    	for(size_t j{0}; j<columnasC; j++)
        	{
				cout<<C[i][j]<<" ";
 			}
        	cout << "|"<<endl;
    	}
    	cout<<" "<<endl;
	}
	else     //Imprime un aviso que no se pudo llevar a cabo la operación por la diferencia de dimensiones en columnas de B y filas de A
		{
			cout<<" "<<endl;
				cout<<"                       ¡¡¡¡¡AVISO!!!!!"<<endl;
				cout<<"_____________________________________________________________"<<endl;
					cout<<" "<<endl;
				cout<<"               NO SE PUEDE REALIZAR LA OPERACIÓN"<<endl;
				cout<<" "<<endl;
				cout<<"               EL NÚMERO DE COLUMNAS DE LA MATRIZ A"<<endl;
				cout<<"               NO ES EL MISMO NÚMERO DE FILAS DE LA MATRIZ B"<<endl;
				cout<<"_____________________________________________________________"<<endl;
				cout<<" "<<endl;
		}
}

void transpuesta() //Función para sacar transpuesta de una Matriz
{
	//Declara variables para guardar filas y columnas de la matriz
	int filas{0}, columnas{0};
	
	//Se imprime encabezado para la Transpuesta
	cout<<" "<<endl;
	cout<<"----------------------TRANSPUESTA DE MATRICES-----------------------"<<endl;
	cout<<" "<<endl;
	cout<<"|||| ¡NOTA!: EL NUMERO DE COLUMNAS  ||||"<<endl;
	cout <<"|||| DEBE SER EL MISMO NUMERO DE FILAS  ||||"<<endl;
	cout<<"_____________________________________________________________"<<endl;
	
	
	//Indicar filas y columnas de la matriz
	cout<<" "<<endl;
	cout<<"* Inserte número de filas para la matriz: ";
	cin>>filas;
	cout<<endl;
	cout<<"* Inserte número de columnas para la matriz: ";
	cin>>columnas;
	cout<<endl;
	
	if(filas==columnas)
	{
	
	//Inserta los valores para cada elemento de la matriz
		cout<<" "<<endl;
    	cout <<"DATOS PARA LA MATRIZ: "<<endl;
		int M[filas][columnas];
	
		for(size_t i{0}; i<filas; i++)
			{
        	for(size_t j{0}; j<columnas; j++)
				{
            	cout <<"Matriz["<<i<<"]["<<j<<"]: ";
           		cin >> M[i][j];
        		}
    		}
    		
    		
    //Imprime Matriz Original
	 	cout<<" "<<endl;
		cout << "Matriz Original";
    	cout<<" "<<endl;
    	
		for(size_t i{0};i<filas;i++)
		{
    	cout <<" | ";
    	for(size_t j{0}; j<columnas; j++)
        	{
				cout<<M[i][j]<<" ";
 			}
        	cout << "|"<<endl;
    	}
    	cout<<" "<<endl;
    	
    
    //Imprime Matriz Transpuesta
	 	cout<<" "<<endl;
		cout << "Matriz Transpuesta";
    	cout<<" "<<endl;
    	
		for(size_t i{0};i<filas;i++)
		{
    	cout <<" | ";
    	for(size_t j{0}; j<columnas; j++)
        	{
				cout<<M[j][i]<<" ";
 			}
        	cout << "|"<<endl;
    	}
    	cout<<" "<<endl;
    }
    
	else
	{
		cout<<" "<<endl;
				cout<<"                       ¡¡¡¡¡AVISO!!!!!"<<endl;
				cout<<"_____________________________________________________________"<<endl;
					cout<<" "<<endl;
				cout<<"               NO SE PUEDE REALIZAR LA OPERACIÓN"<<endl;
				cout<<" "<<endl;
				cout<<"               EL NÚMERO DE COLUMNAS"<<endl;
				cout<<"               NO ES EL MISMO NÚMERO DE FILAS"<<endl;
				cout<<"_____________________________________________________________"<<endl;
				cout<<" "<<endl;
	}
    		
}
