#include<stdio.h>
#include<math.h>

float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float a, float b);

int main() {
    float radius = 5;

    printf("area is : %f", circleArea(radius));
    
    return 0;
}

float squareArea(float side){
    return side * side;
}

float circleArea(float radius){
    return 3.14 * radius * radius;
}

float rectangleArea(float a, float b){
    return a * b;
}