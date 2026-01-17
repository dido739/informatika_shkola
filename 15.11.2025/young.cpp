#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

struct Competitors
{
    string name;
    string surname;
};
struct Date
{
    int day;
    int month;
    int year;
};
void parallelBubbleSort(vector<Competitors>& competitors, vector<Date>& date)
{
    int n = date.size();
    bool swapped;

    for (int i = 0; i < n - 1; ++i)
    {
        swapped = false;

        for (int j = 0; j < n - i - 1; ++j)
        {
            // 1. Determine if a swap is needed based on date comparison
            bool shouldSwap = false;

            // Primary comparison: Year
            if (date[j].year > date[j + 1].year) {
                shouldSwap = true;
            }
            // Secondary comparison: Month (if years are equal)
            else if (date[j].year == date[j + 1].year &&
                     date[j].month > date[j + 1].month) {
                shouldSwap = true;
                     }
            // Tertiary comparison: Day (if years and months are equal)
            else if (date[j].year == date[j + 1].year &&
                     date[j].month == date[j + 1].month &&
                     date[j].day > date[j + 1].day) {
                shouldSwap = true;
                     }

            // 2. Perform the parallel swap if required
            if (shouldSwap) {
                // Swap in the Date vector
                std::swap(date[j], date[j + 1]);

                // CRUCIAL: Swap the corresponding element in the Competitors vector
                // This keeps the pairs linked!
                std::swap(competitors[j], competitors[j + 1]);

                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}
int main()
{
    string line;
    // string arr[5]; // This array is not needed if you use the struct directly.
    vector<Competitors> competitors;
    vector<Date> date;

    // --- Start of Corrected Input Loop ---
    while (getline(cin, line)&&line.find("*") == string::npos) // 1. Read the line first
    {
        // 2. Check the line for the break condition

        // 3. Process the data line
        istringstream iss(line);
        Competitors c;
        Date d;
        // Create a new Competitor object for the current line

        // Read the components directly into the struct fields
        // Assuming the input format is: Name Surname Day Month Year
        if (iss >> c.name >> c.surname >> d.day >> d.month >>d.year)
        {
            competitors.push_back(c);
            date.push_back(d);// Add the complete object to the vector
        }
        // If the reading fails (e.g., incorrect format), this line is skipped.
    }
    // --- End of Corrected Input Loop ---
    for(int i=0;i<date.size();i++)
    {
        cout << competitors[i].name <<" "<< competitors[i].surname <<" "<<date[i].day << " "<<date[i].month << " "<<date[i].year<<endl;
    }
    // You can now process the 'competitors' vector here.
    parallelBubbleSort(competitors, date);

    // Output the sorted results
    cout << "\nSorted Results (Oldest to Youngest):" << endl;
    for(int i = 0; i < date.size(); i++)
    {
        cout << competitors[i].name << " "
             << competitors[i].surname << " "
             << date[i].day << "."
             << date[i].month << "."
             << date[i].year << endl;
    }
    cout << "\nYoungest:" << endl;
    cout << competitors[competitors.size() - 1].name << " "
         << competitors[competitors.size() - 1].surname << " "
         << date[date.size()-1].day << "."
         << date[date.size()-1].month << "."
         << date[date.size()-1].year << endl;
}