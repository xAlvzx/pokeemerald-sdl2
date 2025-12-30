#!/bin/bash

# Define colors for output
GREEN='\033[0;32m'
BLUE='\033[0;34m'
RED='\033[0;31m'
NC='\033[0m' # No Color

echo -e "${BLUE}========================================${NC}"
echo -e "${BLUE}    Pokémon Emerald PC Build Script     ${NC}"
echo -e "${BLUE}========================================${NC}"
echo ""
echo "Please select the target platform:"
echo "1) Linux (Native)"
echo "2) Windows 64-bit (Cross-compile via MinGW)"
echo ""
read -p "Enter choice [1-2]: " choice

case $choice in
    1)
        echo ""
        echo -e "${GREEN}Building for Linux...${NC}"
        make -f Makefile_linux
        ;;
    2)
        echo ""
        echo -e "${GREEN}Building for Windows 64-bit...${NC}"
        make -f Makefile_windows
        ;;
    *)
        echo ""
        echo -e "${RED}Invalid choice. Exiting.${NC}"
        exit 1
        ;;
esac
