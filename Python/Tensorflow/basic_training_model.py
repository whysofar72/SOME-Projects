import tensorflow as tf

input_data = [[1,5,7,2,6,9,12], [10,20,40,50,80,30,70]]
label = [[0,1,1,0,0], [1,0,1,0,0]]

input_size = 7
hidden1_size = 10
hidden2_size = 8
classes = 5
L_rate = 0.059

x = tf.placeholder(tf.float32, shape = [None, input_size])
y = tf.placeholder(tf.float32, shape = [None, classes])

tensor_map = {x:input_data, y:label}


weight_hidden1 = tf.Variable(tf.truncated_normal(shape = [input_size, hidden1_size]), dtype = tf.float32)
bias_hidden1 = tf.Variable(tf.zeros(shape = [hidden1_size]), dtype = tf.float32)
hidden1 = tf.sigmoid(tf.matmul(x, weight_hidden1) + bias_hidden1)

weight_hidden2 = tf.Variable( tf.truncated_normal(shape = [hidden1_size, hidden2_size]), dtype = tf.float32) 
bias_hidden2 = tf.Variable( tf.zeros(shape = [hidden2_size]), dtype = tf.float32)
hidden2 = tf.sigmoid(tf.matmul(hidden1, weight_hidden2) + bias_hidden2)

weight_out = tf.Variable(tf.truncated_normal(shape = [hidden2_size, classes]), dtype = tf.float32) 
bias_out = tf.Variable(tf.zeros(shape = [classes]), dtype = tf.float32)
z = tf.sigmoid(tf.matmul(hidden2, weight_out) + bias_out)


cost = tf.reduce_mean(-y*tf.log(z)-(1-y)*tf.log(1-z))
train = tf.train.GradientDescentOptimizer(L_rate).minimize(cost)


sess = tf.Session()
init = tf.global_variables_initializer()
sess.run(init)
for i in range(20):
    _, loss = sess.run([train, cost], feed_dict = tensor_map)
    print("Step: ", i)
    print("loss: ", loss)
