# -*- coding: utf-8 -*-
"""
Created on Fri Sep 14 03:02:11 2018

@author: se93w
"""

import tensorflow as tf

l2 = tf.contrib.layers.l2_regularizer(scale=0.01)
def inception(input, filters_1x1, filters_3x3_reduce, filters_3x3, filters_5x5_reduce, filters_5x5, filters_pool_proj):
    conv_1x1 = tf.layers.conv2d(inputs=input,
                                filters=filters_1x1,
                                kernel_size=(1,1),
                                padding='same',
                                activation='relu',
                                kernel_regularizer=l2)
    
    conv_3x3_reduce = tf.layers.conv2d(inputs=input,
                                       filters=filters_3x3_reduce,
                                       kernel_size=(1,1),
                                       padding='same',
                                       activation='relu',
                                       kernel_regularizer=l2)
    
    conv_3x3 = tf.layers.conv2d(inputs=conv_3x3_reduce,
                                filters=filters_3x3,
                                kernel_size=(3,3),
                                padding='same',
                                activation='relu',
                                kernel_regularizer=l2)
    
    conv_5x5_reduce = tf.layers.conv2d(inputs=input,
                                       filters=filters_5x5_reduce,
                                       kernel_size=(5,5),
                                       padding='same',
                                       activation='relu',
                                       kernel_regularizer=l2)
    
    conv_5x5 = tf.layers.conv2d(inputs=conv_5x5_reduce,
                                filters=filters_5x5,
                                kernel_size=(5,5),
                                padding='same',
                                activation='relu',
                                kernel_regularizer=l2)
    
    maxpool = tf.layers.max_pooling2d(inputs=input,
                                      pool_size=(3,3),
                                      strides=(1,1),
                                      padding='same')
    
    maxpool_proj = tf.layers.conv2d(inputs=maxpool,
                                    filters=filters_pool_proj,
                                    kernel_size=(1,1),
                                    strides=(1,1),
                                    padding='same',
                                    activation='relu',
                                    kernel_regularizer=l2)
    
    output = tf.concat([conv_1x1, conv_3x3, conv_5x5, maxpool_proj], axis=3)
    
    return output

def googLeNet(features, labeld, mode):
    input_layer = tf.reshape(features["x"], [-1, 28, 28, 1])
    
    conv1_7x7_s2 = tf.layers.conv2d(inputs=input_layer,
                                    filters=64,
                                    kernel_size=(7,7),
                                    strides=(2,2),
                                    padding='same',
                                    activation='relu',
                                    kernel_regularizer=l2)
    
    maxpool1_3x3_s2 = tf.layers.max_pooling2d(inputs=conv1_7x7_s2,
                                              pool_size=(3,3),
                                              strides=(2,2),
                                              padding='same')
    
    conv2_3x3_reduce = tf.layers.conv2d(inputs=maxpool1_3x3_s2,
                                        filters=64,
                                        kernel_size=(1,1),
                                        padding='same',
                                        activation='relu',
                                        kernel_regularizer=l2)
    
    conv2_3x3 = tf.layers.conv2d(inputs=conv2_3x3_reduce,
                                  filters=192, 
                                  kernel_size=(3,3), 
                                  padding='same',
                                  activation='relu', 
                                  kernel_regularizer=l2)
     
    maxpool2_3x3_s2 = tf.layers.max_pooling2d(inputs=conv2_3x3,
                                               pool_size=(3, 3),
                                               strides=(2, 2),
                                               padding='same')
     
    inception_3a = inception(inputs=maxpool2_3x3_s2, 
                              filters_1x1=64, 
                              filters_3x3_reduce=96,
                              filters_3x3=128,
                              filters_5x5_reduce=16,
                              filters_5x5=32, 
                              filters_pool_proj=32)
     
    inception_3b = inception(inputs=inception_3a,
                              filters_1x1=128, 
                              filters_3x3_reduce=128,
                              filters_3x3=192, 
                              filters_5x5_reduce=32, 
                              filters_5x5=96,
                              filters_pool_proj=64)

    maxpool3_3x3_s2 = tf.layers.max_pooling2d(inputs=inception_3b,
                                   pool_size=(3, 3),
                                   strides=(2, 2),
                                   padding='same')
    
    inception_4a = inception(input=maxpool3_3x3_s2, 
                             filters_1x1=192, 
                             filters_3x3_reduce=96,
                             filters_3x3=208, 
                             filters_5x5_reduce=16, 
                             filters_5x5=48, 
                             filters_pool_proj=64)

    inception_4b = inception(input=inception_4a, 
                             filters_1x1=160,
                             filters_3x3_reduce=112, 
                             filters_3x3=224, 
                             filters_5x5_reduce=24, 
                             filters_5x5=64, 
                             filters_pool_proj=64)

    inception_4c = inception(input=inception_4b, 
                             filters_1x1=128, 
                             filters_3x3_reduce=128,
                             filters_3x3=256,
                             filters_5x5_reduce=24, 
                             filters_5x5=64,
                             filters_pool_proj=64)

    inception_4d = inception(input=inception_4c, 
                             filters_1x1=112, 
                             filters_3x3_reduce=144, 
                             filters_3x3=288, 
                             filters_5x5_reduce=32, 
                             filters_5x5=64,
                             filters_pool_proj=64)

    inception_4e = inception(input=inception_4d, 
                             filters_1x1=256, 
                             filters_3x3_reduce=160, 
                             filters_3x3=320, 
                             filters_5x5_reduce=32, 
                             filters_5x5=128,
                             filters_pool_proj=128)

    maxpool4_3x3_s2 = tf.layers.max_pooling2d(inputs=inception_4e, 
                                              pool_size=(3, 3),
                                              strides=(2, 2),
                                              padding='same')
    
    inception_5a = inception(input=maxpool4_3x3_s2,
                             filters_1x1=256,
                             filters_3x3_reduce=160,
                             filters_3x3=320, 
                             filters_5x5_reduce=32,
                             filters_5x5=128, 
                             filters_pool_proj=128)

    inception_5b = inception(input=inception_5a, 
                             filters_1x1=384, 
                             filters_3x3_reduce=192,
                             filters_3x3=384, 
                             filters_5x5_reduce=48,
                             filters_5x5=128, 
                             filters_pool_proj=128)

    averagepool1_7x7_s1 = tf.layers.average_pooling2d(input=inception_5b,
                                                      pool_size=(7, 7), 
                                                      strides=(7, 7), 
                                                      padding='same')
    dropout = tf.layers.dropout(inputs=averagepool1_7x7_s1, rate=0.4)
    
    dense = tf.layers.dense(inputs=dropout, 
                            units=1000, 
                            activation='softmax', 
                            kernel_regularizer=l2)



    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    