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

// Function: sub_0023B8A0
// Address: 0x23b8a0 - 0x23b920
void sub_0023B8A0_0x23b8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B8A0_0x23b8a0");
#endif

    switch (ctx->pc) {
        case 0x23b8c0u: goto label_23b8c0;
        case 0x23b8d8u: goto label_23b8d8;
        case 0x23b8fcu: goto label_23b8fc;
        default: break;
    }

    ctx->pc = 0x23b8a0u;

    // 0x23b8a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23b8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23b8a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23b8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23b8a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23b8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23b8ac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23b8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23b8b0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x23b8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x23b8b4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23b8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b8b8: 0xc08ec3c  jal         func_23B0F0
    ctx->pc = 0x23B8B8u;
    SET_GPR_U32(ctx, 31, 0x23B8C0u);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x23B8B8u, 0x23B8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B8C0u;
label_23b8c0:
    // 0x23b8c0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x23b8c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23b8c4: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x23b8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x23b8c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23b8c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b8cc: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x23b8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23b8d0: 0xc08ee48  jal         func_23B920
    ctx->pc = 0x23B8D0u;
    SET_GPR_U32(ctx, 31, 0x23B8D8u);
    ctx->pc = 0x23B920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B920u, 0x23B8D0u, 0x23B8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B8D8u;
label_23b8d8:
    // 0x23b8d8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x23b8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b8dc: 0xac620044  sw          $v0, 0x44($v1)
    ctx->pc = 0x23b8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
    // 0x23b8e0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x23b8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b8e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x23b8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23b8e8: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x23b8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23b8ec: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x23b8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x23b8f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23b8f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b8f4: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x23B8F4u;
    SET_GPR_U32(ctx, 31, 0x23B8FCu);
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x23B8F4u, 0x23B8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B8FCu;
label_23b8fc:
    // 0x23b8fc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x23b8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23b900: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23b900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b904: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x23b904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x23b908: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23b908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b90c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23b90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b910: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23b910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b914: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x23b914u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23b918: 0x3e00008  jr          $ra
    ctx->pc = 0x23B918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B920u;
}
