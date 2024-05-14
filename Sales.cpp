#include "Sales.h"
#include <iostream>
#include <string.h>
using namespace std;

Sales::Sales(){position = "none", conversion_rate = 0, cars_sold = 0, revenue = 0;}
Sales::Sales(string new_position, float con_rate, int sales, float rev){
    position = new_position;
    conversion_rate = con_rate;
    cars_sold = sales;
    revenue = rev;
};

string Sales::get_position(){return position;};
void Sales::set_position(string new_position){position = new_position;};
 
float Sales::get_conversion_rate(){return conversion_rate;};
void Sales::set_conversion_rate(float con_rate){conversion_rate = con_rate;};

int Sales::get_cars_sold(){return cars_sold;};
void Sales::add_cars_sold(int sales){cars_sold = sales;};

float Sales::get_revenue(){return revenue;};
void Sales::add_revenue(float rev){revenue = rev;};