# Turnurile din Hanoi
Se spune că în Vietnamul antic, în Hanoi, erau trei turnuri, pe unul din ele fiind puse, în ordinea descrescătoare a diametrelor lor, mai multe (opt) discuri de aur. Din motive obiective, niște călugări, care le aveau în grijă, trebuiau să așeze discurile pe cel de-al doilea turn, în aceeași ordine. Ei puteau să folosească, eventual, turnul al treilea, deoarece, altfel discurile nu ar fi avut stabilitate. Discurile puteau fi mutate unul câte unul. De asemenea, nu era permis a așeza un disc mai mare peste unul mai mic, pentru ca cel de deasupra să nu-l strice pe cel de dedesubt.

Deși, aparent simplă, după câteva încercări, folosind un prototip în miniatură, cititorul va constata că problema nu e banală. Cu 3 discuri, jocul se rezolvă în 7 mișcări. Numărul minim de mișcări pentru a rezolva jocul este 2^n -1, folosind tehnica recursivă Divide-et-impera.
Problema este de a muta n discuri de la turnul 1 la turnul 2. Pentru a o rezolva, să vedem cum se mută, în general, n discuri de la un turn p la un turn q. Se mută primele n-1 discuri de pe p pe r, r fiind turnul auxiliar, apoi singurul disc rămas pe p (discul cel mai mare) se mută de pe p pe q, după care cele m-1 discuri sunt mutate de pe r pe q.
Firește, mutarea celor n-1 discuri de la p la r și de la r la q se realizează la fel, deci prin
apeluri recursive.
Mutarea primelor n-1 discuri este corectă, deoarece existența discurilor de diametre mai mari, la bazele celor trei turnuri nu afectează cu nimic mutările discurilor mai mici.
În cazul limită n=1, avem doar o mutare a discului din vârful turnului p spre q, adică problema se rezolvă direct. Putem spune, așadar, că avem o descompunere în trei probleme a problemei mari.

![image](https://user-images.githubusercontent.com/115886636/207129852-3ccaa749-8aaa-4455-aa74-57dc0bca1f86.png)
