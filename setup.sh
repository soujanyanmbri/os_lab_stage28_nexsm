cd $HOME/mynexpos
./compile.sh
echo "All Files compiled successfully"

cd $HOME/mynexpos/nexfs-interface
./xfs-interface fdisk
./xfs-interface run ../batch.bat
./xfs-interface exit
echo "Required files are loaded"