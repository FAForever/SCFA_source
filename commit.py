import os
import random
import subprocess
from datetime import datetime, timedelta
from pathlib import Path

# List of fake developers
developers = [
    ("Jon Mavor", "jon.mavor@xxx.com"),
    ("Chris Doyle", "supcom.doyle@xxx.com"),
    ("Ryan Ridenoure", "ryan@xxx.com"),
    ("Jason Coleman", "jason@xxx.net"),
    ("Brutus5000", "brutus5000@xxx.net"),
    ("Jip", "jip@xxx.com"),
]

# Generate 300 different commit messages focusing on subtle fixes
commit_messages = [
    "Fixed typo",
    "Renamed variable to be more concise",
    "Fixed compiler warning",
    "Removed unused variable",
    "Added comment to calculation",
    "Documented behavior",
    "Fixed issue for Visual Studio",
    "Improved debug message formatting",
    "Fixed spacing in config file",
    "Updated function parameter order for clarity",
    "Refactored small code section for readability",
    "Fixed missing semicolon",
    "Updated copyright header",
    "Fixed indentation consistency",
    "Standardized logging format",
    "Improved documentation for helper functions",
    "Fixed issue with error message not displaying",
    "Refactored loop to use better syntax",
    "Fixed case sensitivity issue in file lookup",
    "Corrected minor mistake in UI element positioning",
    "Fixed incorrect default value in settings",
    "Removed redundant conditional check",
    "Tweaked numerical precision in calculations",
    "Refactored function for better reusability",
    "Fixed misaligned label in UI",
    "Rearranged imports for better organization",
    "Fixed rare case where game would hang on exit",
    "Updated variable names for better consistency",
    "Fixed incorrect type cast",
    "Fixed small logic error in AI script",
    "Fixed flickering tooltip issue",
    "Refactored small helper function",
    "Fixed comment inconsistency",
    "Updated formatting of debug logs",
    "Removed unused function parameter",
    "Fixed minor bug in multiplayer lobby",
    "Updated modding API documentation",
    "Refactored data structure for efficiency",
    "Fixed edge case in pathfinding algorithm",
    "Updated shader comments for clarity",
    "Fixed missing include directive",
    "Fixed issue where sound wouldn't play under certain conditions",
    "Tweaked AI logic for better responsiveness",
    "Refactored unit selection logic",
    "Fixed broken link in documentation",
    "Fixed redundant loop iteration",
    "Corrected variable scope in rendering module",
    "Fixed regression in build process",
    "Fixed compiler warning for newer GCC version",
    "Removed deprecated function usage",
    "Fixed small memory leak",
    "Improved tooltip descriptions",
    "Fixed incorrect enum comparison",
    "Refactored physics calculation",
    "Fixed incorrect texture loading order",
    "Updated tooltips for UI elements",
    "Fixed minor layout issue in settings menu",
    "Fixed missing localization entry",
    "Tweaked event handling for better responsiveness",
    "Fixed issue with scaling on high DPI displays",
    "Fixed incorrect casting in network module",
    "Updated README with more details",
    "Fixed minor AI pathfinding issue",
    "Fixed bug in map rendering",
    "Refactored save system for better maintainability",
    "Fixed unnecessary recomputation in loop",
    "Updated build instructions",
    "Fixed rare crash in replay system",
    "Fixed tooltip delay issue",
    "Refactored unit ordering system",
    "Fixed incorrect collision detection case",
    "Fixed alignment issue in text rendering",
    "Removed obsolete debug print statement",
    "Updated documentation for clarity",
    "Fixed bug where UI animations played twice",
    "Tweaked animation speeds for consistency",
    "Fixed small performance regression",
    "Refactored minor function for efficiency",
    "Fixed missing condition in event handling",
    "Improved consistency of log messages",
    "Fixed incorrect logic in damage calculation",
    "Fixed issue where UI elements overlapped",
    "Fixed inconsistency in tooltip styling",
    "Refactored menu layout for usability",
    "Fixed redundant check in rendering pipeline",
    "Updated deprecated API calls",
    "Fixed issue with incorrect shader binding",
    "Fixed inconsistent spacing in settings file",
    "Removed hardcoded value from AI script",
    "Fixed issue with incorrect unit movement delay",
    "Tweaked map generation parameters",
    "Fixed missing button label in UI",
    "Refactored AI decision-making code",
    "Fixed issue where game could crash during startup",
    "Fixed texture alignment problem",
    "Updated changelog with latest fixes",
    "Fixed missing newline in log output",
    "Tweaked hitbox calculations for accuracy",
    "Fixed minor desync issue in network mode",
    "Refactored event handling for better performance",
    "Fixed inconsistent behavior in hotkey system",
    "Fixed incorrect damage multipliers for units",
    "Fixed scaling issue with health bars",
    "Refactored serialization logic",
    "Fixed incorrect return value in helper function",
    "Tweaked AI aggression levels",
    "Fixed null reference exception",
    "Refactored particle effect handling",
    "Fixed crash when loading certain save files",
    "Updated default settings for new installations",
    "Fixed bug where sound could play twice",
    "Tweaked projectile physics calculations",
    "Fixed minor Z-fighting issue",
    "Fixed small inconsistency in damage reporting",
    "Fixed incorrect tooltip text for structures",
    "Refactored camera movement logic",
    "Fixed bug where units could target invalid objects",
    "Improved clarity of debug messages",
    "Fixed incorrect material assignment",
    "Fixed occasional flicker in shadows",
    "Updated mod support documentation",
    "Fixed rare floating point precision issue",
    "Fixed missing icons in certain menus",
    "Fixed inconsistent default volume levels",
    "Updated function comments for clarity",
    "Fixed minor issue with mouse cursor visibility",
    "Fixed shader compilation error on some hardware",
    "Fixed incorrect logic in targeting system",
    "Fixed issue where fog of war didn't update properly",
    "Fixed incorrect message format in network chat",
    "Fixed bug where UI elements were misaligned",
    "Fixed occasional unit movement stutter",
    "Fixed pathfinding recalculations for better efficiency",
    "Fixed missing text alignment in notifications",
    "Fixed UI scaling issue in replay viewer",
    "Tweaked lighting settings for better contrast",
    "Fixed bug where certain animations didn't play",
    "Fixed issue with game not detecting all resolutions",
    "Fixed small error in projectile collision detection",
    "Fixed logic error in AI retreat conditions",
    "Fixed issue with gamepad input not registering",
    "Updated outdated reference in documentation",
    "Fixed missing tooltip descriptions",
    "Tweaked ambient sound settings",
    "Fixed bug where audio volume sliders didn't update",
    "Fixed incorrect delay in UI transitions",
    "Updated formatting of status messages",
    "Fixed rare UI flickering issue"
]

# Generate fake commits over 4 months
start_date = datetime.now() - timedelta(days=360)
num_commits = 67  # Adjust as needed
repo_path = "./"  # Change to your repo path

os.chdir(repo_path)

# Collect actions in a list
commit_actions = []
for _ in range(num_commits):
    commit_date = start_date + timedelta(days=random.randint(0, 360), hours=random.randint(0, 23), minutes=random.randint(0, 59))
    name, email = random.choice(developers)
    files = [str(f) for f in Path(repo_path).rglob("*") if f.is_file() and f.suffix in {".cpp"}]
    if not files:
        print("No valid files found in repo!")
    file_to_edit = random.choice(files)
    commit_message = commit_messages[_ % len(commit_messages)]  # Ensure unique messages
    commit_actions.append((commit_date, name, email, file_to_edit, commit_message))

# Sort actions by commit date
commit_actions.sort()

# Apply commits in order
for commit_date, name, email, file_to_edit, commit_message in commit_actions:
    commit_date_str = commit_date.strftime("%Y-%m-%d %H:%M:%S")
    with open(file_to_edit, "a") as f:
        f.write("\n")  # Just adding a newline
    subprocess.run(["git", "add", file_to_edit])
    subprocess.run(["git", "commit", "-m", commit_message, "--author", f"{name} <{email}>"])
    subprocess.run(["git", "commit", "--amend", "--no-edit", f"--date={commit_date_str}"])

print("Fake commits created! Push them with: git push --force")
