#pragma once
#include <string>

using namespace std;

class Animal{
    public:
    Animal();
    ~Animal();

    void SetWeight(float newWeight);
    float Getweight()const;

    private:
    float mWeight;
};