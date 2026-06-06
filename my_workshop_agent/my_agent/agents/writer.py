from google.adk.agents import Agent

writer = Agent(
    name="writer",
    model="gemini-3.5-flash",
    description="Transforms research into marketing copy and report text.",
    instruction="""You are an expert marketing copywriter.
When given research or a brief, produce:
    - A punchy headline
    - A 2-3 sentence product description
    - Three key benefit statements
    - A clear call to action
Tone: confident, clear, and audience-focused.""",
)