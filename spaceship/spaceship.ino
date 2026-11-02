void setup(){
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(2, INPUT);
    pinMode(6, INPUT);
}

void loop(){
    if (digitalRead(2) == LOW){
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
    } else { 
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
        digitalRead(6) == LOW ? delay(250) : delay(100);
        
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
        digitalRead(6) == LOW ? delay(250) : delay(100);
    }
    
}