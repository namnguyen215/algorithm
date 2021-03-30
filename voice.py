import speech_recognition
import re
noi=speech_recognition.Recognizer()
with speech_recognition.Microphone() as source:
        print("Say something!")
        audio=noi.listen(source,phrase_time_limit=3)

words =noi.recognize_google(audio)

# ten=re.search("my name is (.*)",words)
# if ten:
#     print(f"Hello {ten[1]}")
# else:
#     "Hello there"
if "hello" in words:
    print("Hello you too!")
elif "goodbye" in words:
    print("Goodbye")
elif "how are you" in words:
    print("I am fine, thanks!")
else:
    print("Deo hieu noi gi!")