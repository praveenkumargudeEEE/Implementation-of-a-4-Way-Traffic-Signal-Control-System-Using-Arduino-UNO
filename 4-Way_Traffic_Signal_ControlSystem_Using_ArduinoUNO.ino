// North Direction Pins (Road 1)
const int R1 = 2;
const int Y1 = 3;
const int G1 = 4;

// East Direction Pins (Road 2)
const int R2 = 5;
const int Y2 = 6;
const int G2 = 7;

// South Direction Pins (Road 3)
const int R3 = 8;
const int Y3 = 9;
const int G3 = 10;

// West Direction Pins (Road 4)
const int R4 = 11;
const int Y4 = 12;
const int G4 = 13;

const unsigned long GREEN_INTERVAL  = 5000; 
const unsigned long YELLOW_INTERVAL = 1500;  

void setup() {
  for (int electricalPin = 2; electricalPin <= 13; electricalPin++) {
    pinMode(electricalPin, OUTPUT);
  }
  initializeSafeState();
}

void loop() {
  // PHASE 1: North Road (Road 1) 
  digitalWrite(R1, LOW);   
  digitalWrite(G1, HIGH);    
  delay(GREEN_INTERVAL);  
  
  digitalWrite(G1, LOW);     
  digitalWrite(Y1, HIGH);   
  delay(YELLOW_INTERVAL);    
  
  digitalWrite(Y1, LOW);      
  digitalWrite(R1, HIGH);    

  
  // PHASE 2: East Road (Road 2) 
  digitalWrite(R2, LOW);     
  digitalWrite(G2, HIGH);    
  delay(GREEN_INTERVAL);
  
  digitalWrite(G2, LOW);      
  digitalWrite(Y2, HIGH);    
  delay(YELLOW_INTERVAL);
  
  digitalWrite(Y2, LOW);   
  digitalWrite(R2, HIGH);    

  // PHASE 3: South Road (Road 3) 
  digitalWrite(R3, LOW);     
  digitalWrite(G3, HIGH);    
  delay(GREEN_INTERVAL);
  
  digitalWrite(G3, LOW);      
  digitalWrite(Y3, HIGH);   
  delay(YELLOW_INTERVAL);
  
  digitalWrite(Y3, LOW);    
  digitalWrite(R3, HIGH);   

  // PHASE 4: West Road (Road 4) 
  digitalWrite(R4, LOW);     
  digitalWrite(G4, HIGH);    
  delay(GREEN_INTERVAL);
  
  digitalWrite(G4, LOW);     
  digitalWrite(Y4, HIGH);   
  delay(YELLOW_INTERVAL);
  
  digitalWrite(Y4, LOW);     
  digitalWrite(R4, HIGH);   
}

void initializeSafeState() {
  digitalWrite(R1, HIGH); digitalWrite(Y1, LOW); digitalWrite(G1, LOW);
  digitalWrite(R2, HIGH); digitalWrite(Y2, LOW); digitalWrite(G2, LOW);
  digitalWrite(R3, HIGH); digitalWrite(Y3, LOW); digitalWrite(G3, LOW);
  digitalWrite(R4, HIGH); digitalWrite(Y4, LOW); digitalWrite(G4, LOW);
}
