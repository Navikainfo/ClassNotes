package com.sunbeam;

import java.io.Serializable;

/**
 * Core Java @ Sunbeam Karad Sep 2023
 * Author: Nilesh Ghule <nilesh@sunbeaminfo.com>
 * Time: 2023-10-21 11:53
 */

public class Movie implements Serializable {
	//private static final long serialVersionUID=1;
	private int id;
	private String title;
	private double rating;
	public Movie() {
	}
	public Movie(int id, String title, double rating) {
		this.id = id;
		this.title = title;
		this.rating = rating;
	}
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getTitle() {
		return title;
	}
	public void setTitle(String title) {
		this.title = title;
	}
	public double getRating() {
		return rating;
	}
	public void setRating(double rating) {
		this.rating = rating;
	}
	@Override
	public String toString() {
		return "Movie [id=" + id + ", title=" + title + ", rating=" + rating + "]";
	}
}
