@REM this is for java
@echo Java
@set startTime=%time%
@echo Start Time: %startTime% 
java count 
@echo Finish Time:%time%
@echo *************************************************

@REM this is for c++ 
@echo C++
@echo Start Time: %startTime%
count.exe
@echo
@echo Finish Time: %time%
@echo *************************************************

@REM this is for python
@echo Python 
@echo Start Time: %startTime%
python count.py
@echo Finish Time: %time%
@echo *************************************************