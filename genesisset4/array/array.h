#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

template<typename T>
class MyArray {
  int *m_arr;
  int m_len;
  public:
  MyArray();
 explicit MyArray(int len);
  ~MyArray();
  void append(T val);
  T at(int index);
  bool search(T key) const;
  T sum() const;
  T min() const;
  T max() const;
  void reverse();
  void sort();
};

#endif // ARRAY_H_INCLUDED
