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
// Drivetrain           drivetrain    3, 16           
// Controller1          controller                    
// Motor4               motor         4               
// Motor2               motor         2               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"
#include <iostream>


using namespace vex;
using namespace std;
int timesPressed = 0;

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
double speed=1;



int main() {
  
  
  vexcodeInit();
  
  Motor4.spinFor(vex::forward, 20,degrees);
  Motor2.spinFor(vex::forward, 20,degrees);
  Drivetrain.driveFor(1,mm,0.1,rpm);

  
  
}
