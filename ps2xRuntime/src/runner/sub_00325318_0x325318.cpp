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

// Function: sub_00325318
// Address: 0x325318 - 0x325350
void sub_00325318_0x325318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325318_0x325318");
#endif

    ctx->pc = 0x325318u;

    // 0x325318: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x325318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x32531c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x32531cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x325320: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x325320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x325324: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x325324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x325328: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x325328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x32532c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x32532cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325330: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x325330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x325334: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x325334u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325338: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x325338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x32533c: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x32533cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x325340: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x325340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x325344: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x325344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x325348: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x325348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x32534c: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x32534cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    ctx->pc = 0x325350u;
}
