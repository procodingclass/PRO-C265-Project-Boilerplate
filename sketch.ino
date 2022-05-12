#include <RTClib.h>

RTC_DS1307 rtc;

int hours , minutes , seconds = 0;

void setup(){
  Serial.begin(9600);

  if (!rtc.begin()){
    Serial.println("RTC not initialised");
    while(true);
  }
}

void loop(){

  
  String it = in_time();
  Serial.println(it);
  

  //  capture US and France time. Print them



  //  adding delay of 1 second
  delay(1000);

}

void current_time(){

  DateTime current = rtc.now();
  hours = current.hour();
  minutes = current.minute();
  seconds = current.second();
}

String in_time(){

  current_time();
  String i_t = limit_time(hours , minutes , seconds);
  return "IN Time : " + i_t;
}

String us_time(){

  current_time();

  //  write algorithm to convert RTC time to US time

}

String fr_time(){

  current_time();
  
  //  write algo to convert RTC time to france time

}

String limit_time(int h , int m , int s){

  String t = "";
  
  //  write algo to change numbers if they become negative

  t = String(h) + " : " + String(m) + " : " + String(s);
  return t;
}