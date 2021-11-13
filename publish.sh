#source ~/.bash_proﬁle
cd /usr/myworkspace/vuepress-starter-qq
git fetch --all
git reset --hard origin/dev
git pull
#chmod 777 publish_prod.sh
if [ -d "dist" ]
then
    rm -rf dist
    echo "删除dist目录"
fi
vuepress build docs
if [ -d "dist" ]
then
    current=`date "+%Y-%m-%d%H%M%S"`
    bakPath=/opt/dist_$current
    mv /opt/dist $bakPath
    echo "备份成功$bakPath"
    cp -r /usr/myworkspace/vuepress-starter-qq/dist /opt/
fi
echo "停止nginx"
systemctl stop nginx
sleep 5
echo "启动nginx"
systemctl start nginx
