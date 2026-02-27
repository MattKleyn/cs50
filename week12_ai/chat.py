from openai import OpenAI

client = OpanAI()

response = client.response.create(
    input = "In one sentence, what is CS50?",
    model = gpt-5
)

print(response.output_text)
