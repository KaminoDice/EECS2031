```bash
(base) sakuratsuki@Mahoumori EECS2031 % cd Lab/Lab2 
(base) sakuratsuki@Mahoumori Lab2 % manyCmd.sh
zsh: command not found: manyCmd.sh
(base) sakuratsuki@Mahoumori Lab2 % ./manyCmds.sh whoami pwd cal groups date
sakuratsuki
/Users/sakuratsuki/1710lab/EECS2031/Lab/Lab2
      五月 2023     
日 一 二 三 四 五 六  
    1  2  3  4  5  6  
 7  8  9 10 11 12 13  
14 15 16 17 18 19 20  
21 22 23 24 25 26 27  
28 29 30 31       
                  
staff everyone localaccounts _appserverusr admin _appserveradm _lpadmin com.apple.sharepoint.group.1 _appstore _lpoperator _developer _analyticsusers com.apple.access_ftp com.apple.access_screensharing com.apple.access_ssh com.apple.access_remote_ae
2023年 5月25日 星期四 13时09分04秒 EDT
(base) sakuratsuki@Mahoumori Lab2 % git status
On branch main
Your branch is up to date with 'origin/main'.

nothing to commit, working tree clean
(base) sakuratsuki@Mahoumori Lab2 % git pull 
Enter passphrase for key '/Users/sakuratsuki/.ssh/id_rsa': 
Already up to date.
(base) sakuratsuki@Mahoumori Lab2 % git pull
Enter passphrase for key '/Users/sakuratsuki/.ssh/id_rsa': 
remote: Enumerating objects: 24, done.
remote: Counting objects: 100% (24/24), done.
remote: Compressing objects: 100% (16/16), done.
remote: Total 21 (delta 1), reused 21 (delta 1), pack-reused 0
Unpacking objects: 100% (21/21), 2.64 KiB | 300.00 KiB/s, done.
From github.com:KaminoDice/EECS2031
   49cf7da..45d3c88  main       -> origin/main
Updating 49cf7da..45d3c88
Fast-forward
 .function.sh.swp                   | Bin 0 -> 12288 bytes
 ClassActivity/Week4/CCline.txt     |   5 +++++
 ClassActivity/Week4/CClineDEL.sh   |   1 +
 ClassActivity/Week4/authLoop.sh    |  14 ++++++++++++++
 ClassActivity/Week4/digital.txt    |  14 ++++++++++++++
 ClassActivity/Week4/digital2.txt   |   5 +++++
 ClassActivity/Week4/groceryList.sh |   6 ++++++
 ClassActivity/Week4/isEmpty.sh     |   9 +++++++++
 ClassActivity/Week4/linecounter.sh |  11 +++++++++++
 ClassActivity/Week4/myAuth.sh      |  12 ++++++++++++
 ClassActivity/Week4/sed.sh         |   3 +++
 ClassActivity/Week4/setPerm.sh     |  10 ++++++++++
 Quiz/color.sh                      |  14 ++++++++++++++
 Quiz/echon.sh                      |   8 ++++++++
 function.sh                        |  14 ++++++++++++++
 sedpro.txt                         |   1 +
 16 files changed, 127 insertions(+)
 create mode 100644 .function.sh.swp
 create mode 100644 ClassActivity/Week4/CCline.txt
 create mode 100644 ClassActivity/Week4/CClineDEL.sh
 create mode 100644 ClassActivity/Week4/authLoop.sh
 create mode 100644 ClassActivity/Week4/digital.txt
 create mode 100644 ClassActivity/Week4/digital2.txt
 create mode 100644 ClassActivity/Week4/groceryList.sh
 create mode 100644 ClassActivity/Week4/isEmpty.sh
 create mode 100644 ClassActivity/Week4/linecounter.sh
 create mode 100644 ClassActivity/Week4/myAuth.sh
 create mode 100644 ClassActivity/Week4/sed.sh
 create mode 100644 ClassActivity/Week4/setPerm.sh
 create mode 100644 Quiz/color.sh
 create mode 100644 Quiz/echon.sh
 create mode 100644 function.sh
 create mode 100644 sedpro.txt
(base) sakuratsuki@Mahoumori Lab2 % 
 *  还原的历史记录 

(base) sakuratsuki@Mahoumori Lab2 % [[ 1 == 1 ]]; echo #?
zsh: no matches found: #?
(base) sakuratsuki@Mahoumori Lab2 % [[ 1 == 1 ]]; echo "#?"
#?
(base) sakuratsuki@Mahoumori Lab2 % [[ 1 == 1 ]]; echo "$?"
0
(base) sakuratsuki@Mahoumori Lab2 % [[ 1 == 1 ]]; echo $?  
0
(base) sakuratsuki@Mahoumori Lab2 % 
 *  还原的历史记录 

(base) sakuratsuki@Mahoumori Lab2 %  
 *  还原的历史记录 

(base) sakuratsuki@Mahoumori Lab2 % 
 *  还原的历史记录 

(base) sakuratsuki@Mahoumori Lab2 % 
```
