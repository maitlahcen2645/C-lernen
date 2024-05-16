float * reihe_U(float widerstaende[10], float U) {
    
float teilspannungen[10];
//...
//Berechnung der Teilspannungen (Reihenschaltung)
//teilspannungen[0] beinhaltet U_1
//teilspannungen[1] beinhaltet U_2 usw.
//Sind weniger als 10 Widerstände eingegeben, sind die freien Plätze
//von teilspannungen mit 0 zu belegen.
return teilspannungen;
}

float reihe_I(float widerstaende[10], float U) {
float i_ges = 0;
//...
//Berechnung des Gesamtstromes (Reihenschaltung)
return i_ges;
}

float * parallel_I(float widerstaende[10], float U) {
float teilstroeme[10];
//...
//Berechnung der Teilstroeme (Parallelschaltung)
//teilstroeme[0] beinhaltet I_1
//teilstroeme[1] beinhaltet I_2 usw.
//Sind weniger als 10 Widerstände eingegeben, sind die freien Plätze
//von teilstroeme mit 0 zu belegen.
return teilstroeme;
}