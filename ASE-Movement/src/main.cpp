/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       Welcome                                                   */
/*    Created:      10/21/2022, 6:20:51 PM                                    */
/*    Description:  EXP project                                               */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"

using namespace vex;

// A global instance of vex::brain used for printing to the EXP brain screen
vex::brain       Brain;

// define your global instances of motors and other devices here
#define frontRight = Motor(Ports.PORT1, False);
#define frontLeft = Motor(Ports.PORT3, False);
#define backRight = Motor(Ports.PORT5, False);
#define backLeft = Motor(Ports.PORT7, False);
#define frontRightServo = Motor(Ports.PORT2, False);
#define frontLeftServo = Motor(Ports.PORT4, False);
#define backRightServo = Motor(Ports.PORT6, False);
#define backLeftServo = Motor(Ports.PORT8, False);

int main() {

    Brain.Screen.printAt( 2, 30, "Hello EXP" );

    while(1) {
       
        // Allow other tasks to run
        this_thread::sleep_for(10);
    }

}



