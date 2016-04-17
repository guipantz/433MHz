byte pin=12;
int data=0;
void setup() {
  Serial.begin(9600);
pinMode(pin,OUTPUT);
  prem(0b1100110010101010,16,500); //data(maks.2byte) bitsayısı(maks.2byte) bekleme(us) toplam 8ms
  Serial.println();// enter
  senk(0b1111111100000000,16,500); //data(maks.2byte) bitsayısı(maks.2byte) bekleme(us) toplam 8ms
  Serial.println();// enter
  seri(0b11001100,8,1); // data(maks.2byte) bitsayısı(maks.2byte) bekeleme(ms) toplam 8ms 
}

void loop() {
 
}
void seri(unsigned int a,byte i,unsigned int d){
  for(i=i;i>0;i--) Serial.println(((a >> (i-1)) & 0x01),BIN); 
  delay(d);
  }
void prem(unsigned int a,byte i,unsigned int d){
  for(i=i;i>0;i--) Serial.print(((a >> (i-1)) & 0x01),BIN); 
  delayMicroseconds(d);
  }
  void senk(unsigned int a,byte i,unsigned int d){
  for(i=i;i>0;i--) Serial.print(((a >> (i-1)) & 0x01),BIN); 
  delayMicroseconds(d);
  }

