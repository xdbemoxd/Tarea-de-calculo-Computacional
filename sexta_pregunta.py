from math import pow
from decimal import Decimal
from matplotlib import pyplot
import numpy as np

x = np.zeros( 101 )
result_1 = np.zeros( 101 )
result_2 = np.zeros( 101 )
result_3 = np.zeros( 101 )


punto_inicial = Decimal( 0.99000000 )
valor_constante = Decimal( 0.00019802 )

numbers = list()

def funcion_1( x ):
  return Decimal( Decimal( pow( x, 8 ) ) - 8 * ( Decimal( pow( x, 7 ) ) ) + 28 * Decimal( pow( x, 6 ) ) - 56 * ( Decimal( pow( x, 6 ) ) )+ 70 * Decimal( pow( x, 4 ) )\
      - 56 * Decimal( pow( x, 3 ) ) +  28 * Decimal( pow( x, 2) ) - 8 * x + 1)

def funcion_2( x ):
  return Decimal( ( ( ( ( ( ( ( x - 8 ) * x + 28 ) * x - 56 ) * x + 70 ) * x - 56 ) * x + 28 ) *x  - 8 ) * x + 1 )

def funcion_3( x ):
  return Decimal( Decimal( pow( x - 1, 8 ) ) )


i = 0
while( i <= 100 ):
  x[ i ] = punto_inicial
  result_1[ i ] = funcion_1( punto_inicial )
  result_2[ i ] = funcion_2( punto_inicial )
  result_3[ i ] = funcion_3( punto_inicial )

  i += 1
  punto_inicial = punto_inicial + valor_constante


pyplot.plot( x, result_1 )
pyplot.show()

pyplot.plot( x, result_2 )
pyplot.show()

pyplot.plot( x, result_3 )
pyplot.show()