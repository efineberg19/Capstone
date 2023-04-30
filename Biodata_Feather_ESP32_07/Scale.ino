


int scaleSearch(int note, int scale[], int scalesize) {
  for (byte i = 1; i < scalesize + 1; i++) {
    if (note == scale[i]) {
      if (debugSerial) {
        Serial.print("note: "); Serial.println(note);
      }
      return note;
    } else {
      if (note < scale[i]) { 
        if (debugSerial) {
          Serial.print("note: "); Serial.println(scale[i]);
        }
        return scale[i]; 
      }
    }  //highest scale value less than or equal to note
       //otherwise continue search
  }
  //didn't find note and didn't pass note value, uh oh!
  if (debugSerial) {
      Serial.print("note: "); Serial.println(0);
    }
  return 0;  //give arbitrary value rather than fail
}


int scaleNote(int note, int scale[], int root) {
  //input note mod 12 for scaling, note/12 octave
  //search array for nearest note, return scaled*octave
  int scaled = note % 12;
  int octave = note / 12;
  int scalesize = (scale[0]);
  //search entire array and return closest scaled note
  scaled = scaleSearch(scaled, scale, scalesize);
  scaled = (scaled + (12 * octave)) + root;  //apply octave and root  

  return scaled;
}
