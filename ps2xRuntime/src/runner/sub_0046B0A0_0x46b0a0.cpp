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

// Function: sub_0046B0A0
// Address: 0x46b0a0 - 0x46b100
void sub_0046B0A0_0x46b0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046B0A0_0x46b0a0");
#endif

    switch (ctx->pc) {
        case 0x46b0ccu: goto label_46b0cc;
        case 0x46b0e4u: goto label_46b0e4;
        default: break;
    }

    ctx->pc = 0x46b0a0u;

    // 0x46b0a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x46b0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x46b0a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x46b0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x46b0a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46b0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46b0ac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x46b0acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x46b0b0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x46b0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x46b0b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46b0b8: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x46b0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x46b0bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x46b0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x46b0c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x46b0c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b0c4: 0xc11ad48  jal         func_46B520
    ctx->pc = 0x46B0C4u;
    SET_GPR_U32(ctx, 31, 0x46B0CCu);
    ctx->pc = 0x46B520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B520u, 0x46B0C4u, 0x46B0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B0CCu;
label_46b0cc:
    // 0x46b0cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46b0ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b0d0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x46b0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x46b0d4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x46b0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x46b0d8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x46b0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46b0dc: 0xc11ac40  jal         func_46B100
    ctx->pc = 0x46B0DCu;
    SET_GPR_U32(ctx, 31, 0x46B0E4u);
    ctx->pc = 0x46B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B100u, 0x46B0DCu, 0x46B0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B0E4u;
label_46b0e4:
    // 0x46b0e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x46b0e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b0e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46b0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46b0ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46b0ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46b0f0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x46b0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46b0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x46B0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46B0FCu;
    // 0x46b0fc: 0x0  nop
    ctx->pc = 0x46b0fcu;
    // NOP
    ctx->pc = 0x46b100u;
}
