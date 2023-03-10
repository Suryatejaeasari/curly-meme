echo "Enter: "
read dir
if [ -d $dir ]; then
ls $dir/*.txt $dir/*.c
fi
