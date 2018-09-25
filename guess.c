/************************************
Author: Maurice Robert Sivanesan
Program: TMA2 Q1, Guessing Game
Date: Sept 2017
*************************************/
import java.util.*;                  //java.util package is imported so that scanner method can be used below
    public class GuessingGame {
         public static int random(int x){ //This random method will do the logic to compute a random number
    //random integer between n and m 
    //int x = n + (int)(Math.random() * (m - n));
         x = 1 + (int)(Math.random() * (10));
    return x;
    }
    
    //Scanner is a class in java.util package used for obtaining input
    static Scanner input = new Scanner(System.in); 
    public static void main(String[] args) { //Main method is what will be executed by CPU
        System.out.println("My guess is: "); //Step 1: Display string to prompt the user to enter # 1 to 10
        int n = input.nextInt();             //Step 2: # entered by user is stored in variable n
           int x = random(0);                //Step 3: Calls random method above to generate a random #
           if (x == n)                       //Step 4: Compares whether user input # is equal to random #
               System.out.println("Well done! ");
            else                             //Step 5a: If yes, then displays "Well done! "
               System.out.println("Wrong guess. The correct number is " + x);       
}                                            //Step 5b: If no, then displays "Wrong guess. The correct number is "
}                                            //and is concatenated with the randomly generated #
//The End of TMA2 Q1, Guessing Game
