const int LED_1=2;
const int LED_2=4;
const int LED_3=7;
const int LED_4=8;
const int FOTO_CELDA;


void setup() {
  // put your setup code here, to run once:
  pinMode(FOTO_CELDA, INPUT);
  pinMode(LED_1, OUTPUT);
   pinMode(LED_2, OUTPUT);
    pinMode(LED_3, OUTPUT);
     pinMode(LED_4, OUTPUT);
Serial.begin(9600);
}

void loop() {
int FOTO_CELDA = analogRead(A0); 

//INICIALMENTE TODAS ENCENDIDAS
if(FOTO_CELDA>200){
  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, HIGH);
  digitalWrite(LED_4, HIGH);
}

//apagar leds
if(FOTO_CELDA>150){
  digitalWrite(LED_1, LOW);
}

if(FOTO_CELDA>100&&FOTO_CELDA<150){
  digitalWrite(LED_2, LOW);
}

if(FOTO_CELDA>80&&FOTO_CELDA<100){
  digitalWrite(LED_3, LOW);
}

if(FOTO_CELDA<79){
  digitalWrite(LED_4, LOW);
}

//prender leds
if(FOTO_CELDA>70&&FOTO_CELDA<90){
digitalWrite(LED_4, HIGH);
}

if(FOTO_CELDA>100&&FOTO_CELDA<120){
digitalWrite(LED_3, HIGH);
}

if(FOTO_CELDA>130&&FOTO_CELDA<150){
digitalWrite(LED_2, HIGH);
}

if(FOTO_CELDA>170){
digitalWrite(LED_1, HIGH);
}
  }

