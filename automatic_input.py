import pyautogui
import shutil
import time
import os


# 自動入力したい問題の番号
problem_num = 10

# p**.c ファイルの拡張子を .txt に変更し，texts フォルダに格納する 
shutil.copy(f'./problems/p{problem_num}.c', f'./texts/p{problem_num}.txt')

# p**.txtファイルを読み込みモードで開く
file_data = open(f'./texts/p{problem_num}.txt')

# 自動入力が始まるまでのカウントダウン
for remaining in range(10,0,-1):
    print(f'{remaining} seconds remaining ...\n* Position your pointer to the online editor!\n* Double-check you are using half-width characters!')
    time.sleep(1)
    os.system('cls')

print('Now typing...')

# 読み込んだテキストファイルを１行ずつ自動入力
for line in file_data:

    # 自動インデントが入るため，改行文字と左端の空白を削除して自動入力
    pyautogui.typewrite(line.lstrip().rstrip('\n'))

    # 予測変換を無視するため，Space キーと backspace キーを一度ずつ押下する
    pyautogui.keyDown('space')
    pyautogui.keyDown('backspace')

    # 改行してから少し待った方が見ていて楽しい
    pyautogui.keyDown('enter')
    time.sleep(0.1)

# 開いたファイルを閉じる
file_data.close()

print('Done')