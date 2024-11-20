#include <iostream>

class Car
{
public:
   Car(std::string name)
   : car_speed(0), name(name)
   {
   }
   void Gas(int speed)
   {
      car_speed += speed;
      std::cout << "Speed " << car_speed << std::endl;
   }
   void Brake(int speed)
   {
      car_speed -= speed;
      if (car_speed <= 0)
      {
         car_speed = 0;
      }

      std::cout << "Speed " << car_speed << std::endl;
   }
protected:
   int car_speed;
   std::string name;
};

class SportCar : public Car
{
public:
   SportCar(std::string name) : Car(name)
   {   
   }
   void Vroom()
   {
      std::cout << "Vroom Vroom Vroom!!!" << std::endl;
   }  
};

int main()
{
   SportCar bibika("Subaru");
   bibika.Gas(120);
   bibika.Vroom();
   bibika.Gas(90);
   bibika.Brake(30);

    return 0;
}

