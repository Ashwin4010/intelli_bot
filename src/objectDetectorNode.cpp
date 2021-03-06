/**
 * MIT License
 *
 * Copyright (c) 2018 Venkatraman Narayanan, Amrish Baskaran
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 *
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 *  @file    objectDetectorNode.cpp
 *  @author  Venkatraman Narayanan
 *  @author  Amrish Baskaran
 *  @copyright	MIT
 *  @date    11/27/2018
 *  @brief objectDetectorNode routine
 */
#include "ros/ros.h"
#include "../include/ObjectDetector.h"

/*
 * @brief Main function for the objectDetectorNode
 * routine
 * @param argc - default ROS argument
 * for command line remapping
 * 		    argv - default ROS argument
 * for command line remapping
 */
int main(int argc, char **argv) {
  // Initializing node
  ros::init(argc, argv, "object_detector");
  // Instance of ObjectDectector class
  ObjectDetector objDet;
  ros::spin();
  return 0;
}
