/*
134. Gas Station

There are n gas stations along a circular route, where the amount of gas at the ith station is gas[i].

You have a car with an unlimited gas tank and it costs cost[i] of gas to travel from the ith station to its next (i + 1)th station. You begin the journey with an empty tank at one of the gas stations.

Given two integer arrays gas and cost, return the starting gas station's index 
if you can travel around the circuit once in the clockwise direction, otherwise return -1. 
If there exists a solution, it is guaranteed to be unique
*/
class Solution {
public:
  int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int n =gas.size(), idx=0;
    int total=0, cur=0;
    for (int i=0; i<n; i++){
      total += (gas[i] - cost[i]);
      cur += (gas[i] - cost[i]);
      if (cur < 0){
        idx = i + 1; cur = 0;
      }
    }
    return (total < 0) ? -1 : idx;
  }
};