# Vigenère Cipher Encryption
def vigenere_encrypt(plaintext, keyword):
    ciphertext = []
    keyword_repeated = (keyword * (len(plaintext) // len(keyword))) + keyword[:len(plaintext) % len(keyword)]
    
    for p, k in zip(plaintext, keyword_repeated):
        p_value = ord(p.upper()) - ord('A')  # Convert plaintext letter to number
        k_value = ord(k.upper()) - ord('A')  # Convert keyword letter to number
        c_value = (p_value + k_value) % 26  # Vigenère encryption formula
        ciphertext.append(chr(c_value + ord('A')))  # Convert back to character
    
    return ''.join(ciphertext)


# Vigenère Cipher Decryption
def vigenere_decrypt(ciphertext, keyword):
    plaintext = []
    keyword_repeated = (keyword * (len(ciphertext) // len(keyword))) + keyword[:len(ciphertext) % len(keyword)]
    
    for c, k in zip(ciphertext, keyword_repeated):
        c_value = ord(c.upper()) - ord('A')  # Convert ciphertext letter to number
        k_value = ord(k.upper()) - ord('A')  # Convert keyword letter to number
        p_value = (c_value - k_value) % 26  # Vigenère decryption formula
        plaintext.append(chr(p_value + ord('A')))  # Convert back to character
    
    return ''.join(plaintext)


# Example usage
if __name__ == "__main__":
    plaintext = input("Enter plaintext: ").replace(" ", "").upper()  # Remove spaces and convert to uppercase
    keyword = input("Enter keyword: ").replace(" ", "").upper()  # Remove spaces and convert to uppercase

    encrypted_text = vigenere_encrypt(plaintext, keyword)
    print(f"Encrypted Text: {encrypted_text}")
    
    decrypted_text = vigenere_decrypt(encrypted_text, keyword)
    print(f"Decrypted Text: {decrypted_text}")
