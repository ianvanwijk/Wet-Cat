# Realisatie Document

## Inleiding
Dit document geeft uitleg over de gebruikte methode om het project te maken. Het document is opgedeeld in drie delen: `Vision`, `Technisch` en `Problemen & oplossingen`.
In het `Vision` gedeelte beschrijft de oplossingen die horen bij het vision ontwerp.
In het `Technisch` gedeelte beschrijft de oplossingen die horen bij het technisch ontwerp.
Bij `Problemen & oplossingen` worden problemen en oplossingen beschreven die tijdens het realiseren van dit project voorkwamen.

## Vision
Het vision ontwerp beschrijft hoe de verschillende vision stappen (`Acquisition` , `Enhancement` , `Segmentation` , `Feature extraction` , `Classification`) worden geimplementeerd. Hieronder staat per deel Hoe de structuur gemaakt is en een algeheel classediagram voor alle vision stappen.

### Structuur

#### Acquisition
De acquisition word op een simpele manier gedaan, de `VideoCapture` uit OpenCV word gebruikt om de input uit de camera te halen.

#### Enhancement
De enhancement word in stappen gedaan, als eerste word er een `grayscale` filter gedaan om een grijswaarde plaatje te krijgen. Hierna word er een `Threshold` gedaan om een binair plaatje te krijgen. Ook word er een `Resize` gedaan om de snelheid op langzamen computers te bevorderen.

#### Segmentation
De segmentatie word gedaan door middel van `Aruco`, er is geprobeerd om zonder `Aruco` de verschillende vormen te herkennen, dit resulteerde jammergenoeg in meer nadelen dan voordelen.

#### Feature extraction
Omdat de `Aruco` code in de segmenter al alle features uit de objecten haalt, doet de Feature extraction niks. De classen voor de feature extraction zijn wel gemaakt voor toekomstige implementatie.

#### Classification
De classificatie word erg simpel gedaan, op basis van het ID van het plaatje dat `Aruco` herkend word er een type aan de blob gegeven, op basis van dit type zal er wel op geschoten worden of niet.

### Class diagram
![opstelling](/Docs/images/classdiagram.png)

## Technisch

### structuur
De structuur van het hele systeem is gebaseerd op de basis structuur voor `Exacutables`. Alle verschillende componenter (`Acquisition` , `Enhancement` , `Segmentation` , `Feature extraction` , `Classification`, `Commander`, `Communicator`) zijn `Exacutables`, een exacutable word aangemaakt in de controller (mainwindow) en word vanuit daar geconfigureerd en uitgevoerd. In iedere `Exacutable` word de functie van die betreffende stap uitgevoegd, als dit in verschillende stappen is, is het gemaakt met weer een extra laag die onder een interface valt, dit is vooral gedaan voor uitbreidings mogelijkheden.

### Embedded
De gun turret is geprogrammeerd met een `Arduino` al is de `Arduino` library niet gebruikt. de `Arduino` is gekozen omdat het makkelijk is om een prototype te maken. Hierdoor was het heel makkelijk om snel een werkende gun turret te maken die getest kon worden waardoor de calibratie voor het mikken van de gun turret snel gemaakt kon worden.

## Problemen & oplossingen
Tijdens het implementeren van dit project zijn er een paar kleine problemen geweest, vooral met het implementeren van blob herkenning in OpenCV. Na veel proberen en problemen is er gekozen voor `Aruco`, de code die gemaakt is voor detectie zonder `Aruco` is nog steeds te vinden in de repository maar word niet meer gebruikt.
