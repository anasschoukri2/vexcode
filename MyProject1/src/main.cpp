/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\Anass Choukri                                    */
/*    Created:      Fri Jan 31 2020                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    1, 2            
// Controller1          controller                    
// Motor3               motor         3               
// Motor4               motor         4               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"
#include <iostream>


using namespace vex;
using namespace std;
/*int timesPressed = 0;

void heaven(){
    timesPressed++;//add one to timesPressed
    Brain.Screen.clearScreen();
    Brain.Screen.printAt(20,20,"%d Allah akbar\n", timesPressed);
//prints how many times Button A was pressed to the controller's screen
}
void hell()
{
  timesPressed--;
  Brain.Screen.clearScreen();
    Brain.Screen.printAt(20,20,"%d Allah akbar\n", timesPressed);
}
int main() {
    Controller1.ButtonA.pressed(heaven);
    Controller1.ButtonY.pressed(hell);
    //every time Button A is pressed function() is run

}*/

int main() {
  
  
  vexcodeInit();
  
  Motor3.spinFor(vex::forward, 20,degrees);
  Motor3.setVelocity(10.0, percent );
  Motor4.spinFor(vex::forward, 20,degrees);
  Motor4.setVelocity(10.0, percent );
  Drivetrain.driveFor(1,mm,0.1,rpm);

  
  
}
