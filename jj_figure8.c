#pragma config(Motor,  port2,           left,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           right,         tmotorVex393_MC29, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//


task main()
{
while (1==1)
{
	motor[left] = 10;
	motor[right] = 85;
	wait1Msec(5000);
		motor[left] = 85;
	motor[right] = 10;
	wait1Msec(5000);

}
}
