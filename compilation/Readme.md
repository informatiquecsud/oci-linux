# Compilation d'un programme écrit en langage C

Le programme du fichier `sum.c` calcule la somme des nombres de 1 à $N$, où $N$
est un nombre entier fourni en argument lors de l'appel du programme

## Compilation du programme

Pour compiler le programme, on peut entrer la commande

```bash
$ gcc sum.c -o sum
```

## Exécution du programme

Une fois le programme compilé, on peut l'exécuter en tapant simplement le nom du
fichier `sum` dans la ligne de commande, suivi par le argument $N$. Attention
toutefois à précéder le nom du fichier par `./` comme suit:

```bash
$ ./sum <N>
```

Par exemple, pour faire la somme de $1$ à $50$, utiliser la commande

```bash
$ ./sum 50
```

Si l'on omet l'argument $50$, le programme va prendre la valeur par défaut $N =
100$.

## Recette du `Makefile`

Le fichier `Makefile` contient des recettes (recipes) pour fabriquer les
différentes cibles du projet. Le fichier `Makefile` est utilsable avec
l'utilitaire `make`.

- `make sum` : compile le fichier `sum.c` et stocke le fichier objet résultat
  (programme compilé) dans le dossier `build`
- `make sum.s` : compile le fichier `sum.c` et produit le code assembleur
  correspondant stocké dans le dossier `build`.
- `make clean` : crée un environnement propre en supprimant tous les fichiers
  générés par la compilation.
- `make compile_py` : Compile le fichier `sum.py` en bytecode stocké sous forme
  binaire dans le fichier `__pycache__/sum.cpython-38.pyc`
- `make disassemble_bytecode` : Désassemble le fichier bytecode binaire pour
  obtenir une représentation textuelle du bytecode.
- `make install-pypy` : installer l'interpréteur pypy dans le dossier `pypy`

# Expériences au niveau de la performance

1.  Commencez par créer toutes les cibles avec la commande `make all` ou tout
    simplement `make`.
 
1.  Chronométrez le temps nécessaire pour faire la somme des nombres compris
    entre 1 et 100000000 à l'aide du programme C exécuté directement par le CPU.
    La commande `time` permet d'indiquer le temps mis pour exécuter la commande
    indiquée par le reste de la ligne.

    ```bash
    time build/sum 100000000
    ```

1.  Chronométrez le temps nécessaire pour faire la somme des nombres compris
    entre 1 et 100000000 avec l'interpréteur CPython de référence.

    ```bash
    time python sum.py 100000000
    ```

1.  Il est aussi possible d'utiliser l'interpréteur PyPy (écrit en Python !!!)
    pour exécuter le programme `sum.py`. Pour cela, il faut d'abord installer
    PyPy avec

    ```bash
    make install-pypy
    ```

    Ensuite, refaire l'expérience avec l'interpréteur PyPy:

    ```bash
    time pypy/bin/pypy sum.py 100000000

