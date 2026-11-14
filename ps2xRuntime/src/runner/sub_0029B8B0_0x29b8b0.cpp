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

// Function: sub_0029B8B0
// Address: 0x29b8b0 - 0x29b930
void sub_0029B8B0_0x29b8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B8B0_0x29b8b0");
#endif

    switch (ctx->pc) {
        case 0x29b8f8u: goto label_29b8f8;
        default: break;
    }

    ctx->pc = 0x29b8b0u;

    // 0x29b8b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29b8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29b8b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29b8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29b8b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29b8bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x29b8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x29b8c0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x29b8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x29b8c4: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x29b8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x29b8c8: 0x8fb00060  lw          $s0, 0x60($sp)
    ctx->pc = 0x29b8c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29b8cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29b8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29b8d0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29b8d4: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29B8D4u;
    {
        const bool branch_taken_0x29b8d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29b8d4) {
            ctx->pc = 0x29B910u;
            goto label_29b910;
        }
    }
    ctx->pc = 0x29B8DCu;
    // 0x29b8dc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x29b8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29b8e0: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x29b8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b8e4: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x29b8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x29b8e8: 0x24c6b880  addiu       $a2, $a2, -0x4780
    ctx->pc = 0x29b8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948992));
    // 0x29b8ec: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x29b8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29b8f0: 0xc0c6c6a  jal         func_31B1A8
    ctx->pc = 0x29B8F0u;
    SET_GPR_U32(ctx, 31, 0x29B8F8u);
    ctx->pc = 0x31B1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B1A8u, 0x29B8F0u, 0x29B8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B8F8u;
label_29b8f8:
    // 0x29b8f8: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x29b8f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29b8fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B8FCu;
    {
        const bool branch_taken_0x29b8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b8fc) {
            ctx->pc = 0x29B910u;
            goto label_29b910;
        }
    }
    ctx->pc = 0x29B904u;
    // 0x29b904: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29b904u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b908: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B908u;
    {
        const bool branch_taken_0x29b908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b908) {
            ctx->pc = 0x29B914u;
            goto label_29b914;
        }
    }
    ctx->pc = 0x29B910u;
label_29b910:
    // 0x29b910: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29b910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29b914:
    // 0x29b914: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29b914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b918: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b91c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x29b91cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x29b920: 0x3e00008  jr          $ra
    ctx->pc = 0x29B920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B928u;
    // 0x29b928: 0x0  nop
    ctx->pc = 0x29b928u;
    // NOP
    // 0x29b92c: 0x0  nop
    ctx->pc = 0x29b92cu;
    // NOP
    ctx->pc = 0x29b930u;
}
