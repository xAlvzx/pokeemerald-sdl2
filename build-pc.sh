#!/bin/bash

# build-pc.sh - Build script for pokeemerald-pc

echo "Select build target:"
echo "1) Windows (Cross-compile via MinGW)"
echo "2) Linux (Native)"
echo "3) Both"
read -p "Enter choice [1-3]: " choice

BUILD_CMD="make -f Makefile_pc"

case $choice in
    1)
        echo "Building for Windows..."
        $BUILD_CMD TARGET_OS=Windows
        ;;
    2)
        echo "Building for Linux..."
        $BUILD_CMD TARGET_OS=Linux
        ;;
    3)
        echo "Building for Windows..."
        $BUILD_CMD TARGET_OS=Windows
        echo "Building for Linux..."
        $BUILD_CMD TARGET_OS=Linux
        ;;
    *)
        echo "Invalid choice. Exiting."
        exit 1
        ;;
esac

echo "Build process finished."
