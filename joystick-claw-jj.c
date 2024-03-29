#pragma config(Sensor, dgtl1,  ultrasonic,     sensorSONAR_inch)
#pragma config(Motor,  port2,           left,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           hand,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           arm,           tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           right,         tmotorVex393_MC29, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

float multiply = 1;


task main()
{
	while (1 == 1){


		//open claw hand is port # 3
		// move claw arm is port #5


		//create multiply and drive




		float speedLeft  = vexRT[Ch2] / 2.2 * multiply;   // left Joystick Y value
		float speedRight = vexRT[Ch3] / 2.2 * multiply;   // right Joystick Y value




		motor[left] = speedLeft;
		motor[right] = speedRight;



		// speed boost
		if (vexRT[Btn6D] == 1)
		{
			if (multiply == 1){
				multiply = 1.85 ;}
			else{
				multiply = 1;}
		}




		//speed slow down
		if (vexRT[Btn5D] == 1){
			if (multiply == 1){
				multiply = .6;}
			else{
				multiply = 1;
		}}




		//claw arm move
		if (vexRT[Btn8U] == 1)
		{motor[arm] = 40;
		}

		else if (vexRT[Btn8D] == 1)
		{motor[arm] = -40;
		}
	else {motor[arm] = 0;}



		//claw hand move
		if (vexRT[Btn8L] == 1)
		{motor[hand] = 100;
		}

		else if (vexRT[Btn8R] == 1)
		{motor[hand] = -100;
		}
		else{motor[hand] = 0;}




}}
