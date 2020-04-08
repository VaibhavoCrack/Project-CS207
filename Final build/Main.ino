/*
 * 
 * All the resources for this project: https://www.hackster.io/Aritro
 * Modified by Aritro Mukherjee
 * 
 * 
 */
 
#include <SPI.h>
#include <MFRC522.h>
 
#define SS_PIN 10
#define RST_PIN 9
#define gled 7
#define rled 6
#define buzzer 5
const int WEE =310;
const int WOO = 410;
MFRC522 mfrc522(SS_PIN, RST_PIN);   // Create MFRC522 instance.
 
void setup() 
{
  Serial.begin(9600);   // Initiate a serial communication
  SPI.begin();      // Initiate  SPI bus
  mfrc522.PCD_Init();   // Initiate MFRC522
   pinMode(gled, OUTPUT);
   pinMode(rled, OUTPUT);
   pinMode(buzzer,OUTPUT);
   noTone(buzzer);
  Serial.println("Approximate your card to the reader...");
  Serial.println();

}
void loop() 
{
  // Look for new cards
  if ( ! mfrc522.PICC_IsNewCardPresent()) 
  {
    return;
  }
  // Select one of the cards
  if ( ! mfrc522.PICC_ReadCardSerial()) 
  {
    return;
  }
  //Show UID on serial monitor
  Serial.print("UID tag :");
  String content= "";
  byte letter;
  for (byte i = 0; i < mfrc522.uid.size; i++) 
  {
     Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
     Serial.print(mfrc522.uid.uidByte[i], HEX);
     content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
     content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  Serial.println();
  Serial.print("Message : ");
  content.toUpperCase();
  if (content.substring(1) == "DE 04 2F 83") //change here the UID of the card/cards that you want to give access
  {
    Serial.println("Authorized access");
    Serial.println();
    digitalWrite(gled,HIGH);
    tone(buzzer,50);
    
    delay(2000);
    noTone(buzzer);
     digitalWrite(gled,LOW);
    
  }
 
 else   {
    Serial.println(" Access denied");
    digitalWrite(rled,HIGH);
    for(int i=0;i<5;i++)
    {
         tone(buzzer,WEE);
    delay(350);
    noTone(buzzer);
    tone(buzzer,WOO);
    delay(350);
    noTone(buzzer);
    }
    
    digitalWrite(rled,LOW);
  }
} 
