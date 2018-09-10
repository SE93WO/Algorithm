# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

import tensorflow as tf
import numpy as np

mnist = tf.contrib.learn.datasets.load_dataset("mnist")
train_data = mnist.train.images 
train_labels = np.asarray(mnist.train.labels, dtype=np.int32)
eval_data = mnist.test.images 
eval_labels = np.asarray(mnist.test.labels, dtype=np.int32)
  
def resnet(features, labels, mode):
    input_layer = tf.reshape(features["x"], [-1, 28, 28, 1])
    
    with tf.variable_scope("residual_01"):
        conv1 = tf.layers.conv2d(inputs=input_layer, filters=64, kernel_size=[3, 3], padding="same")
        conv1 = tf.layers.batch_normalization(conv1)
        conv1 = tf.nn.relu(conv1)
    
    with tf.variable_scope("residual_02"):
        conv2_shortcut = tf.layers.conv2d(inputs=conv1, filters=64, kernel_size=[1, 1], padding="same")
        
        conv2_1 = tf.layers.conv2d(inputs=conv1, filters=64, kernel_size=[3, 3], padding="same")
        conv2_1 = tf.layers.batch_normalization(conv2_1)
        conv2_1 = tf.nn.relu(conv2_1)
        
        conv2_2 = tf.layers.conv2d(inputs=conv2_1, filters=64, kernel_size=[3, 3], padding="same")
        conv2_2 = tf.layers.batch_normalization(conv2_2)
        conv2_2 = conv2_2 + conv2_shortcut
        conv2_2 = tf.nn.relu(conv2_2)
        
        conv2_3 = tf.layers.conv2d(inputs=conv2_2, filters=64, kernel_size=[3, 3], padding="same")
        conv2_3 = tf.layers.batch_normalization(conv2_3)
        conv2_3 = tf.nn.relu(conv2_3)
        
        conv2_4 = tf.layers.conv2d(inputs=conv2_3, filters=64, kernel_size=[3, 3], padding="same")
        conv2_4 = tf.layers.batch_normalization(conv2_4)
        conv2_4 = conv2_2 + conv2_4
        conv2_4 = tf.nn.relu(conv2_4)
    
        
    with tf.variable_scope("residual_03"):
        conv3_shortcut = tf.layers.conv2d(inputs=conv2_4, filters=128, kernel_size=[1, 1], padding="same")
        
        conv3_1 = tf.layers.conv2d(inputs=conv2_4, filters=128, kernel_size=[3, 3], padding="same")
        conv3_1 = tf.layers.batch_normalization(conv3_1)
        conv3_1 = tf.nn.relu(conv3_1)
        
        conv3_2 = tf.layers.conv2d(inputs=conv3_1, filters=128, kernel_size=[3, 3], padding="same")
        conv3_2 = tf.layers.batch_normalization(conv3_2)
        conv3_2 = conv3_2 + conv3_shortcut
        conv3_2 = tf.nn.relu(conv3_2)
        
        conv3_3 = tf.layers.conv2d(inputs=conv3_2, filters=128, kernel_size=[3, 3], padding="same")
        conv3_3 = tf.layers.batch_normalization(conv3_3)
        conv3_3 = tf.nn.relu(conv3_3)
        
        conv3_4 = tf.layers.conv2d(inputs=conv3_3, filters=128, kernel_size=[3, 3], padding="same")
        conv3_4 = tf.layers.batch_normalization(conv3_4)
        conv3_4 = conv3_2 + conv3_4
        conv3_4 = tf.nn.relu(conv3_4)
    
    with tf.variable_scope("residual_04"):
        conv4_shortcut = tf.layers.conv2d(inputs=conv3_4, filters=128, kernel_size=[1, 1], padding="same")
        
        conv4_1 = tf.layers.conv2d(inputs=conv3_4, filters=128, kernel_size=[3, 3], padding="same")
        conv4_1 = tf.layers.batch_normalization(conv4_1)
        conv4_1 = tf.nn.relu(conv4_1)
        
        conv4_2 = tf.layers.conv2d(inputs=conv4_1, filters=128, kernel_size=[3, 3], padding="same")
        conv4_2 = tf.layers.batch_normalization(conv4_2)
        conv4_2 = conv4_2 + conv4_shortcut
        conv4_2 = tf.nn.relu(conv4_2)
        
        conv4_3 = tf.layers.conv2d(inputs=conv4_2, filters=128, kernel_size=[3, 3], padding="same")
        conv4_3 = tf.layers.batch_normalization(conv4_3)
        conv4_3 = tf.nn.relu(conv4_3)
        
        conv4_4 = tf.layers.conv2d(inputs=conv4_3, filters=128, kernel_size=[3, 3], padding="same")
        conv4_4 = tf.layers.batch_normalization(conv4_4)
        conv4_4 = conv4_2 + conv4_4
        conv4_4 = tf.nn.relu(conv4_4)
    
    with tf.variable_scope("pooling"):
        pool = tf.layers.average_pooling2d(inputs=conv4_4, pool_size=[2, 2], strides=1, padding="same")
        flatten = tf.layers.flatten(pool)
        logits = tf.layers.dense(inputs=flatten, units=10)
    
    predictions = {
      "classes": tf.argmax(input=logits, axis=1),
      "probabilities": tf.nn.softmax(logits, name="softmax_tensor")
    }
    
    if mode == tf.estimator.ModeKeys.PREDICT:
        return tf.estimator.EstimatorSpec(mode=mode, predictions=predictions)    
    
    loss = tf.losses.sparse_softmax_cross_entropy(labels=labels, logits=logits)

    if mode == tf.estimator.ModeKeys.TRAIN:
        optimizer = tf.train.GradientDescentOptimizer(learning_rate=0.001)
        train_op = optimizer.minimize(
                loss=loss,
                global_step=tf.train.get_global_step())
    return tf.estimator.EstimatorSpec(mode=mode, loss=loss, train_op=train_op)
    
    eval_metric_ops = {
      "accuracy": tf.metrics.accuracy(
          labels=labels, predictions=predictions["classes"])}
    return tf.estimator.EstimatorSpec(
             mode=mode, loss=loss, eval_metric_ops=eval_metric_ops)    

model = tf.estimator.Estimator(model_fn=resnet, model_dir="/temp/model")

train_input_fn = tf.estimator.inputs.numpy_input_fn(
    x={"x": train_data},
    y=train_labels,
    batch_size=32,
    num_epochs=None,
    shuffle=True)
model.train(
    input_fn=train_input_fn,
    steps=20)

eval_input_fn = tf.estimator.inputs.numpy_input_fn(
    x={"x": eval_data},
    y=eval_labels,
    num_epochs=1,
    shuffle=False)
eval_results = model.evaluate(input_fn=eval_input_fn)
print(eval_results)