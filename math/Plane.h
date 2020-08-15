#ifndef PLANE_H
#define PLANE_H

namespace  MATH {
	///  float x,y,z; came from vector as the normal to the surface + distance to the surface (d) 
	struct Plane : public Vec3 {
		float d;

		/// Just a little utility to populate a Plane
		inline void set(float x_, float y_, float z_, float d_) {
			x = x_; y = y_; z = z_, d = d_;
		}

		/// Here's a set of constructors
		explicit Plane(float s = 0.0f) {
			set(s, s, s, s);
		}

		Plane(float x, float y, float z, float d) {
			set(x, y, z, d);
		}

		Plane(const Plane& p) {
			set(p.x, p.y, p.z, p.d);
		}

		/// This creates a normalized equation of a plane.
		Plane(const Vec3& v0, const Vec3& v1, const Vec3& v2) {
			Vec3 a = v1 - v0;
			Vec3 b = v2 - v0;
			Vec3 n = Vec3(a.y * b.z - a.z * b.y, /// This is the cross product
				a.z * b.x - a.x * b.z,
				a.x * b.y - a.y * b.x);
			float magnitude = float(sqrt(n.x * n.x + n.y * n.y + n.z * n.z)); /// normalize
			Plane(x / magnitude, y / magnitude, z / magnitude, a.x * b.x + a.y * b.y + a.z * b.z);
		}


		/// Convert this plane into a normalized plane
		void normalize() {
			float a = sqrt(x*x + y * y + z * z);
			x /= a;
			y /= a;
			z /= a;
			d /= a;
		}


		void print() {
			printf("%f %f %f %f\n", x, y, z, d);
		}

	};
}


#endif