def enkripsi_caesar(teks, ubah):
    ciphertext = ""
    for c in teks:
        if c.isalpha():
            ubahlah = chr((ord(c.lower()) - ord('a') + ubah) % 26 + ord('a'))
            ciphertext += ubahlah.upper() if c.isupper() else ubahlah
        else:
            ciphertext += c
    return ciphertext

def dekripsi_caesar(ciphertext, ubah):
    return enkripsi_caesar(ciphertext, 26 - ubah)

def main():
    ubah = 3
    kata = input("Masukan Teks Yang Ingin Dienkripsi: ")
    dekripsi_kata = kata
    print("Kata Yang Di Enkripsi:", dekripsi_kata)
    
    enkripsi = enkripsi_caesar(dekripsi_kata, ubah)
    print("Teks Enkripsi:", enkripsi)
    
    dekripsi = dekripsi_caesar(enkripsi, ubah)
    print("Teks Dekripsi:", dekripsi)

if __name__ == "__main__":
    main()
