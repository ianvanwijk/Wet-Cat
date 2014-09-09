# Funtioneel Ontwerp

## Eisen

Het eindproduct dat opgeleverd gaat worden moet voldoen aan een aantal eisen van de klant, hieronder staan de globale eisen op een rij en daaronder per categorie de specefiekere eisen.

* Het programma moet stabiel werken
* Het programma mag niet crashen zonder foutmelding en crashrapport
* Het systeem hoefd een kat niet te herkennen in het donker

### User

Hieronder worden de verschillende eisen vanuit het oogpunt van de user beschreven. In de derde kolom staat hoe belangrijk de issue is op basis van de MoSCoW methode.

> De MoSCoW methode is een makkelijke manier om taken te sorteren op basis van hoe belangrijk ze zijn, binnen de MoSCoW methode zijn er vier niveaus van belangrijkheid waar een taak bij kan horen:<br/>
> M - Must, deze taak moet gemaakt worden om het project af te ronden<br/>
> S - Should, deze taak zou gemaakt moeten worden, maar bij tijdnood kan deze taak afvallen<br/>
> C - Could, deze taak zou graag gemaakt worden, maar alleen als er tijd over is<br/>
> W - Won't, deze taak word niet gemaakt, wel is het belangrijk om hierover na te denken voor de toekomst<br/>

| ID   | Overzicht | MoSCoW |
|:----:|-----------|--------|
| F1-1 | Het instellen van verschillende "Danger Zones" moet mogelijk zijn. | M |
| F1-2 | De turret is te calibreren door de hoeken van de tuin te specificeren via de computer | M |
| F1-3 | De "Danger Zones" moeten verwijderbaar zijn met een symbool | S |
| F1-4 | De "Danger Zones" moeten worden onthouden, zelfs als de applicatie afgesloten word | M |
| F1-5 | De "Danger Zones" kunnen worden vergeten als het programma stroom verliest | S |
| F1-6 | Er kunnen maximaal 5 "Danger Zones" ingesteld worden | S |
| F1-7 | Het systeem is via het internet te beheren | C |
| F1-8 | Het beeld dat de camera ziet is te zien op de laptop waar de software op gedraait word | C |

### Systeem

Het systeem is het apparaat dat de software uiteindelijk zal gaan draaien. Dit zal hoogstwaarschijnlijk een laptop zijn. Deze staat in verbinding met een webcam om de beelden te krijgen en met een turret om op de kat te richten. Alle eisen die hieronder vermeld staan gaan van een stilstaand object uit tenzij anders aangegeven.

| ID   | Overzicht | MoSCoW |
|:----:|-----------|--------|
| F2-1 | Katten moeten worden gedetecteerd binnen 5 seconden na stilstand van object | M |
| F2-2 | Alle andere objecten (niet katten) moeten worden genegeerd | M |
| F2-3 | Katten moeten worden geraakt met een waterstraal (laser) binnen 5 seconden na stilstand van object | M |
| F2-4 | Alle anders objecten (niet katten) mogen niet worden geraakt door water (of laser)| M |
| F2-5 | Op basis van de vorm van het symbool op het object moet de laser een andere taak uitvoeren, dit kan varieren van een knipering tot een cirkel om het object heen. de verschillende taken die uitgevoerd moeten worden zullen door de uitvoerders worden beslist | S |
| F2-6 | Als er meerdere objecten gedetecteerd worden moet de laser deze in willekeurige volgorde langsgaan en de actie uitvoeren bij ieder object | S |
| F2-7 | Een bewegend object hoefd niet worden herkend totdat deze stilstaat. Op het moment dat dit wel word herkend zal de laser heb object pas mogen raken op het moment dat het object stilstaat | S |
| F2-8 | Er word bijgehouden word hoevaak een kat word beschoten | C |

## IPO

![ipo](/Docs/images/ipo.png)
