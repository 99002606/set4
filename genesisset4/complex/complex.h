#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

template<typename T>
class Complex {
  T m_real;
  T m_image;
  public:
  Complex<T>();
  Complex<T>(T,T);
  T real();
  T image();
  void display();
};



#endif // COMPLEX_H_INCLUDED
