#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

//  Format double function since I didn't like how there were so many decimal points
string formatDouble(double value, int decimalPlaces) {
//  Create string stream to manipulate the double value, since this was the way I found to make it work O(n) space
    ostringstream stream;
//  Utilize the iomanip library functions to limit the double value to 2 decimal places O(n) operation
    stream << fixed << setprecision(decimalPlaces) << value;
//  Return the formatted value as a string
    return stream.str();
}

//  Lowercase input function for edgecases of uppercase and lowercase letters having different ASSCII decimals
string lowerCaseString(const string& str){
//  Create copy of the str
  string lowerString = str;
//  Iterate through each character of the copy of str string (for each loop)
  for (char& c : lowerString) {
//  For each char c, change the character to an unsigned character to lowercase it then change it back to a signed character
      c = static_cast<char>(tolower(static_cast<unsigned char>(c)));
  }
//  Return the lowercased string
  return lowerString;
}

//  Function to convert the input temperature type string and input degree int
string convert(string type, int degree) {
//  Create lowerstring variable containing the lowercase type passed into function
  string lowerString = lowerCaseString(type);
//  If logic for converting centigrade to fahrenheit
    if (lowerString == "fahrenheit") {
//  Create double variable to store the result of the conversion equation for converting input centigrade to fahrenheit
      double fahrenheit = (1.8 * degree) + 32;
//  Return the string interpolation with the formatted result
      return "Centigrade conversion result: " + formatDouble(fahrenheit, 2) + " F";
//  If logic for converting fahrenheit to centigrade
    } else if (lowerString == "centigrade") {
//  Create double variable to store the result of the conversion equation for converting input fahrenheit to centigrade
        double centigrade = (degree - 32) * 5.0 / 9.0;
//  Return the string interpolation with the formatted result
        return "Fahrenheit conversion result: " + formatDouble(centigrade, 2) + " C";
//  Catch edge cases with any error message
    } else {
        return "Unknown temperature type";
    }
}

int main () {
/*
Input: 93.0 C
 
Expected: 199.40 F
 
Actual: 199.40 F
 
 */
  cout << "Samuel Wong - 8/28/2024" << endl;
//  Create string variable to store user conversion type input
  string temperatureType;
//  Create integer variable to store user degree input
  int degree;
//  Prompt user to input desired conversion
  cout << "Choose to choose to convert to centigrade or fahrenheit by entering the term" << endl;
//  Append input to temperatureType variable
  cin >> temperatureType;
//  If logic to output prompt based on inputted conversion type
  if(lowerCaseString(temperatureType) == "fahrenheit" ){
//  Prompt user to enter centigrade degree
    cout << "Enter centigrade degree to convert to fahrenheit" << endl;
//  Append degree input into degree variable
    cin >> degree;
  } else if(lowerCaseString(temperatureType) == "centigrade"){
//  Prompt user to enter fahrenheit degree
    cout << "Enter fahrenheit degree to convert to centigrade" << endl;
//  Append degree input into degree variable
    cin >> degree;
//  Catch all for edge cases for anything other than integers inputted
  } else {
    cout << "Unknown degree level" << endl;
    return 0;
  }
//  Output converted value
  cout << convert(temperatureType, degree) << endl;
//  Return out of the function
  return 1;
} // end of program