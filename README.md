# cpp
[sublime配置c++](http://www.yalewoo.com/sublime_text_3_gcc.html)  
```
sublime cpp
{
	"encoding": "utf-8",
	"working_dir": "$file_path",
	"shell_cmd": "g++ -Wall -std=c++11 \"$file_name\" -o \"$file_base_name\"",
	"file_regex": "^(..[^:]*):([0-9]+):?([0-9]+)?:? (.*)$",
	"selector": "source.cpp",
 
	"variants": 
	[
		{	
		"name": "Run",
        	"shell_cmd": "g++ -Wall -std=c++11 \"$file\" -o \"$file_base_name\" && start cmd /c \"\"${file_path}/${file_base_name}\" & pause\""
		}
	]
}
```
