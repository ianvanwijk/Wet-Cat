# Technisch ontwerp

## Inleiding

In dit document worden alle facetten van het product dat gemaakt gaat worden behandeld in verschillende stukken. Als eerste wordt de hardware besproken, hierin zal er verdiept worden op welke hardware er gebruikt gaat worden, welke opstelling ideaal is voor de beeldherkenning en wat voor belichting ideaal is. Als tweede worde de software besproken, dit zal dieper ingaan op het software design, de verschillende programma's en de communicatie daartussen.

## Hardware

Onder hardware worden de verschillende fysieke benodigdheden voor het project bedoeld, dit gaat om de laptop die de software gaat draaien, de turret met de laser en de camera. Ook worden de te detecteren objecten hier beschreven.

### Camera opstelling

De opstelling van de tuin is erg belangrijk. Dit zal namelijk deels de kwaliteit van de beelden die de camera zal bieden. Hieronder is schematisch een tekening te zien van het prototype van de Wet-Cat, met deze opstelling zijn we van plan te gaan presenteren op het moment dat we het project moeten opleveren.

![opstelling](/Docs/images/opstelling.png)

### Objecten

Omdat we verschillende dingen gaan herkennen, zijn er verschillende markers gemaakt die het makkelijk maken om de verschillende objecten te herkennen. Er zijn vier verschillende markers die de hoeken van een "Danger Zone" aangeven en er zijn zes verschillende markers die de verschillende katten aangeven. Deze markers zullen op een dobbelsteem worden geplakt om zo aan te geven welke kat het is. Per kat zal de laser iets anders doen. de commando's staat in het hoofdstuk 'Turret' beschreven. Verder staan hieronder de verschillende markers die door het systeem moeten worden herkend.

![symbolen](/Docs/images/symbolen.png)
![symbolen_cats](/Docs/images/symbolen_cats.png)

### Laptop

Het programma zal op een laptop gedraait worden, deze laptop staat in verbinding met de camera via USB en met de turret via een Arduino. De laptop heeft een aantal specificaties die vereist zijn om het programma te kunnen draaien, hieronder staat een lijst met vereiste specificaties.

| Specificatie | Minimaal             | Aanbevolen                   |
|--------------|----------------------|------------------------------|
| CPU          | Dual Core 2.2 GHz    | Quad Core 2.4 GHz            |
| RAM          | 2 GB                 | 4 GB                         |
| Videokaart   | \AMD 3850/Nvidia 260 | AMD 4870/Nvidia 370 of hoger |
| OS           | Windows Vista        | Windows 8.1                  |

### Turret

De turret is een zelf gemaakt apparaat dat met behulp van twee servo motoren op een punt kan richten met een laserpointer. Omdat deze zelf gemaakt is, is het nodig om verschillende materialen hiervoor te krijgen. Ook is toegang tot het fablab nodig om dit te maken.

#### Benodigdheden

| Type | Hoeveelheid | Kosten |
|---|---|---|
| Hout | Plaat 4x4 m | 7,75 |

#### Fablab

Op het moment dat de benodigdheden aanwezig zijn kan er gebouwd worden. Om de turret successvol te bouwen is er toegang tot het fablab nodig om daar het hout met een lasersnijder te snijden en alle in elkaar te zetten. Volgens de planning is het fablab pas in week 5 nodig.

## Software

De software bestaat uit drie delen, het Image Processing programma, het Aiming programma en de communicatie daartussen. Hieronder wordt in detail behandeld hoe deze drie in elkaar steken en hoe de software is ontworpen.

### Wet-Cat Image Processing

De Wet-Cat Image Processing software is de software die, met behulp van de OpenCV libraries, de beelden van de camera zal gaan behandelen en de relevante informatie hieruit haalt. Deze software kan opgedeelt worden in zeven gedeeltes.

* Acquisition
* Enhancement
* Segmentation
* Feature extraction
* Classification
* Command
* Communication

Elk gedeelte zal een interface krijgen waarmee gecommuniceerd kan worden, op deze manier zijn de delen onafhankelijk van elkaar te gebruiken. Deze structuur is gekozen voor maximale uitbreidbaarheid.

> default structuur van een onderdel

#### Acquisition

#### Enhancement

#### Segmentation

#### Feature extraction

#### Classification

#### Command

#### Communication

### Wet-Cat Aiming

### Protocollen

## Conclusie
