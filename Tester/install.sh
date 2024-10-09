#!/bin/bash


# Function to print in red
print_red() {
    echo -e "\033[31m$1\033[0m"
}

print_orange() {
    echo -e "\033[33m$1\033[0m"
}

print_green() {
    echo -e "\033[32m$1\033[0m"
}

# Display installation message
print_orange "========================================"
echo "Installation of Tester for Procedural Programming FIIT 2024/2025"
print_red "Disclaimer: The tester will be installed in the current directory."
echo "----------------------------------------"
echo "Instructions:"
echo "1. Place your .C files in the ./files directory."
echo "2. Run tester via \"./tester\""
echo "3. Compiled executables will be found in the ./compiled directory."
echo "4. Logs and results will be stored in the ./results directory."
print_orange "========================================"


printf "\n\n"

print_orange "Updating Repos via APT and Installing GCC + VALGRIND"

# Install valgrind and gcc
sudo apt-get update
sudo apt-get install -y valgrind gcc wget


print_green "Installed GCC + VALGRIND + WGET"

# Download the tester from GitHub
URL_TESTER="https://raw.githubusercontent.com/FedorViest/opp_prpr2024/refs/heads/main/Tester/dist.tar.gz"
URL_CONFIG="https://raw.githubusercontent.com/FedorViest/opp_prpr2024/refs/heads/main/Tester/config.yaml"
URL_TESTYML="https://raw.githubusercontent.com/FedorViest/opp_prpr2024/refs/heads/main/Tester/input.yaml"

printf "\n\n"
print_orange "Downloading necessary tester files from GitHub ...."

# Download and place the tester in the path folder
for url in $URL_TESTER $URL_CONFIG $URL_TESTYML;do
        print_orange "Downloading..."

        if wget -q $url; then
                print_green "Download Successfull!"
        else
                print_red "DOWNLOAD FAILED! EXITING..."
                exit 1
        fi
done


print_orange "Untar _dist package"

tar xvfz dist.tar.gz --strip-components=1

mv -f ./main ./tester
mv -f ./tester/main ./tester/tester

sudo chmod +x ./tester/tester

# Create directories
for dir in ./tester/files ./tester/compiled ./tester/results; do
    if ! mkdir -p $dir; then
        print_orange "Directory $dir already exists ... Skipping ..."
    fi
done

printf "\n\n"
print_green "Installation complete. Tester is available to use."
