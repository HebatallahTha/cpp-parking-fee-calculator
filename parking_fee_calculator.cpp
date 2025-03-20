#include <iostream>
#include <limits>
#include <sstream>
#include <cmath>
//These side comments are just for me to make sure I understand what I am doing instead of just typing randomly. They're just my notes to look over if I ever get stuck on something :D
//heba the endl end loop;
//use func called ceil and floor to round up!
//double ceil (double x);
//need to re do the math part and clean it up so it looks better
//make sure this time that if they provide a number less than or equal to 0 it will an error
//change the exit program of 0 to N or sm
double getAmount()
{
  while (true) //remember that the while true literally gives you a lowkey infinite loop and makes your work so much easier heba!
    {
      double totalTimeParked=0.00;
      std::cout << "\nEnter the amount of time spent in the parking garage (MAX is 24 hours)." ;
      std::cout <<"\nWrite in decimal form, ex: 1.5 hours = 1 hour and 30 minutes.\n Enter 0 to exit program:";

      std::cin >> totalTimeParked;

      if (std::cin.fail())
      {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout<<"\nError. Input only numbers between 1-24";
        std::cout << "\nEnter the amount of time spent in the parking garage (MAX is 24 hours)." ;
        std::cout <<"Write in decimal form, ex: 1.5 hours = 1 hour and 30 minutes.\n Enter 0 to exit program:";

        std::cin >> totalTimeParked;  //the cin basically holds your number! remeber this for other c++ work!

      } //end if
      else
      {
        return totalTimeParked;
      } // end else
      } //end while true loop
} //end double
  //try making your brackets more clear ill do this in future hws!

int main()
{
    double minFee = 2.50;
    double addFee = 1.00;
    double maxFee = 20.00;
    double totalTimeParked=1.0; //set this equal to 1.0 bc if we set it to just 0 it coulda been skipped!
    double totalFee = 0.00;
    //int number;

  while (totalTimeParked != 0)
    {
       totalFee = 0.0;
      totalTimeParked = getAmount();

      if (totalTimeParked == 0) 
        {
        std::cout << "\nExiting the program now. Goodbye thanks for using my calculator :DD!\n";
        break;
        } //end if
      if (totalTimeParked <= 3 && totalTimeParked>0) 
        {
            std::cout << "\nYou have spent at least three hours in the parking garage." << std::endl;
            totalFee = minFee;
        } //end if

      if (totalTimeParked <0)
      {
        std::cout << "\nError. Input numbers between 1-24";
        std::cout << "\nEnter the amount of time spent in the parking garage (MAX is 24 hours)." ;
      std::cout <<"Write in decimal form, ex: 1.5 hours = 1 hour and 30 minutes.\n Enter 0 to exit program:";
      } //end if
      if (totalTimeParked >24)
      {
        std::cout << "\nError. Input numbers between 1-24";
          std::cout << "\nEnter the amount of time spent in the parking garage (MAX is 24 hours)." ;
        std::cout <<"Write in decimal form, ex: 1.5 hours = 1 hour and 30 minutes.\n Enter 0 to exit program:";
      }
        else if (totalTimeParked > 3) 
        {
            std::cout << "\nYou have spent more than three hours in the parking garage. An additional $1.00 fee will be added to your total." << std::endl; //use ceil to round up
            totalFee = addFee * (ceil(totalTimeParked)-3.00) + minFee;
          //prob need to double check your math write it down under here so it makes more sense
          // okay so the total fee will be the totalTimeParked -3 since that the min amount times the 1 dollar additional fee if they go over three hours plus the miniumm fee of 2.50.  


            if (totalFee > maxFee) 
            {
                totalFee = maxFee;

            } //I added this because the professor said it wouldnt go over 24 hours meaning it wouldnt go over 20 bucks. end if
        } //end else if 

        std::cout << "\nThe total parking charge for the day is: $ " << totalFee<< std::endl; //here we are printing the total fee for the day! This part was really easy!

    } //end while



    return 0;
} //end main


