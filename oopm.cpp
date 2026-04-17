#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

struct Student {
    string id;
    string name;
    string address;
    string transport;
    string contact;
    float cost;
};

// Function to split words from address
vector<string> splitWords(string str) {
    vector<string> words;
    stringstream ss(str);
    string word;
    
    while (ss >> word) {
        words.push_back(word);
    }
    return words;
}

// Check if two addresses have common words
bool isCompatible(string addr1, string addr2) {
    vector<string> w1 = splitWords(addr1);
    vector<string> w2 = splitWords(addr2);

    for (string a : w1) {
        for (string b : w2) {
            if (a == b) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\n1. Add Student";
        cout << "\n2. Find Ride Matches";
        cout << "\n3. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            Student s;
            cin.ignore();

            cout << "Enter Student ID: ";
            getline(cin, s.id);

            cout << "Enter Name: ";
            getline(cin, s.name);

            cout << "Enter Address: ";
            getline(cin, s.address);

            cout << "Mode of Transport: ";
            getline(cin, s.transport);

            cout << "Contact Number: ";
            getline(cin, s.contact);

            cout << "Daily Travel Cost: ";
            cin >> s.cost;

            students.push_back(s);
            cout << "Student added successfully!\n";
        }

        else if (choice == 2) {
            cout << "\n--- Ride Sharing Matches ---\n";
            bool found = false;

            for (int i = 0; i < students.size(); i++) {
                for (int j = i + 1; j < students.size(); j++) {
                    
                    if (isCompatible(students[i].address, students[j].address)) {
                        found = true;
                        cout << "\nMatch Found:\n";
                        cout << students[i].name << " ↔ " << students[j].name << endl;
                        cout << "Contact: " << students[i].contact 
                             << " , " << students[j].contact << endl;
                    }
                }
            }

            if (!found) {
                cout << "No compatible students found.\n";
            }
        }

    } while (choice != 3);

    cout << "Program Ended.\n";
    return 0;
}