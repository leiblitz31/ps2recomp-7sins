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

// Function: sub_00296910
// Address: 0x296910 - 0x296980
void sub_00296910_0x296910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296910_0x296910");
#endif

    switch (ctx->pc) {
        case 0x296948u: goto label_296948;
        case 0x296960u: goto label_296960;
        default: break;
    }

    ctx->pc = 0x296910u;

    // 0x296910: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x296910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x296914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x296914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x296918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x296918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29691c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x29691cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x296920: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x296920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x296924: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x296924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x296928: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x296928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29692c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x29692cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x296930: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x296930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x296934: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x296934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x296938: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x296938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29693c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x29693cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x296940: 0xc0a5a60  jal         func_296980
    ctx->pc = 0x296940u;
    SET_GPR_U32(ctx, 31, 0x296948u);
    ctx->pc = 0x296980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296980u, 0x296940u, 0x296948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296948u;
label_296948:
    // 0x296948: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x296948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29694c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29694cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x296950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296954: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x296954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x296958: 0xc0a50f8  jal         func_2943E0
    ctx->pc = 0x296958u;
    SET_GPR_U32(ctx, 31, 0x296960u);
    ctx->pc = 0x2943E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2943E0u, 0x296958u, 0x296960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296960u;
label_296960:
    // 0x296960: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x296960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296964: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x296964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x296968: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x296968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29696c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29696cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296970: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x296970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296974: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x296974u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x296978: 0x3e00008  jr          $ra
    ctx->pc = 0x296978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296980u;
}
