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

// Function: sub_001B20F0
// Address: 0x1b20f0 - 0x1b2160
void sub_001B20F0_0x1b20f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B20F0_0x1b20f0");
#endif

    switch (ctx->pc) {
        case 0x1b2128u: goto label_1b2128;
        case 0x1b2140u: goto label_1b2140;
        default: break;
    }

    ctx->pc = 0x1b20f0u;

    // 0x1b20f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b20f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b20f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b20f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b20f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b20f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b20fc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1b20fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1b2100: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1b2100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1b2104: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1b2104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1b2108: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b2108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b210c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x1b210cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b2110: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1b2110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b2114: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1b2114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b2118: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1b2118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b211c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1b211cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1b2120: 0xc06c858  jal         func_1B2160
    ctx->pc = 0x1B2120u;
    SET_GPR_U32(ctx, 31, 0x1B2128u);
    ctx->pc = 0x1B2160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2160u, 0x1B2120u, 0x1B2128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2128u;
label_1b2128:
    // 0x1b2128: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b2128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b212c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b212cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2134: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1b2134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b2138: 0xc06bbb8  jal         func_1AEEE0
    ctx->pc = 0x1B2138u;
    SET_GPR_U32(ctx, 31, 0x1B2140u);
    ctx->pc = 0x1AEEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEEE0u, 0x1B2138u, 0x1B2140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2140u;
label_1b2140:
    // 0x1b2140: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b2140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2144: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1b2144u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1b2148: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b2148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b214c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b214cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2150: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b2150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2154: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1b2154u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b2158: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2160u;
}
