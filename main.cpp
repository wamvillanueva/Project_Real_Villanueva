#include <iostream>
#include <cstdlib>
#include "Project.h"


using namespace std;
const string problem[]=
    {
        "Multiples of 3 and 5\n", "Even Fibbonacci\n",
        "Largest Prime Factor\n", "Largest Palindrome Product\n",
        "Smallest Multiple\n", "Sum Square Difference\n",
        "10,001st Prime Number\n", "Largest Product in Series\n",
        "Special Pythagorean Triplet\n", "Summation of Primes\n",
        "Largest Product in a Grid\n", "Highly Divisible Triangular Number\n",
        "Large Sum\n", "Longest Collatz Sequence\n" ,
        "Diophantine Reciprocals\n", "Power Digit Sum\n",
        "Number Letter Counts\n", "Maximum Path Sum I\n" ,
        "Counting Sundays\n", "Factorial Digit Sum\n", "Name Scores\n\n",
        "EXIT\n"
    };

const int NUM_PROBLEMS=21;
const int EXIT=NUM_PROBLEMS+1;

int main()
{
    bool done=false;
    int i=0, ch=0;
    Project proj;

    while (done ==false )
    {
        system("cls");

        for(i=0; i<(NUM_PROBLEMS+1); i++)
        {
            cout << (i+1) << " " << problem[i] << endl;
        }

        cout << "\nChoose Problem: ";
        cin >> ch;
        cout <<endl;

        switch(ch)
        {
            case 1:
                proj.multiples_of_3_and_5();
                break;

            case 2:
                proj.even_fibonacci();
                break;

            case 3:
                proj.largest_prime_factor();
                break;

            case 4:
                proj.largest_palindrome_product();
                break;

            case 5:
                proj.smallest_multiple();
                break;

            case 6:
                proj.sum_square_diff();
                break;

            case 7:
                proj.ten_thousand_1st_prime();
                break;

            case 8:
                proj.largest_product_in_series();
                break;

            case 9:
                proj.special_pytho_triplet();
                break;

            case 10:
                proj.summation_of_primes();
                break;

            case 11:
                proj.largest_product_grid();
                break;

            case 12:
                proj.divisible_triangular_number();
                break;

            case 13:
                proj.large_sum();
                break;

            case 14:
                proj.longest_collatz_sequence();
                break;

            case 15:
                proj.diophantine_reciprocals_a();
                break;

            case 16:
                proj.power_digit_sum();
                break;

            case 17:
                proj.number_letter_counts();
                break;

            case 18:
                proj.max_path_sum_one();
                break;

            case 19:
                proj.counting_sundays();
                break;

            case 20:
                proj.factorial_digit_sum();
                break;

            case 21:
                proj.name_scores();
                break;

            case EXIT:
                done=true;
                break;
        }

        system("PAUSE");

    }

    return 0;
}
