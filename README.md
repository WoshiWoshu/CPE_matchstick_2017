# CPE_matchstick_2017
First year mini project based on a very famous game based on matchsticks. It is composed of a certain number of matchstick lines. The players plays against the AI; the player can, on a same line, take one or several matchsticks. If done, it's the AI turn to play. The loser is the one to take the last matchstick.

USING :

1) Make 2) ./matchstick [NB LINES] [NB OF MATCHSTICKS MAX TO REMOVE]

EXEMPLE :

> ./matchstick 20 4

(Map of size NB LINES = 20 and can remove a maximum of 4 matchsticks).

NOTE :

- The matchsticks are removed right to left.

- The first parameter must be a number of size : 1 < n < 100., the program return 1.

- The Player always start first against the AI.

- If the user wins

- If the AI wins, the program return 2.

