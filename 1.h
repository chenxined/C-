//
// Created by chenxin on 2022/7/4.
//

#ifndef ONE_1_H
#define ONE_1_H

#endif //ONE_1_H


template<class T>
class Math{
    //成员方法在内部实现
public:
    T sum(T a,T b){
        return  a+b;
    }
    //成员方法外部实现
  T max(T a, T b);
};

template<class T>
T Math<T> ::max(T a, T b){
    return a>b? a:b;
}