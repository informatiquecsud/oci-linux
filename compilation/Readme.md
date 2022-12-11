# Compilation d'un programme écrit en langage C

Le programme du fichier `sum.c` calcule la somme des nombres de 1 à $N$, où $N$ est un nombre entier fourni en argument lors de l'appel du programme

## Compilation du programme

Pour compiler le programme, on peut entrer la commande

```bash
$ gcc sum.c -o sum
```

## Exécution du programme

Une fois le programme compilé, on peut l'exécuter en tapant simplement le nom du fichier `sum` dans la ligne de commande, suivi par le argument $N$. Attention toutefois à précéder le nom du fichier par `./` comme suit:

```bash
$ ./sum <N>
```

Par exemple, pour faire la somme de $1$ à $50$, utiliser la commande

```bash
$ ./sum 50
```

Si l'on omet l'argument $50$, le programme va prendre la valeur par défaut $N = 100$.

## 