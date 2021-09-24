int ssd[10][7]={{1,1,1,1,1,1,0},
                {0,1,1,0,0,0,0},
                {1,1,0,1,1,0,1},
                {1,1,1,1,0,0,1},
                {0,1,1,0,0,1,1},
                {1,0,1,1,0,1,1},
                {1,0,1,1,1,1,1},
                {1,1,1,0,0,0,0},
                {1,1,1,1,1,1,1},
                {1,1,1,1,0,1,1}};
int pins[7]={12,11,10,9,8,7,6};               
void setup() {
  for(int i=0; i<7;i++){
  pinMode(pins[i],OUTPUT);}
}


void loop() {
  // put your main code here, to run repeatedly:
for(int i=0;i<7;i++){
  digitalWrite(pins[i],ssd[0][i]);
  }
}
