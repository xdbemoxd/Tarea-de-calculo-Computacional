#include <iostream>

using namespace std;

void productoEscalar( float x[5], float y[5] );
float ascendente( float x[5] );
float descendente( float x[5] );
float mayor( float x[5] );
float menor( float x[5] );
void bubble_sort( float operation[5] );
void bubble_sort_menor( float operation[5] );
void muestraOrden( float x[5] );
void copiarVector( float primario[5], float secundario[5] );

int main()
{
    
    float x [ 5 ] = { 2.718281828, -3.141592654, 1.414213562, 0.5772156649, 0.3010299957 };
    float y [ 5 ] = { 1486.2497, 878366.9879, -22.37492, 4773714.647, 0.000185049 };
    
    productoEscalar( x, y );
    
    cout.precision(20);
    cout << "Resultado del producto escalar de manera ascendente: " << ascendente( x ) << endl;
    cout << "Resultado del producto escalar de manera descendente: " << descendente( x ) << endl;
    cout << "Resultado del producto escalar de mayores primero, luego los menores: " << mayor( x ) << endl;
    cout << "Resultado del producto escalar de menores primero, luego los mayores: " << menor( x ) << endl;
    
    
    return 0;
}

void productoEscalar( float x[5], float y[5] )
{
    int i;
    float aux[5];
    
    for( i = 0; i < 5; i++ )
    {
        aux[i] = x[i] * y[i];
    }
    
    copiarVector( aux, x );
}

float ascendente( float x[5] )
{
    int i;
    float resultado = 0;

    for ( i = 0; i < 5; i++ )
    {
        resultado += x[i]; 
    }

    return resultado;
}

float descendente( float x[5] )
{
    int i=4;
    float resultado = 0;
    
    while (i >= 0 )
    {
        resultado += x[i];
        i--;
    }
    
   return resultado; 
}

float mayor( float x[5] )
{
    float resultdo = 0, resultdo2 = 0, aux[5];
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

float menor( float x[5] )
{
    float resultdo = 0, resultdo2 = 0, aux[5];
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

void bubble_sort( float operation[ 5 ] )
{
  
  int i,j;
  float aux;
  
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


void muestraOrden( float x[5] )
{
    int i;
    
    for ( i = 0; i < 5; i++ )
    {
        cout<< x[i] << " "; 
    }
    
    cout<<endl;
}

void copiarVector( float primario[5], float secundario[5] )
{
    int i;
    
    for(i = 0; i < 5; i++ )
    {
        secundario[i] = primario[i];
    }
}

void bubble_sort_menor( float operation[5] )
{
    int i,j;
    float aux;
  
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