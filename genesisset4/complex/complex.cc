#include<iostream>
#include"complex.h"
template<typename T>
Complex<T>::Complex():
    m_real(0),m_image(0){}
template<typename T>
Complex<T>::Complex(T x,T y):
    m_real(x),m_image(y){}
template<typename T>
T Complex<T>::real(){
	return m_real;
}
template<typename T>
T Complex<T>::image(){
	return m_image;
}
template<typename T>
void Complex<T>::display(){
	std::cout<<m_real<<"+i"<<m_image;
}
