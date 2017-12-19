import tensorflow as tf

ph = tf.placeholder(tf.float32, shape=[3,3])
var = tf.Variable([1,2,3,4,5,6], dtype=tf.float32)
const = tf.constant([10,20,30,40,50], dtype=tf.float32)

sess = tf.Session()
result1 = sess.run(const)
print(result1)

a = tf.constant([5])
b = tf.constant([10])
c = tf.constant([2])
d = a * b + c

sess = tf.Session()
result = sess.run(d)
print(result)



var1 = tf.Variable([5])
var2 = tf.Variable([3])
var3 = tf.Variable([2])

var4 = var1 * var2 + var3
sess = tf.Session()
init = tf.global_variables_initializer()
sess.run(init)
result = sess.run(var4)
print(result)



value1 = 5
value2 = 3
value3 = 2

ph1 = tf.placeholder(dtype = tf.float32)
ph2 = tf.placeholder(dtype = tf.float32)
ph3 = tf.placeholder(dtype = tf.float32)

result_val = ph1*ph2+ph3
fd_dic = {ph1: value1, ph2: value2, ph3: value3}
sess = tf.Session()
result = sess.run(result_val, feed_dict=fd_dic)
print(result)
