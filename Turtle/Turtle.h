/**

* @file Turtle.h
* @version 1.0
* @date 09/05/2019
* @autor Jhoel Huallpar Dorado
* @title Class Turtle
	
*/
#include <iostream>
#include <math.h>

//Class Turtle
/** 
Declaracion de la Clase Turtle: La cual declara 
los datos PRIVADOS
" Las variable que van ser usadas a loa largo de todo la clase "
los  dato PUBLICOS
" Declara las funcion que seran utilizadas por el usuario ".
La clase turtle te permite realizar diversas figuras que el usuario desea realizar.
*/

class Turtle
{
	/** En el " Private " van todas las variables que el usuario va a utilizar */
	private:
		
		/** @brief La varialble "X" acepta valores enteros y tambien valores decimales.
		La "X" se�ala la posicion en el eje de las "X" en el plano cartesiano, es decir de manera horizontal */
		double x;
		
		/** La varialble "Y" acepta valores enteros y tambien valores decimales.
		La "Y" se�ala la posicion en el eje de las "Y" en el plano cartesiano, es decir de manera Vertical */
		double y;
		
		/** La varialble "Value" acepta valores enteros y tambien valores decimales.
		el "Value" es el tama�o que le designamos para que funcione de manera correcta */
		double value;
		
		/** La varialble "Draw es de tipo booleano, es decir que sus valores son "Verdad" o "Falso". */
		bool draw;
		
	/** En el " Public " van todas las funciones que el usuario va a utilizar */		
	public:
		/** Turtle() -> es el contructor de la clase Turtle */
		Turtle(){
			y=0;
			value=0;
			x=0;
			draw=1;
		}
		
		// Constructor
		/** @brief Ubica el lapiz en un punto incial desde donde se empezara a dibujar */
		/** @param newx -> se�ala la posicion en el eje de las "X" en el plano cartesiano, es decir de manera horizontal */
		/** @param newy -> se�ala la posicion en el eje de las "Y" en el plano cartesiano, es decir de manera Vertical */
		void positionini(const double newx, const double newy)
   		{
		   x = newx;
		   y = newy;
		} 
		
		//Funcion Forward
		/** " forward() " Mueva la tortuga hacia adelante en la distancia especificada, en la direccion en que se dirige la tortuga. */
		/** @param dist -> Indica la distancia hacia adelante que debe ser recorrida al momento de graficar */
		void forward(const double dist)
		{
			double pi=3.1415926535897932384626433832795;
		    double newx = x + dist * cos(pi * value / 180.0);
		    double newy = y + dist * sin(pi * value / 180.0);
		    if (draw)
		    {
		        glBegin(GL_LINES);
		        	glVertex2d(x, y);
		        	glVertex2d(newx, newy);
		        glEnd();
		    }
		      x = newx;
		      y = newy;			
		}
		
		//Funcion Backward
		
		/** " backward() " Mueve la tortuga hacia atras por la distancia, opuesta a la direccion en que se dirige la tortuga. No cambies el rumbo de la tortuga. */
		/** @param dist -> Indica la distancia hacia atras que debe ser recorrida al momento de graficar */
		void backward(const double dist)
		{
			forward(-dist);			
		}
				
		//Funcion PenUp
		/** " penup() " Tire de la pluma hacia arriba, sin dibujar al mover. */
		void penup()
		{ 
	   		draw = false;
		}
		
		//Funcion PenDown
			/** " penup() " Tire de la pluma hacia abajo - dibujo al mover. */
		void pendown()
   		{
		   draw = true;
		}
		
		//Left
		/** " left() " Gire la tortuga a la izquierda por unidades de angulo. 
		La orientacion del angulo depende del modo de la tortuga.
		*/
		/** @param angle -> Indica el angulo hacia donde debe ser girado */
		void left(const double angle)    // Gira el angulo en grados
   		{
			value += angle;
		}
		
		//Right
		
		/** " right() " Gire la tortuga a la derecha por unidades de angulo. 
		La orientacion del angulo depende del modo de la tortuga. */
		/** @param angle -> Indica el angulo hacia donde debe ser girado */
   		void right(const double angle)   // Gira el -angulo en grados
   		{ 
			left(-angle);
		}
		
		//Reset
		/** " reset() " Vuelve todos los valores inicial, es decir reinicia todas las configuraciones hechas el momento */
		void reset()                     // Vuelve a su estado inicial
	    {
		x = 0.0; y = 0.0;
		value = 0.0; 
		draw = true;
		}
		
		// SetValue
		/** "Setvalue() "Ajusta todos los valores */
		/** @param newvalue -> Indica el nuevo valor que debe ser asignado */
		void setvalue(const double newvalue)
		{ 
			value = newvalue; 
		}
};

