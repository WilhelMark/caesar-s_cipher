#include <iostream>
#include <string>

// Function to encrypt the text using Caesar cipher
std::string encrypt_caesar(const std::string& text, int shift) {
    std::string encrypted_text; // Variable to hold the encrypted text

    // Iterate over each character in the input text
    for (char ch : text) {
        // Check if the character is a lowercase letter
        if (ch >= 'a' && ch <= 'z') {
            // Calculate new character with wrap-around using modulo operation
            char new_ch = 'a' + (ch - 'a' + shift) % 26;
            encrypted_text += new_ch; // Append encrypted character to result
        }
        // Check if the character is an uppercase letter
        else if (ch >= 'A' && ch <= 'Z') {
            // Calculate new character with wrap-around using modulo operation
            char new_ch = 'A' + (ch - 'A' + shift) % 26;
            encrypted_text += new_ch; // Append encrypted character to result
        } else {
            // If it's not an alphabetic character, append it unchanged
            encrypted_text += ch;
        }
    }

    return encrypted_text; // Return the final encrypted string
}

int main() {
    std::string text; // Variable to hold user input text
    int shift; // Variable to hold the shift value

    // Get user input for text and shift value
    std::cout << "Enter text to encrypt: ";
    std::getline(std::cin, text); // Read full line including spaces
    std::cout << "Enter shift value: ";
    std::cin >> shift;

    // Call the encryption function and display the result
    std::string result = encrypt_caesar(text, shift);
    std::cout << "Encrypted text: " << result << std::endl;

    return 0; // Indicate successful termination of the program
}
