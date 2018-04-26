#ifndef ALGO2_LABO_CLASE5_ALGORITMOS_H
#define ALGO2_LABO_CLASE5_ALGORITMOS_H

#include <utility>
#include <iterator>
#include <vector>

template<class Contenedor>
typename Contenedor::value_type minimo(const Contenedor& c){
    typename Contenedor::const_iterator it= c.begin();
    ++it;
    typename Contenedor::const_iterator minimo= c.begin();
    while(it!=c.end()){
        if(*it < *minimo){
            minimo=it;
        }
        ++it;
    }
    return *minimo;
}

template<class Contenedor>
typename Contenedor::value_type promedio(const Contenedor& c){
    typename Contenedor::const_iterator it= c.begin();
    double suma=0;
    double i=0;
    while(it!=c.end()){
        suma=suma+*it;
        ++it;
        i++;
    }
    return suma/i;
}

template<class Iterator>
typename Iterator::value_type minimoIter(const Iterator& desde, const Iterator& hasta){
    Iterator it = desde;
    return *it;

}

template<class Iterator>
typename Iterator::value_type promedioIter(const Iterator& desde, const Iterator& hasta){

}



#endif //ALGO2_LABO_CLASE5_ALGORITMOS_H
