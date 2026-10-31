#include <iostream>

int main() 
{   const double pi = 3.141592653589793;
    double arm_length; 
    double angle_deg;

    

    std::cout << "Embedded C++ Robotics Platform! " << std::endl;

    std::cout << "Enter the arm length in cm: " << std::endl;

    std::cin >> arm_length;
    
    if (std::cin.fail())
    {
        std::cout << "Invalid input. Enter the arm length in cm.";

        return 1;
    }
    
    if(arm_length <= 0)
    {    
        std::cout << "Arm length must be positive." << std::endl;

        return 1;
    }

    std::cout << "Enter the angle in degrees: " << std::endl;
    std::cin >> angle_deg;

    if (std::cin.fail())
    {
        std::cout << "Invalid input. Enter the arm angle in degrees.";

        return 1;
    }
    
    if (angle_deg < -90 || angle_deg > 90)
    {
        std::cout << "Angle must be between -90 and 90 degrees.";

        return 1;
    }
    
    double angle_rad = angle_deg * pi / 180;

    std::cout << "Arm length: " << arm_length << " cm." << std::endl; 
    std::cout << "Angle: " << angle_deg << " deg." << std::endl; 
    std::cout << "Angle in radians: " << angle_rad << " rad." << std::endl;

    return 0;
}
