const bool PREMUTO = LOW;
const bool RILASCIATO = HIGH;
const bool SPENTO = LOW;
const bool ACCESO = HIGH;

bool p0, p1;
bool p0_old, p1_old;
unsigned int stato;

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  p0_old = RILASCIATO;
  p1_old = RILASCIATO;

  stato = 1; // inizializza lo stato

}

void loop() {

  // leggi il valore corrente del pulsante
  p0 = digitalRead(A0);
  p1 = digitalRead(A1);

  switch (stato){
    case 1:{
      // se il pulsante è stato prenuto e prima era rilasciato cambia stato
      if ((p0 == PREMUTO) && (p0_old == RILASCIATO)){
        stato = 2;
        Serial.print("Stato aggiornato ");
        Serial.println(stato);
        break;
      } else if {
      if ((p1 == PREMUTO) && (p1_old == RILASCIATO)){
        stato = 5;
        Serial.print("Stato aggiornato ");
        Serial.println(stato);
        break;
      }
    }
    case 2:{
      // se il pulsante è stato prenuto e prima era rilasciato cambia stato
      if ((p0 == PREMUTO) && (p0_old == RILASCIATO)){
        stato = 3;
        Serial.print("Stato aggiornato ");
        Serial.println(stato);
        break;
      } else if {
      if ((p1 == PREMUTO) && (p1_old == RILASCIATO)){
        stato = 2;
        Serial.print("Stato aggiornato ");
        Serial.println(stato);
        break;
      }
    }
    case 3:{
      // se il pulsante è stato prenuto e prima era rilasciato cambia stato
      if ((p0 == PREMUTO) && (p0_old == RILASCIATO)){
        stato = 4;
        Serial.print("Stato aggiornato ");
        Serial.println(stato);
        break;
      } else if {
      if ((p1 == PREMUTO) && (p1_old == RILASCIATO)){
        stato = 3;
        Serial.print("Stato aggiornato ");
        Serial.println(stato);
        break;
      }
    }
    case 4:{
      // se il pulsante è stato prenuto e prima era rilasciato cambia stato
      if ((p0 == PREMUTO) && (p0_old == RILASCIATO)){
        stato = 4;
        Serial.print("Stato aggiornato ");
        Serial.println(stato);
        break;
      } else if {
      if ((p1 == PREMUTO) && (p1_old == RILASCIATO)){
        stato = 5;
        Serial.print("Stato aggiornato ");
        Serial.println(stato);
        break;
      }
    }
    case 5:{
      // se il pulsante è stato prenuto e prima era rilasciato cambia stato
      if ((p0 == PREMUTO) && (p0_old == RILASCIATO)){
        stato = 1;
        Serial.print("Stato aggiornato ");
        Serial.println(stato);
        break;
      } else if {
      if ((p1 == PREMUTO) && (p1_old == RILASCIATO)){
        stato = 1;
        Serial.print("Stato aggiornato ");
        Serial.println(stato);
        break;
      }
    }
    default:{
      Serial.println("Stato non previsto, ti mando allo stato 1");
      stato = 1;
      break;
    }
  }

  // aggiorna stato
  p0_old = p0;
  p1_old = p1;

}
