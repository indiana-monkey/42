find . -type f | awk '/.sh$/' | sed 's!^.*/!!' | sed -e 's/.sh$//' | tr -d " "
