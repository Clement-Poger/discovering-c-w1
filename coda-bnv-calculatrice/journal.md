# Journal de bord

1) J’ai organisé `main.c` autour des deux nombres à saisir, de l’opérateur choisi et du résultat. Le programme accueille l’utilisateur, demande une opération parmi `+`, `-`, `*`, `/` et `%`, puis recueille les deux opérandes.

2) J’ai ajouté les traitements correspondant aux cinq opérateurs et l’affichage de l’expression avec son résultat. Des séquences ANSI colorent les messages du terminal pour rendre les invites et le résultat plus visibles.

3) J’ai ajouté une vérification de l’opérateur et un contrôle du second nombre pour empêcher la division ou le modulo par zéro. Pour cela, j'utilise `void`, une fonction qui ne retourne pas de valeur. La saisie d’un nouveau nombre est proposée dans ce cas. Le code pourrait encore être fiabilisé : les résultats de plusieurs appels à `scanf` ne sont pas contrôlés, et la division entre deux variables `int` est entière avant d’être affectée à `result`.
