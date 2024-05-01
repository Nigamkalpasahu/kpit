#include <iostream>
#include "player.h"
#include "player.cpp"
int main() {
    // Create 2 player objects
    Player player1, player2;

    // Accept details from user
    int id;
    char name[50];
    float age;
    int matches;
    int rank;
    int score[3];

    std::cout << "Enter details for Player 1:\n";
    std::cout << "Player ID: ";
    std::cin >> id;
    player1.setPlayerId(id);
    std::cout << "Player Name: ";
    std::cin >> name;
    player1.setPlayerName(name);
    std::cout << "Player Age: ";
    std::cin >> age;
    player1.setPlayerAge(age);
    std::cout << "Number of Matches Played: ";
    std::cin >> matches;
    player1.setNumberOfMatchesPlayed(matches);
    std::cout << "Player Rank: ";
    std::cin >> rank;
    player1.setPlayerRank(rank);
    std::cout << "Scores for 3 matches: ";
    for (int i = 0; i < 3; i++) {
        std::cin >> score[i];
    }
    player1.setScore(score);

    std::cout << "\nEnter details for Player 2:\n";
    std::cout << "Player ID: ";
    std::cin >> id;
    player2.setPlayerId(id);
    std::cout << "Player Name: ";
    std::cin >> name;
    player2.setPlayerName(name);
    std::cout << "Player Age: ";
    std::cin >> age;
    player2.setPlayerAge(age);
    std::cout << "Number of Matches Played: ";
    std::cin >> matches;
    player2.setNumberOfMatchesPlayed(matches);
    std::cout << "Player Rank: ";
    std::cin >> rank;
    player2.setPlayerRank(rank);
    std::cout << "Scores for 3 matches: ";
    for (int i = 0; i < 3; i++) {
        std::cin >> score[i];
    }
    player2.setScore(score);

    // Display details of both players using << operator
    std::cout << "\nPlayer 1 Details:\n" << player1;
    std::cout << "\nPlayer 2 Details:\n" << player2;

    // Test working of == operator
    if (player1 == player2) {
        std::cout << "\nBoth players have played the same number of matches.\n";
    } else {
        std::cout << "\nBoth players have not played the same number of matches.\n";
    }

    // Test working of + operator
    Player player3 = player1 + player2;
    std::cout << "\nCombined Player Details:\n" << player3;

    return 0;
}
/*Question 2 Section #2 General Purpose Programming - Question 2
Revisit Later
How to Attempt?
Restore String
 
John and his friend Alex are playing a word game. In the game, John has come up with a new system where there are only 4 vowels - {a, e, o, u}; he does not consider 'i' a vowel.He decides to challenge Alex by giving him a modified string S and follows these steps to create the modified string:
He removes all the ‘i's' from the original string which results in a new string called the resulting string. 
Then he concatenates the resulting string with the original string. 
Your task is to help Alex find and return the original string. If Alex is unable to do this then he must return "notpossible".
 
Note: The original string refers to the string that was there before any modifications were made to it.
 
Input Specification:
input1 : A string S, representing the string after modifications were made to the original string. 

Output Specification:
Return a string denoting the original string that John started with.
 
Example 1:
input1 : izizibibzzbb
 
Output : izizibib

Explanation:
We can get the original string from the modified string “izizibibzzbb” by following the steps given below:
Remove all occurrences of the letter "i" from the modified string, resulting in "zzbbzzbb".
It is observed that the pattern "zzbb" repeats after the 4th position, indicating that the original string must have contained this pattern.
Then, examine the given modified string "izizibibzzbb" and determine whether the original string is "izizibib" because it contains the required pattern.
Attempt to confirm the original string by removing the letter "i" from it. The string "zzbb" is obtained. Concatenating this resulting string with the original string "izizibib" gives us "izizibibzzbb", which matches the given modified string. Hence, the original string is "izizibib".
Therefore, the output returned is izizibib.
 
Example 2:
input1 :  aibiciab
 
Output : notpossible

Explanation:
We can get the original string from the modified string “aibiciab” by following the steps given below:
Remove all occurrences of the letter "i" from the modified string, resulting in "abcab".
It is observed that the pattern "ab" repeats after the 3rd position, indicating that the original string must have contained this pattern.
Then, examine the given modified string "aibiciab" and determine whether the original string is "aibici" because it contains the required pattern.
Attempt to confirm the original string by removing all instances of "i" from it. The string "abc" is obtained. Concatenating it with the original string gives us "aibiciabc", which does not match the given modified string. Hence we can deduce that in this case it is not possible to get the original string.
Therefore, the output returned is notpossible.
 

C
Compiler: gcc 5.4.0

12345678910
#include<stdio.h>#include<string.h>// Read only region startchar* getOriginalString(char* input1){    // Read only region end    // Write code here    }







Question 3Section #2 General Purpose Programming - Question 3
Revisit Later
How to Attempt?
The Last Chocolate
 
Bruce is playing a chocolate game with his friend Andrew. He has N chocolates in a rectangular box with a single row and an unbiased coin. When he tosses the coin, if heads shows up, he will remove the first chocolate from the beginning of the row in the box. If tails shows up, he will remove the last chocolate from the row. He also has an integer K, and the process of tossing is repeated until he is left with only the Kth chocolate. 
 
Your task is to help Bruce find and return the number of possible ways of tossing the coin such that the Kth chocolate in the box is the last chocolate remaining after tossing the coin N-1 times. 
 
Note: Assume 1-based indexing.
​
Input Specification:
input1 : An integer value N, representing the number of chocolates.
input2 : A integer value K, representing the index of last remaining chocolate in the box.

Output Specification:
Return an integer value, representing the number of possible ways of tossing the coin such that the Kth chocolate in the box is the last chocolate remaining after tossing the coin N-1 times.
 
Example 1:
input1 : 3
input2 : 2
 
Output : 2

Explanation:
Here we are given 3 chocolates and we should be left with a single chocolate at K = 2. 
Let us say the chocolates are [C1, C2 and C3]. We can toss the coins in the following ways to solve this example: 
1st way:
Bruce gets Heads on the first coin toss, so he removes C1 from the box. The box now contains 2 chocolates and an empty first slot. On the second coin toss Bruce gets Tails and therefore he removes chocolate C3 from the box. This finally leaves him with 1 chocolate, C2 at index K = 2.
 
2nd way:
Bruce gets Tails on the first coin flip, so he removes C3 from the box. The box now contains 2 chocolates and an empty last slot. On the second coin flip Bruce gets a Heads and therefore he removes chocolate C1 from the box. This finally leaves him with 1 chocolate, C2 at index K = 2.
 
Since, there are only 2 waysfor one chocolate to be left at index K = 2. Therefore, 2 is returned as output.
 
Example 2:
input1 : 5
input2 : 1
 
Output : 1

Explanation:
Here we are given 5 chocolates and we should finally be left with a single chocolate at K = 1. 
Let us say the chocolates are [C1, C2, C3, C4 and C5]. We can toss the coins in the following ways to solve this example: 
 
Bruce gets 4 consecutive Tails leaving him with only one chocolate at index K = 1.
There is only 1 way for one chocolate to be left at index K = 1. Therefore, 1 is returned as the output.
 

C
Compiler: gcc 5.4.0

12345678910
#include<stdio.h>#include<string.h>// Read only region startint lastElement(int input1,int input2){    // Read only region end    // Write code here    }*/
