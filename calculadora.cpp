#include <iostream>

using namespace std;

void productoEscalar( double x[5], double y[5] );
double ascendente( double x[5] );
double descendente( double x[5] );
double mayor( double x[5] );
double menor( double x[5] );
void bubble_sort( double operation[5] );
void bubble_sort_menor( double operation[5] );
void muestraOrden( double x[5] );
void copiarVector( double primario[5], double secundario[5] );

int main()
{
    
    double x [ 5 ] = { 2.718281828, -3.141592654, 1.414213562, 0.5772156649, 0.3010299957 };
    double y [ 5 ] = { 1486.2497, 878366.9879, -22.37492, 4773714.647, 0.000185049 };
    
    productoEscalar( x, y );
    
    cout.precision(20);
    cout << "Resultado del producto escalar de manera ascendente: " << ascendente( x ) << endl;
    cout << "Resultado del producto escalar de manera descendente: " << descendente( x ) << endl;
    cout << "Resultado del producto escalar de mayores primero, luego los menores: " << mayor( x ) << endl;
    cout << "Resultado del producto escalar de menores primero, luego los mayores: " << menor( x ) << endl;
    
    
    return 0;
}

void productoEscalar( double x[5], double y[5] )
{
    int i;
    double aux[5];
    
    for( i = 0; i < 5; i++ )
    {
        aux[i] = x[i] * y[i];
    }
    
    copiarVector( aux, x );
}

double ascendente( double x[5] )
{
    int i;
    double resultado = 0;

    for ( i = 0; i < 5; i++ )
    {
        resultado += x[i]; 
    }

    return resultado;
}

double descendente( double x[5] )
{
    int i=4;
    double resultado = 0;
    
    while (i >= 0 )
    {
        resultado += x[i];
        i--;
    }
    
   return resultado; 
}

double mayor( double x[5] )
{
    double resultdo = 0, resultdo2 = 0, aux[5];
    int i;
    
    copiarVector( x, aux );
    
    bubble_sort( aux );
    
    for( i = 0; i < 5; i++ )
    {
        if ( aux[ i ] >= 0 )
        {
            resultdo += aux[i];
        }
    }
    
    for( i = 0; i < 5; i++ )
    {
        if ( aux[ i ] < 0 )
        {
            resultdo2 += aux[i];
        }
    }
    
    return resultdo + resultdo2;
}

double menor( double x[5] )
{
    double resultdo = 0, resultdo2 = 0, aux[5];
    int i;
    
    copiarVector( x, aux );
    
    bubble_sort_menor( aux );
    
    for( i = 0; i < 5; i++ )
    {
        if ( aux[ i ] >= 0 )
        {
            resultdo += aux[i];
        }
    }
    
    for( i = 0; i < 5; i++ )
    {
        if ( aux[ i ] < 0 )
        {
            resultdo2 += aux[i];
        }
    }
    
    return resultdo + resultdo2;
}

void bubble_sort( double operation[ 5 ] )
{
  
  int i,j;
  double aux;
  
  for( i = 0; i < 5 - 1; i++ )
  {
    for( j = 1;  j < 5 - i; j++ )
    {
      if( operation[ j - 1 ] < operation[ j ] )
      {
        aux = operation[ j - 1 ];
        operation[ j - 1 ] = operation[ j ];
        operation[ j ] = aux;
      }
    }
  }
}


void muestraOrden( double x[5] )
{
    int i;
    
    for ( i = 0; i < 5; i++ )
    {
        cout<< x[i] << " "; 
    }
    
    cout<<endl;
}

void copiarVector( double primario[5], double secundario[5] )
{
    int i;
    
    for(i = 0; i < 5; i++ )
    {
        secundario[i] = primario[i];
    }
}

void bubble_sort_menor( double operation[5] )
{
    int i,j;
    double aux;
  
    for( i = 0; i < 5 - 1; i++ )
    {
        for( j = 1;  j < 5 - i; j++ )
        {
            if( operation[ j - 1 ] > operation[ j ] )
            {
                aux = operation[ j - 1 ];
                operation[ j - 1 ] = operation[ j ];
                operation[ j ] = aux;
            }
        }
    }
}