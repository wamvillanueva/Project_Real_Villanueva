#include "math.h"
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <string.h>
#include <iomanip>
#include <set>
#include "Project.h"
#define Maximum	200000
#define LL long long
#define Limit 1000
#include <list>
#include <algorithm>

using namespace std;

vector<int> primes;
int day,month,year;
bool composite[Maximum + 1];

Project::Project()
{
    //ctor
}

Project::~Project()
{
    //dtor
}

void Project::multiples_of_3_and_5()
{
    int numbers[1000];
    int n=0;

    for(int i=0; i<999; i++)
    {
        numbers[i] = i+1;
    }

    for(int a=0; a<999; a++)
    {
        if (numbers[a]%3==0 || numbers[a]%5==0)
        {
            n = n+numbers[a];
        }
    }

    cout <<"The sum of all multiples of 3 and 5 less than 1 thousand: " << n <<endl <<endl;
}

void Project::even_fibonacci()
{
    int sum = 0;
	int firstNum = 1;
	int secondNum = 2;
	int corrNum = 0;

	while (secondNum <= 4000000)
	{
		corrNum = firstNum + secondNum;
		if (secondNum % 2 == 0)
			sum += secondNum;
		firstNum = secondNum;
		secondNum = corrNum;
	}

	cout << "The sum of even-valued terms not exceeding 4 million: "<< sum <<endl;
}

void Project::largest_prime_factor()
{
    long long number = 600851475143LL;
    int answer = 0;
    for(int n = 3; ; n += 2)
        if(!(number % n)){
            do { number /= n; } while (!(number % n));
            if(number == 1){
                answer = n;
                break;
            }
        }
    cout << "The largest prime factor of 600851475143 is: " << answer << endl;
}

int reverse(int x)
    {
    int y = x, z = 0;
    while(y){
        z = z * 10 + (y % 10);
        y /= 10;
    }
    return z;
}

void Project::largest_palindrome_product()
{

    int ans = 0;
    for(int a = 999; a > 1; --a)
        for(int b = a; b > 1; --b){
            int x = a * b, z = reverse(x);
            if(x == z && x > ans) ans = x;
        }
cout << "The largest palindrome made of three numbers: " << ans << endl;
}

void Project::smallest_multiple()
{

int num = 20, flag = 0;

while(flag == 0)
{
    if ((num%2) == 0 && (num%3) == 0 && (num%4) == 0    && (num%5) == 0 && (num%6) == 0
    && (num%7) == 0 && (num%8) == 0 && (num%9) == 0 && (num%10) == 0 && (num%11) == 0 && (num%12) ==0
    && (num%13) == 0 && (num%14) == 0 && (num%15) == 0 && (num%16) == 0 && (num%17) == 0 && (num%18)==0
    && (num%19) == 0    && (num%20) == 0)

    {
        flag =  1;
        cout <<"The smallest number that is divisible by the numbers 1-20: " <<num <<endl;
    }

    num++;
}
}

void Project::sum_square_diff()
{
    int j=0,squared=0,squaredSum=0,sumAll=0,result=0;
    for (int i=0;i<=100;i++)
    {
        j=j+i;
    }
    squared=j*j;

    for (int x=0;x<=100;x++)
    {
        squaredSum=x*x;
        sumAll=sumAll+squaredSum;
    }
    result=squared-sumAll;
    cout << "The result is: " << result << endl;
}

bool is_prime(int p) //for 10001st prime number
{
    bool result = true;

        for(int i=2; i<p; i++)
        {
            if(p % i == 0)
            {
                result = false;
                break;
            }
        }

        return result;
}
void Project::ten_thousand_1st_prime()
{
    int primeNum = 2;
    int limit = 10001;

        for(int i=0; i != limit; primeNum++)
        {
            if(is_prime(primeNum) == true)
            {
                i += 1;
            }
            if(i == limit)
            {
                break;
            }
        }
    cout << "The 10001st prime number is: " << primeNum << endl;
}

void Project::largest_product_in_series()
{
    ifstream myfile;
    string line, str;
    string numbers = "";

    int index = 0;
    int temp = 0;
    int y = 0;
    int prod = 1;
    int nextProd = 1;
    int getNumber[5];
    int greatProduct[5];
        myfile.open("1000digitNumber.txt");

    while(myfile.good())

    {
    getline(myfile, line);
    str = line;
    numbers += str;
    }
        string x;
        for(int i = 0; i < 1000 - 4;i++)

        {
        nextProd = 1;
        index = i;
        for(int k = 0; k < 5; k++)

        {
        x = numbers.at(index);
        stringstream(x) >> temp;
        y = temp;
        getNumber[k] = y;
        nextProd *= getNumber[k];
                    index++;
        }

        if(prod < nextProd)
        {
            prod = nextProd;
            for(int k = 0; k < 5; k++)

            {
            greatProduct[k] = getNumber[k];
            }
        }
        }

            cout << "The greatest product of 5 consecutive numbers: "<<prod << endl;
}

void Project::special_pytho_triplet()
{
    int a = 0, b = 0, c = 0,prod;
    int sum = 1000;
    bool found = false;
    for (a = 1; a < sum / 3; a++)
    {
        for (b = a; b < sum / 2; b++)
        {
            c = sum - a - b;

        if (a * a + b * b == c * c)
        {
            found = true;
            break;
        }
        }

        if (found)
        {
            break;
        }
    }

    prod = a*b*c;
    cout<<"The product of the Pythagorean triplet: "<< prod <<endl;
}

void Project::summation_of_primes()
{
    unsigned long long ans = 0;

	for (int i = 3; i < 2000000; i += 2)
	{
		if (is_prime(i))
		{
			ans += i;
		}
	}

	cout << ans + 2 << endl;
}

void Project::largest_product_grid(){

int num_array[20][20] =
    {
        { 8,02,22,97,38,15,00,40,00,75,04,05,07,78,52,12,50,77,91, 8},
        {49,49,99,40,17,81,18,57,60,87,17,40,98,43,69,48,04,56,62,00},
        {81,49,31,73,55,79,14,29,93,71,40,67,53,88,30,03,49,13,36,65},
        {52,70,95,23,04,60,11,42,69,24,68,56,01,32,56,71,37,02,36,91},
        {22,31,16,71,51,67,63,89,41,92,36,54,22,40,40,28,66,33,13,80},
        {24,47,32,60,99,03,45,02,44,75,33,53,78,36,84,20,35,17,12,50},
        {32,98,81,28,64,23,67,10,26,38,40,67,59,54,70,66,18,38,64,70},
        {67,26,20,68,02,62,12,20,95,63,94,39,63, 8,40,91,66,49,94,21},
        {24,55,58,05,66,73,99,26,97,17,78,78,96,83,14,88,34,89,63,72},
        {21,36,23, 9,75,00,76,44,20,45,35,14,00,61,33,97,34,31,33,95},
        {78,17,53,28,22,75,31,67,15,94,03,80,04,62,16,14, 9,53,56,92},
        {16,39,05,42,96,35,31,47,55,58,88,24,00,17,54,24,36,29,85,57},
        {86,56,00,48,35,71,89,07,05,44,44,37,44,60,21,58,51,54,17,58},
        {19,80,81,68,05,94,47,69,28,73,92,13,86,52,17,77,04,89,55,40},
        {04,52, 8,83,97,35,99,16,07,97,57,32,16,26,26,79,33,27,98,66},
        {88,36,68,87,57,62,20,72,03,46,33,67,46,55,12,32,63,93,53,69},
        {04,42,16,73,38,25,39,11,24,94,72,18, 8,46,29,32,40,62,76,36},
        {20,69,36,41,72,30,23,88,34,62,99,69,82,67,59,85,74,04,36,16},
        {20,73,35,29,78,31,90,01,74,31,49,71,48,86,81,16,23,57,05,54},
        {01,70,54,71,83,51,54,69,16,92,33,48,61,43,52,01,89,19,67,48},
    };

int begin = 0;
int end = 3;
int product = 1;

vector<long int>final_product;

    for(int i=0; i<20; i++)
        {
            for(int j=begin; j<=end; j++){
                product=product*num_array[i][j];
                if(j==end){
                final_product.push_back(product);
                product=1;
                begin++;
                end++;
                }
                if(j==19)
                break;
        }
    begin=0;
    end=3;
        for(int k=begin; k<=end; k++)
        {
            product=product*num_array[k][i];
            if(k==end){
            final_product.push_back(product);
            product=1;
            begin++;
            end++;
            }
            if(k==19){
            begin=0;
            end=3;
            break;
            }
        }
    }

int currentRow = 0;
    for(int i=0; i<=16; i++)
    {
        for(int j=0; j<=16; j++)
        {
            currentRow = i;
            for(int k=begin; k<=end; k++)
            {
            product = product * num_array[currentRow][k];
            currentRow++;
            if (k==end)
               final_product.push_back(product);
            }
            product = 1;
            begin++;
            end++;
        }
    begin = 0;
    end = 3;

        for(int j=0; j<=16; j++)
        {
            currentRow = i+3;
            for(int k=begin; k<=end; k++)
            {
            product = product * num_array[currentRow][k];
            currentRow--;
            if (k==end)
               final_product.push_back(product);
            }
            product = 1;
            begin++;
            end++;
        }
        begin = 0;
        end = 3;
    }
    int max_product=0;
    for(unsigned p=0; p<final_product.size(); p++){
        if(final_product[p]>max_product)
            max_product=final_product[p];
    }
    cout <<"The largest product in the grid is: "<< max_product << endl;
}

void Project::divisible_triangular_number(){
    int triangle=0;
    int n=1;
    while(Project::num_div(triangle)<500){
        triangle+=n;
        n++;
    }
    cout<<"Triangle with 500 divisors: " <<triangle << endl;
}
int Project::num_div(int number) {
    int numberDivisor = 0;
    int root = sqrt(number);

    for(int i = 1; i<= root; i++){
        if(number % i == 0){
            numberDivisor += 2;
        }
    }
    if (root * root == number) {
        numberDivisor--;
    }

    return numberDivisor;
}

void Project::large_sum(){
    int numbers[100][50];
    string line;
    int sum=0;
    int carry=0,remainder=0;
    vector<int>largeNumber;

    ifstream myfile;
    myfile.open("150digitNumber.txt");
    int j=0;
    while(myfile.good())
    {
        getline(myfile,line);
        for(int i=0;i<50;i++)
            numbers[j][i]=char_int(line[i]);
        j++;
    }
    myfile.close();

    int a=49;
    while(a>=0){
    sum=0;
        for(int b=0; b<100; b++)
            {
                sum =sum + numbers[b][a];}
                sum=sum+carry;
                carry=sum/10;
                remainder=sum-carry*10;
                largeNumber.insert(largeNumber.begin(),remainder);
                a--;
            }

    largeNumber.insert(largeNumber.begin(),carry);

    cout <<"The first ten digits of the sum: ";
    for(int i=0;i<9;i++)
    cout<<largeNumber[i];
    cout<<"\n";

}

int Project::char_int(char line){
    if(line == '0')
        return 0;
    if (line == '1')
        return 1;
    if (line == '2')
        return 2;
    if (line == '3')
        return 3;
    if (line == '4')
        return 4;
    if (line == '5')
        return 5;
    if (line == '6')
        return 6;
    if (line == '7')
        return 7;
    if (line == '8')
        return 8;
    if (line == '9')
        return 9;

    return 0;
}

void Project::longest_collatz_sequence()
{
    long int totalTerms=0;
    long int highestTerm=0;
    int highestTerm_num=0;

    for(int i=999999; i>1; i--)
        {
            totalTerms=collatzFunction(i);
            if(totalTerms>highestTerm){
                highestTerm=totalTerms;
                highestTerm_num=i;}
        }
    cout <<"Starting number that produces the longest chain: "<< highestTerm_num << endl;
}

int Project::collatzFunction(long long num){
    long int terms=1;
        while (num != 1)
        {
            if (num%2 == 0)
                num = num/2;
            else if (num%2 == 1)
                num = 3*num + 1;
            terms++;
        }
    return terms;
}

void Project::diophantine_reciprocals_a()
{
    dioph(Maximum);
	for (int a = 1000; a < Maximum; a++)
        {
            if (!composite[a])
            continue;

                int numDiv = 1, cn = a;
                    for (unsigned i = 0; 1 != cn && i < primes.size(); i++)
                    {
                        int	count = 0;
                        while (cn % primes[i] == 0)
                        {
                            cn /= primes[i];
                            count++;
                        }
                        numDiv *= (count * 2 + 1);
                    }
                int answer = (numDiv + 1) / 2;
                    if (answer > Limit)
                    {
                        cout <<"Value of n: " << a << endl;
                        break;
                    }
        }
}

void Project::dioph(int n)
{
	int	i, j;

	for (i = 2; i * i <= n; i++)
	{
		if (composite[i])
			continue;
		for (j = 2 * i; j <= n; j += i)
			composite[j] = 1;
            primes.push_back(i);
	}
	for (; i <= n; i++)
		if (!composite[i])
			primes.push_back(i);
}

void Project::power_digit_sum(){
    stringstream ss;
    string number = "";
    int answer = 0;
        ss.setf(ios::fixed);
        ss << setprecision(0) << pow(2, 1000);
        ss >> number;
            for(unsigned int i = 0; i < number.length(); i++)
                answer += atoi(number.substr(i,1).c_str());
    cout <<"The sum of the digits of 2^1000: "<< answer << endl;
}

void Project::number_letter_counts()
{
    string numbersA[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    string numbersB[18] = { "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
    string numbersC[10] = { "onehundred", "twohundred", "threehundred", "fourhundred", "fivehundred", "sixhundred", "sevenhundred", "eighthundred", "ninehundred", "onethousand" };

    int sum_of_all_letters=0;
    int i=0,start,j,k;
        while(i<10)
            {
            sum_of_all_letters+=numbersA[i].length();
            i++;
            }
            sum_of_all_letters-=4;
    i=0;
        while(i<10)
            {
                sum_of_all_letters+=numbersB[i].length();
                i++;
            }
    start=10;
    while(start<18)
        {
            sum_of_all_letters+=numbersB[start].length();
            for(i=1; i<10; i++)
                sum_of_all_letters+=numbersB[start].length()+numbersA[i].length();
                start++;
        }
    j=0;
    start=10;
    while(j<9){
        sum_of_all_letters+=numbersC[j].length();
        for(i=1; i<10; i++)
            sum_of_all_letters+=numbersC[j].length()+numbersA[i].length()+3;
        for(k=0; k<10; k++)
            sum_of_all_letters+=numbersC[j].length()+numbersB[k].length()+3;
        for(int p=10; p<18; p++)
            sum_of_all_letters+=numbersC[j].length()+numbersB[p].length()+3;
        while(start<18)
        {
            for(int a=1; a<10; a++)
                sum_of_all_letters+=numbersC[j].length()+numbersB[start].length()+numbersA[a].length()+3;
            start++;
        }
        start=10;
        j++;
    }
    sum_of_all_letters+=numbersC[9].length();
    cout<<"Number of letters from 1-1000: "<<sum_of_all_letters<<endl;
}

void Project::max_path_sum_one(){
int triangle [15][15] =
    {
        {75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {95, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {17, 47, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {18, 35, 87, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {20, 4, 82, 47, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {19, 1, 23, 75, 3, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {88, 2, 77, 73, 7, 63, 67, 0, 0, 0, 0, 0, 0, 0, 0},
        {99, 65, 4, 28, 6, 16, 70, 92, 0, 0, 0, 0, 0, 0, 0},
        {41, 41, 26, 56, 83, 40, 80, 70, 33, 0, 0, 0, 0, 0, 0},
        {41, 48, 72, 33, 47, 32, 37, 16, 94, 29, 0, 0, 0, 0, 0},
        {53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14, 0, 0, 0, 0},
        {70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57, 0, 0, 0},
        {91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48, 0, 0},
        {63, 66, 4, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31, 0},
        {4, 62, 98, 27, 23, 9, 70, 98, 73, 93, 38, 53, 60, 4, 23}};

        cout <<"Maximum total (without brute force): "<< route(15, triangle) << endl;
    }


int Project::maxSum (int num1, int num2, int up)
    {
        int biggest = num1;
        if(num2 > biggest)
            biggest = num2;
        return biggest + up;
    }


int Project::route(int num, int triangle[][15])
{
    for(int i = num-1; i >= 0; i--)
        {
            for(int j = 0; j+1 < num && triangle[i][j+1] != 0; j++)
                triangle[i-1][j] = maxSum(triangle[i][j], triangle[i][j+1], triangle[i-1][j]);
        }
            return triangle[0][0];
}

void Project::counting_sundays(){
    setDateStart(6, 1, 1901);
    cout <<"Number of Sundays: "<< sun1stMonth(2000) << endl;
}

void Project::setDateStart(int starting_day, int starting_month, int starting_year) {
   day = starting_day;
   month = starting_month;
   year = starting_year;
}

bool Project::isLeapYear()
{
    if(year % 100 == 0)
        {
            if(year % 400 == 0)
                return true;
            else
                return false;
        }

    else if(year % 4 == 0)
        return true;
    else
        return false;
}

int Project::daysMonth()
{
        if(month == 2)
            {
                if(isLeapYear())
                    return 29;
                else
                    return 28;
            }
    else if((month == 4) || (month == 6) || (month == 9) || (month == 11))
        return 30;
    else
        return 31;
}

void Project::updateDate(int numDays)
{
    day += numDays;
    if(day > daysMonth())
        {
            day -= daysMonth();
            month++;
        }
        if(month > 12)
            {
                month = 1;
                year++;
            }
}

int Project::sun1stMonth(int endYear)
{
    int sundays = 0;
    for(; year <= endYear; updateDate(7))
            {
                if(day == 1)
                sundays++;
            }
    return sundays;
}

void Project::factorial_digit_sum()

{
    // Solution for 100!
    string a = "93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864000000000000000000000000";
    cout <<"The sum of the digits of 100!: "<< sum_digits(a) << endl;
}

int Project::sum_digits(string a)
{
    int answer = 0;
    for(unsigned int i = 0; i < a.length(); i++)
        answer += atoi(a.substr(i,1).c_str());
    return answer;
}

int getScore(string s)
{
    int initScore = 0;
    for(unsigned int i = 0; i < s.length(); i++)
        initScore += (((int) s.at(i)) - 64);
    return initScore;
}

int getTotalScore(vector<string> names)
{
    int total = 0;
    for(unsigned int i = 0; i < names.size(); i++)
        total += (getScore(names[i]) * (i+1));
    return total;
}
void Project::name_scores()
{
    vector<string> names;
    ifstream namesFile("names.txt");
    char curChar;
    string curName = "";

        if(namesFile.is_open())
        {
        while(!namesFile.eof())
        {
            curChar = namesFile.get();
            if(isalpha(curChar))
                curName.push_back(curChar);
            else
            {
                if(!curName.empty())
                {
                    //store finished name
                    names.push_back(curName);
                    curName.clear();
                }
            }
        }
    }
    namesFile.close();
    sort(names.begin(), names.end());
    cout <<"The total name scores is: "<< getTotalScore(names) << endl;
}

