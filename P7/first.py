import speech_recognition as sr
import pyttsx3

def take_command():
    recognizer = sr.Recognizer()
    with sr.Microphone() as source:
        print("Listening...")
        recognizer.adjust_for_ambient_noise(source)
        audio = recognizer.listen(source)
        try:
            print("Recognizing...")
            query = recognizer.recognize_google(audio)
            print("You: " + query)
        except Exception as e:
            print(e)
            query = None
        return query

def speak(text):
    engine = pyttsx3.init()
    engine.say(text)
    engine.runAndWait()

if __name__ == "__main__":
    speak("Hello! I am Jarvis. How can I assist you today?")
    while True:
        command = take_command().lower()
        if command == "exit":
            speak("Goodbye! Have a great day!")
            break
        elif command:
            # Add your logic here to process the command and generate appropriate responses.
            # For example, you could check if the command contains certain keywords and
            # respond accordingly.
            response = "I'm sorry, I don't understand."
            speak(response)
