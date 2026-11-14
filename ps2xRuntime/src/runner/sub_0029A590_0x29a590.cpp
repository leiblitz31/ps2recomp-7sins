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

// Function: sub_0029A590
// Address: 0x29a590 - 0x29a600
void sub_0029A590_0x29a590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A590_0x29a590");
#endif

    switch (ctx->pc) {
        case 0x29a5c8u: goto label_29a5c8;
        case 0x29a5e0u: goto label_29a5e0;
        default: break;
    }

    ctx->pc = 0x29a590u;

    // 0x29a590: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29a590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29a594: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29a594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29a598: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29a598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29a59c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x29a59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x29a5a0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x29a5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x29a5a4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x29a5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x29a5a8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a5ac: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x29a5acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x29a5b0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x29a5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29a5b4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x29a5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29a5b8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x29a5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29a5bc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x29a5bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x29a5c0: 0xc0a6980  jal         func_29A600
    ctx->pc = 0x29A5C0u;
    SET_GPR_U32(ctx, 31, 0x29A5C8u);
    ctx->pc = 0x29A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A600u, 0x29A5C0u, 0x29A5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A5C8u;
label_29a5c8:
    // 0x29a5c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29a5c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a5cc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29a5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a5d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29a5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a5d4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x29a5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29a5d8: 0xc0a67b0  jal         func_299EC0
    ctx->pc = 0x29A5D8u;
    SET_GPR_U32(ctx, 31, 0x29A5E0u);
    ctx->pc = 0x299EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EC0u, 0x29A5D8u, 0x29A5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A5E0u;
label_29a5e0:
    // 0x29a5e0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a5e4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x29a5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x29a5e8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29a5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29a5ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29a5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a5f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29a5f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a5f4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x29a5f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29a5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x29A5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A600u;
}
