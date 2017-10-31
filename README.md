Zadanie jest rozgrzewką przed warsztatami i zarazem podstawą do kwalifikacji do uczestnictwa w warsztatach.

Zadanie:
Zaimplementować symulację gry w black jacka.

Zasady gry do back jacka:
Krupier rozdaje po dwie karty graczowi i sobie (jedną graczowi, jedną sobie, jedną graczowi, jedną sobie - zaczynając od gracza). Krupier odsłania swoją pierwszą otrzymaną kartę, drugą zakrywa.
Gracz rozpoczyna rundę odsłaniając swoje dwie karty. Następnie może podjąć decyzje o dociągnięciu kolejnych kart ze stosu pozostałych kart. Jeśli wyłożone karty osiągną wartość 21 gracz wygrywa automatycznie rundę a krupier odsłania swoją drugą kartę, a następnie obie są odrzucane. Jeśli gracz przekroczy wartość 21 przegrywa rundę, a karty krupiera są odsłaniane i odrzucane. Gracz ma możliwość zakończenia wykładania kolejnych kart zanim wartość jego kart osiągnie lub przekroczy wartość 21. Gdy podejmie taką decyzję krupier wykłada swoje dwie karty i następnie dobiera ze stosu pozostałych dopóki nie osiągnie wartości 17 lub większej.

Przy zakończeniu wyciągania kart przez krupiera porównywane są wartości i sprawdzane kto wygrał rundę:
jeśli krupier przekroczył wartość 21 wygrywa gracz
jeśli gracz ma więcej punktów niż krupier wygrywa gracz
jeśli krupier ma tyle samo punktów co gracz wygrywa krupier

Gra się kończy jeśli po końcu rundy pozostały mniej niż 4 karty (czyli krupier nie ma jak rozdać po dwie karty).

wartości kart:
karty od 2 do 10 - mają tą samą wartość co liczba na karcie
Walet, Dama, Król - 10
As - 1 lub 11 - zależności co jest lepsze dla właściciela

Program ma wczytywać talię z pliku (przykładowy plik w załączniku) jako argument podany do programu.
Wynikiem programu ma być wydrukowanie w konsoli przebiegu gry i jego wyniku w postaci dla dwóch graczy:

[Game started with player: caution player]
Player:  A, K: 21
[End round: Player win (1 : 0)]
Player: Q, Q : 20
Croupier: 10, 4, 4 : 18
[End round: Player win (2 : 0)]
Player: J, 4 : 14
Croupier: 9, 9 : 18
[End round: Croupier win (2 : 1)]
...
[End round: Croupier win (6 : 8)]
[Game over]
==========
[Game started with player: custom player]
...
[End round: Croupier win (7 : 7)]
[Game over]

Należy zaimplementować dwóch graczy:
- ostrożny gracz, który zawsze kończy dobierać jeśli wartość jego kart ma 12 lub więcej
- własny gracz który chce wygrać jak najwięcej rund

Oceniał będę:
- Poprawność działania programu (poprawne zaimplementowanie zasad, zgodność wydrukowanego na konsolę przebiegu gry, wynik, czy zalicza krasze)
- Architektura rozwiązania
- Styl (nazewnictwo, formatowanie kodu, spójność)
- testy będą plusem (ale nie są obowiązkowe)
- skuteczność własnego gracza dla 5 talii które wygeneruję za pomocą mojego programu, z którego możecie korzystać: https://github.com/grabusr/deckGenerator

Kod wrzućcie do publicznego repozytoriu na swoim Githubie (na githubie, bez żadnego wysyłania mi archiwów na maila :P).Program ma się kompilowac na GCC 7.2. Polecam użyć CMake do organizacji projektu, szczególnie dla osób które korzystają tylko z windowsa.
