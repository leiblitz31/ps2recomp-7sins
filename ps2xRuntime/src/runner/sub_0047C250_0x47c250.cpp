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

// Function: sub_0047C250
// Address: 0x47c250 - 0x47c2c0
void sub_0047C250_0x47c250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047C250_0x47c250");
#endif

    switch (ctx->pc) {
        case 0x47c288u: goto label_47c288;
        case 0x47c2a0u: goto label_47c2a0;
        default: break;
    }

    ctx->pc = 0x47c250u;

    // 0x47c250: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x47c250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x47c254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x47c254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x47c258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47c258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47c25c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x47c25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x47c260: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x47c260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x47c264: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x47c264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x47c268: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x47c268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47c26c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x47c26cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x47c270: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x47c270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x47c274: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x47c274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x47c278: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x47c278u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47c27c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x47c27cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x47c280: 0xc11f0b0  jal         func_47C2C0
    ctx->pc = 0x47C280u;
    SET_GPR_U32(ctx, 31, 0x47C288u);
    ctx->pc = 0x47C2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C2C0u, 0x47C280u, 0x47C288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C288u;
label_47c288:
    // 0x47c288: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x47c288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c28c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x47c28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47c290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47c290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c294: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x47c294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x47c298: 0xc09e15c  jal         func_278570
    ctx->pc = 0x47C298u;
    SET_GPR_U32(ctx, 31, 0x47C2A0u);
    ctx->pc = 0x278570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278570u, 0x47C298u, 0x47C2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C2A0u;
label_47c2a0:
    // 0x47c2a0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x47c2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47c2a4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x47c2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x47c2a8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x47c2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47c2ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47c2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47c2b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47c2b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47c2b4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x47c2b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x47c2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x47C2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47C2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47C2C0u;
}
