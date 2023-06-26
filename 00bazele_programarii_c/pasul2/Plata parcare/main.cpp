/*
În parcările din Iași, intrarea în parcare este permisă dacă șoferul care dorește să parcheze solicită acest lucru.
Solicitarea se face prin apăsarea unui buton la automatul aflat la intrarea în parcare, acțiune care are ca efect
eliberarea unui tichet de parcare și deschiderea barierei. Pe tichet sunt trecute data și ora intrării în parcare.
La plecare, șoferul scanează tichetul la automatul de plată. În urma scanării automatul calculează
şi afișează suma de plată. Calculul sumei se face astfel:
    se citește de la ceasul automatului data și ora plecării
    se calculează diferența de timp dintre ora plecării și ora intrării în parcare
    diferența calculată se rotunjește la număr întreg de ore, în sus
    se înmulțește timpul exprimat în ore cu tariful orar
*/
#include <bits/stdc++.h>
using namespace std;
ifstream in ("parcare.in");
ofstream out("parcare.out");
int main()
	{
		int ziuaIntrare, lunaIntrare, oraIntrare, minutuIntrare, ziuaIesire, lunaIesire, oraIesire, minutuIesire, costTaxa, tipIesireParcare, minuteTaxa, parcareTaxa;

		in >> ziuaIntrare >> lunaIntrare >> oraIntrare >> minutuIntrare; in >> ziuaIesire >> lunaIesire >> oraIesire >> minutuIesire; in >> costTaxa; in >> tipIesireParcare;
        int dz, dh, dm, sh;
		if (abs(minutuIesire - minutuIntrare) == 1 && tipIesireParcare == 2){
			cout << 0;
		}else{
			if (minutuIntrare > minutuIesire){
				dm = 60 - minutuIntrare + minutuIesire;
				oraIntrare++;
			}else{
				dm = minutuIesire - minutuIntrare;

				if (oraIntrare > oraIesire){
					dh = 24 - oraIntrare + oraIesire;
					ziuaIntrare++;
				}else{
					dh = oraIesire - oraIntrare;
					if (lunaIntrare == 2 && ziuaIntrare > 21 && ziuaIntrare > ziuaIesire){
						dz = 28 - ziuaIntrare + ziuaIesire;}
					if (lunaIntrare == 8 && ziuaIntrare > 24 && ziuaIntrare > ziuaIesire){
						dz = 31 - ziuaIntrare + ziuaIesire;}
					if (lunaIntrare % 2 == 1 && lunaIntrare < 8 && ziuaIntrare > 24 && ziuaIntrare > ziuaIesire){
						dz = 31 - ziuaIntrare + ziuaIesire;}
					if (lunaIntrare % 2 == 0 && lunaIntrare > 8 && ziuaIntrare > 24 && ziuaIntrare > ziuaIesire){
						dz = 31 - ziuaIntrare + ziuaIesire;}
					if (lunaIntrare % 2 == 0 && lunaIntrare != 2 && lunaIntrare < 8 && ziuaIntrare > 23 && ziuaIntrare > ziuaIesire){
						dz = 30 - ziuaIntrare + ziuaIesire;}
					if (lunaIntrare % 2 == 1 && lunaIntrare > 8 && ziuaIntrare > 23 && ziuaIntrare > ziuaIesire){
						dz = 30 - ziuaIntrare + ziuaIesire;}
					if (ziuaIntrare <= ziuaIesire){
						dz = ziuaIesire - ziuaIntrare;
					out << dz << " " << dh << " " << dm << endl;
					sh = dz * 24;
					minuteTaxa = (sh + dh) *60 + dm;}
					if (dz == 0 && dh == 0 && dm <= 15){
						parcareTaxa = 0;
						if (minuteTaxa % 60 == 0){
							parcareTaxa = minuteTaxa / 60 * costTaxa;
						}else{
							parcareTaxa = (parcareTaxa / 60 + 1) *costTaxa;
							if (tipIesireParcare == 1){
								out << minuteTaxa;
							}else{
								out << parcareTaxa;
							}
						}
					}
				}
			}
		}

					return 0;
				}
