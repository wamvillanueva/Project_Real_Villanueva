#include <iostream>
#include <cstdlib>
#include <vector>
#ifndef PROJECT_H
#define PROJECT_H

using namespace std;

class Project
{
    public:
        Project();
        virtual ~Project();

       // Problems 1-10
        void multiples_of_3_and_5();
        void even_fibonacci();
        void largest_prime_factor();
        void largest_palindrome_product();
        void smallest_multiple();
        void sum_square_diff();
        void ten_thousand_1st_prime();
        void largest_product_in_series();
        void special_pytho_triplet();
        void summation_of_primes();


        // Problems 11-20
        void largest_product_grid();
        void divisible_triangular_number();
            int num_div(int number);
        void large_sum();
            int char_int(char line);
        void longest_collatz_sequence();
            int collatzFunction(long long num);
        void diophantine_reciprocals_a();
            void dioph(int n);
        void power_digit_sum();
        void number_letter_counts();
        void max_path_sum_one();
            int maxSum (int num1, int num2, int up);
            int route(int num, int triangle[][15]);
        void counting_sundays();
            void setDateStart(int starting_day, int starting_month, int starting_year);
            bool isLeapYear();
            int daysMonth();
            void updateDate(int numDays);
            int sun1stMonth(int endYear);
        void factorial_digit_sum();
            int sum_digits(string a);

        void name_scores();

    protected:

    private:

};

#endif // PROJECT_H
