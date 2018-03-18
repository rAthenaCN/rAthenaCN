rAthenaCN 汉化项目组
=======

构建状态: [![Build Status](https://travis-ci.org/rathena/rathena.png?branch=master)](http://www.rAthenaCN.com)

目录
---------
1. 项目普及
2. 获取准备
3. 安装指南
4. 解决方案
5. 常用链接
6. 更多文档

1. 项目普及
---------
rAthena是一个协作软件开发项目，围绕创建强大的大型多人在线角色扮演游戏（MMORPG）服务器包进行。
用C编写，该程序非常灵活，可以提供NPC修改。该项目由世界各地的一组志愿者共同管理，
以及提供质量保证和支持的巨大社区。rAthena是eAthena项目的延续。

2. 获取准备
---------
在安装rAthena之前，您将需要某些工具和应用程序。这在可用的不同操作系统之间有所不同，所以下面将分解为Windows和Linux的先决条件。

* Windows
	* MySQL ( http://www.mysql.com/downloads/mysql/ )
	* MySQL Workbench ( http://www.mysql.com/downloads/workbench/ )
	* MS Visual C++ ( http://www.microsoft.com/visualstudio/en-us/products/2010-editions/visual-cpp-express )
	* TortoiseGIT ( http://code.google.com/p/tortoisegit/ )
	* MSysGit ( http://msysgit.github.io/ or https://github.com/msysgit/git/releases )

* Linux (软件包的名称可能需要某些分发版本的特定版本号)
	* gcc
	* make
	* mysql
	* mysql-devel
	* mysql-server
	* pcre-devel
	* zlib-devel
	* git

3. 安装指南 
---------
本节是一组非常简短的安装说明。有关您的操作系统的更简明指南，请参阅Wiki (文末尾的链接)

* Windows
	* Install prerequisites
	* Create a folder to download rAthena into (e.g. C:\rAthena)
	* Right click this folder and select "Git Clone"
	* Paste the GitHub URL into the box:

				https://github.com/rathena/rathena.git
	* Open MySQL Workbench and create an instance to connect to your MySQL Server
	* Create a database (rathena), a user (rathena), give permissions (GRANT SELECT,INSERT,UPDATE,DELETE)
		and then login using the new user
	* Use MySQL Workbench to run the .sql files in /sql-files/ on the new rathena database

* Linux
	* Type:
		* (For CentOS)

				yum install gcc make mysql mysql-devel mysql-server pcre-devel zlib-devel git
		* (For Debian)

				apt-get install git make gcc libmysqlclient-dev zlib1g-dev libpcre3-dev
	* Type:

				mysql_secure_installation
	* Start your MySQL server
	* Setup a MySQL user:

				CREATE USER 'rathena'@'localhost' IDENTIFIED BY 'password';
	* Assign permissions:

				GRANT SELECT,INSERT,UPDATE,DELETE ON `rathena\_rag`.* TO 'rathena'@'localhost';
	* Clone a GIT repository:

				git clone https://github.com/rathena/rathena.git ~/rathena
	* Insert SQL files:

				mysql --user=root -p rathena_rag < trunk/sql-files/main.sql (and others)
	* Configure and compile:

				./configure && make clean && make server
	* When you're ready, start the servers:

				./athena-start start



4. 解决方案
---------
如果您在启动服务器时遇到问题，您应该做的第一件事是检查控制台上发生了什么。
更常见的情况不是，所有支持问题都可以通过查看给出的错误信息来解决。

例子:

* 您的地图服务器上出现如下错误:

			[Error]: npc_parsesrcfile: Unable to parse, probably a missing or extra TAB in 
				file 'npc/custom/jobmaster.txt', line '17'. Skipping line...
				* w1=prontera,153,193,6 script
				* w2=Job Master
				* w3=123,{
				* w4=

    如果你看看这个错误，它会告诉你你错过了 (或者有一个额外的) TAB.
		通过查看这部分错误可以很容易地解决这个问题:

				* w1=prontera,153,193,6 script

	If there was a TAB where it's supposed to be, that line would have prontera,153,193,6 at w1
		and 'script' at w2. As there's a space instead of a TAB, the two sections are read as a
		single parameter.

* You have a default user/password warning similar to the following:

			[Warning]: Using the default user/password s1/p1 is NOT RECOMMENDED.
			[Notice]: Please edit your 'login' table to create a proper inter-server user/pa
			ssword (gender 'S')
			[Notice]: and then edit your user/password in conf/map_athena.conf (or conf/impo
			rt/map_conf.txt)

    Relax. This is just indicating that you're using the default username and password. To
		fix this, check over the part in the installation instructions relevant to the `login` table.
	
* Your map-server outputs the following:

			[Error]: make_connection: connect failed (socket #2, error 10061: No connection
			could be made because the target machine actively refused it.
			)!

    If this shows up on the map server, it generally means that there is no Char Server available
		to accept the connection.



5. 常用链接
---------
* rAthenaCN 主页 [中文]
	* http://www.rAthenaCN.com/
	
* rAthenaCN 模拟器源码 [中文] GIT 代码库
	* https://github.com/rAthenaCN/rAthenaCN.git

* ROClientFullCN 完整客户端 [中文] GIT 代码库
	* https://github.com/rAthenaCN/ROClientFullCN.git

* ROClientPatchCN 客户端补丁 [中文] GIT 代码库
	* https://github.com/rAthenaCN/ROClientPatchCN.git

* rAthena 论坛 [官方]
	* https://rathena.org/
	
* rAthena 模拟器源码 [英文] GIT 代码库
	* https://github.com/rathena/rathena
	
* 各类系统安装说明
	* Windows: https://rathena.org/wiki/Installation_on_Windows
	* CentOS: https://rathena.org/wiki/Installation_(CentOS)
	* Debian: https://rathena.org/wiki/Installation_(Debian)
	* FreeBSD: https://rathena.org/wiki/Installation_(FreeBSD)
	
* rAthena [官方] IRC Channel
	* irc://irc.rizon.net/rathena
	* Web Chat: https://rathena.org/board/page/chat.html

* rAthena [官方] Wiki
	https://rathena.org/board/index.php?app=ipbwiki

* Fork and Pull Request Q&A
	https://rathena.org/board/topic/86913-pull-request-qa/


6. 更多文档
---------
rAthena拥有大量的帮助文件和位于/ doc /目录中的示例NPC脚本。这些包括对NPC脚本命令，atcommands（@），
组权限，项目奖金和数据包结构以及许多其他主题的详细解释。我们建议所有用户花时间在其他地方寻求帮助之前查看此目录。
