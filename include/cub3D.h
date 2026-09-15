#ifndef CUB3D_H
# define CUB3D_H

# include <mlx.h>

/*
** ============================================================
** t_map
** ------------------------------------------------------------
** Rellenada por: PERSONA A (parser)
** Leída por:     PERSONA B (renderer / raycasting)
** ============================================================
*/
typedef struct s_map
{
	char	**grid;				// mapa, array de strings (una por fila)
	int		width;				// ancho maximo del mapa (columna mas larga)
	int		height;				// numero de filas del mapa

	char	*no_path;			// ruta textura North
	char	*so_path;			// ruta textura South
	char	*we_path;			// ruta textura West
	char	*ea_path;			// ruta textura East

	int		floor_color[3];		// RGB floor  [0]=R [1]=G [2]=B
	int		ceiling_color[3];	// RGB ceiling [0]=R [1]=G [2]=B
}	t_map;

/*
** ============================================================
** t_player
** ------------------------------------------------------------
** Inicializada por: PERSONA A (parser) -> posicion/orientacion spawn
** Actualizada por:  PERSONA B (renderer) -> movimiento, rotacion
** ============================================================
*/
typedef struct s_player
{
	double	x;			// posicion X en el mapa (coordenadas de casilla, doble)
	double	y;			// posicion Y en el mapa
	double	dir_angle;	// angulo de direccion en radianes
	double	dir_x;		// vector direccion (para raycasting)
	double	dir_y;
	double	plane_x;	// vector plano de camara
	double	plane_y;
}	t_player;

/*
** ============================================================
** t_data
** ------------------------------------------------------------
** Estructura maestra: se pasa por referencia a TODAS las
** funciones, tanto de parseo como de render.
** ============================================================
*/
typedef struct s_data
{
	void		*mlx;		// instancia mlx      -> la inicializa Persona B
	void		*win;		// ventana mlx        -> la inicializa Persona B

	t_map		map;		// -> la rellena Persona A
	t_player	player;		// -> la inicializa Persona A, la actualiza Persona B
}	t_data;

#endif
