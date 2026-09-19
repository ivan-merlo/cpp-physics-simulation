#include <iostream>
#include <windows.h>
#include <iomanip>

struct SimulationResult {
    double totaltime{0.0};
    double VelocityY{0.0};

};


SimulationResult FreeFall (double StartHeight, double Gravity) {
    double PositionY = StartHeight;
    double VelocityY = 0;
    double deltatime = 0.1;
    double totaltime = 0;

    std::cout<<std::fixed<<"  Time  |  Height  |  Velocity\n";

    bool IsSimulating = true;
    double restitution = 0.7;

    while (IsSimulating)  {
        VelocityY = VelocityY + (deltatime * Gravity);
        PositionY = PositionY + (VelocityY * deltatime);
        totaltime = totaltime + deltatime;

        if (PositionY <= 0) {
            PositionY = 0;
        
            if (VelocityY < 0.9 && VelocityY > -0.9) {
                VelocityY = 0.0;

                IsSimulating = false;
                

            }

            else if (VelocityY < 0.0) { 
                
                VelocityY = - VelocityY * restitution;
            }
        }
        

    std::cout<<std::fixed<<"  "<<totaltime<<"  |  "<<PositionY<<"  |  "<<VelocityY<<"\n";
    
    Sleep(100);
    
    }

    SimulationResult result;
    result.totaltime = totaltime;
    result.VelocityY = VelocityY;

    return result;
}

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    double StartHeight = 100;
    double Gravity = -9.8;

    SimulationResult data = FreeFall(StartHeight, Gravity);

    std::cout<<"Total time to fall:"<<data.totaltime<<"\n";
    std::cout<<"Total velocity:"<<data.VelocityY<<"\n";
    std::cout<<"\nPress Enter to exit:";
    std::cin.get();
    return 0;
}
