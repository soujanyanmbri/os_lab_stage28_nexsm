cd $HOME/mynexpos/nespl/spl_progs
files=$(ls *.spl)
cd $HOME/mynexpos/nespl

for file in $files
	do
		./spl ./spl_progs/$file
	done	
cd $HOME/mynexpos/expl/samples
files2=$(ls *.expl)
cd $HOME/mynexpos/expl

for file2 in $files2
	do
		./expl ./samples/$file2
	done

cd $HOME/mynexpos
