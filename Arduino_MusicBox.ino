int BuzzerPin=4;
int redPin=7, greenPin=9, bluePin=8;

int dog[]={784,1046,1046,1046,988,784,784,1046,1046,1046,1046,988,784,659,659,784,784,587,587,659,659,659,784,784,784,1046,1046,1046,988,784,784,1046,1046,1046,1046,1318,784,659,659,659,784,784,587,587,659,659,659,659,659,784,784};

int heart[]={659,680,784,523,523,587,587,659,680,784,523,587,659,659,440,494,523,659,659,587,784,587,587,659,659,
659,680,784,523,587,659,587,494,523,584,494,880,784,784,587,587,523,659,680,659,523,523,587,659,523,523,494,587,523};
int Ghow[]={784,880,988,880,784,680,587,523,494,523,587,523,784,880,988,800,784,680,1046,988,1109,1109,1109,1046 ,784,880,988,880,784,680,587,523,494,523};

int love[]={587,659,587,523,440,588,588,587,659,587,523,440,588,588,494,523,523,587,659,680,680,440,523,494,440,494,380,
587,659,587,523,523,440,587,659,587,523,523,440,587,659,587,523,523,380,587,587,494,523,523,
784,659,680,1046,1046,880,988,1046,988,1046,1318,1318};

int rem[]={659,659,680,659,784,784,880,784,
1046,1046,988,784,659,
523,880,523,494,784,784,680,659,680,
659,680,784,659,587,
659,659,680,659,784,784,880,988,
1175,1046,988,1046,988,880,784,
988,1046,880,784,880,523,
680,659,680,1046,880,1046,988,1046};
int ColorSwitch=1;

void setup() {
    Serial.begin(9600);
    pinMode(redPin,OUTPUT);
    pinMode(greenPin,OUTPUT);
    pinMode(bluePin,OUTPUT);
}
void loop() {
    music_dog();
     delay(1000);
    music_heart();
    delay(1000);
    music_love();
    delay(1000);
    music_rem();
    music_Ghow();
    delay(1000);
}
void music_rem(){
  play(rem[0],500);play(rem[1],500);play(rem[2],500);play(rem[3],200);play(rem[4],500);play(rem[5],500);play(rem[6],500);play(rem[7],700);
  delay(50);
  play(rem[8],500);play(rem[9],1000);play(rem[10],500);play(rem[11],500);play(rem[12],600);
  delay(150);
  play(rem[13],500);play(rem[14],500);play(rem[15],500);play(rem[16],500);play(rem[17],500);play(rem[18],500);play(rem[19],250);play(rem[20],250);play(rem[21],1000);
  delay(50);  
  play(rem[22],250);play(rem[23],250);play(rem[24],500);play(rem[25],500);play(rem[26],1000);
  delay(150);  
  play(rem[27],500);play(rem[28],500);play(rem[29],300);play(rem[30],500);play(rem[31],500);play(rem[32],300);play(rem[33],500);play(rem[34],500);
  delay(300);  
  play(rem[35],500);play(rem[36],500);play(rem[37],500);play(rem[38],250);play(rem[39],500);play(rem[40],250);play(rem[41],1000);
  delay(50);  
  play(rem[42],500);play(rem[43],500);play(rem[44],500);play(rem[45],500);play(rem[46],500);play(rem[47],500);
  delay(150);  
  play(rem[48],250);play(rem[49],250);play(rem[50],300);play(rem[51],1000);play(rem[52],250);play(rem[53],1000);play(rem[54],500);play(rem[55],1000);
  delay(50);
}

void music_love(){
  play(love[0],200);
  play(love[1],200);
  play(love[2],200);
  play(love[3],200);
  play(love[4],400);
  play(love[5],200);  
  play(love[6],800);
  delay(300);
  play(love[7],200);
  play(love[8],200);
  play(love[9],200);
  play(love[10],200);
  play(love[11],400);
  play(love[12],200);  
  play(love[13],400);
  play(love[14],200);  
  play(love[15],500);
  delay(300);
  play(love[16],200);
  play(love[17],200);
  play(love[18],400);
  play(love[19],200);
  play(love[20],300);
  play(love[21],400);  
  delay(300);
  play(love[22],400);
  play(love[23],200);  
  play(love[24],300);
  play(love[25],400);  
  play(love[26],1000);
  delay(300);
  play(love[27],200);
  play(love[28],200);
  play(love[29],200);
  play(love[30],200);
  play(love[31],200);
  play(love[32],600); 
  delay(300);
  play(love[33],200);
  play(love[34],200);
  play(love[35],200);
  play(love[36],200);
  play(love[37],200);
  play(love[38],600);
  delay(300);
  play(love[39],200);  
  play(love[40],200);
  play(love[41],200);  
  play(love[42],200);
 // delay(300);
  play(love[43],600);
  play(love[44],200);
 // play(love[45],200);
  play(love[46],500);
  play(love[47],200);
    play(love[48],600);
  //play(love[49],200);
  delay(300);
  play(love[50],200);
  play(love[51],200);
  play(love[52],400);
  play(love[53],200);
  play(love[54],400);
  delay(50);
  play(love[55],200);  
  play(love[56],200);
  play(love[57],400);
  play(love[58],200);
  play(love[59],400);
  play(love[60],400);
  play(love[61],800);
}
void music_Ghow(){
 //   play(Ghow[5],300);
  play(Ghow[0],200);
  play(Ghow[1],200);
  play(Ghow[2],500);
  play(Ghow[3],200);
  play(Ghow[4],400);
  play(Ghow[5],300);
  play(Ghow[6],500);
  play(Ghow[7],900);
  delay(200);
  play(Ghow[8],400);
  play(Ghow[9],200);
  play(Ghow[10],500);
  play(Ghow[11],700);
  delay(300);
  play(Ghow[12],200);
  play(Ghow[13],100);
  play(Ghow[14],500);
  play(Ghow[15],200);
  play(Ghow[16],200);
  play(Ghow[17],200);
  play(Ghow[18],500);
  play(Ghow[19],700);
  delay(300);
  play(Ghow[20],400);
  play(Ghow[21],200);
  play(Ghow[22],500);
  play(Ghow[23],600);
  delay(300);
  play(Ghow[24],100);
  play(Ghow[25],200);
  play(Ghow[26],300);
  delay(50);
  play(Ghow[27],100);
  play(Ghow[28],200);
  play(Ghow[29],300);
  play(Ghow[30],500);
  play(Ghow[31],700);
  delay(150);
  play(Ghow[32],600);
  play(Ghow[33],500);
}
void music_dog(){//吉娃娃之歌
  play(dog[0],350);
  play(dog[1],300);
  play(dog[2],600);
  delay(50);
  play(dog[3],350);
  play(dog[4],300);
  play(dog[5],600);
  delay(50);
  play(dog[6],300);
  play(dog[7],300);
  play(dog[8],200);
  play(dog[9],600);
  delay(100);
  play(dog[10],300);
  play(dog[11],300);
  play(dog[12],600);
  delay(50);
  play(dog[13],600);
  play(dog[14],300);
  play(dog[15],300);
  delay(50);
  play(dog[16],600);
  play(dog[17],300);
  play(dog[18],300);
  delay(50);
  play(dog[19],300);
  play(dog[20],300);
  play(dog[21],300);
  play(dog[22],300);
  play(dog[23],600);
  delay(50);
  play(dog[24],350);
  play(dog[25],300);
  play(dog[26],600);
  delay(50);
  play(dog[27],350);
  play(dog[28],300);
  play(dog[29],600);
  delay(50);
  play(dog[30],300);
  play(dog[31],300);
  play(dog[32],200);
  play(dog[33],600);
  delay(100);
  play(dog[34],300);
  play(dog[35],300);
  play(dog[36],600);
  delay(50);
  play(dog[37],300);
  play(dog[38],300);
  play(dog[39],300);
  play(dog[40],300);
  delay(50);
  play(dog[41],300);
  play(dog[42],300);
  play(dog[43],500);
   delay(50);
  play(dog[44],200);
  play(dog[45],200);
  play(dog[46],200);
  play(dog[47],200);
  play(dog[48],300);
  play(dog[49],350);
  play(dog[50],600);
}
void music_heart(){//心牆

 // play(heart[2],300);
  
  play(heart[0],300);
  play(heart[1],300);
  play(heart[2],300);
  play(heart[3],300);
  play(heart[4],800);
  play(heart[5],300);
  play(heart[6],1000);
  delay(50);
  play(heart[7],300);
  play(heart[8],300);
  play(heart[9],300);
  play(heart[10],300);
  play(heart[11],800);
  play(heart[12],300);
  play(heart[13],800);
  delay(100);
  play(heart[14],600);
  play(heart[15],300);
  play(heart[16],600);
  play(heart[17],600);
  play(heart[18],600);
  play(heart[19],300);
  play(heart[20],600);
  play(heart[21],600);
  play(heart[22],600);
  play(heart[23],300);
  play(heart[24],1000);
  delay(100);
  play(heart[25],300);
  play(heart[26],300);
  play(heart[27],300);
  play(heart[28],300);
  play(heart[29],800);
  play(heart[30],300);
  play(heart[31],1000);
  delay(100);
  play(heart[32],300);
  play(heart[33],300);
  play(heart[34],300);
  play(heart[35],300);
  play(heart[36],600);
  play(heart[37],300);
  play(heart[38],600);
  play(heart[39],600);
  play(heart[40],300);
  play(heart[41],1000);
  delay(50);
  play(heart[42],300);
  play(heart[43],300);
  play(heart[44],300);
  play(heart[45],300);
  play(heart[46],800);
  play(heart[47],300);
  play(heart[48],300);
  play(heart[49],300);
  play(heart[50],300);
  play(heart[51],300);
  play(heart[52],300);
  play(heart[53],1000);
}
void BlinkLED(int pin){
    for(int i=0;i<3;i++){
      digitalWrite(pin,HIGH);
      delay(1000);
      digitalWrite(pin,LOW);
      delay(1000);
    }
   
}

void play(int fre, int dur){
      RunLed();
      tone(BuzzerPin,fre,dur);
      delay(dur);
      noTone(BuzzerPin);
}

void RunLed(){
  switch(ColorSwitch){
    case 1://紅
        digitalWrite(redPin,LOW);
        digitalWrite(greenPin,HIGH);
        digitalWrite(bluePin,HIGH);
        ColorSwitch++;
       break;
    case 2://黃
        digitalWrite(redPin,LOW);
        digitalWrite(greenPin,LOW);
        digitalWrite(bluePin,HIGH);
        ColorSwitch++;    
       break;
    case 3://綠
        digitalWrite(redPin,HIGH);
        digitalWrite(greenPin,LOW);
        digitalWrite(bluePin,HIGH);
        ColorSwitch++;
       break;
    case 4://青
        digitalWrite(redPin,HIGH);
        digitalWrite(greenPin,LOW);
        digitalWrite(bluePin,LOW);
        ColorSwitch++;
       break;
    case 5://藍
        digitalWrite(redPin,HIGH);
        digitalWrite(greenPin,HIGH);
        digitalWrite(bluePin,LOW);
        ColorSwitch++;
       break;
    case 6://紫
        digitalWrite(redPin,LOW);
        digitalWrite(greenPin,HIGH);
        digitalWrite(bluePin,LOW);
        ColorSwitch++;
       break;
    case 7://白
        digitalWrite(redPin,LOW);
        digitalWrite(greenPin,LOW);
        digitalWrite(bluePin,LOW);
        ColorSwitch=1;
       break;
    default:
       break;
  }
}
