reproduction:

```sh
make
mvn compile exec:java -Dexec.mainClass=TL
```

expected:

```
three_va----
a: 1
b: 2
c: 3
va1 98
va2 99
four_va----
a: 1
b: 2
c: 3
d: 4
va1 98
va2 99
five_va----
a: 1
b: 2
c: 3
d: 4
d: 5
va1 98
va2 99
```

actual:

```
three_va----
a: 1
b: 2
c: 3
va1 98
va2 99
four_va----
a: 1
b: 2
c: 3
d: 4
va1 18
va2 493100536
five_va----
a: 1
b: 590315028
c: 493100536
d: 2
d: 493100536
va1 2
va2 3
```
