#define ENCODER1A 30
#define ENCODER1B 31
#define ENCODER2A 32
#define ENCODER2B 33



// Include application, user and local libraries



// Prototypes

void encoderSetup();
void doEncoder1A();
void doEncoder1B();
void doEncoder2A();
void doEncoder2B();

// Define variables and constants

volatile int encoder1Pos = 0;
volatile int encoder2Pos = 0;

void encoderSetup()
{
    pinMode( ENCODER1A, INPUT );
    pinMode( ENCODER1B, INPUT );
    pinMode( ENCODER2A, INPUT );
    pinMode( ENCODER2B, INPUT );
    
    attachInterrupt( ENCODER1A, doEncoder1A, CHANGE );
    attachInterrupt( ENCODER1B, doEncoder1B, CHANGE );
    attachInterrupt( ENCODER2A, doEncoder2A, CHANGE );
    attachInterrupt( ENCODER2B, doEncoder2B, CHANGE );
    
    Serial << "Encoders initilized " << endl;
}

void doEncoder1A()
{
  // Look for low to high on encoder 1A
  if(digitalRead(ENCODER1A) == HIGH)
  {
    if(digitalRead(ENCODER1B) == LOW)
    {
      encoder1Pos += 1;
    }
    else
    {
      encoder1Pos -= 1;
    }
  }
  else
  {
    if(digitalRead(ENCODER1B) == HIGH)
    {
      encoder1Pos += 1;
    }
    else
    {
      encoder1Pos -= 1;
    }
  }

    Serial << digitalRead(30) << "\t" <<  digitalRead(31) << "\t" <<  digitalRead(32) << "\t" <<  digitalRead(33) << "\t" ;
    Serial << encoder1Pos << "\t" << encoder2Pos << endl;
}


void doEncoder1B()
{
  // Look for low to high on encoder 1A
  if(digitalRead(ENCODER1B) == HIGH)
  {
    if(digitalRead(ENCODER1A) == HIGH)
    {
      encoder1Pos += 1;
    }
    else
    {
      encoder1Pos -= 1;
    }
  }
  else
  {
    if(digitalRead(ENCODER1A) == LOW)
    {
      encoder1Pos += 1;
    }
    else
    {
      encoder1Pos -= 1;
    }
  }
  
    Serial << digitalRead(30) << "\t" <<  digitalRead(31) << "\t" <<  digitalRead(32) << "\t" <<  digitalRead(33) << "\t" ;
    Serial << encoder1Pos << "\t" << encoder2Pos << endl;
}


void doEncoder2A()
{
  // Look for low to high on encoder 1A
  if(digitalRead(ENCODER2A) == HIGH)
  {
    if(digitalRead(ENCODER2B) == LOW)
    {
      encoder2Pos -= 1;
    }
    else
    {
      encoder2Pos += 1;
    }
  }
  else
  {
    if(digitalRead(ENCODER2B) == HIGH)
    {
      encoder2Pos -= 1;
    }
    else
    {
      encoder2Pos += 1;
    }
  }
  
    Serial << digitalRead(30) << "\t" <<  digitalRead(31) << "\t" <<  digitalRead(32) << "\t" <<  digitalRead(33) << "\t" ;
    Serial << encoder1Pos << "\t" << encoder2Pos << endl;

}


void doEncoder2B()
{
  // Look for low to high on encoder 1A
  if(digitalRead(ENCODER2B) == HIGH)
  {
    if(digitalRead(ENCODER2A) == HIGH)
    {
      encoder2Pos -= 1;
    }
    else
    {
      encoder2Pos += 1;
    }
  }
  else
  {
    if(digitalRead(ENCODER2A) == LOW)
    {
      encoder2Pos -= 1;
    }
    else
    {
      encoder2Pos += 1;
    }
  }
  
    Serial << digitalRead(30) << "\t" <<  digitalRead(31) << "\t" <<  digitalRead(32) << "\t" <<  digitalRead(33) << "\t" ;
    Serial << encoder1Pos << "\t" << encoder2Pos << endl;

}


