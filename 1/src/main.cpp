#include <iostream>
//#include "Car.cpp"
#include "MercedesCar.cpp"


int main()
{   
    std::cout<<"ana"<<std::endl;

    BMWcar b1("BMW","red",5,1700,"aliaj","Continental","gas");
    {
    BMWcar *c1= new BMWcar("BMW","white",4,1500,"aliaj","Continental","diesel");
    c1->getColor();
    c1->setColor("green");
    c1->getColor();
    c1->startTheEngine();
    delete c1;
}
    BMWcar b3(b1);
    MercedesCar *m1= new MercedesCar("Autonom driving 3.0","Mercedes","blue",4,1900,"aliaj","Continental","petrol");
    
    m1->getNrOfDoors();
    b1.closeTheDoors();
    m1->closeTheDoors();
    
    m1->startTheEngine();
    BMWcar b4(b1);
    BMWcar b5(b1);
    MercedesCar m3(*m1);

    delete m1;
    return 0;
}

