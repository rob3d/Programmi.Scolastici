#include <IRremote.h>
#include <LiquidCrystal_I2C.h>
#include <Wire.h>

//ricevitore ir
int receiver = 11; // Inizializzare il ricevitore al pin 11
IRrecv irrecv(receiver); // Creare un istanza irrecv
decode_results results;//Comando che riguarda IR
//display lcd i2c
LiquidCrystal_I2C lcd(0x27,16,2);

//int dei mosfet per il controllo dei led
int mos1;
int mos2;
int mos3;
int out1=14;
int out2=15;
int out3=16;

int R1 = 2 ;//Definisco il Rele1
int R2 = 3 ;//Definisco il Rele2
int R3 = 4 ;//Definisco il Rele3
int R4 = 5 ;//Definisco il Rele4
int R5 = 6 ;//Definisco il Rele5
int R6 = 7 ;//Definisco il Rele6
int R7 = 8 ;//Definisco il Rele7
int R8 = 9 ;//Definisco il Rele8
int R9 = 10;//Definisco il Rele9
int R0 = 12;//Definisco il Rele0

  int Rs1  ;//Definisco il Rele1
  int Rs2  ;//Definisco il Rele2
  int Rs3  ;//Definisco il Rele3
  int Rs4  ;//Definisco il Rele4
  int Rs5  ;//Definisco il Rele5
  int Rs6  ;//Definisco il Rele6
  int Rs7  ;//Definisco il Rele7
  int Rs8  ;//Definisco il Rele8
  int Rs9  ;//Definisco il Rele9
  int Rs0  ;//Definisco il Rele0

void setup(){
//avvio
  Serial.begin(9600); // Avvia la comunicazione seriale
  irrecv.enableIRIn(); // Avvia il ricevitore
  lcd.init();// initialize the lcd 
  lcd.backlight();
  lcd.print("Avvio in corso");
  pinMode(out1, OUTPUT);      
  pinMode(out2, OUTPUT);
  pinMode(out3, OUTPUT);
  
  //Spegnimento di base e dichiarazione relè
  pinMode(R1, OUTPUT); //Setto i relé In OUTPUT prima di avviare il codice
  pinMode(R2, OUTPUT); //Setto i relé In OUTPUT prima di avviare il codice
  pinMode(R3, OUTPUT); //Setto i relé In OUTPUT prima di avviare il codice
  pinMode(R4, OUTPUT); //Setto i relé In OUTPUT prima di avviare il codice
  pinMode(R5, OUTPUT); //Setto i relé In OUTPUT prima di avviare il codice
  pinMode(R6, OUTPUT); //Setto i relé In OUTPUT prima di avviare il codice
  pinMode(R7, OUTPUT); //Setto i relé In OUTPUT prima di avviare il codice
  pinMode(R8, OUTPUT); //Setto i relé In OUTPUT prima di avviare il codice
  pinMode(R9, OUTPUT); //Setto i relé In OUTPUT prima di avviare il codice
  pinMode(R0, OUTPUT); //Setto i relé In OUTPUT prima di avviare il codice
  digitalWrite(R1, HIGH);//Setto i relé spenti prima di avviare il codice
  digitalWrite(R2, HIGH);//Setto i relé spenti prima di avviare il codice
  digitalWrite(R3, HIGH);//Setto i relé spenti prima di avviare il codice
  digitalWrite(R4, HIGH);//Setto i relé spenti prima di avviare il codice
  digitalWrite(R5, HIGH);//Setto i relé spenti prima di avviare il codice
  digitalWrite(R6, HIGH);//Setto i relé spenti prima di avviare il codice
  digitalWrite(R7, HIGH);//Setto i relé spenti prima di avviare il codice
  digitalWrite(R8, HIGH);//Setto i relé spenti prima di avviare il codice 
  digitalWrite(R9, HIGH);//Setto i relé spenti prima di avviare il codice  
  digitalWrite(R0, HIGH);//Setto i relé spenti prima di avviare il codice  
  Rs1=1; //Setto il valore logico a 1 in modo da spegnere i relè
  Rs2=1; //Setto il valore logico a 1 in modo da spegnere i relè
  Rs3=1; //Setto il valore logico a 1 in modo da spegnere i relè
  Rs4=1; //Setto il valore logico a 1 in modo da spegnere i relè
  Rs5=1; //Setto il valore logico a 1 in modo da spegnere i relè
  Rs6=1; //Setto il valore logico a 1 in modo da spegnere i relè
  Rs7=1; //Setto il valore logico a 1 in modo da spegnere i relè
  Rs8=1; //Setto il valore logico a 1 in modo da spegnere i relè
  Rs9=1; //Setto il valore logico a 1 in modo da spegnere i relè
  Rs0=1; //Setto il valore logico a 1 in modo da spegnere i relè

  delay(1000);
//fine avvio
}


void loop(){
lcd.clear();

digitalWrite(out1,mos1);
digitalWrite(out2,mos2);
digitalWrite(out3,mos3);

lcd.print("M1=");
lcd.print(mos1);
lcd.print(" M2=");
lcd.print(mos2);
lcd.print(" M3=");
lcd.print(mos3);
lcd.setCursor(1,1);

//Stampa i valori di stato di ogni relè Rs*
lcd.print(Rs1);
lcd.print(Rs2);
lcd.print(Rs3);
lcd.print(Rs4);
lcd.print(Rs5);
lcd.print(Rs6);
lcd.print(Rs7);
lcd.print(Rs8);
lcd.print(Rs9);
lcd.print(Rs0);


delay(10);

//Definisce un valore a ogni relè R* basandosi sulle variabili Rs*
  digitalWrite(R1, Rs1);
  digitalWrite(R2, Rs2);
  digitalWrite(R3, Rs3);
  digitalWrite(R4, Rs4);
  digitalWrite(R5, Rs5);
  digitalWrite(R6, Rs6);
  digitalWrite(R7, Rs7);
  digitalWrite(R8, Rs8);
  digitalWrite(R9, Rs9);
  digitalWrite(R0, Rs0);


//lettura del codice
  if (irrecv.decode(&results)) // Verificare se il codice é stato ricevuto
  {
    Serial.println(results.value, HEX); //Visualizza il codice IR in esadecimale
    irrecv.resume();// Ricevi il prossimo valore
    
//Sezione MOSFET
      if ( results.value == 0x28D7 ||  results.value == 0xC03F28D7 )
      {//Volume+
      mos1=HIGH;// Mosfet1 Acceso
      
      } 
       if ( results.value == 0xF807 ||  results.value == 0xC03FF807 )
      {//Volume-
      mos1=LOW;// Mosfet1 Spento

      }  
       if ( results.value == 0xA857  ||  results.value == 0xC03FA857 )
      {//ChannelUp
      mos2=HIGH;// Mosfet2 Acceso
      }  
       if ( results.value == 0xA05F  ||  results.value == 0xC03FA05F )
      {//ChannelDown
      mos2=LOW;// Mosfet2 Spento
      }  
       if ( results.value == 0xFC03F  ||  results.value == 0xC03FC03F )
      {//ChannelUp
      mos3=HIGH;// Mosfet3 Acceso
      }  
       if ( results.value == 0xFB04F  ||  results.value == 0xC03FB04F )
      {//ChannelDown
      mos3=LOW;// Mosfet3 Spento
      }  
//Sezione RELE'
       if ( results.value == 0xF58A7  ||  results.value == 0xC03F58A7 )
      {//Tasto 1
        if(Rs1 == HIGH)
        {
          Rs1=LOW;// Relè1 spento se era acceso
        }
        else
        {
          Rs1=HIGH;// Relè1 acceso se era spento
        }
      }  
       if ( results.value == 0xF40BF  ||  results.value == 0xC03F40BF )
      {//Tasto 2
        if(Rs2 == HIGH)
        {
          Rs2=LOW;// Relè2 spento se era acceso
        }
        else
        {
          Rs2=HIGH;// Relè2 acceso se era spento
        }
      }  
       if ( results.value == 0xF20DF  ||  results.value == 0xC03F20DF )
      {//Tasto 3
        if(Rs3 == HIGH)
        {
          Rs3=LOW;// Relè3 spento se era acceso
        }
        else
        {
          Rs3=HIGH;// Relè3 acceso se era spento
        }
      }  
       if ( results.value == 0xF38C7  ||  results.value == 0xC03F38C7 )
      {//Tasto 4
        if(Rs4 == HIGH)
        {
          Rs4=LOW;// Relè4 spento se era acceso
        }
        else
        {
          Rs4=HIGH;// Relè4 acceso se era spento
        }
      }  
       if ( results.value == 0xF10EF  ||  results.value == 0xC03F10EF )
      {//Tasto 5
        if(Rs5 == HIGH)
        {
          Rs5=LOW;// Relè5 spento se era acceso
        }
        else
        {
          Rs5=HIGH;// Relè5 acceso se era spento
        }
      }  
       if ( results.value == 0xFB847  ||  results.value == 0xC03FB847 )
      {//Tasto 6
        if(Rs6 == HIGH)
        {
          Rs6=LOW;// Relè6 spento se era acceso
        }
        else
        {
          Rs6=HIGH;// Relè6 acceso se era spento
        }
      }  
       if ( results.value == 0xF8877  ||  results.value == 0xC03F8877 )
      {//Tasto 7
        if(Rs7 == HIGH)
        {
          Rs7=LOW;// Relè7 spento se era acceso
        }
        else
        {
          Rs7=HIGH;// Relè7 acceso se era spento
        }
      }  
       if ( results.value == 0xFD02F  ||  results.value == 0xC03FD02F )
      {//Tasto 8
        if(Rs8 == HIGH)
        {
          Rs8=LOW;// Relè8 spento se era acceso
        }
        else
        {
          Rs8=HIGH;// Relè8 acceso se era spento
        }
      }  
       if ( results.value == 0xF08F7  ||  results.value == 0xC03F08F7 )
      {//Tasto 9
        if(Rs9 == HIGH)
        {
          Rs9=LOW;// Relè9 spento se era acceso
        }
        else
        {
          Rs9=HIGH;// Relè9 acceso se era spento
        }
      }  
       if ( results.value == 0xF906F  ||  results.value == 0xC03F906F )
      {//Tasto 0
        if(Rs0 == HIGH)
        {
          Rs0=LOW;// Relè0 spento se era acceso
        }
        else
        {
          Rs0=HIGH;// Relè0 acceso se era spento
        }
      }

  


  }
 

}
