# Delete output
find src/ -type f -not -name "*.c" -delete

# Compile everything
find src/ -type f -name "*.c" -exec gcc {} -o {}.out \;