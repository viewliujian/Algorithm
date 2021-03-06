****突如其来算法/Tu_Ru_Qi_Lai Algorithm****
指导思想：人不能两次踏入同一条河流

算法思考过程：
1. 蓝叠安卓系统模拟器上有安卓手机游戏绝地求生：刺激战场专版； 
     抽象: 蓝叠模拟器->绝地求生：刺激战场//实际上是：刺激战场->蓝叠模拟器
2. 经验告诉我：2017年第一季度韩国蓝洞公司发行了绝地求生PC版，刺激战场来源于绝地求生PC版；
     抽象：蓝洞公司->绝地求生->刺激战场
3. 事实告诉我：Steam是PC游戏平台，蓝洞公司通过Steam发行绝地求生；
     抽象：蓝洞公司->Steam->绝地求生
4. 另一个事实：绝地求生也催生了手机游戏：绝地求生.全军出击
5. 总结：
     蓝洞->Steam->绝地求生->刺激战场->蓝叠
                         ->全军出击
                         
6. 带alpha-beta剪枝的Tu_Ru_Qi_Lai Algorithm
   刺激战场的质量比全军出击好，舍弃全军出击分支，减少思考/搜索有效性
