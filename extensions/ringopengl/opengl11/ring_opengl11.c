#include "ring.h"


/*
	OpenGL 1.1 Extension
	Copyright (c) 2017 Mahmoud Fayed <msfclipper@yahoo.com>
*/


#include <GL/glew.h>
#include <GL/glut.h>

RING_FUNC(ring_get_gl_zero)
{
	RING_API_RETNUMBER(GL_ZERO);
}

RING_FUNC(ring_get_gl_false)
{
	RING_API_RETNUMBER(GL_FALSE);
}

RING_FUNC(ring_get_gl_logic_op)
{
	RING_API_RETNUMBER(GL_LOGIC_OP);
}

RING_FUNC(ring_get_gl_none)
{
	RING_API_RETNUMBER(GL_NONE);
}

RING_FUNC(ring_get_gl_texture_components)
{
	RING_API_RETNUMBER(GL_TEXTURE_COMPONENTS);
}

RING_FUNC(ring_get_gl_no_error)
{
	RING_API_RETNUMBER(GL_NO_ERROR);
}

RING_FUNC(ring_get_gl_points)
{
	RING_API_RETNUMBER(GL_POINTS);
}

RING_FUNC(ring_get_gl_current_bit)
{
	RING_API_RETNUMBER(GL_CURRENT_BIT);
}

RING_FUNC(ring_get_gl_true)
{
	RING_API_RETNUMBER(GL_TRUE);
}

RING_FUNC(ring_get_gl_one)
{
	RING_API_RETNUMBER(GL_ONE);
}

RING_FUNC(ring_get_gl_client_pixel_store_bit)
{
	RING_API_RETNUMBER(GL_CLIENT_PIXEL_STORE_BIT);
}

RING_FUNC(ring_get_gl_lines)
{
	RING_API_RETNUMBER(GL_LINES);
}

RING_FUNC(ring_get_gl_line_loop)
{
	RING_API_RETNUMBER(GL_LINE_LOOP);
}

RING_FUNC(ring_get_gl_point_bit)
{
	RING_API_RETNUMBER(GL_POINT_BIT);
}

RING_FUNC(ring_get_gl_client_vertex_array_bit)
{
	RING_API_RETNUMBER(GL_CLIENT_VERTEX_ARRAY_BIT);
}

RING_FUNC(ring_get_gl_line_strip)
{
	RING_API_RETNUMBER(GL_LINE_STRIP);
}

RING_FUNC(ring_get_gl_line_bit)
{
	RING_API_RETNUMBER(GL_LINE_BIT);
}

RING_FUNC(ring_get_gl_triangles)
{
	RING_API_RETNUMBER(GL_TRIANGLES);
}

RING_FUNC(ring_get_gl_triangle_strip)
{
	RING_API_RETNUMBER(GL_TRIANGLE_STRIP);
}

RING_FUNC(ring_get_gl_triangle_fan)
{
	RING_API_RETNUMBER(GL_TRIANGLE_FAN);
}

RING_FUNC(ring_get_gl_quads)
{
	RING_API_RETNUMBER(GL_QUADS);
}

RING_FUNC(ring_get_gl_quad_strip)
{
	RING_API_RETNUMBER(GL_QUAD_STRIP);
}

RING_FUNC(ring_get_gl_polygon_bit)
{
	RING_API_RETNUMBER(GL_POLYGON_BIT);
}

RING_FUNC(ring_get_gl_polygon)
{
	RING_API_RETNUMBER(GL_POLYGON);
}

RING_FUNC(ring_get_gl_polygon_stipple_bit)
{
	RING_API_RETNUMBER(GL_POLYGON_STIPPLE_BIT);
}

RING_FUNC(ring_get_gl_pixel_mode_bit)
{
	RING_API_RETNUMBER(GL_PIXEL_MODE_BIT);
}

RING_FUNC(ring_get_gl_lighting_bit)
{
	RING_API_RETNUMBER(GL_LIGHTING_BIT);
}

RING_FUNC(ring_get_gl_fog_bit)
{
	RING_API_RETNUMBER(GL_FOG_BIT);
}

RING_FUNC(ring_get_gl_depth_buffer_bit)
{
	RING_API_RETNUMBER(GL_DEPTH_BUFFER_BIT);
}

RING_FUNC(ring_get_gl_accum)
{
	RING_API_RETNUMBER(GL_ACCUM);
}

RING_FUNC(ring_get_gl_load)
{
	RING_API_RETNUMBER(GL_LOAD);
}

RING_FUNC(ring_get_gl_return)
{
	RING_API_RETNUMBER(GL_RETURN);
}

RING_FUNC(ring_get_gl_mult)
{
	RING_API_RETNUMBER(GL_MULT);
}

RING_FUNC(ring_get_gl_add)
{
	RING_API_RETNUMBER(GL_ADD);
}

RING_FUNC(ring_get_gl_never)
{
	RING_API_RETNUMBER(GL_NEVER);
}

RING_FUNC(ring_get_gl_accum_buffer_bit)
{
	RING_API_RETNUMBER(GL_ACCUM_BUFFER_BIT);
}

RING_FUNC(ring_get_gl_less)
{
	RING_API_RETNUMBER(GL_LESS);
}

RING_FUNC(ring_get_gl_equal)
{
	RING_API_RETNUMBER(GL_EQUAL);
}

RING_FUNC(ring_get_gl_lequal)
{
	RING_API_RETNUMBER(GL_LEQUAL);
}

RING_FUNC(ring_get_gl_greater)
{
	RING_API_RETNUMBER(GL_GREATER);
}

RING_FUNC(ring_get_gl_notequal)
{
	RING_API_RETNUMBER(GL_NOTEQUAL);
}

RING_FUNC(ring_get_gl_gequal)
{
	RING_API_RETNUMBER(GL_GEQUAL);
}

RING_FUNC(ring_get_gl_always)
{
	RING_API_RETNUMBER(GL_ALWAYS);
}

RING_FUNC(ring_get_gl_src_color)
{
	RING_API_RETNUMBER(GL_SRC_COLOR);
}

RING_FUNC(ring_get_gl_one_minus_src_color)
{
	RING_API_RETNUMBER(GL_ONE_MINUS_SRC_COLOR);
}

RING_FUNC(ring_get_gl_src_alpha)
{
	RING_API_RETNUMBER(GL_SRC_ALPHA);
}

RING_FUNC(ring_get_gl_one_minus_src_alpha)
{
	RING_API_RETNUMBER(GL_ONE_MINUS_SRC_ALPHA);
}

RING_FUNC(ring_get_gl_dst_alpha)
{
	RING_API_RETNUMBER(GL_DST_ALPHA);
}

RING_FUNC(ring_get_gl_one_minus_dst_alpha)
{
	RING_API_RETNUMBER(GL_ONE_MINUS_DST_ALPHA);
}

RING_FUNC(ring_get_gl_dst_color)
{
	RING_API_RETNUMBER(GL_DST_COLOR);
}

RING_FUNC(ring_get_gl_one_minus_dst_color)
{
	RING_API_RETNUMBER(GL_ONE_MINUS_DST_COLOR);
}

RING_FUNC(ring_get_gl_src_alpha_saturate)
{
	RING_API_RETNUMBER(GL_SRC_ALPHA_SATURATE);
}

RING_FUNC(ring_get_gl_stencil_buffer_bit)
{
	RING_API_RETNUMBER(GL_STENCIL_BUFFER_BIT);
}

RING_FUNC(ring_get_gl_front_left)
{
	RING_API_RETNUMBER(GL_FRONT_LEFT);
}

RING_FUNC(ring_get_gl_front_right)
{
	RING_API_RETNUMBER(GL_FRONT_RIGHT);
}

RING_FUNC(ring_get_gl_back_left)
{
	RING_API_RETNUMBER(GL_BACK_LEFT);
}

RING_FUNC(ring_get_gl_back_right)
{
	RING_API_RETNUMBER(GL_BACK_RIGHT);
}

RING_FUNC(ring_get_gl_front)
{
	RING_API_RETNUMBER(GL_FRONT);
}

RING_FUNC(ring_get_gl_back)
{
	RING_API_RETNUMBER(GL_BACK);
}

RING_FUNC(ring_get_gl_left)
{
	RING_API_RETNUMBER(GL_LEFT);
}

RING_FUNC(ring_get_gl_right)
{
	RING_API_RETNUMBER(GL_RIGHT);
}

RING_FUNC(ring_get_gl_front_and_back)
{
	RING_API_RETNUMBER(GL_FRONT_AND_BACK);
}

RING_FUNC(ring_get_gl_aux0)
{
	RING_API_RETNUMBER(GL_AUX0);
}

RING_FUNC(ring_get_gl_aux1)
{
	RING_API_RETNUMBER(GL_AUX1);
}

RING_FUNC(ring_get_gl_aux2)
{
	RING_API_RETNUMBER(GL_AUX2);
}

RING_FUNC(ring_get_gl_aux3)
{
	RING_API_RETNUMBER(GL_AUX3);
}

RING_FUNC(ring_get_gl_invalid_enum)
{
	RING_API_RETNUMBER(GL_INVALID_ENUM);
}

RING_FUNC(ring_get_gl_invalid_value)
{
	RING_API_RETNUMBER(GL_INVALID_VALUE);
}

RING_FUNC(ring_get_gl_invalid_operation)
{
	RING_API_RETNUMBER(GL_INVALID_OPERATION);
}

RING_FUNC(ring_get_gl_stack_overflow)
{
	RING_API_RETNUMBER(GL_STACK_OVERFLOW);
}

RING_FUNC(ring_get_gl_stack_underflow)
{
	RING_API_RETNUMBER(GL_STACK_UNDERFLOW);
}

RING_FUNC(ring_get_gl_out_of_memory)
{
	RING_API_RETNUMBER(GL_OUT_OF_MEMORY);
}

RING_FUNC(ring_get_gl_2d)
{
	RING_API_RETNUMBER(GL_2D);
}

RING_FUNC(ring_get_gl_3d)
{
	RING_API_RETNUMBER(GL_3D);
}

RING_FUNC(ring_get_gl_3d_color)
{
	RING_API_RETNUMBER(GL_3D_COLOR);
}

RING_FUNC(ring_get_gl_3d_color_texture)
{
	RING_API_RETNUMBER(GL_3D_COLOR_TEXTURE);
}

RING_FUNC(ring_get_gl_4d_color_texture)
{
	RING_API_RETNUMBER(GL_4D_COLOR_TEXTURE);
}

RING_FUNC(ring_get_gl_pass_through_token)
{
	RING_API_RETNUMBER(GL_PASS_THROUGH_TOKEN);
}

RING_FUNC(ring_get_gl_point_token)
{
	RING_API_RETNUMBER(GL_POINT_TOKEN);
}

RING_FUNC(ring_get_gl_line_token)
{
	RING_API_RETNUMBER(GL_LINE_TOKEN);
}

RING_FUNC(ring_get_gl_polygon_token)
{
	RING_API_RETNUMBER(GL_POLYGON_TOKEN);
}

RING_FUNC(ring_get_gl_bitmap_token)
{
	RING_API_RETNUMBER(GL_BITMAP_TOKEN);
}

RING_FUNC(ring_get_gl_draw_pixel_token)
{
	RING_API_RETNUMBER(GL_DRAW_PIXEL_TOKEN);
}

RING_FUNC(ring_get_gl_copy_pixel_token)
{
	RING_API_RETNUMBER(GL_COPY_PIXEL_TOKEN);
}

RING_FUNC(ring_get_gl_line_reset_token)
{
	RING_API_RETNUMBER(GL_LINE_RESET_TOKEN);
}

RING_FUNC(ring_get_gl_exp)
{
	RING_API_RETNUMBER(GL_EXP);
}

RING_FUNC(ring_get_gl_viewport_bit)
{
	RING_API_RETNUMBER(GL_VIEWPORT_BIT);
}

RING_FUNC(ring_get_gl_exp2)
{
	RING_API_RETNUMBER(GL_EXP2);
}

RING_FUNC(ring_get_gl_cw)
{
	RING_API_RETNUMBER(GL_CW);
}

RING_FUNC(ring_get_gl_ccw)
{
	RING_API_RETNUMBER(GL_CCW);
}

RING_FUNC(ring_get_gl_coeff)
{
	RING_API_RETNUMBER(GL_COEFF);
}

RING_FUNC(ring_get_gl_order)
{
	RING_API_RETNUMBER(GL_ORDER);
}

RING_FUNC(ring_get_gl_domain)
{
	RING_API_RETNUMBER(GL_DOMAIN);
}

RING_FUNC(ring_get_gl_current_color)
{
	RING_API_RETNUMBER(GL_CURRENT_COLOR);
}

RING_FUNC(ring_get_gl_current_index)
{
	RING_API_RETNUMBER(GL_CURRENT_INDEX);
}

RING_FUNC(ring_get_gl_current_normal)
{
	RING_API_RETNUMBER(GL_CURRENT_NORMAL);
}

RING_FUNC(ring_get_gl_current_texture_coords)
{
	RING_API_RETNUMBER(GL_CURRENT_TEXTURE_COORDS);
}

RING_FUNC(ring_get_gl_current_raster_color)
{
	RING_API_RETNUMBER(GL_CURRENT_RASTER_COLOR);
}

RING_FUNC(ring_get_gl_current_raster_index)
{
	RING_API_RETNUMBER(GL_CURRENT_RASTER_INDEX);
}

RING_FUNC(ring_get_gl_current_raster_texture_coords)
{
	RING_API_RETNUMBER(GL_CURRENT_RASTER_TEXTURE_COORDS);
}

RING_FUNC(ring_get_gl_current_raster_position)
{
	RING_API_RETNUMBER(GL_CURRENT_RASTER_POSITION);
}

RING_FUNC(ring_get_gl_current_raster_position_valid)
{
	RING_API_RETNUMBER(GL_CURRENT_RASTER_POSITION_VALID);
}

RING_FUNC(ring_get_gl_current_raster_distance)
{
	RING_API_RETNUMBER(GL_CURRENT_RASTER_DISTANCE);
}

RING_FUNC(ring_get_gl_point_smooth)
{
	RING_API_RETNUMBER(GL_POINT_SMOOTH);
}

RING_FUNC(ring_get_gl_point_size)
{
	RING_API_RETNUMBER(GL_POINT_SIZE);
}

RING_FUNC(ring_get_gl_point_size_range)
{
	RING_API_RETNUMBER(GL_POINT_SIZE_RANGE);
}

RING_FUNC(ring_get_gl_point_size_granularity)
{
	RING_API_RETNUMBER(GL_POINT_SIZE_GRANULARITY);
}

RING_FUNC(ring_get_gl_line_smooth)
{
	RING_API_RETNUMBER(GL_LINE_SMOOTH);
}

RING_FUNC(ring_get_gl_line_width)
{
	RING_API_RETNUMBER(GL_LINE_WIDTH);
}

RING_FUNC(ring_get_gl_line_width_range)
{
	RING_API_RETNUMBER(GL_LINE_WIDTH_RANGE);
}

RING_FUNC(ring_get_gl_line_width_granularity)
{
	RING_API_RETNUMBER(GL_LINE_WIDTH_GRANULARITY);
}

RING_FUNC(ring_get_gl_line_stipple)
{
	RING_API_RETNUMBER(GL_LINE_STIPPLE);
}

RING_FUNC(ring_get_gl_line_stipple_pattern)
{
	RING_API_RETNUMBER(GL_LINE_STIPPLE_PATTERN);
}

RING_FUNC(ring_get_gl_line_stipple_repeat)
{
	RING_API_RETNUMBER(GL_LINE_STIPPLE_REPEAT);
}

RING_FUNC(ring_get_gl_list_mode)
{
	RING_API_RETNUMBER(GL_LIST_MODE);
}

RING_FUNC(ring_get_gl_max_list_nesting)
{
	RING_API_RETNUMBER(GL_MAX_LIST_NESTING);
}

RING_FUNC(ring_get_gl_list_base)
{
	RING_API_RETNUMBER(GL_LIST_BASE);
}

RING_FUNC(ring_get_gl_list_index)
{
	RING_API_RETNUMBER(GL_LIST_INDEX);
}

RING_FUNC(ring_get_gl_polygon_mode)
{
	RING_API_RETNUMBER(GL_POLYGON_MODE);
}

RING_FUNC(ring_get_gl_polygon_smooth)
{
	RING_API_RETNUMBER(GL_POLYGON_SMOOTH);
}

RING_FUNC(ring_get_gl_polygon_stipple)
{
	RING_API_RETNUMBER(GL_POLYGON_STIPPLE);
}

RING_FUNC(ring_get_gl_edge_flag)
{
	RING_API_RETNUMBER(GL_EDGE_FLAG);
}

RING_FUNC(ring_get_gl_cull_face)
{
	RING_API_RETNUMBER(GL_CULL_FACE);
}

RING_FUNC(ring_get_gl_cull_face_mode)
{
	RING_API_RETNUMBER(GL_CULL_FACE_MODE);
}

RING_FUNC(ring_get_gl_front_face)
{
	RING_API_RETNUMBER(GL_FRONT_FACE);
}

RING_FUNC(ring_get_gl_lighting)
{
	RING_API_RETNUMBER(GL_LIGHTING);
}

RING_FUNC(ring_get_gl_light_model_local_viewer)
{
	RING_API_RETNUMBER(GL_LIGHT_MODEL_LOCAL_VIEWER);
}

RING_FUNC(ring_get_gl_light_model_two_side)
{
	RING_API_RETNUMBER(GL_LIGHT_MODEL_TWO_SIDE);
}

RING_FUNC(ring_get_gl_light_model_ambient)
{
	RING_API_RETNUMBER(GL_LIGHT_MODEL_AMBIENT);
}

RING_FUNC(ring_get_gl_shade_model)
{
	RING_API_RETNUMBER(GL_SHADE_MODEL);
}

RING_FUNC(ring_get_gl_color_material_face)
{
	RING_API_RETNUMBER(GL_COLOR_MATERIAL_FACE);
}

RING_FUNC(ring_get_gl_color_material_parameter)
{
	RING_API_RETNUMBER(GL_COLOR_MATERIAL_PARAMETER);
}

RING_FUNC(ring_get_gl_color_material)
{
	RING_API_RETNUMBER(GL_COLOR_MATERIAL);
}

RING_FUNC(ring_get_gl_fog)
{
	RING_API_RETNUMBER(GL_FOG);
}

RING_FUNC(ring_get_gl_fog_index)
{
	RING_API_RETNUMBER(GL_FOG_INDEX);
}

RING_FUNC(ring_get_gl_fog_density)
{
	RING_API_RETNUMBER(GL_FOG_DENSITY);
}

RING_FUNC(ring_get_gl_fog_start)
{
	RING_API_RETNUMBER(GL_FOG_START);
}

RING_FUNC(ring_get_gl_fog_end)
{
	RING_API_RETNUMBER(GL_FOG_END);
}

RING_FUNC(ring_get_gl_fog_mode)
{
	RING_API_RETNUMBER(GL_FOG_MODE);
}

RING_FUNC(ring_get_gl_fog_color)
{
	RING_API_RETNUMBER(GL_FOG_COLOR);
}

RING_FUNC(ring_get_gl_depth_range)
{
	RING_API_RETNUMBER(GL_DEPTH_RANGE);
}

RING_FUNC(ring_get_gl_depth_test)
{
	RING_API_RETNUMBER(GL_DEPTH_TEST);
}

RING_FUNC(ring_get_gl_depth_writemask)
{
	RING_API_RETNUMBER(GL_DEPTH_WRITEMASK);
}

RING_FUNC(ring_get_gl_depth_clear_value)
{
	RING_API_RETNUMBER(GL_DEPTH_CLEAR_VALUE);
}

RING_FUNC(ring_get_gl_depth_func)
{
	RING_API_RETNUMBER(GL_DEPTH_FUNC);
}

RING_FUNC(ring_get_gl_accum_clear_value)
{
	RING_API_RETNUMBER(GL_ACCUM_CLEAR_VALUE);
}

RING_FUNC(ring_get_gl_stencil_test)
{
	RING_API_RETNUMBER(GL_STENCIL_TEST);
}

RING_FUNC(ring_get_gl_stencil_clear_value)
{
	RING_API_RETNUMBER(GL_STENCIL_CLEAR_VALUE);
}

RING_FUNC(ring_get_gl_stencil_func)
{
	RING_API_RETNUMBER(GL_STENCIL_FUNC);
}

RING_FUNC(ring_get_gl_stencil_value_mask)
{
	RING_API_RETNUMBER(GL_STENCIL_VALUE_MASK);
}

RING_FUNC(ring_get_gl_stencil_fail)
{
	RING_API_RETNUMBER(GL_STENCIL_FAIL);
}

RING_FUNC(ring_get_gl_stencil_pass_depth_fail)
{
	RING_API_RETNUMBER(GL_STENCIL_PASS_DEPTH_FAIL);
}

RING_FUNC(ring_get_gl_stencil_pass_depth_pass)
{
	RING_API_RETNUMBER(GL_STENCIL_PASS_DEPTH_PASS);
}

RING_FUNC(ring_get_gl_stencil_ref)
{
	RING_API_RETNUMBER(GL_STENCIL_REF);
}

RING_FUNC(ring_get_gl_stencil_writemask)
{
	RING_API_RETNUMBER(GL_STENCIL_WRITEMASK);
}

RING_FUNC(ring_get_gl_matrix_mode)
{
	RING_API_RETNUMBER(GL_MATRIX_MODE);
}

RING_FUNC(ring_get_gl_normalize)
{
	RING_API_RETNUMBER(GL_NORMALIZE);
}

RING_FUNC(ring_get_gl_viewport)
{
	RING_API_RETNUMBER(GL_VIEWPORT);
}

RING_FUNC(ring_get_gl_modelview_stack_depth)
{
	RING_API_RETNUMBER(GL_MODELVIEW_STACK_DEPTH);
}

RING_FUNC(ring_get_gl_projection_stack_depth)
{
	RING_API_RETNUMBER(GL_PROJECTION_STACK_DEPTH);
}

RING_FUNC(ring_get_gl_texture_stack_depth)
{
	RING_API_RETNUMBER(GL_TEXTURE_STACK_DEPTH);
}

RING_FUNC(ring_get_gl_modelview_matrix)
{
	RING_API_RETNUMBER(GL_MODELVIEW_MATRIX);
}

RING_FUNC(ring_get_gl_projection_matrix)
{
	RING_API_RETNUMBER(GL_PROJECTION_MATRIX);
}

RING_FUNC(ring_get_gl_texture_matrix)
{
	RING_API_RETNUMBER(GL_TEXTURE_MATRIX);
}

RING_FUNC(ring_get_gl_attrib_stack_depth)
{
	RING_API_RETNUMBER(GL_ATTRIB_STACK_DEPTH);
}

RING_FUNC(ring_get_gl_client_attrib_stack_depth)
{
	RING_API_RETNUMBER(GL_CLIENT_ATTRIB_STACK_DEPTH);
}

RING_FUNC(ring_get_gl_alpha_test)
{
	RING_API_RETNUMBER(GL_ALPHA_TEST);
}

RING_FUNC(ring_get_gl_alpha_test_func)
{
	RING_API_RETNUMBER(GL_ALPHA_TEST_FUNC);
}

RING_FUNC(ring_get_gl_alpha_test_ref)
{
	RING_API_RETNUMBER(GL_ALPHA_TEST_REF);
}

RING_FUNC(ring_get_gl_dither)
{
	RING_API_RETNUMBER(GL_DITHER);
}

RING_FUNC(ring_get_gl_blend_dst)
{
	RING_API_RETNUMBER(GL_BLEND_DST);
}

RING_FUNC(ring_get_gl_blend_src)
{
	RING_API_RETNUMBER(GL_BLEND_SRC);
}

RING_FUNC(ring_get_gl_blend)
{
	RING_API_RETNUMBER(GL_BLEND);
}

RING_FUNC(ring_get_gl_logic_op_mode)
{
	RING_API_RETNUMBER(GL_LOGIC_OP_MODE);
}

RING_FUNC(ring_get_gl_index_logic_op)
{
	RING_API_RETNUMBER(GL_INDEX_LOGIC_OP);
}

RING_FUNC(ring_get_gl_color_logic_op)
{
	RING_API_RETNUMBER(GL_COLOR_LOGIC_OP);
}

RING_FUNC(ring_get_gl_aux_buffers)
{
	RING_API_RETNUMBER(GL_AUX_BUFFERS);
}

RING_FUNC(ring_get_gl_draw_buffer)
{
	RING_API_RETNUMBER(GL_DRAW_BUFFER);
}

RING_FUNC(ring_get_gl_read_buffer)
{
	RING_API_RETNUMBER(GL_READ_BUFFER);
}

RING_FUNC(ring_get_gl_scissor_box)
{
	RING_API_RETNUMBER(GL_SCISSOR_BOX);
}

RING_FUNC(ring_get_gl_scissor_test)
{
	RING_API_RETNUMBER(GL_SCISSOR_TEST);
}

RING_FUNC(ring_get_gl_index_clear_value)
{
	RING_API_RETNUMBER(GL_INDEX_CLEAR_VALUE);
}

RING_FUNC(ring_get_gl_index_writemask)
{
	RING_API_RETNUMBER(GL_INDEX_WRITEMASK);
}

RING_FUNC(ring_get_gl_color_clear_value)
{
	RING_API_RETNUMBER(GL_COLOR_CLEAR_VALUE);
}

RING_FUNC(ring_get_gl_color_writemask)
{
	RING_API_RETNUMBER(GL_COLOR_WRITEMASK);
}

RING_FUNC(ring_get_gl_index_mode)
{
	RING_API_RETNUMBER(GL_INDEX_MODE);
}

RING_FUNC(ring_get_gl_rgba_mode)
{
	RING_API_RETNUMBER(GL_RGBA_MODE);
}

RING_FUNC(ring_get_gl_doublebuffer)
{
	RING_API_RETNUMBER(GL_DOUBLEBUFFER);
}

RING_FUNC(ring_get_gl_stereo)
{
	RING_API_RETNUMBER(GL_STEREO);
}

RING_FUNC(ring_get_gl_render_mode)
{
	RING_API_RETNUMBER(GL_RENDER_MODE);
}

RING_FUNC(ring_get_gl_perspective_correction_hint)
{
	RING_API_RETNUMBER(GL_PERSPECTIVE_CORRECTION_HINT);
}

RING_FUNC(ring_get_gl_point_smooth_hint)
{
	RING_API_RETNUMBER(GL_POINT_SMOOTH_HINT);
}

RING_FUNC(ring_get_gl_line_smooth_hint)
{
	RING_API_RETNUMBER(GL_LINE_SMOOTH_HINT);
}

RING_FUNC(ring_get_gl_polygon_smooth_hint)
{
	RING_API_RETNUMBER(GL_POLYGON_SMOOTH_HINT);
}

RING_FUNC(ring_get_gl_fog_hint)
{
	RING_API_RETNUMBER(GL_FOG_HINT);
}

RING_FUNC(ring_get_gl_texture_gen_s)
{
	RING_API_RETNUMBER(GL_TEXTURE_GEN_S);
}

RING_FUNC(ring_get_gl_texture_gen_t)
{
	RING_API_RETNUMBER(GL_TEXTURE_GEN_T);
}

RING_FUNC(ring_get_gl_texture_gen_r)
{
	RING_API_RETNUMBER(GL_TEXTURE_GEN_R);
}

RING_FUNC(ring_get_gl_texture_gen_q)
{
	RING_API_RETNUMBER(GL_TEXTURE_GEN_Q);
}

RING_FUNC(ring_get_gl_pixel_map_i_to_i)
{
	RING_API_RETNUMBER(GL_PIXEL_MAP_I_TO_I);
}

RING_FUNC(ring_get_gl_pixel_map_s_to_s)
{
	RING_API_RETNUMBER(GL_PIXEL_MAP_S_TO_S);
}

RING_FUNC(ring_get_gl_pixel_map_i_to_r)
{
	RING_API_RETNUMBER(GL_PIXEL_MAP_I_TO_R);
}

RING_FUNC(ring_get_gl_pixel_map_i_to_g)
{
	RING_API_RETNUMBER(GL_PIXEL_MAP_I_TO_G);
}

RING_FUNC(ring_get_gl_pixel_map_i_to_b)
{
	RING_API_RETNUMBER(GL_PIXEL_MAP_I_TO_B);
}

RING_FUNC(ring_get_gl_pixel_map_i_to_a)
{
	RING_API_RETNUMBER(GL_PIXEL_MAP_I_TO_A);
}

RING_FUNC(ring_get_gl_pixel_map_r_to_r)
{
	RING_API_RETNUMBER(GL_PIXEL_MAP_R_TO_R);
}

RING_FUNC(ring_get_gl_pixel_map_g_to_g)
{
	RING_API_RETNUMBER(GL_PIXEL_MAP_G_TO_G);
}

RING_FUNC(ring_get_gl_pixel_map_b_to_b)
{
	RING_API_RETNUMBER(GL_PIXEL_MAP_B_TO_B);
}

RING_FUNC(ring_get_gl_pixel_map_a_to_a)
{
	RING_API_RETNUMBER(GL_PIXEL_MAP_A_TO_A);
}

RING_FUNC(ring_get_gl_pixel_map_i_to_i_size)
{
	RING_API_RETNUMBER(GL_PIXEL_MAP_I_TO_I_SIZE);
}

RING_FUNC(ring_get_gl_pixel_map_s_to_s_size)
{
	RING_API_RETNUMBER(GL_PIXEL_MAP_S_TO_S_SIZE);
}

RING_FUNC(ring_get_gl_pixel_map_i_to_r_size)
{
	RING_API_RETNUMBER(GL_PIXEL_MAP_I_TO_R_SIZE);
}

RING_FUNC(ring_get_gl_pixel_map_i_to_g_size)
{
	RING_API_RETNUMBER(GL_PIXEL_MAP_I_TO_G_SIZE);
}

RING_FUNC(ring_get_gl_pixel_map_i_to_b_size)
{
	RING_API_RETNUMBER(GL_PIXEL_MAP_I_TO_B_SIZE);
}

RING_FUNC(ring_get_gl_pixel_map_i_to_a_size)
{
	RING_API_RETNUMBER(GL_PIXEL_MAP_I_TO_A_SIZE);
}

RING_FUNC(ring_get_gl_pixel_map_r_to_r_size)
{
	RING_API_RETNUMBER(GL_PIXEL_MAP_R_TO_R_SIZE);
}

RING_FUNC(ring_get_gl_pixel_map_g_to_g_size)
{
	RING_API_RETNUMBER(GL_PIXEL_MAP_G_TO_G_SIZE);
}

RING_FUNC(ring_get_gl_pixel_map_b_to_b_size)
{
	RING_API_RETNUMBER(GL_PIXEL_MAP_B_TO_B_SIZE);
}

RING_FUNC(ring_get_gl_pixel_map_a_to_a_size)
{
	RING_API_RETNUMBER(GL_PIXEL_MAP_A_TO_A_SIZE);
}

RING_FUNC(ring_get_gl_unpack_swap_bytes)
{
	RING_API_RETNUMBER(GL_UNPACK_SWAP_BYTES);
}

RING_FUNC(ring_get_gl_unpack_lsb_first)
{
	RING_API_RETNUMBER(GL_UNPACK_LSB_FIRST);
}

RING_FUNC(ring_get_gl_unpack_row_length)
{
	RING_API_RETNUMBER(GL_UNPACK_ROW_LENGTH);
}

RING_FUNC(ring_get_gl_unpack_skip_rows)
{
	RING_API_RETNUMBER(GL_UNPACK_SKIP_ROWS);
}

RING_FUNC(ring_get_gl_unpack_skip_pixels)
{
	RING_API_RETNUMBER(GL_UNPACK_SKIP_PIXELS);
}

RING_FUNC(ring_get_gl_unpack_alignment)
{
	RING_API_RETNUMBER(GL_UNPACK_ALIGNMENT);
}

RING_FUNC(ring_get_gl_pack_swap_bytes)
{
	RING_API_RETNUMBER(GL_PACK_SWAP_BYTES);
}

RING_FUNC(ring_get_gl_pack_lsb_first)
{
	RING_API_RETNUMBER(GL_PACK_LSB_FIRST);
}

RING_FUNC(ring_get_gl_pack_row_length)
{
	RING_API_RETNUMBER(GL_PACK_ROW_LENGTH);
}

RING_FUNC(ring_get_gl_pack_skip_rows)
{
	RING_API_RETNUMBER(GL_PACK_SKIP_ROWS);
}

RING_FUNC(ring_get_gl_pack_skip_pixels)
{
	RING_API_RETNUMBER(GL_PACK_SKIP_PIXELS);
}

RING_FUNC(ring_get_gl_pack_alignment)
{
	RING_API_RETNUMBER(GL_PACK_ALIGNMENT);
}

RING_FUNC(ring_get_gl_map_color)
{
	RING_API_RETNUMBER(GL_MAP_COLOR);
}

RING_FUNC(ring_get_gl_map_stencil)
{
	RING_API_RETNUMBER(GL_MAP_STENCIL);
}

RING_FUNC(ring_get_gl_index_shift)
{
	RING_API_RETNUMBER(GL_INDEX_SHIFT);
}

RING_FUNC(ring_get_gl_index_offset)
{
	RING_API_RETNUMBER(GL_INDEX_OFFSET);
}

RING_FUNC(ring_get_gl_red_scale)
{
	RING_API_RETNUMBER(GL_RED_SCALE);
}

RING_FUNC(ring_get_gl_red_bias)
{
	RING_API_RETNUMBER(GL_RED_BIAS);
}

RING_FUNC(ring_get_gl_zoom_x)
{
	RING_API_RETNUMBER(GL_ZOOM_X);
}

RING_FUNC(ring_get_gl_zoom_y)
{
	RING_API_RETNUMBER(GL_ZOOM_Y);
}

RING_FUNC(ring_get_gl_green_scale)
{
	RING_API_RETNUMBER(GL_GREEN_SCALE);
}

RING_FUNC(ring_get_gl_green_bias)
{
	RING_API_RETNUMBER(GL_GREEN_BIAS);
}

RING_FUNC(ring_get_gl_blue_scale)
{
	RING_API_RETNUMBER(GL_BLUE_SCALE);
}

RING_FUNC(ring_get_gl_blue_bias)
{
	RING_API_RETNUMBER(GL_BLUE_BIAS);
}

RING_FUNC(ring_get_gl_alpha_scale)
{
	RING_API_RETNUMBER(GL_ALPHA_SCALE);
}

RING_FUNC(ring_get_gl_alpha_bias)
{
	RING_API_RETNUMBER(GL_ALPHA_BIAS);
}

RING_FUNC(ring_get_gl_depth_scale)
{
	RING_API_RETNUMBER(GL_DEPTH_SCALE);
}

RING_FUNC(ring_get_gl_depth_bias)
{
	RING_API_RETNUMBER(GL_DEPTH_BIAS);
}

RING_FUNC(ring_get_gl_max_eval_order)
{
	RING_API_RETNUMBER(GL_MAX_EVAL_ORDER);
}

RING_FUNC(ring_get_gl_max_lights)
{
	RING_API_RETNUMBER(GL_MAX_LIGHTS);
}

RING_FUNC(ring_get_gl_max_clip_planes)
{
	RING_API_RETNUMBER(GL_MAX_CLIP_PLANES);
}

RING_FUNC(ring_get_gl_max_texture_size)
{
	RING_API_RETNUMBER(GL_MAX_TEXTURE_SIZE);
}

RING_FUNC(ring_get_gl_max_pixel_map_table)
{
	RING_API_RETNUMBER(GL_MAX_PIXEL_MAP_TABLE);
}

RING_FUNC(ring_get_gl_max_attrib_stack_depth)
{
	RING_API_RETNUMBER(GL_MAX_ATTRIB_STACK_DEPTH);
}

RING_FUNC(ring_get_gl_max_modelview_stack_depth)
{
	RING_API_RETNUMBER(GL_MAX_MODELVIEW_STACK_DEPTH);
}

RING_FUNC(ring_get_gl_max_name_stack_depth)
{
	RING_API_RETNUMBER(GL_MAX_NAME_STACK_DEPTH);
}

RING_FUNC(ring_get_gl_max_projection_stack_depth)
{
	RING_API_RETNUMBER(GL_MAX_PROJECTION_STACK_DEPTH);
}

RING_FUNC(ring_get_gl_max_texture_stack_depth)
{
	RING_API_RETNUMBER(GL_MAX_TEXTURE_STACK_DEPTH);
}

RING_FUNC(ring_get_gl_max_viewport_dims)
{
	RING_API_RETNUMBER(GL_MAX_VIEWPORT_DIMS);
}

RING_FUNC(ring_get_gl_max_client_attrib_stack_depth)
{
	RING_API_RETNUMBER(GL_MAX_CLIENT_ATTRIB_STACK_DEPTH);
}

RING_FUNC(ring_get_gl_subpixel_bits)
{
	RING_API_RETNUMBER(GL_SUBPIXEL_BITS);
}

RING_FUNC(ring_get_gl_index_bits)
{
	RING_API_RETNUMBER(GL_INDEX_BITS);
}

RING_FUNC(ring_get_gl_red_bits)
{
	RING_API_RETNUMBER(GL_RED_BITS);
}

RING_FUNC(ring_get_gl_green_bits)
{
	RING_API_RETNUMBER(GL_GREEN_BITS);
}

RING_FUNC(ring_get_gl_blue_bits)
{
	RING_API_RETNUMBER(GL_BLUE_BITS);
}

RING_FUNC(ring_get_gl_alpha_bits)
{
	RING_API_RETNUMBER(GL_ALPHA_BITS);
}

RING_FUNC(ring_get_gl_depth_bits)
{
	RING_API_RETNUMBER(GL_DEPTH_BITS);
}

RING_FUNC(ring_get_gl_stencil_bits)
{
	RING_API_RETNUMBER(GL_STENCIL_BITS);
}

RING_FUNC(ring_get_gl_accum_red_bits)
{
	RING_API_RETNUMBER(GL_ACCUM_RED_BITS);
}

RING_FUNC(ring_get_gl_accum_green_bits)
{
	RING_API_RETNUMBER(GL_ACCUM_GREEN_BITS);
}

RING_FUNC(ring_get_gl_accum_blue_bits)
{
	RING_API_RETNUMBER(GL_ACCUM_BLUE_BITS);
}

RING_FUNC(ring_get_gl_accum_alpha_bits)
{
	RING_API_RETNUMBER(GL_ACCUM_ALPHA_BITS);
}

RING_FUNC(ring_get_gl_name_stack_depth)
{
	RING_API_RETNUMBER(GL_NAME_STACK_DEPTH);
}

RING_FUNC(ring_get_gl_auto_normal)
{
	RING_API_RETNUMBER(GL_AUTO_NORMAL);
}

RING_FUNC(ring_get_gl_map1_color_4)
{
	RING_API_RETNUMBER(GL_MAP1_COLOR_4);
}

RING_FUNC(ring_get_gl_map1_index)
{
	RING_API_RETNUMBER(GL_MAP1_INDEX);
}

RING_FUNC(ring_get_gl_map1_normal)
{
	RING_API_RETNUMBER(GL_MAP1_NORMAL);
}

RING_FUNC(ring_get_gl_map1_texture_coord_1)
{
	RING_API_RETNUMBER(GL_MAP1_TEXTURE_COORD_1);
}

RING_FUNC(ring_get_gl_map1_texture_coord_2)
{
	RING_API_RETNUMBER(GL_MAP1_TEXTURE_COORD_2);
}

RING_FUNC(ring_get_gl_map1_texture_coord_3)
{
	RING_API_RETNUMBER(GL_MAP1_TEXTURE_COORD_3);
}

RING_FUNC(ring_get_gl_map1_texture_coord_4)
{
	RING_API_RETNUMBER(GL_MAP1_TEXTURE_COORD_4);
}

RING_FUNC(ring_get_gl_map1_vertex_3)
{
	RING_API_RETNUMBER(GL_MAP1_VERTEX_3);
}

RING_FUNC(ring_get_gl_map1_vertex_4)
{
	RING_API_RETNUMBER(GL_MAP1_VERTEX_4);
}

RING_FUNC(ring_get_gl_map2_color_4)
{
	RING_API_RETNUMBER(GL_MAP2_COLOR_4);
}

RING_FUNC(ring_get_gl_map2_index)
{
	RING_API_RETNUMBER(GL_MAP2_INDEX);
}

RING_FUNC(ring_get_gl_map2_normal)
{
	RING_API_RETNUMBER(GL_MAP2_NORMAL);
}

RING_FUNC(ring_get_gl_map2_texture_coord_1)
{
	RING_API_RETNUMBER(GL_MAP2_TEXTURE_COORD_1);
}

RING_FUNC(ring_get_gl_map2_texture_coord_2)
{
	RING_API_RETNUMBER(GL_MAP2_TEXTURE_COORD_2);
}

RING_FUNC(ring_get_gl_map2_texture_coord_3)
{
	RING_API_RETNUMBER(GL_MAP2_TEXTURE_COORD_3);
}

RING_FUNC(ring_get_gl_map2_texture_coord_4)
{
	RING_API_RETNUMBER(GL_MAP2_TEXTURE_COORD_4);
}

RING_FUNC(ring_get_gl_map2_vertex_3)
{
	RING_API_RETNUMBER(GL_MAP2_VERTEX_3);
}

RING_FUNC(ring_get_gl_map2_vertex_4)
{
	RING_API_RETNUMBER(GL_MAP2_VERTEX_4);
}

RING_FUNC(ring_get_gl_map1_grid_domain)
{
	RING_API_RETNUMBER(GL_MAP1_GRID_DOMAIN);
}

RING_FUNC(ring_get_gl_map1_grid_segments)
{
	RING_API_RETNUMBER(GL_MAP1_GRID_SEGMENTS);
}

RING_FUNC(ring_get_gl_map2_grid_domain)
{
	RING_API_RETNUMBER(GL_MAP2_GRID_DOMAIN);
}

RING_FUNC(ring_get_gl_map2_grid_segments)
{
	RING_API_RETNUMBER(GL_MAP2_GRID_SEGMENTS);
}

RING_FUNC(ring_get_gl_texture_1d)
{
	RING_API_RETNUMBER(GL_TEXTURE_1D);
}

RING_FUNC(ring_get_gl_texture_2d)
{
	RING_API_RETNUMBER(GL_TEXTURE_2D);
}

RING_FUNC(ring_get_gl_feedback_buffer_pointer)
{
	RING_API_RETNUMBER(GL_FEEDBACK_BUFFER_POINTER);
}

RING_FUNC(ring_get_gl_feedback_buffer_size)
{
	RING_API_RETNUMBER(GL_FEEDBACK_BUFFER_SIZE);
}

RING_FUNC(ring_get_gl_feedback_buffer_type)
{
	RING_API_RETNUMBER(GL_FEEDBACK_BUFFER_TYPE);
}

RING_FUNC(ring_get_gl_selection_buffer_pointer)
{
	RING_API_RETNUMBER(GL_SELECTION_BUFFER_POINTER);
}

RING_FUNC(ring_get_gl_selection_buffer_size)
{
	RING_API_RETNUMBER(GL_SELECTION_BUFFER_SIZE);
}

RING_FUNC(ring_get_gl_texture_width)
{
	RING_API_RETNUMBER(GL_TEXTURE_WIDTH);
}

RING_FUNC(ring_get_gl_transform_bit)
{
	RING_API_RETNUMBER(GL_TRANSFORM_BIT);
}

RING_FUNC(ring_get_gl_texture_height)
{
	RING_API_RETNUMBER(GL_TEXTURE_HEIGHT);
}

RING_FUNC(ring_get_gl_texture_internal_format)
{
	RING_API_RETNUMBER(GL_TEXTURE_INTERNAL_FORMAT);
}

RING_FUNC(ring_get_gl_texture_border_color)
{
	RING_API_RETNUMBER(GL_TEXTURE_BORDER_COLOR);
}

RING_FUNC(ring_get_gl_texture_border)
{
	RING_API_RETNUMBER(GL_TEXTURE_BORDER);
}

RING_FUNC(ring_get_gl_dont_care)
{
	RING_API_RETNUMBER(GL_DONT_CARE);
}

RING_FUNC(ring_get_gl_fastest)
{
	RING_API_RETNUMBER(GL_FASTEST);
}

RING_FUNC(ring_get_gl_nicest)
{
	RING_API_RETNUMBER(GL_NICEST);
}

RING_FUNC(ring_get_gl_ambient)
{
	RING_API_RETNUMBER(GL_AMBIENT);
}

RING_FUNC(ring_get_gl_diffuse)
{
	RING_API_RETNUMBER(GL_DIFFUSE);
}

RING_FUNC(ring_get_gl_specular)
{
	RING_API_RETNUMBER(GL_SPECULAR);
}

RING_FUNC(ring_get_gl_position)
{
	RING_API_RETNUMBER(GL_POSITION);
}

RING_FUNC(ring_get_gl_spot_direction)
{
	RING_API_RETNUMBER(GL_SPOT_DIRECTION);
}

RING_FUNC(ring_get_gl_spot_exponent)
{
	RING_API_RETNUMBER(GL_SPOT_EXPONENT);
}

RING_FUNC(ring_get_gl_spot_cutoff)
{
	RING_API_RETNUMBER(GL_SPOT_CUTOFF);
}

RING_FUNC(ring_get_gl_constant_attenuation)
{
	RING_API_RETNUMBER(GL_CONSTANT_ATTENUATION);
}

RING_FUNC(ring_get_gl_linear_attenuation)
{
	RING_API_RETNUMBER(GL_LINEAR_ATTENUATION);
}

RING_FUNC(ring_get_gl_quadratic_attenuation)
{
	RING_API_RETNUMBER(GL_QUADRATIC_ATTENUATION);
}

RING_FUNC(ring_get_gl_compile)
{
	RING_API_RETNUMBER(GL_COMPILE);
}

RING_FUNC(ring_get_gl_compile_and_execute)
{
	RING_API_RETNUMBER(GL_COMPILE_AND_EXECUTE);
}

RING_FUNC(ring_get_gl_byte)
{
	RING_API_RETNUMBER(GL_BYTE);
}

RING_FUNC(ring_get_gl_unsigned_byte)
{
	RING_API_RETNUMBER(GL_UNSIGNED_BYTE);
}

RING_FUNC(ring_get_gl_short)
{
	RING_API_RETNUMBER(GL_SHORT);
}

RING_FUNC(ring_get_gl_unsigned_short)
{
	RING_API_RETNUMBER(GL_UNSIGNED_SHORT);
}

RING_FUNC(ring_get_gl_int)
{
	RING_API_RETNUMBER(GL_INT);
}

RING_FUNC(ring_get_gl_unsigned_int)
{
	RING_API_RETNUMBER(GL_UNSIGNED_INT);
}

RING_FUNC(ring_get_gl_float)
{
	RING_API_RETNUMBER(GL_FLOAT);
}

RING_FUNC(ring_get_gl_2_bytes)
{
	RING_API_RETNUMBER(GL_2_BYTES);
}

RING_FUNC(ring_get_gl_3_bytes)
{
	RING_API_RETNUMBER(GL_3_BYTES);
}

RING_FUNC(ring_get_gl_4_bytes)
{
	RING_API_RETNUMBER(GL_4_BYTES);
}

RING_FUNC(ring_get_gl_double)
{
	RING_API_RETNUMBER(GL_DOUBLE);
}

RING_FUNC(ring_get_gl_clear)
{
	RING_API_RETNUMBER(GL_CLEAR);
}

RING_FUNC(ring_get_gl_and)
{
	RING_API_RETNUMBER(GL_AND);
}

RING_FUNC(ring_get_gl_and_reverse)
{
	RING_API_RETNUMBER(GL_AND_REVERSE);
}

RING_FUNC(ring_get_gl_copy)
{
	RING_API_RETNUMBER(GL_COPY);
}

RING_FUNC(ring_get_gl_and_inverted)
{
	RING_API_RETNUMBER(GL_AND_INVERTED);
}

RING_FUNC(ring_get_gl_noop)
{
	RING_API_RETNUMBER(GL_NOOP);
}

RING_FUNC(ring_get_gl_xor)
{
	RING_API_RETNUMBER(GL_XOR);
}

RING_FUNC(ring_get_gl_or)
{
	RING_API_RETNUMBER(GL_OR);
}

RING_FUNC(ring_get_gl_nor)
{
	RING_API_RETNUMBER(GL_NOR);
}

RING_FUNC(ring_get_gl_equiv)
{
	RING_API_RETNUMBER(GL_EQUIV);
}

RING_FUNC(ring_get_gl_invert)
{
	RING_API_RETNUMBER(GL_INVERT);
}

RING_FUNC(ring_get_gl_or_reverse)
{
	RING_API_RETNUMBER(GL_OR_REVERSE);
}

RING_FUNC(ring_get_gl_copy_inverted)
{
	RING_API_RETNUMBER(GL_COPY_INVERTED);
}

RING_FUNC(ring_get_gl_or_inverted)
{
	RING_API_RETNUMBER(GL_OR_INVERTED);
}

RING_FUNC(ring_get_gl_nand)
{
	RING_API_RETNUMBER(GL_NAND);
}

RING_FUNC(ring_get_gl_set)
{
	RING_API_RETNUMBER(GL_SET);
}

RING_FUNC(ring_get_gl_emission)
{
	RING_API_RETNUMBER(GL_EMISSION);
}

RING_FUNC(ring_get_gl_shininess)
{
	RING_API_RETNUMBER(GL_SHININESS);
}

RING_FUNC(ring_get_gl_ambient_and_diffuse)
{
	RING_API_RETNUMBER(GL_AMBIENT_AND_DIFFUSE);
}

RING_FUNC(ring_get_gl_color_indexes)
{
	RING_API_RETNUMBER(GL_COLOR_INDEXES);
}

RING_FUNC(ring_get_gl_modelview)
{
	RING_API_RETNUMBER(GL_MODELVIEW);
}

RING_FUNC(ring_get_gl_projection)
{
	RING_API_RETNUMBER(GL_PROJECTION);
}

RING_FUNC(ring_get_gl_texture)
{
	RING_API_RETNUMBER(GL_TEXTURE);
}

RING_FUNC(ring_get_gl_color)
{
	RING_API_RETNUMBER(GL_COLOR);
}

RING_FUNC(ring_get_gl_depth)
{
	RING_API_RETNUMBER(GL_DEPTH);
}

RING_FUNC(ring_get_gl_stencil)
{
	RING_API_RETNUMBER(GL_STENCIL);
}

RING_FUNC(ring_get_gl_color_index)
{
	RING_API_RETNUMBER(GL_COLOR_INDEX);
}

RING_FUNC(ring_get_gl_stencil_index)
{
	RING_API_RETNUMBER(GL_STENCIL_INDEX);
}

RING_FUNC(ring_get_gl_depth_component)
{
	RING_API_RETNUMBER(GL_DEPTH_COMPONENT);
}

RING_FUNC(ring_get_gl_red)
{
	RING_API_RETNUMBER(GL_RED);
}

RING_FUNC(ring_get_gl_green)
{
	RING_API_RETNUMBER(GL_GREEN);
}

RING_FUNC(ring_get_gl_blue)
{
	RING_API_RETNUMBER(GL_BLUE);
}

RING_FUNC(ring_get_gl_alpha)
{
	RING_API_RETNUMBER(GL_ALPHA);
}

RING_FUNC(ring_get_gl_rgb)
{
	RING_API_RETNUMBER(GL_RGB);
}

RING_FUNC(ring_get_gl_rgba)
{
	RING_API_RETNUMBER(GL_RGBA);
}

RING_FUNC(ring_get_gl_luminance)
{
	RING_API_RETNUMBER(GL_LUMINANCE);
}

RING_FUNC(ring_get_gl_luminance_alpha)
{
	RING_API_RETNUMBER(GL_LUMINANCE_ALPHA);
}

RING_FUNC(ring_get_gl_bitmap)
{
	RING_API_RETNUMBER(GL_BITMAP);
}

RING_FUNC(ring_get_gl_point)
{
	RING_API_RETNUMBER(GL_POINT);
}

RING_FUNC(ring_get_gl_line)
{
	RING_API_RETNUMBER(GL_LINE);
}

RING_FUNC(ring_get_gl_fill)
{
	RING_API_RETNUMBER(GL_FILL);
}

RING_FUNC(ring_get_gl_render)
{
	RING_API_RETNUMBER(GL_RENDER);
}

RING_FUNC(ring_get_gl_feedback)
{
	RING_API_RETNUMBER(GL_FEEDBACK);
}

RING_FUNC(ring_get_gl_select)
{
	RING_API_RETNUMBER(GL_SELECT);
}

RING_FUNC(ring_get_gl_flat)
{
	RING_API_RETNUMBER(GL_FLAT);
}

RING_FUNC(ring_get_gl_smooth)
{
	RING_API_RETNUMBER(GL_SMOOTH);
}

RING_FUNC(ring_get_gl_keep)
{
	RING_API_RETNUMBER(GL_KEEP);
}

RING_FUNC(ring_get_gl_replace)
{
	RING_API_RETNUMBER(GL_REPLACE);
}

RING_FUNC(ring_get_gl_incr)
{
	RING_API_RETNUMBER(GL_INCR);
}

RING_FUNC(ring_get_gl_decr)
{
	RING_API_RETNUMBER(GL_DECR);
}

RING_FUNC(ring_get_gl_vendor)
{
	RING_API_RETNUMBER(GL_VENDOR);
}

RING_FUNC(ring_get_gl_renderer)
{
	RING_API_RETNUMBER(GL_RENDERER);
}

RING_FUNC(ring_get_gl_version)
{
	RING_API_RETNUMBER(GL_VERSION);
}

RING_FUNC(ring_get_gl_extensions)
{
	RING_API_RETNUMBER(GL_EXTENSIONS);
}

RING_FUNC(ring_get_gl_s)
{
	RING_API_RETNUMBER(GL_S);
}

RING_FUNC(ring_get_gl_enable_bit)
{
	RING_API_RETNUMBER(GL_ENABLE_BIT);
}

RING_FUNC(ring_get_gl_t)
{
	RING_API_RETNUMBER(GL_T);
}

RING_FUNC(ring_get_gl_r)
{
	RING_API_RETNUMBER(GL_R);
}

RING_FUNC(ring_get_gl_q)
{
	RING_API_RETNUMBER(GL_Q);
}

RING_FUNC(ring_get_gl_modulate)
{
	RING_API_RETNUMBER(GL_MODULATE);
}

RING_FUNC(ring_get_gl_decal)
{
	RING_API_RETNUMBER(GL_DECAL);
}

RING_FUNC(ring_get_gl_texture_env_mode)
{
	RING_API_RETNUMBER(GL_TEXTURE_ENV_MODE);
}

RING_FUNC(ring_get_gl_texture_env_color)
{
	RING_API_RETNUMBER(GL_TEXTURE_ENV_COLOR);
}

RING_FUNC(ring_get_gl_texture_env)
{
	RING_API_RETNUMBER(GL_TEXTURE_ENV);
}

RING_FUNC(ring_get_gl_eye_linear)
{
	RING_API_RETNUMBER(GL_EYE_LINEAR);
}

RING_FUNC(ring_get_gl_object_linear)
{
	RING_API_RETNUMBER(GL_OBJECT_LINEAR);
}

RING_FUNC(ring_get_gl_sphere_map)
{
	RING_API_RETNUMBER(GL_SPHERE_MAP);
}

RING_FUNC(ring_get_gl_texture_gen_mode)
{
	RING_API_RETNUMBER(GL_TEXTURE_GEN_MODE);
}

RING_FUNC(ring_get_gl_object_plane)
{
	RING_API_RETNUMBER(GL_OBJECT_PLANE);
}

RING_FUNC(ring_get_gl_eye_plane)
{
	RING_API_RETNUMBER(GL_EYE_PLANE);
}

RING_FUNC(ring_get_gl_nearest)
{
	RING_API_RETNUMBER(GL_NEAREST);
}

RING_FUNC(ring_get_gl_linear)
{
	RING_API_RETNUMBER(GL_LINEAR);
}

RING_FUNC(ring_get_gl_nearest_mipmap_nearest)
{
	RING_API_RETNUMBER(GL_NEAREST_MIPMAP_NEAREST);
}

RING_FUNC(ring_get_gl_linear_mipmap_nearest)
{
	RING_API_RETNUMBER(GL_LINEAR_MIPMAP_NEAREST);
}

RING_FUNC(ring_get_gl_nearest_mipmap_linear)
{
	RING_API_RETNUMBER(GL_NEAREST_MIPMAP_LINEAR);
}

RING_FUNC(ring_get_gl_linear_mipmap_linear)
{
	RING_API_RETNUMBER(GL_LINEAR_MIPMAP_LINEAR);
}

RING_FUNC(ring_get_gl_texture_mag_filter)
{
	RING_API_RETNUMBER(GL_TEXTURE_MAG_FILTER);
}

RING_FUNC(ring_get_gl_texture_min_filter)
{
	RING_API_RETNUMBER(GL_TEXTURE_MIN_FILTER);
}

RING_FUNC(ring_get_gl_texture_wrap_s)
{
	RING_API_RETNUMBER(GL_TEXTURE_WRAP_S);
}

RING_FUNC(ring_get_gl_texture_wrap_t)
{
	RING_API_RETNUMBER(GL_TEXTURE_WRAP_T);
}

RING_FUNC(ring_get_gl_clamp)
{
	RING_API_RETNUMBER(GL_CLAMP);
}

RING_FUNC(ring_get_gl_repeat)
{
	RING_API_RETNUMBER(GL_REPEAT);
}

RING_FUNC(ring_get_gl_polygon_offset_units)
{
	RING_API_RETNUMBER(GL_POLYGON_OFFSET_UNITS);
}

RING_FUNC(ring_get_gl_polygon_offset_point)
{
	RING_API_RETNUMBER(GL_POLYGON_OFFSET_POINT);
}

RING_FUNC(ring_get_gl_polygon_offset_line)
{
	RING_API_RETNUMBER(GL_POLYGON_OFFSET_LINE);
}

RING_FUNC(ring_get_gl_r3_g3_b2)
{
	RING_API_RETNUMBER(GL_R3_G3_B2);
}

RING_FUNC(ring_get_gl_v2f)
{
	RING_API_RETNUMBER(GL_V2F);
}

RING_FUNC(ring_get_gl_v3f)
{
	RING_API_RETNUMBER(GL_V3F);
}

RING_FUNC(ring_get_gl_c4ub_v2f)
{
	RING_API_RETNUMBER(GL_C4UB_V2F);
}

RING_FUNC(ring_get_gl_c4ub_v3f)
{
	RING_API_RETNUMBER(GL_C4UB_V3F);
}

RING_FUNC(ring_get_gl_c3f_v3f)
{
	RING_API_RETNUMBER(GL_C3F_V3F);
}

RING_FUNC(ring_get_gl_n3f_v3f)
{
	RING_API_RETNUMBER(GL_N3F_V3F);
}

RING_FUNC(ring_get_gl_c4f_n3f_v3f)
{
	RING_API_RETNUMBER(GL_C4F_N3F_V3F);
}

RING_FUNC(ring_get_gl_t2f_v3f)
{
	RING_API_RETNUMBER(GL_T2F_V3F);
}

RING_FUNC(ring_get_gl_t4f_v4f)
{
	RING_API_RETNUMBER(GL_T4F_V4F);
}

RING_FUNC(ring_get_gl_t2f_c4ub_v3f)
{
	RING_API_RETNUMBER(GL_T2F_C4UB_V3F);
}

RING_FUNC(ring_get_gl_t2f_c3f_v3f)
{
	RING_API_RETNUMBER(GL_T2F_C3F_V3F);
}

RING_FUNC(ring_get_gl_t2f_n3f_v3f)
{
	RING_API_RETNUMBER(GL_T2F_N3F_V3F);
}

RING_FUNC(ring_get_gl_t2f_c4f_n3f_v3f)
{
	RING_API_RETNUMBER(GL_T2F_C4F_N3F_V3F);
}

RING_FUNC(ring_get_gl_t4f_c4f_n3f_v4f)
{
	RING_API_RETNUMBER(GL_T4F_C4F_N3F_V4F);
}

RING_FUNC(ring_get_gl_clip_plane0)
{
	RING_API_RETNUMBER(GL_CLIP_PLANE0);
}

RING_FUNC(ring_get_gl_clip_plane1)
{
	RING_API_RETNUMBER(GL_CLIP_PLANE1);
}

RING_FUNC(ring_get_gl_clip_plane2)
{
	RING_API_RETNUMBER(GL_CLIP_PLANE2);
}

RING_FUNC(ring_get_gl_clip_plane3)
{
	RING_API_RETNUMBER(GL_CLIP_PLANE3);
}

RING_FUNC(ring_get_gl_clip_plane4)
{
	RING_API_RETNUMBER(GL_CLIP_PLANE4);
}

RING_FUNC(ring_get_gl_clip_plane5)
{
	RING_API_RETNUMBER(GL_CLIP_PLANE5);
}

RING_FUNC(ring_get_gl_light0)
{
	RING_API_RETNUMBER(GL_LIGHT0);
}

RING_FUNC(ring_get_gl_color_buffer_bit)
{
	RING_API_RETNUMBER(GL_COLOR_BUFFER_BIT);
}

RING_FUNC(ring_get_gl_light1)
{
	RING_API_RETNUMBER(GL_LIGHT1);
}

RING_FUNC(ring_get_gl_light2)
{
	RING_API_RETNUMBER(GL_LIGHT2);
}

RING_FUNC(ring_get_gl_light3)
{
	RING_API_RETNUMBER(GL_LIGHT3);
}

RING_FUNC(ring_get_gl_light4)
{
	RING_API_RETNUMBER(GL_LIGHT4);
}

RING_FUNC(ring_get_gl_light5)
{
	RING_API_RETNUMBER(GL_LIGHT5);
}

RING_FUNC(ring_get_gl_light6)
{
	RING_API_RETNUMBER(GL_LIGHT6);
}

RING_FUNC(ring_get_gl_light7)
{
	RING_API_RETNUMBER(GL_LIGHT7);
}

RING_FUNC(ring_get_gl_hint_bit)
{
	RING_API_RETNUMBER(GL_HINT_BIT);
}

RING_FUNC(ring_get_gl_polygon_offset_fill)
{
	RING_API_RETNUMBER(GL_POLYGON_OFFSET_FILL);
}

RING_FUNC(ring_get_gl_polygon_offset_factor)
{
	RING_API_RETNUMBER(GL_POLYGON_OFFSET_FACTOR);
}

RING_FUNC(ring_get_gl_alpha4)
{
	RING_API_RETNUMBER(GL_ALPHA4);
}

RING_FUNC(ring_get_gl_alpha8)
{
	RING_API_RETNUMBER(GL_ALPHA8);
}

RING_FUNC(ring_get_gl_alpha12)
{
	RING_API_RETNUMBER(GL_ALPHA12);
}

RING_FUNC(ring_get_gl_alpha16)
{
	RING_API_RETNUMBER(GL_ALPHA16);
}

RING_FUNC(ring_get_gl_luminance4)
{
	RING_API_RETNUMBER(GL_LUMINANCE4);
}

RING_FUNC(ring_get_gl_luminance8)
{
	RING_API_RETNUMBER(GL_LUMINANCE8);
}

RING_FUNC(ring_get_gl_luminance12)
{
	RING_API_RETNUMBER(GL_LUMINANCE12);
}

RING_FUNC(ring_get_gl_luminance16)
{
	RING_API_RETNUMBER(GL_LUMINANCE16);
}

RING_FUNC(ring_get_gl_luminance4_alpha4)
{
	RING_API_RETNUMBER(GL_LUMINANCE4_ALPHA4);
}

RING_FUNC(ring_get_gl_luminance6_alpha2)
{
	RING_API_RETNUMBER(GL_LUMINANCE6_ALPHA2);
}

RING_FUNC(ring_get_gl_luminance8_alpha8)
{
	RING_API_RETNUMBER(GL_LUMINANCE8_ALPHA8);
}

RING_FUNC(ring_get_gl_luminance12_alpha4)
{
	RING_API_RETNUMBER(GL_LUMINANCE12_ALPHA4);
}

RING_FUNC(ring_get_gl_luminance12_alpha12)
{
	RING_API_RETNUMBER(GL_LUMINANCE12_ALPHA12);
}

RING_FUNC(ring_get_gl_luminance16_alpha16)
{
	RING_API_RETNUMBER(GL_LUMINANCE16_ALPHA16);
}

RING_FUNC(ring_get_gl_intensity)
{
	RING_API_RETNUMBER(GL_INTENSITY);
}

RING_FUNC(ring_get_gl_intensity4)
{
	RING_API_RETNUMBER(GL_INTENSITY4);
}

RING_FUNC(ring_get_gl_intensity8)
{
	RING_API_RETNUMBER(GL_INTENSITY8);
}

RING_FUNC(ring_get_gl_intensity12)
{
	RING_API_RETNUMBER(GL_INTENSITY12);
}

RING_FUNC(ring_get_gl_intensity16)
{
	RING_API_RETNUMBER(GL_INTENSITY16);
}

RING_FUNC(ring_get_gl_rgb4)
{
	RING_API_RETNUMBER(GL_RGB4);
}

RING_FUNC(ring_get_gl_rgb5)
{
	RING_API_RETNUMBER(GL_RGB5);
}

RING_FUNC(ring_get_gl_rgb8)
{
	RING_API_RETNUMBER(GL_RGB8);
}

RING_FUNC(ring_get_gl_rgb10)
{
	RING_API_RETNUMBER(GL_RGB10);
}

RING_FUNC(ring_get_gl_rgb12)
{
	RING_API_RETNUMBER(GL_RGB12);
}

RING_FUNC(ring_get_gl_rgb16)
{
	RING_API_RETNUMBER(GL_RGB16);
}

RING_FUNC(ring_get_gl_rgba2)
{
	RING_API_RETNUMBER(GL_RGBA2);
}

RING_FUNC(ring_get_gl_rgba4)
{
	RING_API_RETNUMBER(GL_RGBA4);
}

RING_FUNC(ring_get_gl_rgb5_a1)
{
	RING_API_RETNUMBER(GL_RGB5_A1);
}

RING_FUNC(ring_get_gl_rgba8)
{
	RING_API_RETNUMBER(GL_RGBA8);
}

RING_FUNC(ring_get_gl_rgb10_a2)
{
	RING_API_RETNUMBER(GL_RGB10_A2);
}

RING_FUNC(ring_get_gl_rgba12)
{
	RING_API_RETNUMBER(GL_RGBA12);
}

RING_FUNC(ring_get_gl_rgba16)
{
	RING_API_RETNUMBER(GL_RGBA16);
}

RING_FUNC(ring_get_gl_texture_red_size)
{
	RING_API_RETNUMBER(GL_TEXTURE_RED_SIZE);
}

RING_FUNC(ring_get_gl_texture_green_size)
{
	RING_API_RETNUMBER(GL_TEXTURE_GREEN_SIZE);
}

RING_FUNC(ring_get_gl_texture_blue_size)
{
	RING_API_RETNUMBER(GL_TEXTURE_BLUE_SIZE);
}

RING_FUNC(ring_get_gl_texture_alpha_size)
{
	RING_API_RETNUMBER(GL_TEXTURE_ALPHA_SIZE);
}

RING_FUNC(ring_get_gl_texture_luminance_size)
{
	RING_API_RETNUMBER(GL_TEXTURE_LUMINANCE_SIZE);
}

RING_FUNC(ring_get_gl_texture_intensity_size)
{
	RING_API_RETNUMBER(GL_TEXTURE_INTENSITY_SIZE);
}

RING_FUNC(ring_get_gl_proxy_texture_1d)
{
	RING_API_RETNUMBER(GL_PROXY_TEXTURE_1D);
}

RING_FUNC(ring_get_gl_proxy_texture_2d)
{
	RING_API_RETNUMBER(GL_PROXY_TEXTURE_2D);
}

RING_FUNC(ring_get_gl_texture_priority)
{
	RING_API_RETNUMBER(GL_TEXTURE_PRIORITY);
}

RING_FUNC(ring_get_gl_texture_resident)
{
	RING_API_RETNUMBER(GL_TEXTURE_RESIDENT);
}

RING_FUNC(ring_get_gl_texture_binding_1d)
{
	RING_API_RETNUMBER(GL_TEXTURE_BINDING_1D);
}

RING_FUNC(ring_get_gl_texture_binding_2d)
{
	RING_API_RETNUMBER(GL_TEXTURE_BINDING_2D);
}

RING_FUNC(ring_get_gl_vertex_array)
{
	RING_API_RETNUMBER(GL_VERTEX_ARRAY);
}

RING_FUNC(ring_get_gl_normal_array)
{
	RING_API_RETNUMBER(GL_NORMAL_ARRAY);
}

RING_FUNC(ring_get_gl_color_array)
{
	RING_API_RETNUMBER(GL_COLOR_ARRAY);
}

RING_FUNC(ring_get_gl_index_array)
{
	RING_API_RETNUMBER(GL_INDEX_ARRAY);
}

RING_FUNC(ring_get_gl_texture_coord_array)
{
	RING_API_RETNUMBER(GL_TEXTURE_COORD_ARRAY);
}

RING_FUNC(ring_get_gl_edge_flag_array)
{
	RING_API_RETNUMBER(GL_EDGE_FLAG_ARRAY);
}

RING_FUNC(ring_get_gl_vertex_array_size)
{
	RING_API_RETNUMBER(GL_VERTEX_ARRAY_SIZE);
}

RING_FUNC(ring_get_gl_vertex_array_type)
{
	RING_API_RETNUMBER(GL_VERTEX_ARRAY_TYPE);
}

RING_FUNC(ring_get_gl_vertex_array_stride)
{
	RING_API_RETNUMBER(GL_VERTEX_ARRAY_STRIDE);
}

RING_FUNC(ring_get_gl_normal_array_type)
{
	RING_API_RETNUMBER(GL_NORMAL_ARRAY_TYPE);
}

RING_FUNC(ring_get_gl_normal_array_stride)
{
	RING_API_RETNUMBER(GL_NORMAL_ARRAY_STRIDE);
}

RING_FUNC(ring_get_gl_color_array_size)
{
	RING_API_RETNUMBER(GL_COLOR_ARRAY_SIZE);
}

RING_FUNC(ring_get_gl_color_array_type)
{
	RING_API_RETNUMBER(GL_COLOR_ARRAY_TYPE);
}

RING_FUNC(ring_get_gl_color_array_stride)
{
	RING_API_RETNUMBER(GL_COLOR_ARRAY_STRIDE);
}

RING_FUNC(ring_get_gl_index_array_type)
{
	RING_API_RETNUMBER(GL_INDEX_ARRAY_TYPE);
}

RING_FUNC(ring_get_gl_index_array_stride)
{
	RING_API_RETNUMBER(GL_INDEX_ARRAY_STRIDE);
}

RING_FUNC(ring_get_gl_texture_coord_array_size)
{
	RING_API_RETNUMBER(GL_TEXTURE_COORD_ARRAY_SIZE);
}

RING_FUNC(ring_get_gl_texture_coord_array_type)
{
	RING_API_RETNUMBER(GL_TEXTURE_COORD_ARRAY_TYPE);
}

RING_FUNC(ring_get_gl_texture_coord_array_stride)
{
	RING_API_RETNUMBER(GL_TEXTURE_COORD_ARRAY_STRIDE);
}

RING_FUNC(ring_get_gl_edge_flag_array_stride)
{
	RING_API_RETNUMBER(GL_EDGE_FLAG_ARRAY_STRIDE);
}

RING_FUNC(ring_get_gl_vertex_array_pointer)
{
	RING_API_RETNUMBER(GL_VERTEX_ARRAY_POINTER);
}

RING_FUNC(ring_get_gl_normal_array_pointer)
{
	RING_API_RETNUMBER(GL_NORMAL_ARRAY_POINTER);
}

RING_FUNC(ring_get_gl_color_array_pointer)
{
	RING_API_RETNUMBER(GL_COLOR_ARRAY_POINTER);
}

RING_FUNC(ring_get_gl_index_array_pointer)
{
	RING_API_RETNUMBER(GL_INDEX_ARRAY_POINTER);
}

RING_FUNC(ring_get_gl_texture_coord_array_pointer)
{
	RING_API_RETNUMBER(GL_TEXTURE_COORD_ARRAY_POINTER);
}

RING_FUNC(ring_get_gl_edge_flag_array_pointer)
{
	RING_API_RETNUMBER(GL_EDGE_FLAG_ARRAY_POINTER);
}

RING_FUNC(ring_get_gl_color_index1_ext)
{
	RING_API_RETNUMBER(GL_COLOR_INDEX1_EXT);
}

RING_FUNC(ring_get_gl_color_index2_ext)
{
	RING_API_RETNUMBER(GL_COLOR_INDEX2_EXT);
}

RING_FUNC(ring_get_gl_color_index4_ext)
{
	RING_API_RETNUMBER(GL_COLOR_INDEX4_EXT);
}

RING_FUNC(ring_get_gl_color_index8_ext)
{
	RING_API_RETNUMBER(GL_COLOR_INDEX8_EXT);
}

RING_FUNC(ring_get_gl_color_index12_ext)
{
	RING_API_RETNUMBER(GL_COLOR_INDEX12_EXT);
}

RING_FUNC(ring_get_gl_color_index16_ext)
{
	RING_API_RETNUMBER(GL_COLOR_INDEX16_EXT);
}

RING_FUNC(ring_get_gl_eval_bit)
{
	RING_API_RETNUMBER(GL_EVAL_BIT);
}

RING_FUNC(ring_get_gl_list_bit)
{
	RING_API_RETNUMBER(GL_LIST_BIT);
}

RING_FUNC(ring_get_gl_texture_bit)
{
	RING_API_RETNUMBER(GL_TEXTURE_BIT);
}

RING_FUNC(ring_get_gl_scissor_bit)
{
	RING_API_RETNUMBER(GL_SCISSOR_BIT);
}

RING_FUNC(ring_get_gl_all_attrib_bits)
{
	RING_API_RETNUMBER(GL_ALL_ATTRIB_BITS);
}

RING_FUNC(ring_get_gl_client_all_attrib_bits)
{
	RING_API_RETNUMBER(GL_CLIENT_ALL_ATTRIB_BITS);
}


RING_FUNC(ring_glAccum)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glAccum( (GLenum )  (int) RING_API_GETNUMBER(1), (GLfloat ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_glAlphaFunc)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glAlphaFunc( (GLenum )  (int) RING_API_GETNUMBER(1), (GLclampf )  (int) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_glAreTexturesResident)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISPOINTER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISPOINTER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(glAreTexturesResident( (GLsizei )  (int) RING_API_GETNUMBER(1),(GLuint *) RING_API_GETCPOINTER(2,"GLuint"),(GLboolean *) RING_API_GETCPOINTER(3,"GLboolean")));
}


RING_FUNC(ring_glArrayElement)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glArrayElement( (GLint ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_glBegin)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glBegin( (GLenum )  (int) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_glBindTexture)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glBindTexture( (GLenum )  (int) RING_API_GETNUMBER(1), (GLuint ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_glBitmap)
{
	if ( RING_API_PARACOUNT != 7 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(5) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(6) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISPOINTER(7) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glBitmap( (GLsizei )  (int) RING_API_GETNUMBER(1), (GLsizei )  (int) RING_API_GETNUMBER(2), (GLfloat ) RING_API_GETNUMBER(3), (GLfloat ) RING_API_GETNUMBER(4), (GLfloat ) RING_API_GETNUMBER(5), (GLfloat ) RING_API_GETNUMBER(6),(GLubyte *) RING_API_GETCPOINTER(7,"GLubyte"));
}


RING_FUNC(ring_glBlendFunc)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glBlendFunc( (GLenum )  (int) RING_API_GETNUMBER(1), (GLenum )  (int) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_glCallList)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glCallList( (GLuint ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_glCallLists)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISPOINTER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glCallLists( (GLsizei )  (int) RING_API_GETNUMBER(1), (GLenum )  (int) RING_API_GETNUMBER(2),(void *) RING_API_GETCPOINTER(3,"void"));
}


RING_FUNC(ring_glClear)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glClear( (GLbitfield )  (int) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_glClearAccum)
{
	if ( RING_API_PARACOUNT != 4 ) {
		RING_API_ERROR(RING_API_MISS4PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glClearAccum( (GLfloat ) RING_API_GETNUMBER(1), (GLfloat ) RING_API_GETNUMBER(2), (GLfloat ) RING_API_GETNUMBER(3), (GLfloat ) RING_API_GETNUMBER(4));
}


RING_FUNC(ring_glClearColor)
{
	if ( RING_API_PARACOUNT != 4 ) {
		RING_API_ERROR(RING_API_MISS4PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glClearColor( (GLclampf )  (int) RING_API_GETNUMBER(1), (GLclampf )  (int) RING_API_GETNUMBER(2), (GLclampf )  (int) RING_API_GETNUMBER(3), (GLclampf )  (int) RING_API_GETNUMBER(4));
}


RING_FUNC(ring_glClearDepth)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glClearDepth( (GLclampd ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_glClearIndex)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glClearIndex( (GLfloat ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_glClearStencil)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glClearStencil( (GLint ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_glClipPlane)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISPOINTER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glClipPlane( (GLenum )  (int) RING_API_GETNUMBER(1),(GLdouble *) RING_API_GETCPOINTER(2,"GLdouble"));
}


RING_FUNC(ring_glColor3b)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColor3b( (GLbyte ) RING_API_GETNUMBER(1), (GLbyte ) RING_API_GETNUMBER(2), (GLbyte ) RING_API_GETNUMBER(3));
}


RING_FUNC(ring_glColor3bv)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColor3bv((GLbyte *) RING_API_GETCPOINTER(1,"GLbyte"));
}


RING_FUNC(ring_glColor3d)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColor3d( (GLdouble ) RING_API_GETNUMBER(1), (GLdouble ) RING_API_GETNUMBER(2), (GLdouble ) RING_API_GETNUMBER(3));
}


RING_FUNC(ring_glColor3dv)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColor3dv((GLdouble *) RING_API_GETCPOINTER(1,"GLdouble"));
}


RING_FUNC(ring_glColor3f)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColor3f( (GLfloat ) RING_API_GETNUMBER(1), (GLfloat ) RING_API_GETNUMBER(2), (GLfloat ) RING_API_GETNUMBER(3));
}


RING_FUNC(ring_glColor3fv)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColor3fv((GLfloat *) RING_API_GETCPOINTER(1,"GLfloat"));
}


RING_FUNC(ring_glColor3i)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColor3i( (GLint ) RING_API_GETNUMBER(1), (GLint ) RING_API_GETNUMBER(2), (GLint ) RING_API_GETNUMBER(3));
}


RING_FUNC(ring_glColor3iv)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColor3iv((GLint *) RING_API_GETCPOINTER(1,"GLint"));
}


RING_FUNC(ring_glColor3s)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColor3s( (GLshort ) RING_API_GETNUMBER(1), (GLshort ) RING_API_GETNUMBER(2), (GLshort ) RING_API_GETNUMBER(3));
}


RING_FUNC(ring_glColor3sv)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColor3sv((GLshort *) RING_API_GETCPOINTER(1,"GLshort"));
}


RING_FUNC(ring_glColor3ub)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColor3ub( (GLubyte ) RING_API_GETNUMBER(1), (GLubyte ) RING_API_GETNUMBER(2), (GLubyte ) RING_API_GETNUMBER(3));
}


RING_FUNC(ring_glColor3ubv)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColor3ubv((GLubyte *) RING_API_GETCPOINTER(1,"GLubyte"));
}


RING_FUNC(ring_glColor3ui)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColor3ui( (GLuint ) RING_API_GETNUMBER(1), (GLuint ) RING_API_GETNUMBER(2), (GLuint ) RING_API_GETNUMBER(3));
}


RING_FUNC(ring_glColor3uiv)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColor3uiv((GLuint *) RING_API_GETCPOINTER(1,"GLuint"));
}


RING_FUNC(ring_glColor3us)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColor3us( (GLushort ) RING_API_GETNUMBER(1), (GLushort ) RING_API_GETNUMBER(2), (GLushort ) RING_API_GETNUMBER(3));
}


RING_FUNC(ring_glColor3usv)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColor3usv((GLushort *) RING_API_GETCPOINTER(1,"GLushort"));
}


RING_FUNC(ring_glColor4b)
{
	if ( RING_API_PARACOUNT != 4 ) {
		RING_API_ERROR(RING_API_MISS4PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColor4b( (GLbyte ) RING_API_GETNUMBER(1), (GLbyte ) RING_API_GETNUMBER(2), (GLbyte ) RING_API_GETNUMBER(3), (GLbyte ) RING_API_GETNUMBER(4));
}


RING_FUNC(ring_glColor4bv)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColor4bv((GLbyte *) RING_API_GETCPOINTER(1,"GLbyte"));
}


RING_FUNC(ring_glColor4d)
{
	if ( RING_API_PARACOUNT != 4 ) {
		RING_API_ERROR(RING_API_MISS4PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColor4d( (GLdouble ) RING_API_GETNUMBER(1), (GLdouble ) RING_API_GETNUMBER(2), (GLdouble ) RING_API_GETNUMBER(3), (GLdouble ) RING_API_GETNUMBER(4));
}


RING_FUNC(ring_glColor4dv)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColor4dv((GLdouble *) RING_API_GETCPOINTER(1,"GLdouble"));
}


RING_FUNC(ring_glColor4f)
{
	if ( RING_API_PARACOUNT != 4 ) {
		RING_API_ERROR(RING_API_MISS4PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColor4f( (GLfloat ) RING_API_GETNUMBER(1), (GLfloat ) RING_API_GETNUMBER(2), (GLfloat ) RING_API_GETNUMBER(3), (GLfloat ) RING_API_GETNUMBER(4));
}


RING_FUNC(ring_glColor4fv)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColor4fv((GLfloat *) RING_API_GETCPOINTER(1,"GLfloat"));
}


RING_FUNC(ring_glColor4i)
{
	if ( RING_API_PARACOUNT != 4 ) {
		RING_API_ERROR(RING_API_MISS4PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColor4i( (GLint ) RING_API_GETNUMBER(1), (GLint ) RING_API_GETNUMBER(2), (GLint ) RING_API_GETNUMBER(3), (GLint ) RING_API_GETNUMBER(4));
}


RING_FUNC(ring_glColor4iv)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColor4iv((GLint *) RING_API_GETCPOINTER(1,"GLint"));
}


RING_FUNC(ring_glColor4s)
{
	if ( RING_API_PARACOUNT != 4 ) {
		RING_API_ERROR(RING_API_MISS4PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColor4s( (GLshort ) RING_API_GETNUMBER(1), (GLshort ) RING_API_GETNUMBER(2), (GLshort ) RING_API_GETNUMBER(3), (GLshort ) RING_API_GETNUMBER(4));
}


RING_FUNC(ring_glColor4sv)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColor4sv((GLshort *) RING_API_GETCPOINTER(1,"GLshort"));
}


RING_FUNC(ring_glColor4ub)
{
	if ( RING_API_PARACOUNT != 4 ) {
		RING_API_ERROR(RING_API_MISS4PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColor4ub( (GLubyte ) RING_API_GETNUMBER(1), (GLubyte ) RING_API_GETNUMBER(2), (GLubyte ) RING_API_GETNUMBER(3), (GLubyte ) RING_API_GETNUMBER(4));
}


RING_FUNC(ring_glColor4ubv)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColor4ubv((GLubyte *) RING_API_GETCPOINTER(1,"GLubyte"));
}


RING_FUNC(ring_glColor4ui)
{
	if ( RING_API_PARACOUNT != 4 ) {
		RING_API_ERROR(RING_API_MISS4PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColor4ui( (GLuint ) RING_API_GETNUMBER(1), (GLuint ) RING_API_GETNUMBER(2), (GLuint ) RING_API_GETNUMBER(3), (GLuint ) RING_API_GETNUMBER(4));
}


RING_FUNC(ring_glColor4uiv)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColor4uiv((GLuint *) RING_API_GETCPOINTER(1,"GLuint"));
}


RING_FUNC(ring_glColor4us)
{
	if ( RING_API_PARACOUNT != 4 ) {
		RING_API_ERROR(RING_API_MISS4PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColor4us( (GLushort ) RING_API_GETNUMBER(1), (GLushort ) RING_API_GETNUMBER(2), (GLushort ) RING_API_GETNUMBER(3), (GLushort ) RING_API_GETNUMBER(4));
}


RING_FUNC(ring_glColor4usv)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColor4usv((GLushort *) RING_API_GETCPOINTER(1,"GLushort"));
}


RING_FUNC(ring_glColorMask)
{
	if ( RING_API_PARACOUNT != 4 ) {
		RING_API_ERROR(RING_API_MISS4PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColorMask( (GLboolean ) RING_API_GETNUMBER(1), (GLboolean ) RING_API_GETNUMBER(2), (GLboolean ) RING_API_GETNUMBER(3), (GLboolean ) RING_API_GETNUMBER(4));
}


RING_FUNC(ring_glColorMaterial)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColorMaterial( (GLenum )  (int) RING_API_GETNUMBER(1), (GLenum )  (int) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_glColorPointer)
{
	if ( RING_API_PARACOUNT != 4 ) {
		RING_API_ERROR(RING_API_MISS4PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISPOINTER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glColorPointer( (GLint ) RING_API_GETNUMBER(1), (GLenum )  (int) RING_API_GETNUMBER(2), (GLsizei )  (int) RING_API_GETNUMBER(3),(void *) RING_API_GETCPOINTER(4,"void"));
}


RING_FUNC(ring_glCopyPixels)
{
	if ( RING_API_PARACOUNT != 5 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(5) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glCopyPixels( (GLint ) RING_API_GETNUMBER(1), (GLint ) RING_API_GETNUMBER(2), (GLsizei )  (int) RING_API_GETNUMBER(3), (GLsizei )  (int) RING_API_GETNUMBER(4), (GLenum )  (int) RING_API_GETNUMBER(5));
}


RING_FUNC(ring_glCopyTexImage1D)
{
	if ( RING_API_PARACOUNT != 7 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(5) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(6) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(7) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glCopyTexImage1D( (GLenum )  (int) RING_API_GETNUMBER(1), (GLint ) RING_API_GETNUMBER(2), (GLenum )  (int) RING_API_GETNUMBER(3), (GLint ) RING_API_GETNUMBER(4), (GLint ) RING_API_GETNUMBER(5), (GLsizei )  (int) RING_API_GETNUMBER(6), (GLint ) RING_API_GETNUMBER(7));
}


RING_FUNC(ring_glCopyTexImage2D)
{
	if ( RING_API_PARACOUNT != 8 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(5) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(6) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(7) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(8) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glCopyTexImage2D( (GLenum )  (int) RING_API_GETNUMBER(1), (GLint ) RING_API_GETNUMBER(2), (GLenum )  (int) RING_API_GETNUMBER(3), (GLint ) RING_API_GETNUMBER(4), (GLint ) RING_API_GETNUMBER(5), (GLsizei )  (int) RING_API_GETNUMBER(6), (GLsizei )  (int) RING_API_GETNUMBER(7), (GLint ) RING_API_GETNUMBER(8));
}


RING_FUNC(ring_glCopyTexSubImage1D)
{
	if ( RING_API_PARACOUNT != 6 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(5) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(6) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glCopyTexSubImage1D( (GLenum )  (int) RING_API_GETNUMBER(1), (GLint ) RING_API_GETNUMBER(2), (GLint ) RING_API_GETNUMBER(3), (GLint ) RING_API_GETNUMBER(4), (GLint ) RING_API_GETNUMBER(5), (GLsizei )  (int) RING_API_GETNUMBER(6));
}


RING_FUNC(ring_glCopyTexSubImage2D)
{
	if ( RING_API_PARACOUNT != 8 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(5) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(6) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(7) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(8) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glCopyTexSubImage2D( (GLenum )  (int) RING_API_GETNUMBER(1), (GLint ) RING_API_GETNUMBER(2), (GLint ) RING_API_GETNUMBER(3), (GLint ) RING_API_GETNUMBER(4), (GLint ) RING_API_GETNUMBER(5), (GLint ) RING_API_GETNUMBER(6), (GLsizei )  (int) RING_API_GETNUMBER(7), (GLsizei )  (int) RING_API_GETNUMBER(8));
}


RING_FUNC(ring_glCullFace)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glCullFace( (GLenum )  (int) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_glDeleteLists)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glDeleteLists( (GLuint ) RING_API_GETNUMBER(1), (GLsizei )  (int) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_glDeleteTextures)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISPOINTER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glDeleteTextures( (GLsizei )  (int) RING_API_GETNUMBER(1),(GLuint *) RING_API_GETCPOINTER(2,"GLuint"));
}


RING_FUNC(ring_glDepthFunc)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glDepthFunc( (GLenum )  (int) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_glDepthMask)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glDepthMask( (GLboolean ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_glDepthRange)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glDepthRange( (GLclampd ) RING_API_GETNUMBER(1), (GLclampd ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_glDisable)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glDisable( (GLenum )  (int) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_glDisableClientState)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glDisableClientState( (GLenum )  (int) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_glDrawArrays)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glDrawArrays( (GLenum )  (int) RING_API_GETNUMBER(1), (GLint ) RING_API_GETNUMBER(2), (GLsizei )  (int) RING_API_GETNUMBER(3));
}


RING_FUNC(ring_glDrawBuffer)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glDrawBuffer( (GLenum )  (int) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_glDrawElements)
{
	if ( RING_API_PARACOUNT != 4 ) {
		RING_API_ERROR(RING_API_MISS4PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISPOINTER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glDrawElements( (GLenum )  (int) RING_API_GETNUMBER(1), (GLsizei )  (int) RING_API_GETNUMBER(2), (GLenum )  (int) RING_API_GETNUMBER(3),(void *) RING_API_GETCPOINTER(4,"void"));
}


RING_FUNC(ring_glDrawPixels)
{
	if ( RING_API_PARACOUNT != 5 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISPOINTER(5) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glDrawPixels( (GLsizei )  (int) RING_API_GETNUMBER(1), (GLsizei )  (int) RING_API_GETNUMBER(2), (GLenum )  (int) RING_API_GETNUMBER(3), (GLenum )  (int) RING_API_GETNUMBER(4),(void *) RING_API_GETCPOINTER(5,"void"));
}


RING_FUNC(ring_glEdgeFlag)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glEdgeFlag( (GLboolean ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_glEdgeFlagPointer)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISPOINTER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glEdgeFlagPointer( (GLsizei )  (int) RING_API_GETNUMBER(1),(void *) RING_API_GETCPOINTER(2,"void"));
}


RING_FUNC(ring_glEdgeFlagv)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glEdgeFlagv((GLboolean *) RING_API_GETCPOINTER(1,"GLboolean"));
}


RING_FUNC(ring_glEnable)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glEnable( (GLenum )  (int) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_glEnableClientState)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glEnableClientState( (GLenum )  (int) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_glEnd)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	glEnd();
}


RING_FUNC(ring_glEndList)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	glEndList();
}


RING_FUNC(ring_glEvalCoord1d)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glEvalCoord1d( (GLdouble ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_glEvalCoord1dv)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glEvalCoord1dv((GLdouble *) RING_API_GETCPOINTER(1,"GLdouble"));
}


RING_FUNC(ring_glEvalCoord1f)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glEvalCoord1f( (GLfloat ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_glEvalCoord1fv)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glEvalCoord1fv((GLfloat *) RING_API_GETCPOINTER(1,"GLfloat"));
}


RING_FUNC(ring_glEvalCoord2d)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glEvalCoord2d( (GLdouble ) RING_API_GETNUMBER(1), (GLdouble ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_glEvalCoord2dv)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glEvalCoord2dv((GLdouble *) RING_API_GETCPOINTER(1,"GLdouble"));
}


RING_FUNC(ring_glEvalCoord2f)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glEvalCoord2f( (GLfloat ) RING_API_GETNUMBER(1), (GLfloat ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_glEvalCoord2fv)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glEvalCoord2fv((GLfloat *) RING_API_GETCPOINTER(1,"GLfloat"));
}


RING_FUNC(ring_glEvalMesh1)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glEvalMesh1( (GLenum )  (int) RING_API_GETNUMBER(1), (GLint ) RING_API_GETNUMBER(2), (GLint ) RING_API_GETNUMBER(3));
}

RING_API void ringlib_init(RingState *pRingState)
{
	ring_vm_funcregister("glaccum",ring_glAccum);
	ring_vm_funcregister("glalphafunc",ring_glAlphaFunc);
	ring_vm_funcregister("glaretexturesresident",ring_glAreTexturesResident);
	ring_vm_funcregister("glarrayelement",ring_glArrayElement);
	ring_vm_funcregister("glbegin",ring_glBegin);
	ring_vm_funcregister("glbindtexture",ring_glBindTexture);
	ring_vm_funcregister("glbitmap",ring_glBitmap);
	ring_vm_funcregister("glblendfunc",ring_glBlendFunc);
	ring_vm_funcregister("glcalllist",ring_glCallList);
	ring_vm_funcregister("glcalllists",ring_glCallLists);
	ring_vm_funcregister("glclear",ring_glClear);
	ring_vm_funcregister("glclearaccum",ring_glClearAccum);
	ring_vm_funcregister("glclearcolor",ring_glClearColor);
	ring_vm_funcregister("glcleardepth",ring_glClearDepth);
	ring_vm_funcregister("glclearindex",ring_glClearIndex);
	ring_vm_funcregister("glclearstencil",ring_glClearStencil);
	ring_vm_funcregister("glclipplane",ring_glClipPlane);
	ring_vm_funcregister("glcolor3b",ring_glColor3b);
	ring_vm_funcregister("glcolor3bv",ring_glColor3bv);
	ring_vm_funcregister("glcolor3d",ring_glColor3d);
	ring_vm_funcregister("glcolor3dv",ring_glColor3dv);
	ring_vm_funcregister("glcolor3f",ring_glColor3f);
	ring_vm_funcregister("glcolor3fv",ring_glColor3fv);
	ring_vm_funcregister("glcolor3i",ring_glColor3i);
	ring_vm_funcregister("glcolor3iv",ring_glColor3iv);
	ring_vm_funcregister("glcolor3s",ring_glColor3s);
	ring_vm_funcregister("glcolor3sv",ring_glColor3sv);
	ring_vm_funcregister("glcolor3ub",ring_glColor3ub);
	ring_vm_funcregister("glcolor3ubv",ring_glColor3ubv);
	ring_vm_funcregister("glcolor3ui",ring_glColor3ui);
	ring_vm_funcregister("glcolor3uiv",ring_glColor3uiv);
	ring_vm_funcregister("glcolor3us",ring_glColor3us);
	ring_vm_funcregister("glcolor3usv",ring_glColor3usv);
	ring_vm_funcregister("glcolor4b",ring_glColor4b);
	ring_vm_funcregister("glcolor4bv",ring_glColor4bv);
	ring_vm_funcregister("glcolor4d",ring_glColor4d);
	ring_vm_funcregister("glcolor4dv",ring_glColor4dv);
	ring_vm_funcregister("glcolor4f",ring_glColor4f);
	ring_vm_funcregister("glcolor4fv",ring_glColor4fv);
	ring_vm_funcregister("glcolor4i",ring_glColor4i);
	ring_vm_funcregister("glcolor4iv",ring_glColor4iv);
	ring_vm_funcregister("glcolor4s",ring_glColor4s);
	ring_vm_funcregister("glcolor4sv",ring_glColor4sv);
	ring_vm_funcregister("glcolor4ub",ring_glColor4ub);
	ring_vm_funcregister("glcolor4ubv",ring_glColor4ubv);
	ring_vm_funcregister("glcolor4ui",ring_glColor4ui);
	ring_vm_funcregister("glcolor4uiv",ring_glColor4uiv);
	ring_vm_funcregister("glcolor4us",ring_glColor4us);
	ring_vm_funcregister("glcolor4usv",ring_glColor4usv);
	ring_vm_funcregister("glcolormask",ring_glColorMask);
	ring_vm_funcregister("glcolormaterial",ring_glColorMaterial);
	ring_vm_funcregister("glcolorpointer",ring_glColorPointer);
	ring_vm_funcregister("glcopypixels",ring_glCopyPixels);
	ring_vm_funcregister("glcopyteximage1d",ring_glCopyTexImage1D);
	ring_vm_funcregister("glcopyteximage2d",ring_glCopyTexImage2D);
	ring_vm_funcregister("glcopytexsubimage1d",ring_glCopyTexSubImage1D);
	ring_vm_funcregister("glcopytexsubimage2d",ring_glCopyTexSubImage2D);
	ring_vm_funcregister("glcullface",ring_glCullFace);
	ring_vm_funcregister("gldeletelists",ring_glDeleteLists);
	ring_vm_funcregister("gldeletetextures",ring_glDeleteTextures);
	ring_vm_funcregister("gldepthfunc",ring_glDepthFunc);
	ring_vm_funcregister("gldepthmask",ring_glDepthMask);
	ring_vm_funcregister("gldepthrange",ring_glDepthRange);
	ring_vm_funcregister("gldisable",ring_glDisable);
	ring_vm_funcregister("gldisableclientstate",ring_glDisableClientState);
	ring_vm_funcregister("gldrawarrays",ring_glDrawArrays);
	ring_vm_funcregister("gldrawbuffer",ring_glDrawBuffer);
	ring_vm_funcregister("gldrawelements",ring_glDrawElements);
	ring_vm_funcregister("gldrawpixels",ring_glDrawPixels);
	ring_vm_funcregister("gledgeflag",ring_glEdgeFlag);
	ring_vm_funcregister("gledgeflagpointer",ring_glEdgeFlagPointer);
	ring_vm_funcregister("gledgeflagv",ring_glEdgeFlagv);
	ring_vm_funcregister("glenable",ring_glEnable);
	ring_vm_funcregister("glenableclientstate",ring_glEnableClientState);
	ring_vm_funcregister("glend",ring_glEnd);
	ring_vm_funcregister("glendlist",ring_glEndList);
	ring_vm_funcregister("glevalcoord1d",ring_glEvalCoord1d);
	ring_vm_funcregister("glevalcoord1dv",ring_glEvalCoord1dv);
	ring_vm_funcregister("glevalcoord1f",ring_glEvalCoord1f);
	ring_vm_funcregister("glevalcoord1fv",ring_glEvalCoord1fv);
	ring_vm_funcregister("glevalcoord2d",ring_glEvalCoord2d);
	ring_vm_funcregister("glevalcoord2dv",ring_glEvalCoord2dv);
	ring_vm_funcregister("glevalcoord2f",ring_glEvalCoord2f);
	ring_vm_funcregister("glevalcoord2fv",ring_glEvalCoord2fv);
	ring_vm_funcregister("glevalmesh1",ring_glEvalMesh1);
	ring_vm_funcregister("get_gl_zero",ring_get_gl_zero);
	ring_vm_funcregister("get_gl_false",ring_get_gl_false);
	ring_vm_funcregister("get_gl_logic_op",ring_get_gl_logic_op);
	ring_vm_funcregister("get_gl_none",ring_get_gl_none);
	ring_vm_funcregister("get_gl_texture_components",ring_get_gl_texture_components);
	ring_vm_funcregister("get_gl_no_error",ring_get_gl_no_error);
	ring_vm_funcregister("get_gl_points",ring_get_gl_points);
	ring_vm_funcregister("get_gl_current_bit",ring_get_gl_current_bit);
	ring_vm_funcregister("get_gl_true",ring_get_gl_true);
	ring_vm_funcregister("get_gl_one",ring_get_gl_one);
	ring_vm_funcregister("get_gl_client_pixel_store_bit",ring_get_gl_client_pixel_store_bit);
	ring_vm_funcregister("get_gl_lines",ring_get_gl_lines);
	ring_vm_funcregister("get_gl_line_loop",ring_get_gl_line_loop);
	ring_vm_funcregister("get_gl_point_bit",ring_get_gl_point_bit);
	ring_vm_funcregister("get_gl_client_vertex_array_bit",ring_get_gl_client_vertex_array_bit);
	ring_vm_funcregister("get_gl_line_strip",ring_get_gl_line_strip);
	ring_vm_funcregister("get_gl_line_bit",ring_get_gl_line_bit);
	ring_vm_funcregister("get_gl_triangles",ring_get_gl_triangles);
	ring_vm_funcregister("get_gl_triangle_strip",ring_get_gl_triangle_strip);
	ring_vm_funcregister("get_gl_triangle_fan",ring_get_gl_triangle_fan);
	ring_vm_funcregister("get_gl_quads",ring_get_gl_quads);
	ring_vm_funcregister("get_gl_quad_strip",ring_get_gl_quad_strip);
	ring_vm_funcregister("get_gl_polygon_bit",ring_get_gl_polygon_bit);
	ring_vm_funcregister("get_gl_polygon",ring_get_gl_polygon);
	ring_vm_funcregister("get_gl_polygon_stipple_bit",ring_get_gl_polygon_stipple_bit);
	ring_vm_funcregister("get_gl_pixel_mode_bit",ring_get_gl_pixel_mode_bit);
	ring_vm_funcregister("get_gl_lighting_bit",ring_get_gl_lighting_bit);
	ring_vm_funcregister("get_gl_fog_bit",ring_get_gl_fog_bit);
	ring_vm_funcregister("get_gl_depth_buffer_bit",ring_get_gl_depth_buffer_bit);
	ring_vm_funcregister("get_gl_accum",ring_get_gl_accum);
	ring_vm_funcregister("get_gl_load",ring_get_gl_load);
	ring_vm_funcregister("get_gl_return",ring_get_gl_return);
	ring_vm_funcregister("get_gl_mult",ring_get_gl_mult);
	ring_vm_funcregister("get_gl_add",ring_get_gl_add);
	ring_vm_funcregister("get_gl_never",ring_get_gl_never);
	ring_vm_funcregister("get_gl_accum_buffer_bit",ring_get_gl_accum_buffer_bit);
	ring_vm_funcregister("get_gl_less",ring_get_gl_less);
	ring_vm_funcregister("get_gl_equal",ring_get_gl_equal);
	ring_vm_funcregister("get_gl_lequal",ring_get_gl_lequal);
	ring_vm_funcregister("get_gl_greater",ring_get_gl_greater);
	ring_vm_funcregister("get_gl_notequal",ring_get_gl_notequal);
	ring_vm_funcregister("get_gl_gequal",ring_get_gl_gequal);
	ring_vm_funcregister("get_gl_always",ring_get_gl_always);
	ring_vm_funcregister("get_gl_src_color",ring_get_gl_src_color);
	ring_vm_funcregister("get_gl_one_minus_src_color",ring_get_gl_one_minus_src_color);
	ring_vm_funcregister("get_gl_src_alpha",ring_get_gl_src_alpha);
	ring_vm_funcregister("get_gl_one_minus_src_alpha",ring_get_gl_one_minus_src_alpha);
	ring_vm_funcregister("get_gl_dst_alpha",ring_get_gl_dst_alpha);
	ring_vm_funcregister("get_gl_one_minus_dst_alpha",ring_get_gl_one_minus_dst_alpha);
	ring_vm_funcregister("get_gl_dst_color",ring_get_gl_dst_color);
	ring_vm_funcregister("get_gl_one_minus_dst_color",ring_get_gl_one_minus_dst_color);
	ring_vm_funcregister("get_gl_src_alpha_saturate",ring_get_gl_src_alpha_saturate);
	ring_vm_funcregister("get_gl_stencil_buffer_bit",ring_get_gl_stencil_buffer_bit);
	ring_vm_funcregister("get_gl_front_left",ring_get_gl_front_left);
	ring_vm_funcregister("get_gl_front_right",ring_get_gl_front_right);
	ring_vm_funcregister("get_gl_back_left",ring_get_gl_back_left);
	ring_vm_funcregister("get_gl_back_right",ring_get_gl_back_right);
	ring_vm_funcregister("get_gl_front",ring_get_gl_front);
	ring_vm_funcregister("get_gl_back",ring_get_gl_back);
	ring_vm_funcregister("get_gl_left",ring_get_gl_left);
	ring_vm_funcregister("get_gl_right",ring_get_gl_right);
	ring_vm_funcregister("get_gl_front_and_back",ring_get_gl_front_and_back);
	ring_vm_funcregister("get_gl_aux0",ring_get_gl_aux0);
	ring_vm_funcregister("get_gl_aux1",ring_get_gl_aux1);
	ring_vm_funcregister("get_gl_aux2",ring_get_gl_aux2);
	ring_vm_funcregister("get_gl_aux3",ring_get_gl_aux3);
	ring_vm_funcregister("get_gl_invalid_enum",ring_get_gl_invalid_enum);
	ring_vm_funcregister("get_gl_invalid_value",ring_get_gl_invalid_value);
	ring_vm_funcregister("get_gl_invalid_operation",ring_get_gl_invalid_operation);
	ring_vm_funcregister("get_gl_stack_overflow",ring_get_gl_stack_overflow);
	ring_vm_funcregister("get_gl_stack_underflow",ring_get_gl_stack_underflow);
	ring_vm_funcregister("get_gl_out_of_memory",ring_get_gl_out_of_memory);
	ring_vm_funcregister("get_gl_2d",ring_get_gl_2d);
	ring_vm_funcregister("get_gl_3d",ring_get_gl_3d);
	ring_vm_funcregister("get_gl_3d_color",ring_get_gl_3d_color);
	ring_vm_funcregister("get_gl_3d_color_texture",ring_get_gl_3d_color_texture);
	ring_vm_funcregister("get_gl_4d_color_texture",ring_get_gl_4d_color_texture);
	ring_vm_funcregister("get_gl_pass_through_token",ring_get_gl_pass_through_token);
	ring_vm_funcregister("get_gl_point_token",ring_get_gl_point_token);
	ring_vm_funcregister("get_gl_line_token",ring_get_gl_line_token);
	ring_vm_funcregister("get_gl_polygon_token",ring_get_gl_polygon_token);
	ring_vm_funcregister("get_gl_bitmap_token",ring_get_gl_bitmap_token);
	ring_vm_funcregister("get_gl_draw_pixel_token",ring_get_gl_draw_pixel_token);
	ring_vm_funcregister("get_gl_copy_pixel_token",ring_get_gl_copy_pixel_token);
	ring_vm_funcregister("get_gl_line_reset_token",ring_get_gl_line_reset_token);
	ring_vm_funcregister("get_gl_exp",ring_get_gl_exp);
	ring_vm_funcregister("get_gl_viewport_bit",ring_get_gl_viewport_bit);
	ring_vm_funcregister("get_gl_exp2",ring_get_gl_exp2);
	ring_vm_funcregister("get_gl_cw",ring_get_gl_cw);
	ring_vm_funcregister("get_gl_ccw",ring_get_gl_ccw);
	ring_vm_funcregister("get_gl_coeff",ring_get_gl_coeff);
	ring_vm_funcregister("get_gl_order",ring_get_gl_order);
	ring_vm_funcregister("get_gl_domain",ring_get_gl_domain);
	ring_vm_funcregister("get_gl_current_color",ring_get_gl_current_color);
	ring_vm_funcregister("get_gl_current_index",ring_get_gl_current_index);
	ring_vm_funcregister("get_gl_current_normal",ring_get_gl_current_normal);
	ring_vm_funcregister("get_gl_current_texture_coords",ring_get_gl_current_texture_coords);
	ring_vm_funcregister("get_gl_current_raster_color",ring_get_gl_current_raster_color);
	ring_vm_funcregister("get_gl_current_raster_index",ring_get_gl_current_raster_index);
	ring_vm_funcregister("get_gl_current_raster_texture_coords",ring_get_gl_current_raster_texture_coords);
	ring_vm_funcregister("get_gl_current_raster_position",ring_get_gl_current_raster_position);
	ring_vm_funcregister("get_gl_current_raster_position_valid",ring_get_gl_current_raster_position_valid);
	ring_vm_funcregister("get_gl_current_raster_distance",ring_get_gl_current_raster_distance);
	ring_vm_funcregister("get_gl_point_smooth",ring_get_gl_point_smooth);
	ring_vm_funcregister("get_gl_point_size",ring_get_gl_point_size);
	ring_vm_funcregister("get_gl_point_size_range",ring_get_gl_point_size_range);
	ring_vm_funcregister("get_gl_point_size_granularity",ring_get_gl_point_size_granularity);
	ring_vm_funcregister("get_gl_line_smooth",ring_get_gl_line_smooth);
	ring_vm_funcregister("get_gl_line_width",ring_get_gl_line_width);
	ring_vm_funcregister("get_gl_line_width_range",ring_get_gl_line_width_range);
	ring_vm_funcregister("get_gl_line_width_granularity",ring_get_gl_line_width_granularity);
	ring_vm_funcregister("get_gl_line_stipple",ring_get_gl_line_stipple);
	ring_vm_funcregister("get_gl_line_stipple_pattern",ring_get_gl_line_stipple_pattern);
	ring_vm_funcregister("get_gl_line_stipple_repeat",ring_get_gl_line_stipple_repeat);
	ring_vm_funcregister("get_gl_list_mode",ring_get_gl_list_mode);
	ring_vm_funcregister("get_gl_max_list_nesting",ring_get_gl_max_list_nesting);
	ring_vm_funcregister("get_gl_list_base",ring_get_gl_list_base);
	ring_vm_funcregister("get_gl_list_index",ring_get_gl_list_index);
	ring_vm_funcregister("get_gl_polygon_mode",ring_get_gl_polygon_mode);
	ring_vm_funcregister("get_gl_polygon_smooth",ring_get_gl_polygon_smooth);
	ring_vm_funcregister("get_gl_polygon_stipple",ring_get_gl_polygon_stipple);
	ring_vm_funcregister("get_gl_edge_flag",ring_get_gl_edge_flag);
	ring_vm_funcregister("get_gl_cull_face",ring_get_gl_cull_face);
	ring_vm_funcregister("get_gl_cull_face_mode",ring_get_gl_cull_face_mode);
	ring_vm_funcregister("get_gl_front_face",ring_get_gl_front_face);
	ring_vm_funcregister("get_gl_lighting",ring_get_gl_lighting);
	ring_vm_funcregister("get_gl_light_model_local_viewer",ring_get_gl_light_model_local_viewer);
	ring_vm_funcregister("get_gl_light_model_two_side",ring_get_gl_light_model_two_side);
	ring_vm_funcregister("get_gl_light_model_ambient",ring_get_gl_light_model_ambient);
	ring_vm_funcregister("get_gl_shade_model",ring_get_gl_shade_model);
	ring_vm_funcregister("get_gl_color_material_face",ring_get_gl_color_material_face);
	ring_vm_funcregister("get_gl_color_material_parameter",ring_get_gl_color_material_parameter);
	ring_vm_funcregister("get_gl_color_material",ring_get_gl_color_material);
	ring_vm_funcregister("get_gl_fog",ring_get_gl_fog);
	ring_vm_funcregister("get_gl_fog_index",ring_get_gl_fog_index);
	ring_vm_funcregister("get_gl_fog_density",ring_get_gl_fog_density);
	ring_vm_funcregister("get_gl_fog_start",ring_get_gl_fog_start);
	ring_vm_funcregister("get_gl_fog_end",ring_get_gl_fog_end);
	ring_vm_funcregister("get_gl_fog_mode",ring_get_gl_fog_mode);
	ring_vm_funcregister("get_gl_fog_color",ring_get_gl_fog_color);
	ring_vm_funcregister("get_gl_depth_range",ring_get_gl_depth_range);
	ring_vm_funcregister("get_gl_depth_test",ring_get_gl_depth_test);
	ring_vm_funcregister("get_gl_depth_writemask",ring_get_gl_depth_writemask);
	ring_vm_funcregister("get_gl_depth_clear_value",ring_get_gl_depth_clear_value);
	ring_vm_funcregister("get_gl_depth_func",ring_get_gl_depth_func);
	ring_vm_funcregister("get_gl_accum_clear_value",ring_get_gl_accum_clear_value);
	ring_vm_funcregister("get_gl_stencil_test",ring_get_gl_stencil_test);
	ring_vm_funcregister("get_gl_stencil_clear_value",ring_get_gl_stencil_clear_value);
	ring_vm_funcregister("get_gl_stencil_func",ring_get_gl_stencil_func);
	ring_vm_funcregister("get_gl_stencil_value_mask",ring_get_gl_stencil_value_mask);
	ring_vm_funcregister("get_gl_stencil_fail",ring_get_gl_stencil_fail);
	ring_vm_funcregister("get_gl_stencil_pass_depth_fail",ring_get_gl_stencil_pass_depth_fail);
	ring_vm_funcregister("get_gl_stencil_pass_depth_pass",ring_get_gl_stencil_pass_depth_pass);
	ring_vm_funcregister("get_gl_stencil_ref",ring_get_gl_stencil_ref);
	ring_vm_funcregister("get_gl_stencil_writemask",ring_get_gl_stencil_writemask);
	ring_vm_funcregister("get_gl_matrix_mode",ring_get_gl_matrix_mode);
	ring_vm_funcregister("get_gl_normalize",ring_get_gl_normalize);
	ring_vm_funcregister("get_gl_viewport",ring_get_gl_viewport);
	ring_vm_funcregister("get_gl_modelview_stack_depth",ring_get_gl_modelview_stack_depth);
	ring_vm_funcregister("get_gl_projection_stack_depth",ring_get_gl_projection_stack_depth);
	ring_vm_funcregister("get_gl_texture_stack_depth",ring_get_gl_texture_stack_depth);
	ring_vm_funcregister("get_gl_modelview_matrix",ring_get_gl_modelview_matrix);
	ring_vm_funcregister("get_gl_projection_matrix",ring_get_gl_projection_matrix);
	ring_vm_funcregister("get_gl_texture_matrix",ring_get_gl_texture_matrix);
	ring_vm_funcregister("get_gl_attrib_stack_depth",ring_get_gl_attrib_stack_depth);
	ring_vm_funcregister("get_gl_client_attrib_stack_depth",ring_get_gl_client_attrib_stack_depth);
	ring_vm_funcregister("get_gl_alpha_test",ring_get_gl_alpha_test);
	ring_vm_funcregister("get_gl_alpha_test_func",ring_get_gl_alpha_test_func);
	ring_vm_funcregister("get_gl_alpha_test_ref",ring_get_gl_alpha_test_ref);
	ring_vm_funcregister("get_gl_dither",ring_get_gl_dither);
	ring_vm_funcregister("get_gl_blend_dst",ring_get_gl_blend_dst);
	ring_vm_funcregister("get_gl_blend_src",ring_get_gl_blend_src);
	ring_vm_funcregister("get_gl_blend",ring_get_gl_blend);
	ring_vm_funcregister("get_gl_logic_op_mode",ring_get_gl_logic_op_mode);
	ring_vm_funcregister("get_gl_index_logic_op",ring_get_gl_index_logic_op);
	ring_vm_funcregister("get_gl_color_logic_op",ring_get_gl_color_logic_op);
	ring_vm_funcregister("get_gl_aux_buffers",ring_get_gl_aux_buffers);
	ring_vm_funcregister("get_gl_draw_buffer",ring_get_gl_draw_buffer);
	ring_vm_funcregister("get_gl_read_buffer",ring_get_gl_read_buffer);
	ring_vm_funcregister("get_gl_scissor_box",ring_get_gl_scissor_box);
	ring_vm_funcregister("get_gl_scissor_test",ring_get_gl_scissor_test);
	ring_vm_funcregister("get_gl_index_clear_value",ring_get_gl_index_clear_value);
	ring_vm_funcregister("get_gl_index_writemask",ring_get_gl_index_writemask);
	ring_vm_funcregister("get_gl_color_clear_value",ring_get_gl_color_clear_value);
	ring_vm_funcregister("get_gl_color_writemask",ring_get_gl_color_writemask);
	ring_vm_funcregister("get_gl_index_mode",ring_get_gl_index_mode);
	ring_vm_funcregister("get_gl_rgba_mode",ring_get_gl_rgba_mode);
	ring_vm_funcregister("get_gl_doublebuffer",ring_get_gl_doublebuffer);
	ring_vm_funcregister("get_gl_stereo",ring_get_gl_stereo);
	ring_vm_funcregister("get_gl_render_mode",ring_get_gl_render_mode);
	ring_vm_funcregister("get_gl_perspective_correction_hint",ring_get_gl_perspective_correction_hint);
	ring_vm_funcregister("get_gl_point_smooth_hint",ring_get_gl_point_smooth_hint);
	ring_vm_funcregister("get_gl_line_smooth_hint",ring_get_gl_line_smooth_hint);
	ring_vm_funcregister("get_gl_polygon_smooth_hint",ring_get_gl_polygon_smooth_hint);
	ring_vm_funcregister("get_gl_fog_hint",ring_get_gl_fog_hint);
	ring_vm_funcregister("get_gl_texture_gen_s",ring_get_gl_texture_gen_s);
	ring_vm_funcregister("get_gl_texture_gen_t",ring_get_gl_texture_gen_t);
	ring_vm_funcregister("get_gl_texture_gen_r",ring_get_gl_texture_gen_r);
	ring_vm_funcregister("get_gl_texture_gen_q",ring_get_gl_texture_gen_q);
	ring_vm_funcregister("get_gl_pixel_map_i_to_i",ring_get_gl_pixel_map_i_to_i);
	ring_vm_funcregister("get_gl_pixel_map_s_to_s",ring_get_gl_pixel_map_s_to_s);
	ring_vm_funcregister("get_gl_pixel_map_i_to_r",ring_get_gl_pixel_map_i_to_r);
	ring_vm_funcregister("get_gl_pixel_map_i_to_g",ring_get_gl_pixel_map_i_to_g);
	ring_vm_funcregister("get_gl_pixel_map_i_to_b",ring_get_gl_pixel_map_i_to_b);
	ring_vm_funcregister("get_gl_pixel_map_i_to_a",ring_get_gl_pixel_map_i_to_a);
	ring_vm_funcregister("get_gl_pixel_map_r_to_r",ring_get_gl_pixel_map_r_to_r);
	ring_vm_funcregister("get_gl_pixel_map_g_to_g",ring_get_gl_pixel_map_g_to_g);
	ring_vm_funcregister("get_gl_pixel_map_b_to_b",ring_get_gl_pixel_map_b_to_b);
	ring_vm_funcregister("get_gl_pixel_map_a_to_a",ring_get_gl_pixel_map_a_to_a);
	ring_vm_funcregister("get_gl_pixel_map_i_to_i_size",ring_get_gl_pixel_map_i_to_i_size);
	ring_vm_funcregister("get_gl_pixel_map_s_to_s_size",ring_get_gl_pixel_map_s_to_s_size);
	ring_vm_funcregister("get_gl_pixel_map_i_to_r_size",ring_get_gl_pixel_map_i_to_r_size);
	ring_vm_funcregister("get_gl_pixel_map_i_to_g_size",ring_get_gl_pixel_map_i_to_g_size);
	ring_vm_funcregister("get_gl_pixel_map_i_to_b_size",ring_get_gl_pixel_map_i_to_b_size);
	ring_vm_funcregister("get_gl_pixel_map_i_to_a_size",ring_get_gl_pixel_map_i_to_a_size);
	ring_vm_funcregister("get_gl_pixel_map_r_to_r_size",ring_get_gl_pixel_map_r_to_r_size);
	ring_vm_funcregister("get_gl_pixel_map_g_to_g_size",ring_get_gl_pixel_map_g_to_g_size);
	ring_vm_funcregister("get_gl_pixel_map_b_to_b_size",ring_get_gl_pixel_map_b_to_b_size);
	ring_vm_funcregister("get_gl_pixel_map_a_to_a_size",ring_get_gl_pixel_map_a_to_a_size);
	ring_vm_funcregister("get_gl_unpack_swap_bytes",ring_get_gl_unpack_swap_bytes);
	ring_vm_funcregister("get_gl_unpack_lsb_first",ring_get_gl_unpack_lsb_first);
	ring_vm_funcregister("get_gl_unpack_row_length",ring_get_gl_unpack_row_length);
	ring_vm_funcregister("get_gl_unpack_skip_rows",ring_get_gl_unpack_skip_rows);
	ring_vm_funcregister("get_gl_unpack_skip_pixels",ring_get_gl_unpack_skip_pixels);
	ring_vm_funcregister("get_gl_unpack_alignment",ring_get_gl_unpack_alignment);
	ring_vm_funcregister("get_gl_pack_swap_bytes",ring_get_gl_pack_swap_bytes);
	ring_vm_funcregister("get_gl_pack_lsb_first",ring_get_gl_pack_lsb_first);
	ring_vm_funcregister("get_gl_pack_row_length",ring_get_gl_pack_row_length);
	ring_vm_funcregister("get_gl_pack_skip_rows",ring_get_gl_pack_skip_rows);
	ring_vm_funcregister("get_gl_pack_skip_pixels",ring_get_gl_pack_skip_pixels);
	ring_vm_funcregister("get_gl_pack_alignment",ring_get_gl_pack_alignment);
	ring_vm_funcregister("get_gl_map_color",ring_get_gl_map_color);
	ring_vm_funcregister("get_gl_map_stencil",ring_get_gl_map_stencil);
	ring_vm_funcregister("get_gl_index_shift",ring_get_gl_index_shift);
	ring_vm_funcregister("get_gl_index_offset",ring_get_gl_index_offset);
	ring_vm_funcregister("get_gl_red_scale",ring_get_gl_red_scale);
	ring_vm_funcregister("get_gl_red_bias",ring_get_gl_red_bias);
	ring_vm_funcregister("get_gl_zoom_x",ring_get_gl_zoom_x);
	ring_vm_funcregister("get_gl_zoom_y",ring_get_gl_zoom_y);
	ring_vm_funcregister("get_gl_green_scale",ring_get_gl_green_scale);
	ring_vm_funcregister("get_gl_green_bias",ring_get_gl_green_bias);
	ring_vm_funcregister("get_gl_blue_scale",ring_get_gl_blue_scale);
	ring_vm_funcregister("get_gl_blue_bias",ring_get_gl_blue_bias);
	ring_vm_funcregister("get_gl_alpha_scale",ring_get_gl_alpha_scale);
	ring_vm_funcregister("get_gl_alpha_bias",ring_get_gl_alpha_bias);
	ring_vm_funcregister("get_gl_depth_scale",ring_get_gl_depth_scale);
	ring_vm_funcregister("get_gl_depth_bias",ring_get_gl_depth_bias);
	ring_vm_funcregister("get_gl_max_eval_order",ring_get_gl_max_eval_order);
	ring_vm_funcregister("get_gl_max_lights",ring_get_gl_max_lights);
	ring_vm_funcregister("get_gl_max_clip_planes",ring_get_gl_max_clip_planes);
	ring_vm_funcregister("get_gl_max_texture_size",ring_get_gl_max_texture_size);
	ring_vm_funcregister("get_gl_max_pixel_map_table",ring_get_gl_max_pixel_map_table);
	ring_vm_funcregister("get_gl_max_attrib_stack_depth",ring_get_gl_max_attrib_stack_depth);
	ring_vm_funcregister("get_gl_max_modelview_stack_depth",ring_get_gl_max_modelview_stack_depth);
	ring_vm_funcregister("get_gl_max_name_stack_depth",ring_get_gl_max_name_stack_depth);
	ring_vm_funcregister("get_gl_max_projection_stack_depth",ring_get_gl_max_projection_stack_depth);
	ring_vm_funcregister("get_gl_max_texture_stack_depth",ring_get_gl_max_texture_stack_depth);
	ring_vm_funcregister("get_gl_max_viewport_dims",ring_get_gl_max_viewport_dims);
	ring_vm_funcregister("get_gl_max_client_attrib_stack_depth",ring_get_gl_max_client_attrib_stack_depth);
	ring_vm_funcregister("get_gl_subpixel_bits",ring_get_gl_subpixel_bits);
	ring_vm_funcregister("get_gl_index_bits",ring_get_gl_index_bits);
	ring_vm_funcregister("get_gl_red_bits",ring_get_gl_red_bits);
	ring_vm_funcregister("get_gl_green_bits",ring_get_gl_green_bits);
	ring_vm_funcregister("get_gl_blue_bits",ring_get_gl_blue_bits);
	ring_vm_funcregister("get_gl_alpha_bits",ring_get_gl_alpha_bits);
	ring_vm_funcregister("get_gl_depth_bits",ring_get_gl_depth_bits);
	ring_vm_funcregister("get_gl_stencil_bits",ring_get_gl_stencil_bits);
	ring_vm_funcregister("get_gl_accum_red_bits",ring_get_gl_accum_red_bits);
	ring_vm_funcregister("get_gl_accum_green_bits",ring_get_gl_accum_green_bits);
	ring_vm_funcregister("get_gl_accum_blue_bits",ring_get_gl_accum_blue_bits);
	ring_vm_funcregister("get_gl_accum_alpha_bits",ring_get_gl_accum_alpha_bits);
	ring_vm_funcregister("get_gl_name_stack_depth",ring_get_gl_name_stack_depth);
	ring_vm_funcregister("get_gl_auto_normal",ring_get_gl_auto_normal);
	ring_vm_funcregister("get_gl_map1_color_4",ring_get_gl_map1_color_4);
	ring_vm_funcregister("get_gl_map1_index",ring_get_gl_map1_index);
	ring_vm_funcregister("get_gl_map1_normal",ring_get_gl_map1_normal);
	ring_vm_funcregister("get_gl_map1_texture_coord_1",ring_get_gl_map1_texture_coord_1);
	ring_vm_funcregister("get_gl_map1_texture_coord_2",ring_get_gl_map1_texture_coord_2);
	ring_vm_funcregister("get_gl_map1_texture_coord_3",ring_get_gl_map1_texture_coord_3);
	ring_vm_funcregister("get_gl_map1_texture_coord_4",ring_get_gl_map1_texture_coord_4);
	ring_vm_funcregister("get_gl_map1_vertex_3",ring_get_gl_map1_vertex_3);
	ring_vm_funcregister("get_gl_map1_vertex_4",ring_get_gl_map1_vertex_4);
	ring_vm_funcregister("get_gl_map2_color_4",ring_get_gl_map2_color_4);
	ring_vm_funcregister("get_gl_map2_index",ring_get_gl_map2_index);
	ring_vm_funcregister("get_gl_map2_normal",ring_get_gl_map2_normal);
	ring_vm_funcregister("get_gl_map2_texture_coord_1",ring_get_gl_map2_texture_coord_1);
	ring_vm_funcregister("get_gl_map2_texture_coord_2",ring_get_gl_map2_texture_coord_2);
	ring_vm_funcregister("get_gl_map2_texture_coord_3",ring_get_gl_map2_texture_coord_3);
	ring_vm_funcregister("get_gl_map2_texture_coord_4",ring_get_gl_map2_texture_coord_4);
	ring_vm_funcregister("get_gl_map2_vertex_3",ring_get_gl_map2_vertex_3);
	ring_vm_funcregister("get_gl_map2_vertex_4",ring_get_gl_map2_vertex_4);
	ring_vm_funcregister("get_gl_map1_grid_domain",ring_get_gl_map1_grid_domain);
	ring_vm_funcregister("get_gl_map1_grid_segments",ring_get_gl_map1_grid_segments);
	ring_vm_funcregister("get_gl_map2_grid_domain",ring_get_gl_map2_grid_domain);
	ring_vm_funcregister("get_gl_map2_grid_segments",ring_get_gl_map2_grid_segments);
	ring_vm_funcregister("get_gl_texture_1d",ring_get_gl_texture_1d);
	ring_vm_funcregister("get_gl_texture_2d",ring_get_gl_texture_2d);
	ring_vm_funcregister("get_gl_feedback_buffer_pointer",ring_get_gl_feedback_buffer_pointer);
	ring_vm_funcregister("get_gl_feedback_buffer_size",ring_get_gl_feedback_buffer_size);
	ring_vm_funcregister("get_gl_feedback_buffer_type",ring_get_gl_feedback_buffer_type);
	ring_vm_funcregister("get_gl_selection_buffer_pointer",ring_get_gl_selection_buffer_pointer);
	ring_vm_funcregister("get_gl_selection_buffer_size",ring_get_gl_selection_buffer_size);
	ring_vm_funcregister("get_gl_texture_width",ring_get_gl_texture_width);
	ring_vm_funcregister("get_gl_transform_bit",ring_get_gl_transform_bit);
	ring_vm_funcregister("get_gl_texture_height",ring_get_gl_texture_height);
	ring_vm_funcregister("get_gl_texture_internal_format",ring_get_gl_texture_internal_format);
	ring_vm_funcregister("get_gl_texture_border_color",ring_get_gl_texture_border_color);
	ring_vm_funcregister("get_gl_texture_border",ring_get_gl_texture_border);
	ring_vm_funcregister("get_gl_dont_care",ring_get_gl_dont_care);
	ring_vm_funcregister("get_gl_fastest",ring_get_gl_fastest);
	ring_vm_funcregister("get_gl_nicest",ring_get_gl_nicest);
	ring_vm_funcregister("get_gl_ambient",ring_get_gl_ambient);
	ring_vm_funcregister("get_gl_diffuse",ring_get_gl_diffuse);
	ring_vm_funcregister("get_gl_specular",ring_get_gl_specular);
	ring_vm_funcregister("get_gl_position",ring_get_gl_position);
	ring_vm_funcregister("get_gl_spot_direction",ring_get_gl_spot_direction);
	ring_vm_funcregister("get_gl_spot_exponent",ring_get_gl_spot_exponent);
	ring_vm_funcregister("get_gl_spot_cutoff",ring_get_gl_spot_cutoff);
	ring_vm_funcregister("get_gl_constant_attenuation",ring_get_gl_constant_attenuation);
	ring_vm_funcregister("get_gl_linear_attenuation",ring_get_gl_linear_attenuation);
	ring_vm_funcregister("get_gl_quadratic_attenuation",ring_get_gl_quadratic_attenuation);
	ring_vm_funcregister("get_gl_compile",ring_get_gl_compile);
	ring_vm_funcregister("get_gl_compile_and_execute",ring_get_gl_compile_and_execute);
	ring_vm_funcregister("get_gl_byte",ring_get_gl_byte);
	ring_vm_funcregister("get_gl_unsigned_byte",ring_get_gl_unsigned_byte);
	ring_vm_funcregister("get_gl_short",ring_get_gl_short);
	ring_vm_funcregister("get_gl_unsigned_short",ring_get_gl_unsigned_short);
	ring_vm_funcregister("get_gl_int",ring_get_gl_int);
	ring_vm_funcregister("get_gl_unsigned_int",ring_get_gl_unsigned_int);
	ring_vm_funcregister("get_gl_float",ring_get_gl_float);
	ring_vm_funcregister("get_gl_2_bytes",ring_get_gl_2_bytes);
	ring_vm_funcregister("get_gl_3_bytes",ring_get_gl_3_bytes);
	ring_vm_funcregister("get_gl_4_bytes",ring_get_gl_4_bytes);
	ring_vm_funcregister("get_gl_double",ring_get_gl_double);
	ring_vm_funcregister("get_gl_clear",ring_get_gl_clear);
	ring_vm_funcregister("get_gl_and",ring_get_gl_and);
	ring_vm_funcregister("get_gl_and_reverse",ring_get_gl_and_reverse);
	ring_vm_funcregister("get_gl_copy",ring_get_gl_copy);
	ring_vm_funcregister("get_gl_and_inverted",ring_get_gl_and_inverted);
	ring_vm_funcregister("get_gl_noop",ring_get_gl_noop);
	ring_vm_funcregister("get_gl_xor",ring_get_gl_xor);
	ring_vm_funcregister("get_gl_or",ring_get_gl_or);
	ring_vm_funcregister("get_gl_nor",ring_get_gl_nor);
	ring_vm_funcregister("get_gl_equiv",ring_get_gl_equiv);
	ring_vm_funcregister("get_gl_invert",ring_get_gl_invert);
	ring_vm_funcregister("get_gl_or_reverse",ring_get_gl_or_reverse);
	ring_vm_funcregister("get_gl_copy_inverted",ring_get_gl_copy_inverted);
	ring_vm_funcregister("get_gl_or_inverted",ring_get_gl_or_inverted);
	ring_vm_funcregister("get_gl_nand",ring_get_gl_nand);
	ring_vm_funcregister("get_gl_set",ring_get_gl_set);
	ring_vm_funcregister("get_gl_emission",ring_get_gl_emission);
	ring_vm_funcregister("get_gl_shininess",ring_get_gl_shininess);
	ring_vm_funcregister("get_gl_ambient_and_diffuse",ring_get_gl_ambient_and_diffuse);
	ring_vm_funcregister("get_gl_color_indexes",ring_get_gl_color_indexes);
	ring_vm_funcregister("get_gl_modelview",ring_get_gl_modelview);
	ring_vm_funcregister("get_gl_projection",ring_get_gl_projection);
	ring_vm_funcregister("get_gl_texture",ring_get_gl_texture);
	ring_vm_funcregister("get_gl_color",ring_get_gl_color);
	ring_vm_funcregister("get_gl_depth",ring_get_gl_depth);
	ring_vm_funcregister("get_gl_stencil",ring_get_gl_stencil);
	ring_vm_funcregister("get_gl_color_index",ring_get_gl_color_index);
	ring_vm_funcregister("get_gl_stencil_index",ring_get_gl_stencil_index);
	ring_vm_funcregister("get_gl_depth_component",ring_get_gl_depth_component);
	ring_vm_funcregister("get_gl_red",ring_get_gl_red);
	ring_vm_funcregister("get_gl_green",ring_get_gl_green);
	ring_vm_funcregister("get_gl_blue",ring_get_gl_blue);
	ring_vm_funcregister("get_gl_alpha",ring_get_gl_alpha);
	ring_vm_funcregister("get_gl_rgb",ring_get_gl_rgb);
	ring_vm_funcregister("get_gl_rgba",ring_get_gl_rgba);
	ring_vm_funcregister("get_gl_luminance",ring_get_gl_luminance);
	ring_vm_funcregister("get_gl_luminance_alpha",ring_get_gl_luminance_alpha);
	ring_vm_funcregister("get_gl_bitmap",ring_get_gl_bitmap);
	ring_vm_funcregister("get_gl_point",ring_get_gl_point);
	ring_vm_funcregister("get_gl_line",ring_get_gl_line);
	ring_vm_funcregister("get_gl_fill",ring_get_gl_fill);
	ring_vm_funcregister("get_gl_render",ring_get_gl_render);
	ring_vm_funcregister("get_gl_feedback",ring_get_gl_feedback);
	ring_vm_funcregister("get_gl_select",ring_get_gl_select);
	ring_vm_funcregister("get_gl_flat",ring_get_gl_flat);
	ring_vm_funcregister("get_gl_smooth",ring_get_gl_smooth);
	ring_vm_funcregister("get_gl_keep",ring_get_gl_keep);
	ring_vm_funcregister("get_gl_replace",ring_get_gl_replace);
	ring_vm_funcregister("get_gl_incr",ring_get_gl_incr);
	ring_vm_funcregister("get_gl_decr",ring_get_gl_decr);
	ring_vm_funcregister("get_gl_vendor",ring_get_gl_vendor);
	ring_vm_funcregister("get_gl_renderer",ring_get_gl_renderer);
	ring_vm_funcregister("get_gl_version",ring_get_gl_version);
	ring_vm_funcregister("get_gl_extensions",ring_get_gl_extensions);
	ring_vm_funcregister("get_gl_s",ring_get_gl_s);
	ring_vm_funcregister("get_gl_enable_bit",ring_get_gl_enable_bit);
	ring_vm_funcregister("get_gl_t",ring_get_gl_t);
	ring_vm_funcregister("get_gl_r",ring_get_gl_r);
	ring_vm_funcregister("get_gl_q",ring_get_gl_q);
	ring_vm_funcregister("get_gl_modulate",ring_get_gl_modulate);
	ring_vm_funcregister("get_gl_decal",ring_get_gl_decal);
	ring_vm_funcregister("get_gl_texture_env_mode",ring_get_gl_texture_env_mode);
	ring_vm_funcregister("get_gl_texture_env_color",ring_get_gl_texture_env_color);
	ring_vm_funcregister("get_gl_texture_env",ring_get_gl_texture_env);
	ring_vm_funcregister("get_gl_eye_linear",ring_get_gl_eye_linear);
	ring_vm_funcregister("get_gl_object_linear",ring_get_gl_object_linear);
	ring_vm_funcregister("get_gl_sphere_map",ring_get_gl_sphere_map);
	ring_vm_funcregister("get_gl_texture_gen_mode",ring_get_gl_texture_gen_mode);
	ring_vm_funcregister("get_gl_object_plane",ring_get_gl_object_plane);
	ring_vm_funcregister("get_gl_eye_plane",ring_get_gl_eye_plane);
	ring_vm_funcregister("get_gl_nearest",ring_get_gl_nearest);
	ring_vm_funcregister("get_gl_linear",ring_get_gl_linear);
	ring_vm_funcregister("get_gl_nearest_mipmap_nearest",ring_get_gl_nearest_mipmap_nearest);
	ring_vm_funcregister("get_gl_linear_mipmap_nearest",ring_get_gl_linear_mipmap_nearest);
	ring_vm_funcregister("get_gl_nearest_mipmap_linear",ring_get_gl_nearest_mipmap_linear);
	ring_vm_funcregister("get_gl_linear_mipmap_linear",ring_get_gl_linear_mipmap_linear);
	ring_vm_funcregister("get_gl_texture_mag_filter",ring_get_gl_texture_mag_filter);
	ring_vm_funcregister("get_gl_texture_min_filter",ring_get_gl_texture_min_filter);
	ring_vm_funcregister("get_gl_texture_wrap_s",ring_get_gl_texture_wrap_s);
	ring_vm_funcregister("get_gl_texture_wrap_t",ring_get_gl_texture_wrap_t);
	ring_vm_funcregister("get_gl_clamp",ring_get_gl_clamp);
	ring_vm_funcregister("get_gl_repeat",ring_get_gl_repeat);
	ring_vm_funcregister("get_gl_polygon_offset_units",ring_get_gl_polygon_offset_units);
	ring_vm_funcregister("get_gl_polygon_offset_point",ring_get_gl_polygon_offset_point);
	ring_vm_funcregister("get_gl_polygon_offset_line",ring_get_gl_polygon_offset_line);
	ring_vm_funcregister("get_gl_r3_g3_b2",ring_get_gl_r3_g3_b2);
	ring_vm_funcregister("get_gl_v2f",ring_get_gl_v2f);
	ring_vm_funcregister("get_gl_v3f",ring_get_gl_v3f);
	ring_vm_funcregister("get_gl_c4ub_v2f",ring_get_gl_c4ub_v2f);
	ring_vm_funcregister("get_gl_c4ub_v3f",ring_get_gl_c4ub_v3f);
	ring_vm_funcregister("get_gl_c3f_v3f",ring_get_gl_c3f_v3f);
	ring_vm_funcregister("get_gl_n3f_v3f",ring_get_gl_n3f_v3f);
	ring_vm_funcregister("get_gl_c4f_n3f_v3f",ring_get_gl_c4f_n3f_v3f);
	ring_vm_funcregister("get_gl_t2f_v3f",ring_get_gl_t2f_v3f);
	ring_vm_funcregister("get_gl_t4f_v4f",ring_get_gl_t4f_v4f);
	ring_vm_funcregister("get_gl_t2f_c4ub_v3f",ring_get_gl_t2f_c4ub_v3f);
	ring_vm_funcregister("get_gl_t2f_c3f_v3f",ring_get_gl_t2f_c3f_v3f);
	ring_vm_funcregister("get_gl_t2f_n3f_v3f",ring_get_gl_t2f_n3f_v3f);
	ring_vm_funcregister("get_gl_t2f_c4f_n3f_v3f",ring_get_gl_t2f_c4f_n3f_v3f);
	ring_vm_funcregister("get_gl_t4f_c4f_n3f_v4f",ring_get_gl_t4f_c4f_n3f_v4f);
	ring_vm_funcregister("get_gl_clip_plane0",ring_get_gl_clip_plane0);
	ring_vm_funcregister("get_gl_clip_plane1",ring_get_gl_clip_plane1);
	ring_vm_funcregister("get_gl_clip_plane2",ring_get_gl_clip_plane2);
	ring_vm_funcregister("get_gl_clip_plane3",ring_get_gl_clip_plane3);
	ring_vm_funcregister("get_gl_clip_plane4",ring_get_gl_clip_plane4);
	ring_vm_funcregister("get_gl_clip_plane5",ring_get_gl_clip_plane5);
	ring_vm_funcregister("get_gl_light0",ring_get_gl_light0);
	ring_vm_funcregister("get_gl_color_buffer_bit",ring_get_gl_color_buffer_bit);
	ring_vm_funcregister("get_gl_light1",ring_get_gl_light1);
	ring_vm_funcregister("get_gl_light2",ring_get_gl_light2);
	ring_vm_funcregister("get_gl_light3",ring_get_gl_light3);
	ring_vm_funcregister("get_gl_light4",ring_get_gl_light4);
	ring_vm_funcregister("get_gl_light5",ring_get_gl_light5);
	ring_vm_funcregister("get_gl_light6",ring_get_gl_light6);
	ring_vm_funcregister("get_gl_light7",ring_get_gl_light7);
	ring_vm_funcregister("get_gl_hint_bit",ring_get_gl_hint_bit);
	ring_vm_funcregister("get_gl_polygon_offset_fill",ring_get_gl_polygon_offset_fill);
	ring_vm_funcregister("get_gl_polygon_offset_factor",ring_get_gl_polygon_offset_factor);
	ring_vm_funcregister("get_gl_alpha4",ring_get_gl_alpha4);
	ring_vm_funcregister("get_gl_alpha8",ring_get_gl_alpha8);
	ring_vm_funcregister("get_gl_alpha12",ring_get_gl_alpha12);
	ring_vm_funcregister("get_gl_alpha16",ring_get_gl_alpha16);
	ring_vm_funcregister("get_gl_luminance4",ring_get_gl_luminance4);
	ring_vm_funcregister("get_gl_luminance8",ring_get_gl_luminance8);
	ring_vm_funcregister("get_gl_luminance12",ring_get_gl_luminance12);
	ring_vm_funcregister("get_gl_luminance16",ring_get_gl_luminance16);
	ring_vm_funcregister("get_gl_luminance4_alpha4",ring_get_gl_luminance4_alpha4);
	ring_vm_funcregister("get_gl_luminance6_alpha2",ring_get_gl_luminance6_alpha2);
	ring_vm_funcregister("get_gl_luminance8_alpha8",ring_get_gl_luminance8_alpha8);
	ring_vm_funcregister("get_gl_luminance12_alpha4",ring_get_gl_luminance12_alpha4);
	ring_vm_funcregister("get_gl_luminance12_alpha12",ring_get_gl_luminance12_alpha12);
	ring_vm_funcregister("get_gl_luminance16_alpha16",ring_get_gl_luminance16_alpha16);
	ring_vm_funcregister("get_gl_intensity",ring_get_gl_intensity);
	ring_vm_funcregister("get_gl_intensity4",ring_get_gl_intensity4);
	ring_vm_funcregister("get_gl_intensity8",ring_get_gl_intensity8);
	ring_vm_funcregister("get_gl_intensity12",ring_get_gl_intensity12);
	ring_vm_funcregister("get_gl_intensity16",ring_get_gl_intensity16);
	ring_vm_funcregister("get_gl_rgb4",ring_get_gl_rgb4);
	ring_vm_funcregister("get_gl_rgb5",ring_get_gl_rgb5);
	ring_vm_funcregister("get_gl_rgb8",ring_get_gl_rgb8);
	ring_vm_funcregister("get_gl_rgb10",ring_get_gl_rgb10);
	ring_vm_funcregister("get_gl_rgb12",ring_get_gl_rgb12);
	ring_vm_funcregister("get_gl_rgb16",ring_get_gl_rgb16);
	ring_vm_funcregister("get_gl_rgba2",ring_get_gl_rgba2);
	ring_vm_funcregister("get_gl_rgba4",ring_get_gl_rgba4);
	ring_vm_funcregister("get_gl_rgb5_a1",ring_get_gl_rgb5_a1);
	ring_vm_funcregister("get_gl_rgba8",ring_get_gl_rgba8);
	ring_vm_funcregister("get_gl_rgb10_a2",ring_get_gl_rgb10_a2);
	ring_vm_funcregister("get_gl_rgba12",ring_get_gl_rgba12);
	ring_vm_funcregister("get_gl_rgba16",ring_get_gl_rgba16);
	ring_vm_funcregister("get_gl_texture_red_size",ring_get_gl_texture_red_size);
	ring_vm_funcregister("get_gl_texture_green_size",ring_get_gl_texture_green_size);
	ring_vm_funcregister("get_gl_texture_blue_size",ring_get_gl_texture_blue_size);
	ring_vm_funcregister("get_gl_texture_alpha_size",ring_get_gl_texture_alpha_size);
	ring_vm_funcregister("get_gl_texture_luminance_size",ring_get_gl_texture_luminance_size);
	ring_vm_funcregister("get_gl_texture_intensity_size",ring_get_gl_texture_intensity_size);
	ring_vm_funcregister("get_gl_proxy_texture_1d",ring_get_gl_proxy_texture_1d);
	ring_vm_funcregister("get_gl_proxy_texture_2d",ring_get_gl_proxy_texture_2d);
	ring_vm_funcregister("get_gl_texture_priority",ring_get_gl_texture_priority);
	ring_vm_funcregister("get_gl_texture_resident",ring_get_gl_texture_resident);
	ring_vm_funcregister("get_gl_texture_binding_1d",ring_get_gl_texture_binding_1d);
	ring_vm_funcregister("get_gl_texture_binding_2d",ring_get_gl_texture_binding_2d);
	ring_vm_funcregister("get_gl_vertex_array",ring_get_gl_vertex_array);
	ring_vm_funcregister("get_gl_normal_array",ring_get_gl_normal_array);
	ring_vm_funcregister("get_gl_color_array",ring_get_gl_color_array);
	ring_vm_funcregister("get_gl_index_array",ring_get_gl_index_array);
	ring_vm_funcregister("get_gl_texture_coord_array",ring_get_gl_texture_coord_array);
	ring_vm_funcregister("get_gl_edge_flag_array",ring_get_gl_edge_flag_array);
	ring_vm_funcregister("get_gl_vertex_array_size",ring_get_gl_vertex_array_size);
	ring_vm_funcregister("get_gl_vertex_array_type",ring_get_gl_vertex_array_type);
	ring_vm_funcregister("get_gl_vertex_array_stride",ring_get_gl_vertex_array_stride);
	ring_vm_funcregister("get_gl_normal_array_type",ring_get_gl_normal_array_type);
	ring_vm_funcregister("get_gl_normal_array_stride",ring_get_gl_normal_array_stride);
	ring_vm_funcregister("get_gl_color_array_size",ring_get_gl_color_array_size);
	ring_vm_funcregister("get_gl_color_array_type",ring_get_gl_color_array_type);
	ring_vm_funcregister("get_gl_color_array_stride",ring_get_gl_color_array_stride);
	ring_vm_funcregister("get_gl_index_array_type",ring_get_gl_index_array_type);
	ring_vm_funcregister("get_gl_index_array_stride",ring_get_gl_index_array_stride);
	ring_vm_funcregister("get_gl_texture_coord_array_size",ring_get_gl_texture_coord_array_size);
	ring_vm_funcregister("get_gl_texture_coord_array_type",ring_get_gl_texture_coord_array_type);
	ring_vm_funcregister("get_gl_texture_coord_array_stride",ring_get_gl_texture_coord_array_stride);
	ring_vm_funcregister("get_gl_edge_flag_array_stride",ring_get_gl_edge_flag_array_stride);
	ring_vm_funcregister("get_gl_vertex_array_pointer",ring_get_gl_vertex_array_pointer);
	ring_vm_funcregister("get_gl_normal_array_pointer",ring_get_gl_normal_array_pointer);
	ring_vm_funcregister("get_gl_color_array_pointer",ring_get_gl_color_array_pointer);
	ring_vm_funcregister("get_gl_index_array_pointer",ring_get_gl_index_array_pointer);
	ring_vm_funcregister("get_gl_texture_coord_array_pointer",ring_get_gl_texture_coord_array_pointer);
	ring_vm_funcregister("get_gl_edge_flag_array_pointer",ring_get_gl_edge_flag_array_pointer);
	ring_vm_funcregister("get_gl_color_index1_ext",ring_get_gl_color_index1_ext);
	ring_vm_funcregister("get_gl_color_index2_ext",ring_get_gl_color_index2_ext);
	ring_vm_funcregister("get_gl_color_index4_ext",ring_get_gl_color_index4_ext);
	ring_vm_funcregister("get_gl_color_index8_ext",ring_get_gl_color_index8_ext);
	ring_vm_funcregister("get_gl_color_index12_ext",ring_get_gl_color_index12_ext);
	ring_vm_funcregister("get_gl_color_index16_ext",ring_get_gl_color_index16_ext);
	ring_vm_funcregister("get_gl_eval_bit",ring_get_gl_eval_bit);
	ring_vm_funcregister("get_gl_list_bit",ring_get_gl_list_bit);
	ring_vm_funcregister("get_gl_texture_bit",ring_get_gl_texture_bit);
	ring_vm_funcregister("get_gl_scissor_bit",ring_get_gl_scissor_bit);
	ring_vm_funcregister("get_gl_all_attrib_bits",ring_get_gl_all_attrib_bits);
	ring_vm_funcregister("get_gl_client_all_attrib_bits",ring_get_gl_client_all_attrib_bits);
}
