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

// Function: sub_002E4E40
// Address: 0x2e4e40 - 0x2e4eb0
void sub_002E4E40_0x2e4e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4E40_0x2e4e40");
#endif

    switch (ctx->pc) {
        case 0x2e4e78u: goto label_2e4e78;
        case 0x2e4e90u: goto label_2e4e90;
        default: break;
    }

    ctx->pc = 0x2e4e40u;

    // 0x2e4e40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e4e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e4e44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e4e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e4e48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e4e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e4e4c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2e4e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2e4e50: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2e4e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2e4e54: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2e4e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2e4e58: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e4e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4e5c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2e4e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e4e60: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2e4e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e4e64: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2e4e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e4e68: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2e4e68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e4e6c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2e4e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2e4e70: 0xc0b93ac  jal         func_2E4EB0
    ctx->pc = 0x2E4E70u;
    SET_GPR_U32(ctx, 31, 0x2E4E78u);
    ctx->pc = 0x2E4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4EB0u, 0x2E4E70u, 0x2E4E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4E78u;
label_2e4e78:
    // 0x2e4e78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e4e78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4e7c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e4e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4e80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e4e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4e84: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2e4e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e4e88: 0xc0b8ec0  jal         func_2E3B00
    ctx->pc = 0x2E4E88u;
    SET_GPR_U32(ctx, 31, 0x2E4E90u);
    ctx->pc = 0x2E3B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3B00u, 0x2E4E88u, 0x2E4E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4E90u;
label_2e4e90:
    // 0x2e4e90: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e4e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4e94: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x2e4e94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x2e4e98: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e4e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e4e9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e4e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4ea0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e4ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4ea4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2e4ea4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e4ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4EB0u;
}
