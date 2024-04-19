void setup()
{
  pinMode(11, OUTPUT); //configura el pin 11 como salida
  pinMode(2, INPUT); //configura el pin 2-6 como entrada
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
}

void loop()
{
  // OPERADOR NOT
  if(digitalRead(2) == HIGH && digitalRead(3) == LOW && digitalRead(4) == LOW){
    if(digitalRead(5) == HIGH || digitalRead(6) == HIGH){ //pregunta si la entrada recibe un 1
    digitalWrite(11,LOW); // manda un 0 al pin 11
  	}
  else{
    digitalWrite(11,HIGH); // manda un 1 al pin 11
  	} 
  }
  
  // OPERADOR AND
  else if(digitalRead(2) == LOW && digitalRead(3) == HIGH && digitalRead(4) == LOW){
  	if(digitalRead(5) == LOW && digitalRead(6) == LOW){ 
    	digitalWrite(11,LOW);
  	}
    else if(digitalRead(5) == LOW && digitalRead(6) == HIGH){ 
    	digitalWrite(11,LOW);
  	}
    else if(digitalRead(5) == HIGH && digitalRead(6) == LOW){ 
    	digitalWrite(11,LOW);
  	}
    else if(digitalRead(5) == HIGH && digitalRead(6) == HIGH){ 
    	digitalWrite(11,HIGH);
  	}
  }
  
  // OPERADOR NAND
  else if(digitalRead(2) == HIGH && digitalRead(3) == HIGH && digitalRead(4) == LOW){
  	if(digitalRead(5) == LOW && digitalRead(6) == LOW){ 
    	digitalWrite(11,HIGH);
  	}
    else if(digitalRead(5) == LOW && digitalRead(6) == HIGH){ 
    	digitalWrite(11,HIGH);
  	}
    else if(digitalRead(5) == HIGH && digitalRead(6) == LOW){ 
    	digitalWrite(11,HIGH);
  	}
    else if(digitalRead(5) == HIGH && digitalRead(6) == HIGH){ 
    	digitalWrite(11,LOW);
  	}
  }
  
  // OPERADOR OR
  else if(digitalRead(2) == LOW && digitalRead(3) == LOW && digitalRead(4) == HIGH){
  	if(digitalRead(5) == LOW && digitalRead(6) == LOW){ 
    	digitalWrite(11,LOW);
  	}
    else if(digitalRead(5) == LOW && digitalRead(6) == HIGH){ 
    	digitalWrite(11,HIGH);
  	}
    else if(digitalRead(5) == HIGH && digitalRead(6) == LOW){ 
    	digitalWrite(11,HIGH);
  	}
    else if(digitalRead(5) == HIGH && digitalRead(6) == HIGH){ 
    	digitalWrite(11,HIGH);
  	}
  }
  
  // OPERADOR NOR
  else if(digitalRead(2) == HIGH && digitalRead(3) == LOW && digitalRead(4) == HIGH){
  	if(digitalRead(5) == LOW && digitalRead(6) == LOW){ 
    	digitalWrite(11,HIGH);
  	}
    else if(digitalRead(5) == LOW && digitalRead(6) == HIGH){ 
    	digitalWrite(11,LOW);
  	}
    else if(digitalRead(5) == HIGH && digitalRead(6) == LOW){ 
    	digitalWrite(11,LOW);
  	}
    else if(digitalRead(5) == HIGH && digitalRead(6) == HIGH){ 
    	digitalWrite(11,LOW);
  	}
  }
  
  // OPERADOR XOR
  else if(digitalRead(2) == LOW && digitalRead(3) == HIGH && digitalRead(4) == HIGH){
  	if(digitalRead(5) == LOW && digitalRead(6) == LOW){ 
    	digitalWrite(11,LOW);
  	}
    else if(digitalRead(5) == LOW && digitalRead(6) == HIGH){ 
    	digitalWrite(11,HIGH);
  	}
    else if(digitalRead(5) == HIGH && digitalRead(6) == LOW){ 
    	digitalWrite(11,HIGH);
  	}
    else if(digitalRead(5) == HIGH && digitalRead(6) == HIGH){ 
    	digitalWrite(11,LOW);
  	}
  }
  
  // OPERADOR XNOR
  else if(digitalRead(2) == HIGH && digitalRead(3) == HIGH && digitalRead(4) == HIGH){
  	if(digitalRead(5) == LOW && digitalRead(6) == LOW){ 
    	digitalWrite(11,HIGH);
  	}
    else if(digitalRead(5) == LOW && digitalRead(6) == HIGH){ 
    	digitalWrite(11,LOW);
  	}
    else if(digitalRead(5) == HIGH && digitalRead(6) == LOW){ 
    	digitalWrite(11,LOW);
  	}
    else if(digitalRead(5) == HIGH && digitalRead(6) == HIGH){ 
    	digitalWrite(11,HIGH);
  	}
  }
  
  else
    digitalWrite(11,LOW);
}   
    

