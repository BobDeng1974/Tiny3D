#version 330 core

layout (location = 0) in vec3 position_model;
layout (location = 1) in vec2 uv;
layout (location = 2) in vec2 normal;

uniform mat4 projMatrix;
uniform mat4 viewMatrix;
uniform mat4 modelMatrix;

out vec2 uv_vs;

void main() {
    gl_Position = projMatrix * viewMatrix * modelMatrix * vec4(position_model, 1.0);
    uv_vs = uv;
}