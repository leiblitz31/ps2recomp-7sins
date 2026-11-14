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

// Function: sub_001A77B0
// Address: 0x1a77b0 - 0x1a7820
void sub_001A77B0_0x1a77b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A77B0_0x1a77b0");
#endif

    switch (ctx->pc) {
        case 0x1a77e8u: goto label_1a77e8;
        case 0x1a7800u: goto label_1a7800;
        default: break;
    }

    ctx->pc = 0x1a77b0u;

    // 0x1a77b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a77b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a77b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a77b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a77b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a77b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a77bc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1a77bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1a77c0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1a77c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1a77c4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1a77c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1a77c8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a77c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a77cc: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x1a77ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a77d0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a77d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a77d4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1a77d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a77d8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1a77d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a77dc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1a77dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1a77e0: 0xc069e08  jal         func_1A7820
    ctx->pc = 0x1A77E0u;
    SET_GPR_U32(ctx, 31, 0x1A77E8u);
    ctx->pc = 0x1A7820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7820u, 0x1A77E0u, 0x1A77E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A77E8u;
label_1a77e8:
    // 0x1a77e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a77e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a77ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a77ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a77f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a77f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a77f4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1a77f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a77f8: 0xc058c9c  jal         func_163270
    ctx->pc = 0x1A77F8u;
    SET_GPR_U32(ctx, 31, 0x1A7800u);
    ctx->pc = 0x163270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163270u, 0x1A77F8u, 0x1A7800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7800u;
label_1a7800:
    // 0x1a7800: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a7800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a7804: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1a7804u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1a7808: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1a7808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a780c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a780cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7810: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a7810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7814: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1a7814u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a7818: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7820u;
}
