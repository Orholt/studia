# Zawartość folderu
## Algorytmy sortujące
### Insert sort
Prosty algorytm sortowania, który działa poprzez porównywanie kolejnych elementów listy i wstawianie każdego elementu na odpowiednie miejsce w już posortowanej części listy.

**Zasada działania:**

1. Algorytm rozpoczyna od drugiego elementu listy (indeks 1), zakładając, że pierwszy element listy (indeks 0) jest już posortowany.

2. Następnie, bierze się kolejny element z nieposortowanej części listy i porównuje go z elementami w posortowanej części, zaczynając od ostatniego elementu i idąc wstecz.

3. Jeśli napotkany element w posortowanej części jest większy od bieżącego elementu, przesuwa się ten większy element o jedno miejsce w prawo.

4. Powtarza się krok 3, aż napotkany element w posortowanej części jest mniejszy lub równy bieżącemu elementowi, lub gdy dojdzie się do początku posortowanej części.

5. Po znalezieniu odpowiedniego miejsca, bieżący element jest wstawiany na to miejsce.
Powyższe kroki są powtarzane dla każdego kolejnego elementu w nieposortowanej części listy, aż cała lista zostanie posortowana.

**Wizualizacja**

<img src="https://upload.wikimedia.org/wikipedia/commons/9/9c/Insertion-sort-example.gif" height="200">

### Bubble sort
Metoda ta polega na wielokrotnym przechodzeniu przez listę elementów i zamianie miejscami sąsiednich par, jeśli są one w niewłaściwej kolejności.

**Zasada działania**

1. Przechodzenie przez listę: Algorytm rozpoczyna od pierwszego elementu na liście i porównuje go z kolejnym elementem. Jeśli są one w niewłaściwej kolejności (np. jeśli pierwszy element jest większy od drugiego), zamienia je miejscami. Algorytm kontynuuje przechodzenie przez listę, porównując kolejne pary sąsiednich elementów i zamieniając je, jeśli jest to konieczne.

2. Powtarzanie przejść: Po pierwszym przejściu przez listę największy element powinien znaleźć się na jej końcu. Następnie algorytm powtarza ten proces, przechodząc przez listę od początku do przedostatniego elementu. Po drugim przejściu drugi największy element powinien znaleźć się na przedostatniej pozycji.

3. Powtarzanie do momentu posortowania: Algorytm powtarza przechodzenie przez listę i zamianę miejscami, aż cała lista będzie posortowana. Oznacza to, że w trakcie kolejnych przejść nie będzie już potrzeby dokonywania zamian, ponieważ wszystkie elementy będą w swoich właściwych miejscach.

**Wizualizacja**

<img src="https://upload.wikimedia.org/wikipedia/commons/c/c8/Bubble-sort-example-300px.gif?20131109191607" height="200">

### Quick sort
Quick sort polega na podziale tablicy na mniejsze części na podstawie porównań elementów i rekurencyjnym sortowaniu tych części.

**Zasada działania - Quick sort**

1. Wybierz jeden element z tablicy jako punkt odniesienia, który nazywamy "pivotem". Można wybrać dowolny element z tablicy, ale zazwyczaj stosuje się pierwszy lub ostatni element.


2. Podziel tablicę na dwie części tak, aby wszystkie elementy mniejsze lub równe pivotowi znalazły się po lewej stronie, a większe po prawej stronie. To nazywa się procesem "partycjonowania".


3. Powtarzaj ten proces rekurencyjnie dla obu części tablicy, aż do osiągnięcia posortowanej tablicy.
Po zakończeniu rekurencji, wszystkie części tablicy zostaną posortowane, a tablica będzie w pełni uporządkowana.

**Proces partycjonowania**

1. Ustal pivot jako pierwszy lub ostatni element tablicy.


2. Utwórz dwie zmienne wskaźnikowe: i i j. Ustaw i na początku tablicy (lub pierwszy element) i j na końcu tablicy (lub ostatni element).


3. Porównuj elementy tablicy z pivotem:
   - Inkrementuj i, dopóki element tablicy na pozycji i jest mniejszy lub równy pivotowi.
   - Dekrementuj j, dopóki element tablicy na pozycji j jest większy od pivotu.
   - Jeśli i < j, zamień elementy na pozycjach i i j ze sobą.
   - Powtarzaj powyższe kroki, dopóki i < j.
  
4. Gdy i >= j, zamień pivot z elementem na pozycji j (lub i).


5. Teraz pivot jest na swojej ostatecznej pozycji, a wszystkie elementy mniejsze od pivotu znajdują się po lewej stronie, a większe po prawej stronie.


6. Rekurencyjnie sortuj lewą część tablicy (elementy mniejsze od pivotu) i prawą część tablicy (elementy większe od pivotu) za pomocą powyższych kroków.

**Wizualizacja**

<img src="https://upload.wikimedia.org/wikipedia/commons/9/9c/Quicksort-example.gif" height="200">

### Merge sort
Merge sort to algorytm sortowania, który działa na zasadzie "dziel i łącz". Jego działanie polega na rekurencyjnym dzieleniu listy elementów na mniejsze części, a następnie scalaniu ich w odpowiedniej kolejności.

**Zasada działania**

1. Dziel i podbijaj: Pierwszym krokiem jest podział oryginalnej listy na dwie równe (lub prawie równe) części, aż do momentu, gdy osiągniemy listy zawierające tylko jeden element. Jeśli lista zawiera więcej niż jeden element, dzielimy ją na pół i rekurencyjnie stosujemy ten sam proces podziału dla każdej z połówek, aż do osiągnięcia list jednoelementowych.

2. Scalanie: Następnym krokiem jest scalanie (merge) poszczególnych części listy w odpowiedniej kolejności. Porównujemy elementy z dwóch list i umieszczamy je w nowej, posortowanej liście. Powtarzamy ten proces rekurencyjnie dla kolejnych par podzielonych części, aż do otrzymania jednej, pełnej i posortowanej listy.

3. Powtarzanie: Powyższe kroki rekurencyjnie powtarzamy dla coraz większych części listy, aż do scalenia całej oryginalnej listy w jedną, posortowaną całość.

**Wizualizacja**

<img src="https://upload.wikimedia.org/wikipedia/commons/c/cc/Merge-sort-example-300px.gif?20151222172210" height="200">

## Struktury

### Stos
Stos (ang. stack) to struktura danych w języku C, która działa na zasadzie LIFO (Last-In, First-Out), co oznacza, że ostatni element dodany do stosu jest również pierwszy, który zostanie usunięty. Można sobie to wyobrazić jako stos fizycznych przedmiotów, gdzie ostatni nałożony przedmiot będzie pierwszy, który zostanie zdjęty.

**Wizualizacja**

<img src="https://miro.medium.com/v2/resize:fit:1280/1*lb-0r80YYhcnoVcQ3HY-1g.gif" height="200">

### Lista dwukierunkowa
Lista dwukierunkowa (doubly linked list) to struktura danych, w której każdy element (węzeł) przechowuje wartość oraz wskaźniki na poprzedni i następny węzeł. Dzięki temu każdy węzeł ma możliwość poruszania się zarówno w przód, jak i wstecz po liście.

Głównym elementem listy dwukierunkowej jest wskaźnik na pierwszy węzeł, nazywany głową listy (head). Dzięki temu wskaźnikowi można odnaleźć pierwszy element listy i rozpocząć operacje na liście.

Ostatni węzeł listy ma wskaźnik na następny węzeł ustawiony na NULL, a pierwszy węzeł listy ma wskaźnik na poprzedni węzeł również ustawiony na NULL.

**Przykładowa struktura**

```c
struct Node {
    int data;           // wartość przechowywana w węźle
    struct Node* prev;  // wskaźnik na poprzedni węzeł
    struct Node* next;  // wskaźnik na następny węzeł
};
```

**Wizualizacja - odczyt**

<img src="https://cdn.procoding.org/datastructures/linkedlist/doubly-linked-list/doubly-linked-list-traverse.gif" height="200">

**Wizualizacja - usuwanie elementu**

<img src="https://media.geeksforgeeks.org/wp-content/uploads/20200318150826/ezgif.com-gif-maker1.gif" height="200">

## Wyszukiwanie

### Binarne
Wyszukiwanie binarne (binary search) to algorytm służący do wyszukiwania elementu w posortowanej tablicy lub liście. Algorytm opiera się na podziale przeszukiwanego zakresu na pół, porównywaniu wartości środkowego elementu z poszukiwanym elementem i w zależności od wyniku porównania kontynuowaniu wyszukiwania w odpowiedniej połowie.

**Zasada działania**

1. Przyjmujemy posortowaną tablicę (lub listę) oraz szukany element.

2. Ustalamy indeks początkowy jako lewy kraniec zakresu (na początku 0) oraz indeks końcowy jako prawy kraniec zakresu (na początku rozmiar tablicy minus 1).

3. Dopóki lewy kraniec nie przekracza prawego kranca (lub są one równe), wykonujemy poniższe kroki:

    a. Obliczamy indeks środkowego elementu, dzieląc sumę lewego i prawego krańca przez 2:
    `int srodek = (lewy + prawy) / 2`;

    b. Porównujemy wartość elementu środkowego z poszukiwanym elementem:

   - Jeśli wartość elementu środkowego jest równa poszukiwanemu elementowi, oznacza to, że znaleźliśmy szukany element. Zwracamy indeks środkowego elementu.

   - Jeśli wartość elementu środkowego jest większa od poszukiwanego elementu, kontynuujemy wyszukiwanie w lewej połowie zakresu. Ustawiamy prawy kraniec na (środek - 1).

   - Jeśli wartość elementu środkowego jest mniejsza od poszukiwanego elementu, kontynuujemy wyszukiwanie w prawej połowie zakresu. Ustawiamy lewy kraniec na (środek + 1).

4. Jeśli wykonanie pętli zakończyło się, a lewy kraniec przekroczył prawy kraniec, oznacza to, że szukany element nie występuje w tablicy. Zwracamy wartość oznaczającą brak elementu (np. -1).

**Wizualizacja**

<img src="https://blog.penjee.com/wp-content/uploads/2015/12/optimal-binary-search-tree-from-sorted-array.gif" height="200">

### Liniowe
Wyszukiwanie liniowe, znane również jako przeszukiwanie sekwencyjne, jest jednym z podstawowych algorytmów wyszukiwania w programowaniu. Polega na przeglądaniu elementów w kolekcji w celu znalezienia określonej wartości.

**Zasada działania**

1. Przygotowanie danych: Zdefiniuj zmienną, która będzie przechowywać wartość szukaną, oraz kolekcję, w której będziesz przeszukiwać (na przykład tablicę, listę lub inne struktury danych).

2. Iteracja przez kolekcję: Przejdź przez każdy element w kolekcji, rozpoczynając od pierwszego elementu. Możesz użyć pętli for lub while do iteracji.

3. Porównanie elementów: Porównaj aktualny element z wartością szukaną. Jeśli wartości się zgadzają, oznacza to, że znalazłeś poszukiwaną wartość i możesz zakończyć wyszukiwanie.

4. Kontynuacja lub zakończenie wyszukiwania: Jeśli aktualny element nie pasuje do wartości szukanej, przejdź do następnego elementu w kolekcji i powtórz krok 3. Jeśli dojdziesz do końca kolekcji i nie znajdziesz wartości, oznacza to, że elementu nie ma w kolekcji.

**Wizualizacja**

<img src="https://www.tutorialspoint.com/data_structures_algorithms/images/linear_search.gif" height="200">