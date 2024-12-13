def caesar_encrypt(plaintext, shift):
    ciphertext = []
    for char in plaintext:
        if char.isalpha():
            shift_base = 65 if char.isupper() else 97
            encrypted_char = chr((ord(char) - shift_base + shift) % 26 + shift_base)
            ciphertext.append(encrypted_char)
        else:
            ciphertext.append(char)
    return ''.join(ciphertext)


def caesar_decrypt(ciphertext, shift):
    plaintext = []
    for char in ciphertext:
        if char.isalpha():
            shift_base = 65 if char.isupper() else 97
            decrypted_char = chr((ord(char) - shift_base - shift) % 26 + shift_base)
            plaintext.append(decrypted_char)
        else:
            plaintext.append(char)
    return ''.join(plaintext)


def brute_force_attack(ciphertext):
    print("Brute Force Attack Results:")
    for shift in range(1, 26):
        decrypted_text = caesar_decrypt(ciphertext, shift)
        print(f"Shift {shift}: {decrypted_text}")


if __name__ == "__main__":
    plaintext = input("Enter plaintext: ")
    shift = int(input("Enter shift value (1-25): "))

    encrypted_text = caesar_encrypt(plaintext, shift)
    print(f"Encrypted Text: {encrypted_text}")

    decrypted_text = caesar_decrypt(encrypted_text, shift)
    print(f"Decrypted Text: {decrypted_text}")

    ciphertext = input("\nEnter ciphertext to perform brute-force attack on: ")
    brute_force_attack(ciphertext)
