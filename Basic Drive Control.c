//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*To set up your motors first go to robot in the top lefthand corner between view and window
and click on it. From there you need to go to the second option from the bottom where it
says motors and sensors set up. click on it.After you click on it there will be four options
to choose from 1:Standard Models- you generally do not have to mess with this, 2:motors- you
will have to use this ALOT! so always remember where this is. 3:Anolog sensors- you may or
may not use this feature it just depends on how far along you get on your robot and how
ambitious you are to get the robot done. 4:digital sensors- you may or may not use this as well.
So now that we have the motors and sensors page all described you should go back to motors if
you are not already there and click the empty box to type in the name for your robot.
Just remember the name of your motors are case sensitive through out all of the code
so you must put in something easy enough to type. After you tye in the names of your motors you
will need to select what motor it is that you are using.For this example program we are using
4 high strength motors and 4 low strength motors. (393 motors and 269 motors)
*/
#pragma config(Motor,  port1,           frontRight,    tmotorVex393, openLoop)
#pragma config(Motor,  port2,           frontLeft,     tmotorVex393, openLoop)
#pragma config(Motor,  port3,           backRight,     tmotorVex393, openLoop)
#pragma config(Motor,  port4,           backLeft,      tmotorVex393, openLoop)
#pragma config(Motor,  port5,           towerRight,    tmotorVex269, openLoop)// <--
#pragma config(Motor,  port6,           towerLeft,     tmotorVex269, openLoop)   //|
                                                                                 //|
//once you have chosen your motors click apply and ok. Then your code should       |
//look a little like this ---------------------------------------------------------
//next we will learn about Task Main.


task main ()
{
	while(1==1)
	{
		motor[frontRightMotor] = vexRT[Ch2];
		motor[backRightMotor] = vexRT[Ch2];
		
		motor[frontLeftMotor] = vexRT[Ch3];
		motor[backLeftMotor] = vexRT[Ch3];
		
	}
}
