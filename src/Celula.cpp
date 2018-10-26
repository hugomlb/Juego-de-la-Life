#include "Celula.h"

Celula::Celula(){
	this->estaViva = false;
	this->vida = 0.0;
	this->color = {0};
}

bool Celula::getEstado(){
	return estaViva;
}

void Celula::setEstado(bool nuevoEstado){
	this->estaViva = nuevoEstado;
}

float Celula::getVida(){
	return vida;
}

void Celula::setVida(float nuevaVida){
	this->vida = nuevaVida;
}

Rgb Celula::getRgb(){
	return color;
}

void Celula::setRojo(int rojo){
	color->setRojo(rojo);
}
void Celula::setVerde(int verde){
	color->setVerde(verde);
}
void Celula::setAzul(int azul){
	color->setAzul(azul);
}
