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



image = [[1, 2, 3, 4, 5], [5, 4, 3, 2, 1]]
label = [10, 20, 30, 40, 50]

ph_image = tf.placeholder(dtype = tf.float32)
ph_label = tf.placeholder(dtype = tf.float32)

result_tens = ph_image + ph_label
fd_dic = {ph_image: image, ph_label: label}
sess = tf.Session()
result = sess.run(result_tens, feed_dict=fd_dic)
print(result)
