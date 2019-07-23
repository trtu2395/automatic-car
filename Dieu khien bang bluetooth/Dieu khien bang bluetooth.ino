byte bluetoothByte = 0 ;
void setup () {
  Serial.begin ( 9600);
  pinMode ( 6, OUTPUT );
  pinMode ( 7, OUTPUT );
  pinMode ( 8, OUTPUT );
  pinMode ( 9, OUTPUT );
}
void move1 ( byte in1 , byte in2) {
  digitalWrite ( in1, 1 );
  digitalWrite ( in2 , 0 );

}
void move2 ( byte in1 , byte in2 ) {
  digitalWrite ( in1, 0);
  digitalWrite ( in2 , 1);
}
void stop3 ( byte in1, byte in2) {
  digitalWrite ( in1, 0);
  digitalWrite ( in2 , 0);
}
void loop (){
  if ( Serial.available() > 0  );
  bluetoothByte = Serial.read ();
  switch ( bluetoothByte ) {
    
  
  case 1:
  move1 ( 6,7);
  move1 (8,9);
  break;
  case 2:
  move2 (6,7);
  move2 (8,9 );
  break;
  case 3:
  move1 (6,7);
  move2 (8, 9);
  break;
  case 4:
  move2 ( 6,7);
  move1 ( 8,9 );
  break;
  case 5:
  stop3 ( 6,7);
  stop3 ( 8,9 );
  break;
  
  }  }
