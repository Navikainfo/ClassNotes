package com.sunbeam;

import java.util.Scanner;

public class Graph {
	private int vertexCount;
	private int edgeCount;
	private boolean adjmat[][];
	public Graph(int vCount) {
		vertexCount = vCount;
		adjmat = new boolean[vertexCount][vertexCount];
	}
	
	public void acceptGraph(Scanner sc) {
		System.out.print("Enter edge count : ");
		edgeCount = sc.nextInt();
		System.out.println("Entee edges (src, dest) : ");
		for(int i = 0 ; i < edgeCount ; i++) {
			int src = sc.nextInt();
			int dest = sc.nextInt();
			adjmat[src][dest] = true;
			adjmat[dest][src] = true;  // in directed graph - not required
		}
	}
	
	public void printGraph() {
		System.out.println("Graph : ");
		for(int i = 0 ; i < vertexCount ; i++) {
			for(int j = 0 ; j < vertexCount ; j++) {
				System.out.print(adjmat[i][j] ? 1 + " " : 0 + " ");
			}
			System.out.println("");
		}
	}

}







