from google.adk.agents import Agent

researcher = Agent(
    name="researcher",
    model="gemini-3.5-flash",
    description="Researches marketing trends for a given product or industry.",
    instruction="""You are a senior market research analyst.
When given a product or industry, provide:
    - Current marketing trends (3-5 bullet points)
    - Key competitor messaging themes
    - Audience pain points and motivators
Be concise, specific, and actionable.""",
)