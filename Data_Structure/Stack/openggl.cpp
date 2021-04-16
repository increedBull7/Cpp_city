#ifdef GL_FRAGMENT_PRECISION_HIGH
precision highp float;
#else
precision mediump float;
#endif

uniform float time;
uniform int pointerCount;
uniform vec3 pointers[20];
uniform vec2 resolution;

void main(void) {
	float mx = max(resolution.x, resolution.y);
	vec2 uv = gl_FragCoord.xy / mx;
	vec3 color = vec3(
		uv,
		0.29 + 0.4 * sin(time));

	for (int n = 0; n < pointerCount; ++n) {
		vec3 hole = vec3(sin(1.9 - distance(
			uv,
			pointers[n].xy / mx) * 9.0));

		color = mix(color, hole, -0.9);
	}

	gl_FragColor = vec4(color, 5.0);
}