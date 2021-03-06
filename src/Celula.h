#ifndef CELULA_H_
#define CELULA_H_

#include <iostream>

#include "Rgb.h"

class Celula{

	private:

		float vida;
		bool estaViva;
		bool nacioPorPortal;
		Rgb color;

	public:

		/*
		 * Post: Se crea una celula "muerta" y con 0.0 de vida.
		 */
		Celula();

		/*
		 * Post: Devuelve un bool que responde a la pregunta "Esta viva?".
		 */
		bool getEstado();

		/*
		 * Post: Modifica el parametro "estaViva" y lo cambia por "nuevoEstado".
		 */
		void setEstado(bool nuevoEstado);

		/*
		 * Post: Devuelve un float con la vida de la celula.
		 */
		float getVida();

		/*
		 * Pre "nuevaVida" debe ser mayor o igual 0
		 * Post: Modifica el parametro "vida" por nueva "nuevaVida".
		 */
		void setVida(float nuevaVida);

		/*
		 * Post: Devuelve una clase "Rgb" que contiene la informacion de los colores de la celula
		 */
		Rgb getRgb();

		/*
		 * Pre:Recibe una clase "Rgb" valida
		 * Post: Modifica el parametro "color" que contiene la informacion de los colores de la celula
		 */
		void setRgb(Rgb color);

		/*
		 *	Post: modifica el valor del 'nacioPorPortal' de acuerdo al bool que recibe.
		 */
		void nacioMediantePortal(bool);

		/*
		 *  Post: responde a la pregunta: '¿La célula nació por un portal?'.
		 */
		bool nacePorPortal();

	private:

		/*
		 * Post: verifica si la vida es valida, es decir si esta es mayor o igual a cero
		 */
		bool vidaEsValida(float vida);
};

#endif /* CELULA_H_ */
