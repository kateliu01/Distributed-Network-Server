# Redis 基于缓存雪崩的解决方案
1. 采用分布式锁
   setnx key 60 value
   key 为 协议id + 请求参数，做一个sha256摘要
          60s内重复  协议id + 请求参数
2. 均匀设置过期时间
3. 设置随机过期时间
