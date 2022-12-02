cmake_minimum_required(VERSION 3.21)
project(sfml_template)

set(CMAKE_CXX_STANDARD 14)

add_executable(sfml_template main.cpp Application.cpp Application.h Textbox.cpp Textbox.h GUIcomponent.cpp GUIcomponent.h EventHandler.cpp EventHandler.h SnapshotInterface.cpp SnapshotInterface.h Snapshot.cpp Snapshot.h StatesEnum.h States.cpp States.h HistoryNode.h History.cpp History.h KeyShortCuts.cpp KeyShortCuts.h MouseEvents.cpp MouseEvents.h Typing.cpp Typing.h InputBox.cpp InputBox.h TextInput.cpp TextInput.h TextInputSnapshot.cpp TextInputSnapshot.h)
target_link_libraries(sfml_template sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)