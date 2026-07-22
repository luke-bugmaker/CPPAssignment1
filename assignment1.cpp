# include <iostream>
# include <iomanip>
# include <fstream>


using namespace std;

void main()
{}

void MainMenu()
{
    cout << "Student ID : 12345678" << setw(10) << endl;
    cout << "Student Name : Hou Lee Shet" << setw(10) << endl;
    
    cout << "--------------------------------------------------" << endl;
    cout << "Welcome to Weather Information Processing System!" << endl;

    cout << "1)    Read in and process a configuration file" << endl;
    cout << "2)    Display city map" << endl;
    cout << "3)    Display could coverage map (couldiness index)" << endl;
    cout << "4)    Display cloud coverage map (LMH symbols)" << endl;
    cout << "5)    Display atmospheric pressure map (pressure index)" << endl;
    cout << "6)    Display atmospheric pressure map (LMH symbols)" << endl;
    cout << "7)    Show weather forecast summary report" << endl;
    cout << "8)    Quit" << endl;

    int menuChoice;
    cout << "Please enter your choice: ";
    cin >> menuChoice;

    CheckChoice(menuChoice);
}

void CheckChoice(int menuChoice)
{
    if (menuChoice < 1 || menuChoice > 8)
        cout << "You can only choose within 1 to 8" << endl;
}

void ConfigurationFile()
{
    cout << "[ Read in and process a configuration file ]" << endl;
    cout << "Please enter config filename : ";
    string configfile;
    cin >> configfile;
    ifstream ConfigurationFile;
    ConfigurationFile.open(configfile);
    if (!ConfigurationFile)
    {
        cerr << "Error opening : " << configfile << endl;
        reutrn -1;
    }

    cout << "Reading in GridX_IdxRange: " << ??? << "... done!" << endl;
    cout << "Reading in GridY_IdxRange: " << ??? << "... done!" << endl;

    cout << "Storing data from input file : " << endl;
    cout << "citylocation.txt ... done!" << endl;
    cout << "cloudcover.txt ... done!" << endl;
    cout << "pressure.txt ... done!" << endl;

    cout << "All records successfully stored. Going back to main menu ..." << endl;

    MainMenu();
    ConfigurationFile.close();
}


void CloudCoverageMap_cloudinessIndex()
{
    int CloudCoverValue = 0;
    int cloudinessIndex = 0;
    if (CloudCoverValue >= 0 && CloudCoverValue < 10){
        cloudinessIndex = 0;
    } else if (CloudCoverValue >= 10 && CloudCoverValue < 20) {
        cloudinessIndex = 1;
    } else if (CloudCoverValue >= 20 && CloudCoverValue < 30) {
        cloudinessIndex = 2;
    } else if (CloudCoverValue >= 30 && CloudCoverValue < 40) {
        cloudinessIndex = 3;
    } else if (CloudCoverValue >= 40 && CloudCoverValue < 50) {
        cloudinessIndex = 4;
    } else if (CloudCoverValue >= 50 && CloudCoverValue < 60) {
        cloudinessIndex = 5;
    } else if (CloudCoverValue >= 60 && CloudCoverValue < 70) {
        cloudinessIndex = 6;
    } else if (CloudCoverValue >= 70 && CloudCoverValue < 80) {
        cloudinessIndex = 7;
    } else if (CloudCoverValue >= 80 && CloudCoverValue < 90) {
        cloudinessIndex = 8;
    } else if (CloudCoverValue >= 90 && CloudCoverValue < 100) {
        cloudinessIndex = 9;
    }
}

void CloudCoverageMap_LMHSymbols()
{
    int CloudCoverValue = 0;
    string CloudinessSymbol = None;
    if (CloudCoverValue >= 0 && CloudCoverValue < 35) {
        CloudinessSymbol = L;
    } else if (CloudCoverValue >= 35 && CloudCoverValue < 65) {
        CloudinessSymbol = M;
    } else if (CloudCoverValue >= 65 && CloudCoverValue < 100) {
        CloudinessSymbol = L;
    }
}

void AtmosphericPressureMap_PressureIndex()
{
    int OriginalPressureValue = 0;
    int PressureIndex = 0;
    if (OriginalPressureValue >= 0 && OriginalPressureValue < 10){
        PressureIndex = 0;
    } else if (OriginalPressureValue >= 10 && OriginalPressureValue < 20) {
        PressureIndex = 1;
    } else if (OriginalPressureValue >= 20 && OriginalPressureValue < 30) {
        PressureIndex = 2;
    } else if (OriginalPressureValue >= 30 && OriginalPressureValue < 40) {
        PressureIndex = 3;
    } else if (OriginalPressureValue >= 40 && OriginalPressureValue < 50) {
        PressureIndex = 4;
    } else if (OriginalPressureValue >= 50 && OriginalPressureValue < 60) {
        PressureIndex = 5;
    } else if (OriginalPressureValue >= 60 && OriginalPressureValue < 70) {
        PressureIndex = 6;
    } else if (OriginalPressureValue >= 70 && OriginalPressureValue < 80) {
        PressureIndex = 7;
    } else if (OriginalPressureValue >= 80 && OriginalPressureValue < 90) {
        PressureIndex = 8;
    } else if (OriginalPressureValue >= 90 && OriginalPressureValue < 100) {
        PressureIndex = 9;
    }
}


void AtmosphericPressureMap_LMHSymbols()
{
    int OriginalPressureValue = 0;
    string PressureSymbol = None;
    if (OriginalPressureValue >= 0 && OriginalPressureValue < 35) {
        PressureSymbol = L;
    } else if (OriginalPressureValue >= 35 && OriginalPressureValue < 65) {
        PressureSymbol = M;
    } else if (OriginalPressureValue >= 65 && OriginalPressureValue < 100) {
        PressureSymbol = L;
    }
}

void option2()
// Display city map
{
    ifstream citylocation;
    citylocation.open("citylocation.txt");
}
