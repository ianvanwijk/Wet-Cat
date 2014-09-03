Wet-Cat
=======

Achtergrond
-----------
Je hebt over het algemeen twee verschillende mensen. Mensen die katten hebben en mensen die een tuin hebben. Het komt regelmatig voor dat de katten hun “bezigheden” achterlaten in andermans tuin. Nou zijn er al oplossingen voor bedacht, namelijk: een kattenbak, maar helaas los dit het probleem niet volledig op.

Er zou daarom opzoek moet worden gegaan naar een oplosing. De beste oplossing voor dit probleem is uit onderzoek gebleken om een kat nat te spuiten met water. Nou kan je op elk moment van de dag met een grote spuit zitten en wachten totdat de katten komen, maar helaas in ons drukke 24/7 samenleving hebben wij daar geen tijd voor en het probleem doet zich ook nog voor dat er geen katten komen als je er op zit te wachten.

De beste oplossing zou zijn als je met een robot de tuin analyseert en vervolgens als er een kat langs komt er op reageer.

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

Torret met laser

Software voor het kalibreren van zones en torret en handmatig aansturen torret

Kwaliteit
---------
Het is van groot belang dat de juiste objecten erkend worden. Het is natuurlijk niet de bedoeling dat de verkeerde objecten gelaserd worden. Om die kwaliteit te garanderen zal er uitvoerig getest worden. Voor het ontwikkelen zal er zorgvuldig worden gedocumenteerd. Vooraf zal alles duidelijk worden vastgesteld op papier. Zodat achteraf niet verwachtingen niet gehaald worden door miscommunicatie.


Projectorganisatie
------------------

Planning
--------

Kosten en baten
---------------

Risico's
--------
