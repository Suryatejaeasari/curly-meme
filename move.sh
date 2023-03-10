echo "Enter: "
read dir
echo "Enter: "
read ndir
if [ -d $dir ]; then
mv ~/$dir * ~/$ndir
cd $ndir
ls
fi
