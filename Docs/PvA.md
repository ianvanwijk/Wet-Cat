Wet-Cat
=======

Achtergrond
-----------
Over het algemeen zijn er twee verschillende mensen. Mensen die katten hebben en mensen die een tuin hebben. Het komt regelmatig voor dat de katten hun “bezigheden” achterlaten in andermans tuin. Nu zijn hier al oplossingen voor bedacht, namelijk: een kattenbak, maar helaas lost dit het probleem niet volledig op.

Er zou daarom opzoek moeten worden gegaan naar een oplosing. Uit ons onderzoek is gebleken dat katten natspuiten met water uitermate effectief werkt. Nou kan je op elk moment van de dag met een grote spuit zitten en wachten totdat de katten komen, maar helaas in ons drukke 24/7 samenleving hebben wij daar geen tijd voor en het probleem doet zich ook nog voor dat er geen katten komen als je er op zit te wachten.

De beste oplossing zou zijn als je met een robot de tuin analyseert en vervolgens als er een kat langs komt er op reageert.

Projectopdracht
---------------
De project opdracht is ontstaan uit het katten probleem. Om deze katten weg te jagen is er bedacht om een apparaat te maken dat bij het detecteren van een kat deze op diervriendelijke manier wegjaagt, door middel van een korte waterstraal. Door dit doel is de opdracht in twee delen te definiëren, als eerste het vinden van katten. Op het moment dat er een kat binnen de tuin komt zal deze moeten worden gedetecteerd. Deze detectie moet rekening houden met de grenzen van de tuin en met mensen die ook langs kunnen lopen. De mensen, en vooral ook kinderen, moeten niet worden geraakt.

Na het vinden van de katten moeten deze worden weggejaagd. Er zal een richtsysteem moeten worden gemaakt dat een met een korte waterstraal de kat zal wegjagen. Om niet te veel water te verspillen moet deze redelijk accuraat zijn.

Om dit probleem toch binnen een klas lokaal te demonsteren is er voor gekozen om de katten te vervangen met symbolen. De symbolen moeten nogsteeeds net als bij het detecteren van katten gedetecteerd kunnen worden ondanks dat het beweegt. Voor het schieten van de "katten" zal er ook geen water maar een laser gebruikt worden.

Het idee is dat er een webcam gericht staat op een tuin, daar zal uiteindelijk symbolen doorheen gaan. Die moeten gedetecteerd worden en vervolgens op gereageerd worden doormiddel van een laser er op te richten.

Projectactiviteiten
-------------------
De verschilende activiteiten die we zullen moeten ondernemen zijn hieronder gegroepeerd weergegeven.

| ID | Naam                | Uitleg                                                                             | Groep      |
|----|---------------------|------------------------------------------------------------------------------------|------------|
| 1  | Plan van aanpak     | Het plan van aanpak, geverifieerd                                                  | Ontwerp    |
| 2  | Requirements        | De requirements die vanuit de klant zijn bevestigd                                 | Ontwerp    |
| 3  | Functioneel ontwerp | Functionele eisen vastgelegd en bevestigd door de klant                            | Ontwerp    |
| 4  | Technisch ontwerp   | Technische eisen vastgelegd voor de programmeurs                                   | Ontwerp    |
| 5  | Software ontwerp    | Ontwerp van de software om duidelijkheid te bieden over de manier van programmeren | Ontwerp    |
| 6  | Turret ontwerp      | Ontwerp voor de turret die de waterstraal moet gaan schieten                       | Ontwerp    |
| 7  | Camera onderzoek    | Onderzoek naar de beste camera                                                     | Onderzoek  |
| 8  | Software onderzoek  | Onderzoek naar de beste programmeer taal voor de applicatie                        | Onderzoek  |
| 9  | Turret              | De turret die de waterstraal zal gaan schieten                                     | Uitvoering |
| 10 | Programma           | Het programma dat de kat detecteerd en de turret richt                             | Uitvoering |
| 11 | Testen              | Alles testen                                                                       | Uitvoering |

Zoals te zien is zijn er drie groepen gedefinieerd, Ontwerp, Onderzoek en Uitvoering. Deze groepen kunnen worden uitgevoerd als fases binnen het project.


Projectgrensen
--------------
Het project valt binnen bepaalde grensen, dit is niet alleen om te behoeden voor uitloop, maar ook om de klant duidelijk te maken wat er wel en vooral niet verwacht kan worden.
Hieronder is per onderdeel duidelijk gemaakt wat wel en wat niet binnen de grens valt.

| Onderdeel  | Grens wel | Grens niet |
|------------|-----------|------------|
| Calibratie | "Danger Zone" toevoegen door vier punten aan te geven en op "toevoegen" te drukken | Meerdere "Danger Zones" tegelijkertijd toevoegen |
| Calibratie | Opgeslagen "Danger Zones" verwijderen doormiddel van de knop "Clear" | Een van meerdere opgeslagen "Danger Zones" appart verwijderen |
| Turret Calibratie | De turret kan worden gecalibreerd op basis van vier punten in de tuin gericht via de laptop | turret kan niet automatisch calibreren doormiddel van vision |
| Detecteren | Het detecteren van een vooraf gedefineerd symbool | Het detecteren van een kat zonder symbool |
| Detecteren | Alle symbolen herkennen die zich in zicht en in de "Danger Zones" bevinden | Onderscheid maken tussen katten en mensen |
| Detecteren | Alle vooraf gedefineerder symbolen worden allemaal herkend | Niet vooraf gedefineerde symbolen worden genegeerd |
| Classificeren | Verschillende symbolen herkennen en deze classificeren | classificeren van meerdere objecten |
| Positioneren | De positie van een symbool binnen een "Danger Zone" bepalen en met een laser aangeven waar deze is | De positie aangeven buiten de "Danger Zones" |
| Richten | De positie van een symbool binnen een "Danger Zone" aangeven doormiddel van een laser | De positie aangeven buiten de "Danger Zones" |

Producten
---------
Vision Software voor het aansturen en detecteren van objecten

Turret met laser

Software voor het kalibreren van zones en turret en handmatig aansturen turret

Kwaliteit
---------
Het is van groot belang dat de juiste objecten herkend worden. Het is natuurlijk niet de bedoeling dat de verkeerde objecten gelaserd worden. Om die kwaliteit te garanderen zal er uitvoerig getest worden. Voor het ontwikkelen zal er zorgvuldig worden gedocumenteerd. Vooraf zal alles duidelijk worden vastgesteld op papier, zodat geen verwachtingen niet gehaald worden door miscommunicatie. Ook zal er per onderdeel een uitleg worden gemaakt van hoe het onderdeel geïmplementeerd is, hierdoor is het onderdeel altijd opnieuw te maken volgens dezelfde specificaties.

Projectorganisatie
------------------
De project organisatie bestaat uit drie partijen, de opdrachtgever, de project ondersteuning en de projectleden.
Hieronder staan alle partijen met uitgelegd wat hun rol is binnen de scope van het project.

### Opdrachtgever

| Rol | Uitgevoerd door |
|---|---|
| De opdrachtgever heeft als rol om akkoord te geven bij het beginnen van het project, hij zal contact hebben met het projectteam om het status van het project bij te houden en zal aan het einde van het project traject goedkeuring geven van het eindproduct. | `Hugo Arends`  |

### Project ondersteuning

| Rol | Uitgevoerd door |
|---|---|
| De project ondersteuning zal ondersteuning bieden aan het projectteam waar nodig, vooral omdat de omgeving waar het projectteam zal werken is een redelijk nieuwe omgeving, hierdoor is het zaak om snel van start te kunnen en de project ondersteuning zal hierbij helpen. Verder is de project ondersteuning er om te waarschuwen voor risico’s op het moment dat de opdracht meer tijd kan vergen dan voorheen verwacht werd. | `Hugo Arends` |

### Projectleden

| Rol | Uitgevoerd door |
|---|---|
| De projectleden vormen samen het projectteam en zijn verantwoordelijk voor het uitvoeren van de opdracht. Zij zijn eindverantwoordelijk voor de producten die opgeleverd worden aan de opdrachtgever. Ook word van de projectleden verwacht dat ze de opgeleverde producten presenteren op het eind van het project traject. | `Ian van Wijk`, `Floris Venhuizen` |


Planning
--------
| Week | Omschrijving |
|:-:|---|
| 1 | `Het bedenken van een project`,  `Het maken van de Plan van Aanpak` |
| 2 | Het maken van een: `Funtioneel Ontwerp`, `Technisch Ontwerp` |
| 3 | `Het herkenen van symbolen met OpenCV ( Proof of Concept )`, `Het beeld van een webcam / camera tonen op de beeldscherm met OpenCV + QT` |
| 4 | `Het samenvoegen van de ontwikkelde onderdeel in week 3`, `Het teken van de "DANGER" zones in de applicatie` |
| 5 | `Het toevoegen en verwijderen van de "DANGER" zones via symbool herkenning`, `Turret ontwerpen / bouwen` |
| 6 | `Turret ontwerpen / bouwen`, `Turret aansturen om te schieten` |
| 7 | `Turret kalibreren`, `Alles samenvoegen` |
| 8 | Afronden alle onderdelen en samenvoegen |

Documentatie word parrallel aan het project gemaakt en uitgebreid.

Kosten en baten
---------------
Binnen dit project zullen er kosten gemaakt worden, tegenover deze kosten staan bepaalde baten voor de opdrachtgever, een analyse van de kosten en baten staat hieronder:

### Kosten

|   |   |
|---|---|
| `Tijd` | Om het project te kunnen maken zal er tijd moeten worden geinvesteerd, deze tijd valt over een span van 8 weken, 9 uur per week van twee personen, in totaal is dat 144 uur. |
| `Materiaal` | Ook is er materiaal nodig om het project te realiseren, naast een webcam zal er ook een turret moeten worden gebouwd die voornamelijk uit hout zal bestaan, ook onderdelen als cervo-motoren (2X) en een laser pointer zullen nodig zijn om het project te realiseren. |

### Baten

|   |   |
|---|---|
| `Tijd` | Er wordt tijd gewonnen omdat de opdrachtgever de katten niet zelf hoefd weg te jagen |
| `Tijd` | Er wordt tijd gewonnen omdat de opdrachtgever niet meer hetgeen dat de katten achterlaten hoefd op te ruimen |
| `Tuin` | De tuin zal minder snel vervuild raken waardoor planten en bloemen beter groeien, hierdoor zal de tuin er beter uitzien |
| `Studie punten` | Omdat het project door studenten word gemaakt zal dit project ook studiepunten opleveren voor deze studenten. |

Risico's
--------
Dit project neemt bepaalde risico’s met zich mee. De risico’s en de tijd die we verliezen op het moment dat het probleem zich voordoet, staan hieronder in een tabel.

| Risico | Tijd | 
|---|---|
| De belichten kan niet goed zijn waardoor objecten niet goed herkend worden |  |
| Door objecten scheef te houden kan objecten niet goed herkend worden | |
| Het begrijpen en implementeren van de OpenCV library kan langer duren dan verwacht | |
| Zekere opperaties kan te veel resources vragen er zou verbeteringen in de algoritmen nodig is | |
| Framerate kan niet worden bijgehouden | |
| Objecten worden niet snel genoeg herkend | |
| De communicatie met de turret kan problemen opleveren | | 
| OpenCV installatie duurt te lang | 2 uur uitloop |
| OpenCV software werkt niet naar verwachting | 8 uur uitloop |
| Plan van aanpak maken loopt uit | 4 uur uitloop |
