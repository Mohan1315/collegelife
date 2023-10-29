from chatterbot import ChatBot
from chatterbot.trainers import ChatterBotCorpusTrainer

# Create a chatbot
chatbot = ChatBot('MyAssistant')

# Create a new trainer for the chatbot
trainer = ChatterBotCorpusTrainer(chatbot)

# Train the chatbot on English language data
trainer.train('chatterbot.corpus.english')

# Define a function to get responses from the chatbot
def get_response(user_input):
    response = chatbot.get_response(user_input)
    return str(response)

# Main loop for the chatbot
while True:
    user_input = input("You: ")
    if user_input.lower() == 'exit':
        break
    response = get_response(user_input)
    print("Bot: " + response)
