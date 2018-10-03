# Qt_RollingStar
**一个Qt小应用，当你和室友不知道谁出去取外卖时可以用到它**
# 一. 环境
Win10 + Qt5.11.1 + QtCreator4.6.2  
# 二. 运行
* 配置好环境之后在Qt Creator里打开项目文件untitled.pro
* 选择main.cpp点击运行即可
# 三.功能简介
![主界面](https://github.com/codingzhj/Qt_RollingStar/blob/master/rm_pic/RollingStar_surface.png?raw=true)  
* 主界面由一个LCDnumber显示屏和两个Button构成  
* 菜单栏有Design和Help两个选项  
* Design下拉菜单柏寒两个子菜单，分别是Range和Speed，控制着滚动数字的范围和滚动速度  
* Help菜单下有一个About子菜单，记录着作者信息  
![Range](https://github.com/codingzhj/Qt_RollingStar/blob/master/rm_pic/Range.png?raw=true)  
![Speed](https://github.com/codingzhj/Qt_RollingStar/blob/master/rm_pic/Speed.png?raw=true)  
* 默认范围是0-100，设置好范围和速度之后就可以点击Start进行滚动数字了，点击End停止滚动
# 功能拓展
* 可以设置一个排行榜，将滚动数字记录下来并且进行排序，展示结果
