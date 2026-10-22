#include <iostream>

int main() 
{
    double arm_length; 
    double angle_deg; 

    std::cout << "Embedded C++ Robotics Platform! " << std::endl;

    std::cout << "Geve me a length your arm: " << std::endl;

    std::cin >> arm_length;
    
    if(arm_length <= 0){
    
        std::cout << "Arm length must be positive." << std::endl;

        return 1;

    }

    std::cout << "Give me a angle degree: " << std::endl;
    std::cin >> angle_deg;

    std::cout << "Arm length: " << arm_length << " cm." << std::endl; 
    std::cout << "Angle: " << angle_deg << " deg." << std::endl; 


    return 0;
}
