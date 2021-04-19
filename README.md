# Automatic-Input
You can automatically input your code which was edited on your favorite editor (e.g. Visual Studio Code) to the online editor that does not allow you to 
"copy and paste"!

# DEMO


# Features


# Requirement

* Python 3.8.5
* PyAutoGUI==0.9.52


# Installation

```bash
pip install pyautogui
```

# Usage

```bash
git clone https://github.com/Kitsuya0828/Automatic-Input.git
cd Automatic-Input
```

Firstly, you can specify the problem number in "automatic_input.py" as below;

```python
# 自動入力したい問題の番号
problem_num = 10
```

Then, you can run it from the command prompt just using the command:

```bash
python automatic_input.py
```

Automatic input will start in 10 seconds.

You should position your pointer to the online editor, and double-check you are using half-width characters.

# Note

This automatic input does not support full-width characters (e.g. Japanese text).

If you want to comment on your code in full-width characters, write a comment on the online editor after running automatic input.

# Author

* Kitsuya Azuma
* Tohoku University
* kitsuyaazuma@gmail.com

# License

"Automatic-Input" is under [MIT license](https://en.wikipedia.org/wiki/MIT_License).


Thank you!
