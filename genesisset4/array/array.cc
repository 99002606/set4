#include <iostream>
#include "array.h"
using namespace std;
template<typename T>
MyArray<T>::MyArray():
    m_arr(NULL),m_len(0){
 }
template<typename T>
MyArray<T>::MyArray(int len):
    m_len(len){
    }
template<typename T>
MyArray<T>::~MyArray(){}
template<typename T>
void MyArray<T>::append(T val){

        int i=0;
        while(m_arr[i]==NULL){
            i++;

        }
        m_arr[i]=val;

}
template<typename T>
T MyArray<T>::at(int index){
return m_arr[index];
}
template<typename T>
bool MyArray<T>::search(T key) const{
if(key==1){
    return true;
}
else{
    return false;
}
}
template<typename T>
T MyArray<T>::sum() const{

    T sum=0;
    for(int i=0;i<=m_len;i++){
        sum=sum+m_arr[i];
        return sum;
    }
}
template<typename T>
T MyArray<T>::min() const{

    //return *min_element(m_arr,m_arr+m_len);
    T min1=m_arr[0];
    for(int i=1;i<m_len;i++){

        if(m_arr[i]<min1){

            min1=m_arr[i];

        }

    }
    return min1;
}
template<typename T>
T MyArray<T>::max() const{
T min1=m_arr[0];
    for(int i=1;i<m_len;i++){

        if(m_arr[i]>min1){

            min1=m_arr[i];

        }

    }
    return min1;
}
template<typename T>
void MyArray<T>::reverse(){
reverse(m_arr);
}
template<typename T>
void MyArray<T>::sort(){
sort(m_arr);
}
