if ! [ -d "build" ]; then
  mkdir build
fi
cd build
cmake ..
if make -j4
then
  ./Text_Ed ../res/file.txt
else
  echo "Build failed, exiting..."
  exit 1
fi
