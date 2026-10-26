#include <iostream>

int main() 
{
    double arm_length; 
    double angle_deg; 

    std::cout << "Embedded C++ Robotics Platform! " << std::endl;

    std::cout << "Geve me a length your arm: " << std::endl;

    std::cin >> arm_length;
    
    if (std::cin.fail())
    {
        std::cout << "Invalid input. Enter a number.";

        return 1;
    }
    
    if(arm_length <= 0)
    {    
        std::cout << "Arm length must be positive." << std::endl;

        return 1;
    }

    std::cout << "Give me a angle degree: " << std::endl;
    std::cin >> angle_deg;

    if (angle_deg <= -90 || angle_deg >= 90)
    {
        std::cout << "Angle must be between -90 and 90 degrees.";

        return 1;
    }
    
    std::cout << "Arm length: " << arm_length << " cm." << std::endl; 
    std::cout << "Angle: " << angle_deg << " deg." << std::endl; 

    return 0;
}
