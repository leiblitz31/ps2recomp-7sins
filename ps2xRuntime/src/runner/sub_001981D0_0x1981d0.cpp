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

// Function: sub_001981D0
// Address: 0x1981d0 - 0x198240
void sub_001981D0_0x1981d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001981D0_0x1981d0");
#endif

    switch (ctx->pc) {
        case 0x198208u: goto label_198208;
        case 0x198220u: goto label_198220;
        default: break;
    }

    ctx->pc = 0x1981d0u;

    // 0x1981d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1981d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1981d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1981d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1981d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1981d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1981dc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1981dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1981e0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1981e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1981e4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1981e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1981e8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1981e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1981ec: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x1981ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x1981f0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1981f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1981f4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1981f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1981f8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1981f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1981fc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1981fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x198200: 0xc066090  jal         func_198240
    ctx->pc = 0x198200u;
    SET_GPR_U32(ctx, 31, 0x198208u);
    ctx->pc = 0x198240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198240u, 0x198200u, 0x198208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198208u;
label_198208:
    // 0x198208: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x198208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19820c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19820cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198214: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x198214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x198218: 0xc0653bc  jal         func_194EF0
    ctx->pc = 0x198218u;
    SET_GPR_U32(ctx, 31, 0x198220u);
    ctx->pc = 0x194EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194EF0u, 0x198218u, 0x198220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198220u;
label_198220:
    // 0x198220: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x198220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198224: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x198224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x198228: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x198228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19822c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19822cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198230: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x198230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198234: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x198234u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x198238: 0x3e00008  jr          $ra
    ctx->pc = 0x198238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198240u;
}
