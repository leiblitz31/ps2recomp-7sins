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

// Function: sub_001A0EB0
// Address: 0x1a0eb0 - 0x1a0f20
void sub_001A0EB0_0x1a0eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0EB0_0x1a0eb0");
#endif

    switch (ctx->pc) {
        case 0x1a0ee8u: goto label_1a0ee8;
        case 0x1a0f00u: goto label_1a0f00;
        default: break;
    }

    ctx->pc = 0x1a0eb0u;

    // 0x1a0eb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a0eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a0eb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a0eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a0eb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a0eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a0ebc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1a0ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1a0ec0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1a0ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1a0ec4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1a0ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1a0ec8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a0ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0ecc: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x1a0eccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0ed0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a0ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a0ed4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1a0ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a0ed8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1a0ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0edc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1a0edcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1a0ee0: 0xc0683c8  jal         func_1A0F20
    ctx->pc = 0x1A0EE0u;
    SET_GPR_U32(ctx, 31, 0x1A0EE8u);
    ctx->pc = 0x1A0F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0F20u, 0x1A0EE0u, 0x1A0EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0EE8u;
label_1a0ee8:
    // 0x1a0ee8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a0ee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0eec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a0eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ef4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1a0ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a0ef8: 0xc048068  jal         func_1201A0
    ctx->pc = 0x1A0EF8u;
    SET_GPR_U32(ctx, 31, 0x1A0F00u);
    ctx->pc = 0x1201A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1201A0u, 0x1A0EF8u, 0x1A0F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0F00u;
label_1a0f00:
    // 0x1a0f00: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a0f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0f04: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1a0f04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1a0f08: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1a0f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0f0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a0f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0f10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a0f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0f14: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1a0f14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a0f18: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0F20u;
}
