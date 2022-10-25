void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);       // initialize UART with baud rate of 9600 bpsSerial.begin(9600);       // initialize UART with baud rate of 9600 bps
}
//long i=0;  
void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hi, this is Arduino!");  
  while (Serial.available() == 0) {}     //wait for data available
  String teststr = Serial.readString();  //read until timeout
  teststr.trim();                        // remove any \r \n whitespace at the end of the String
  if (teststr == "this is Node-Red") 
    Serial.println("Hi, I got it, Node-Red");
  delay(1000);
}
