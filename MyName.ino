const byte numeral[11]={ 
  B11101110, //untuk huruf A
  B01111010, //untuk huruf d
  B00101110, //untuk huruf h
  B01100000, //untuk huruf I 
  B00011110, //untuk huruf t
  B01110110, //untuk huruf y
  B11111010, //untuk huruf a  
  }; 
 
//inisialisasi pin yang digunakan 
const int segmentPins[8]= {2,10,9,8,7,6,5,4}; //dp,g,f,e,d,c,b,a 
 
void setup(){ 
  for (int i=0; i < 8; i++){ 
    pinMode(segmentPins[i], OUTPUT); 
  }} 
 
void loop(){ 
  for (int i=0; i <=10; i++){ 
    tunjukanAngka(i); 
    delay(1000); 
  } 
    delay(500); } 
 
void tunjukanAngka (int number){ 
  boolean isBitSet; 
for (int segment=1; segment < 8; segment++){ 
  isBitSet= bitRead(numeral[number], segment); 
  digitalWrite(segmentPins[segment], isBitSet); } 
  } 