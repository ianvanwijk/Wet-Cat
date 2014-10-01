# Visueel Ontwerp

Dit is het visueel ontwerp, hierin word diepen ingegaan op de manier waarop de foto's genomen worden, welke operatoren gebruikt gaan worden om uiteindelijk tot het eind resultaat te komen. Om dit goed uit te kunnen leggen is het opgedeeld in 6 delen: `Acquisition`, `Enhancement`, `Segmentation`, `Feature extraction`, `Classification` en `Overige handelingen`.

# Acquisition

Als eerste word het beeld binnengehaald, dit is een kleuren frame waar nog niks mee is gebeurd.

# Enhancement

Na het binnenhalen van het beeld worden er twee operatoren op uitgevoerd bedoeld om de frame te prepareren voor de volgende stappen.
Als eerst word de frame in grijswaarden gezet, hierna word er een `threshold` over het plaatje uitgevoerd om er een binair plaatje van te maken. Hierdoor word het makkelijker om de frame te behandelen met andere operatoren.

# Segmentation

Bij het segmenteren van het plaatje worden verschillende blobs herkend, op basis van grote worden verschillende vlakken gecategoriseerd, op het moment dat een vlak voldoet aan de eisen dan word dit een blob met een locatie en een grote, de locatie is het middelste punt van de blob, de grote is de afstand van het middenpunt tot de rand.

# Feature extraction

Nadat de blobs zijn herkend moet er gekeken worden wat voor blobs het zijn, dit word gedaan op basis van het aantal gaten in een blob. het aantal gaten wroden op basis van de contouren van de blob berekend.

# Classification

Als het aantal gaten per blob bekend is zal er worden geclassificeerd. op basis van het aantal gaten word er een type aan iedere blob toegewezen, blobs die niet binnen een type vallen worden verwijderd.

# Overige handelingen

Nadat de blobs zijn geclassificeerd zal er een commando naar de turret gestuurd worden, dit zal op basis van het type van de blob gebeuren. Omdat dit niet meer met vision te maken heeft zal hier niet verder op ingegaan worden in dit document.