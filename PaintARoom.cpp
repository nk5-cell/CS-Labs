//LAB: Paint A Room
/*=====================================================================================
File descrition:  A Portland Paints has determined that for every 110 square feet 
                  of wall space, one gallon of paint and eight hours of labor will 
                  be required. The company charges $35.00 per hour for labor. 
                  This is modular program that allows the user to enter the length, 
                  width, and height of a room (in feet) and the price of the paint 
                  per gallon. It calculate the square foot area of the four walls.
                  It display the following data:
                    The number of gallons of paint required 
                    The cost of the paint 
                    The number of labor hours 
                    The labor charges 
                    The total cost to paint the room 
=====================================================================================*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double HRS_PER_GALLON = 8.0;
const double SQ_FT_PER_GALLON = 110.0;
const double LABOR_CHARGE = 35.00;

double getPaintPrice();
void getWallDimensions(double & length, double & width, double & height);
double calcWallSquareFeet(double length, double width, double height);
void numberOfGallons(double area, int & numGallons);
void laborHours(double & hrs, double area);
void displayCost(int numGallons, double hrs, double & cost);

int main() {
   int numGallons = 0;
   double length = 0.0;
   double width = 0.0;
   double height = 0.0;
   double area = 0.0;
   double hrs = 0.0;
   double cost = 0.0;
   double paintPrice = 0.0;
   double totalPaintCost = 0.0;
   
   getWallDimensions(length, width, height);
   paintPrice = getPaintPrice();
   area = calcWallSquareFeet(length, width, height);
   numberOfGallons(area, numGallons);
   laborHours(hrs, area);
   displayCost(numGallons, hrs, cost);
   totalPaintCost = numGallons * paintPrice;
   
   cout << "\n" << left << setw(18) << "Gallons of paint:  " << numGallons << endl;
   cout << left << setw(18) << "Paint cost: " << "$" << fixed << setprecision(2) << totalPaintCost << endl;
   cout << left << setw(18) << "Hours of labor: " << fixed << setprecision(0) << " " << hrs << endl;
   cout << left << setw(18) << "Labor cost: " << "$" << fixed << setprecision(2) << cost << endl;
   cout << left << setw(18) << "Total charges: " << "$" << fixed << setprecision(2) << cost + totalPaintCost << endl;

   return 0;
}

double getPaintPrice() {
   double paintPrice = 0.0;
   cin >> paintPrice;
   while (paintPrice < 10.00) {
      cout << "ERROR: Paint price must be 10.00 or greater." << endl;
      cin >> paintPrice;
   }
   return paintPrice;
}

void getWallDimensions(double & length, double & width, double & height) {
   cin >> length;
   while (length < 5) {
      cout << "ERROR: Cannot be less than 5 feet." << endl;
      cin >> length;
   }
   cin >> width;
   while (width < 5) {
      cout << "ERROR: Cannot be less than 5 feet." << endl;
      cin >> width;
   }
   cin >> height;
   while (height < 5) {
      cout << "ERROR: Cannot be less than 5 feet." << endl;
      cin >> height;
   }
}

double calcWallSquareFeet(double length, double width, double height) {
   double area = 0.0;
   area = 2*(length*height) + 2*(width*height); // a room has 4 walls
   return area;
}

void numberOfGallons(double area, int & numGallons) {
   numGallons = static_cast<int>(ceil(area / SQ_FT_PER_GALLON));
}

void laborHours(double & hrs, double area) {
   hrs = ceil((area / SQ_FT_PER_GALLON) * HRS_PER_GALLON);
}

void displayCost(int numGallons, double hrs, double & cost ) {
   cost = hrs*LABOR_CHARGE;
}
