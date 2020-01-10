
#ifndef __dmap_marshal_MARSHAL_H__
#define __dmap_marshal_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* STRING:STRING (./dmap-marshal.list:1) */
extern void dmap_marshal_STRING__STRING (GClosure     *closure,
                                         GValue       *return_value,
                                         guint         n_param_values,
                                         const GValue *param_values,
                                         gpointer      invocation_hint,
                                         gpointer      marshal_data);

/* VOID:ULONG,FLOAT (./dmap-marshal.list:2) */
extern void dmap_marshal_VOID__ULONG_FLOAT (GClosure     *closure,
                                            GValue       *return_value,
                                            guint         n_param_values,
                                            const GValue *param_values,
                                            gpointer      invocation_hint,
                                            gpointer      marshal_data);

/* STRING:ULONG,ULONG (./dmap-marshal.list:3) */
extern void dmap_marshal_STRING__ULONG_ULONG (GClosure     *closure,
                                              GValue       *return_value,
                                              guint         n_param_values,
                                              const GValue *param_values,
                                              gpointer      invocation_hint,
                                              gpointer      marshal_data);

/* ULONG:VOID (./dmap-marshal.list:4) */
extern void dmap_marshal_ULONG__VOID (GClosure     *closure,
                                      GValue       *return_value,
                                      guint         n_param_values,
                                      const GValue *param_values,
                                      gpointer      invocation_hint,
                                      gpointer      marshal_data);

/* VOID:STRING,STRING (./dmap-marshal.list:5) */
extern void dmap_marshal_VOID__STRING_STRING (GClosure     *closure,
                                              GValue       *return_value,
                                              guint         n_param_values,
                                              const GValue *param_values,
                                              gpointer      invocation_hint,
                                              gpointer      marshal_data);

/* VOID:STRING,BOOLEAN (./dmap-marshal.list:6) */
extern void dmap_marshal_VOID__STRING_BOOLEAN (GClosure     *closure,
                                               GValue       *return_value,
                                               guint         n_param_values,
                                               const GValue *param_values,
                                               gpointer      invocation_hint,
                                               gpointer      marshal_data);

/* BOOLEAN:STRING (./dmap-marshal.list:7) */
extern void dmap_marshal_BOOLEAN__STRING (GClosure     *closure,
                                          GValue       *return_value,
                                          guint         n_param_values,
                                          const GValue *param_values,
                                          gpointer      invocation_hint,
                                          gpointer      marshal_data);

/* VOID:STRING,POINTER,POINTER,POINTER,BOOLEAN (./dmap-marshal.list:8) */
extern void dmap_marshal_VOID__STRING_POINTER_POINTER_POINTER_BOOLEAN (GClosure     *closure,
                                                                       GValue       *return_value,
                                                                       guint         n_param_values,
                                                                       const GValue *param_values,
                                                                       gpointer      invocation_hint,
                                                                       gpointer      marshal_data);

G_END_DECLS

#endif /* __dmap_marshal_MARSHAL_H__ */

