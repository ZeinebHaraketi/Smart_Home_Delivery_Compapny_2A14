#include <LiquidCrystal.h>

LiquidCrystal lcd(8,9,4,5,6,7);
void setup()
{
	lcd.begin(16, 4);//164
	lcd.setCursor(0, 0);
	//lcd.print("Hello");

	Serial.begin(9600);
	//pinMode(13, OUTPUT);
	Serial.println("Available");
	
  /* add setup code here */
	
}

void loop()
{
	
	//int x ;
	String the_string;
	char inByte  = 0;
	if (Serial.available() > 0) {
		//the_string = Serial.read();
		Serial.print("I received: ");
		inByte = (char)Serial.read();  // ascii 97 received
Serial.print((char)inByte);

		if (inByte == 35){
			lcd.clear();
		}
		else {
			//lcd.print(the_string)
     
			lcd.print(inByte);
      
      lcd.noDisplay();
  delay(250);// change for faster flash
   // Turn on the cursor:
  lcd.display();
  delay(250);// change for faster flash
      
		}
  
	}

	
	delay(100);
  //lcd.clear();
  /* add main program code here */
	
}
