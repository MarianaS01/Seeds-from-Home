int pwm = 11; //Pin PWM 
bool open_close = true;

//variables para "filtrar" ruido
int diferencia = 0;
int tiempo_anterior = 0;
//Funcion de interrupcion:
void PUERTA();

void setup() {
 attachInterrupt(digitalPinToInterrupt(2), PUERTA, RISING);
 analogWrite(pwm, 255);
}

void loop() {
}

void PUERTA(){
  diferencia = millis() - tiempo_anterior;
  tiempo_anterior = millis();
  if(diferencia>500){
     if(!open_close){
      analogWrite(pwm, 127);
      open_close = true;
    }else{
      analogWrite(pwm, 255);
      open_close = false;
    }
  }
}
