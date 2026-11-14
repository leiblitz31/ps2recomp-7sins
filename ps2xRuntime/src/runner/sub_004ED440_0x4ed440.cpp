#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004ED440
// Address: 0x4ed440 - 0x4ed4c0
void sub_004ED440_0x4ed440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED440_0x4ed440");
#endif

    ctx->pc = 0x4ed440u;

    // 0x4ed440: 0x0  nop
    ctx->pc = 0x4ed440u;
    // NOP
    // 0x4ed444: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed444u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4ed448: 0x0  nop
    ctx->pc = 0x4ed448u;
    // NOP
    // 0x4ed44c: 0x0  nop
    ctx->pc = 0x4ed44cu;
    // NOP
    // 0x4ed450: 0x0  nop
    ctx->pc = 0x4ed450u;
    // NOP
    // 0x4ed454: 0x0  nop
    ctx->pc = 0x4ed454u;
    // NOP
    // 0x4ed458: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed458u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4ed45c: 0x0  nop
    ctx->pc = 0x4ed45cu;
    // NOP
    // 0x4ed460: 0x0  nop
    ctx->pc = 0x4ed460u;
    // NOP
    // 0x4ed464: 0x0  nop
    ctx->pc = 0x4ed464u;
    // NOP
    // 0x4ed468: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x4ed468u;
    // CACHE instruction (ignored)
    // 0x4ed46c: 0x0  nop
    ctx->pc = 0x4ed46cu;
    // NOP
    // 0x4ed470: 0x0  nop
    ctx->pc = 0x4ed470u;
    // NOP
    // 0x4ed474: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed474u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4ed478: 0x0  nop
    ctx->pc = 0x4ed478u;
    // NOP
    // 0x4ed47c: 0x0  nop
    ctx->pc = 0x4ed47cu;
    // NOP
    // 0x4ed480: 0x0  nop
    ctx->pc = 0x4ed480u;
    // NOP
    // 0x4ed484: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed484u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4ed488: 0x0  nop
    ctx->pc = 0x4ed488u;
    // NOP
    // 0x4ed48c: 0x0  nop
    ctx->pc = 0x4ed48cu;
    // NOP
    // 0x4ed490: 0x0  nop
    ctx->pc = 0x4ed490u;
    // NOP
    // 0x4ed494: 0x0  nop
    ctx->pc = 0x4ed494u;
    // NOP
    // 0x4ed498: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed498u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4ed49c: 0x0  nop
    ctx->pc = 0x4ed49cu;
    // NOP
    // 0x4ed4a0: 0x0  nop
    ctx->pc = 0x4ed4a0u;
    // NOP
    // 0x4ed4a4: 0x0  nop
    ctx->pc = 0x4ed4a4u;
    // NOP
    // 0x4ed4a8: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x4ed4a8u;
    // CACHE instruction (ignored)
    // 0x4ed4ac: 0x0  nop
    ctx->pc = 0x4ed4acu;
    // NOP
    // 0x4ed4b0: 0x0  nop
    ctx->pc = 0x4ed4b0u;
    // NOP
    // 0x4ed4b4: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed4b4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4ed4b8: 0x0  nop
    ctx->pc = 0x4ed4b8u;
    // NOP
    // 0x4ed4bc: 0x0  nop
    ctx->pc = 0x4ed4bcu;
    // NOP
    ctx->pc = 0x4ed4c0u;
}
