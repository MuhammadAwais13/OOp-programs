import random
from math import gcd

# Function to generate random prime numbers
def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def generate_prime():
    while True:
        num = random.randint(2, 100)
        if is_prime(num):
            return num

# Function to calculate modular inverse (using Extended Euclidean Algorithm)
def mod_inverse(a, m):
    m0, x0, x1 = m, 0, 1
    while a > 1:
        q = a // m
        m, a = a % m, m
        x0, x1 = x1 - q * x0, x0
    if x1 < 0:
        x1 += m0
    return x1

# RSA algorithm functions
def rsa_key_generation():
    p = generate_prime()
    q = generate_prime()
    n = p * q
    phi_n = (p - 1) * (q - 1)
    
    e = 3  # Public key exponent
    
    # Find the private key d such that (d * e) % phi_n = 1
    d = mod_inverse(e, phi_n)
    
    return (e, n), (d, n), p, q, phi_n

def encrypt_message(plain_text, e, n):
    return [(ord(char) ** e) % n for char in plain_text]

def decrypt_message(cipher_text, d, n):
    return ''.join([chr((char ** d) % n) for char in cipher_text])

# Main program
if __name__ == "__main__":
    # Key generation
    public_key, private_key, p, q, phi_n = rsa_key_generation()
    print(f"Public Key: {public_key}")
    print(f"Private Key: {private_key}")
    print(f"Prime numbers: p={p}, q={q}")
    print(f"Totient: φ(n)={phi_n}")
    
    # Message input and encryption
    message = input("Enter a message to encrypt (letters only): ").upper()
    encrypted_message = encrypt_message(message, public_key[0], public_key[1])
    print(f"Encrypted message: {encrypted_message}")
    
    # Decryption
    decrypted_message = decrypt_message(encrypted_message, private_key[0], private_key[1])
    print(f"Decrypted message: {decrypted_message}")
