echo "Current directory: $(pwd)"

#!/bin/bash

# Get the current script filename
SCRIPT_NAME=$(basename "$0")

# Get the current hour (24h format)
current_hour=$(date +%H)

# Rename the script file to the current hour
mv "$SCRIPT_NAME" "${current_hour}.txt"

# Confirm
echo "Script renamed to: ${current_hour}.txt"