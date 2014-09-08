# Funtioneel Ontwerp

## Eisen

### User

Hieronder worden de verschillende eisen vanuit het oogpunt van de user beschreven. In de derde kolom staat hoe belangrijk de issue is op basis van de MoSCoW methode.

| ID   | Overzicht | MoSCoW |
|:----:|-----------|--------|
| F1-01 | Het instellen van verschillende "Danger Zones" moet mogelijk zijn. | M |
| F1-02 | De turret is te calibreren door de hoeken van de tuin te specificeren via de computer | M |
| F1-03 | De "Danger Zones" moeten verwijderbaar zijn met een symbool | S |
| F1-04 | Het systeem is via het internet te beheren | C |
| F1-05 | Het beeld dat de camera ziet is te zien op de laptop waar de software op gedraait word | C |

### Systeem

Het systeem is het apparaat dat de software uiteindelijk zal gaan draaien. Dit zal hoogstwaarschijnlijk een laptop zijn. Deze staat in verbinding met een webcam om de beelden te krijgen en met een turret om op de kat te richten. Alle eisen die hieronder vermeld staan gaan van een stilstaand object uit tenzij anders aangegeven.

| ID   | Overzicht | MoSCoW |
|:----:|-----------|--------|
| F2-01 | Katten moeten worden gedetecteerd binnen 5 seconden na stilstand van object | M |
| F2-02 | Alle andere objecten (niet katten) moeten worden genegeerd | M |
| F2-03 | Katten moeten worden geraakt met een waterstraal (laser) binnen 5 seconden na stilstand van object | M |
| F2-04 | Alle anders objecten (niet katten) mogen niet worden geraakt door water (of laser)| M |
| F2-05 | Op basis van de vorm van het symbool op het object moet de laser een andere taak uitvoeren, dit kan varieren van een knipering tot een cirkel om het object heen. de verschillende taken die uitgevoerd moeten worden zullen door de uitvoerders worden beslist | S |
| F2-06 | Als er meerdere objecten gedetecteerd worden moet de laser deze in willekeurige volgorde langsgaan en de actie uitvoeren bij ieder object | S |
| F2-07 | Een bewegend object hoefd niet worden herkend totdat deze stilstaat. Op het moment dat dit wel word herkend zal de laser heb object pas mogen raken op het moment dat het object stilstaat | S |
| F2-08 | Er word bijgehouden word hoevaak een kat word beschoten | C |

## IPO

![ipo](/Docs/images/ipo.png)
