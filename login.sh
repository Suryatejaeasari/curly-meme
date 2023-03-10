NOWDATE=$(date +"%y-%m-%d")
NOWTIME=$(date +"%T")
USERS=$(who | awk '{print $1}')
for u in $USERS
do
echo "$NOWDATE,$NOWTIME user: $u"
done

