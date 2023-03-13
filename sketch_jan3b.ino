#include<NewPing.h>// include newping library

NewPing sonar (17, 17, 400);// create ultrasonic object with the following parameters (Trig=3, Echo=2, Max distance=400cm)
float distance;// initialize a variable of type float
/**//*
NewPing sonar_2 (4, 7, 400);// create ultrasonic object with the following parameters (Trig=3, Echo=2, Max distance=400cm)
float distance_2;// initialize a variable of type float
/*
NewPing sonar_3 (17, 17, 400);// create ultrasonic object with the following parameters (Trig=3, Echo=2, Max distance=400cm)
float distance_3;// initialize a variable of type float
*/
void setup() {
Serial.begin (115200);// initialize serial communication at 9600 bits per second
}

void loop()
{

distance = sonar.ping_cm();// putting the measured value in distance
Serial.print("Distance_left = ");// print "Distance"
Serial.print(distance);// print the value of the distance
Serial.println(" cm");// print "cm"
delay(1000);
/*

distance_2 = sonar_2.ping_cm();// putting the measured value in distance
Serial.print("Distance_front = ");// print "Distance"
Serial.print(distance_2);// print the value of the distance
Serial.println(" cm");// print "cm"
delay(1000);

if(distance_2 >= 30)
{
  Serial.println("HIGH");
}
else
{
  Serial.println("LOW");
}*/
/*
distance_3 = sonar_3.ping_cm();// putting the measured value in distance
Serial.print("Distance_right = ");// print "Distance"
Serial.print(distance_3);// print the value of the distance
Serial.println(" cm");// print "cm"
delay(1000);
*/
}
