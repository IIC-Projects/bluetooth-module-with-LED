bluetooth module with LED     
BY DEBANKAR SHUBHRAM

int ledPin = 13;    //defining a led pin
int dbss = 0;       //taking a varial and defining it
void setup() {
  pinMode(ledPin,OUTPUT);      //defing led as the output
  pinMode(ledPin,LOW);         //assinging the starting action of led
  pinMode(dbss,INPUT);
  Serial.begin(9600);


}

void loop() {
  if(Serial.available() > 0){          //condition
    dbss = Serial.read();

    if(dbss == '0'){
      digitalWrite(ledPin,LOW);       //statement
      Serial.println("led off");       //statement
      delay(1000);
    }
   else if (dbss == '1'){
     digitalWrite(ledPin,HIGH);        //statement
     Serial.println("led onn");       //statement
     delay(1000);
   }
    
  }


}
