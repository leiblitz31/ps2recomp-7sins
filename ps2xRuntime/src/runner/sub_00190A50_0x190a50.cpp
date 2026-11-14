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

// Function: sub_00190A50
// Address: 0x190a50 - 0x190ac0
void sub_00190A50_0x190a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190A50_0x190a50");
#endif

    switch (ctx->pc) {
        case 0x190a70u: goto label_190a70;
        case 0x190a84u: goto label_190a84;
        case 0x190a98u: goto label_190a98;
        default: break;
    }

    ctx->pc = 0x190a50u;

    // 0x190a50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x190a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x190a54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190a58: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x190a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x190a5c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x190a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x190a60: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x190a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x190a64: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x190a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x190a68: 0xc0642cc  jal         func_190B30
    ctx->pc = 0x190A68u;
    SET_GPR_U32(ctx, 31, 0x190A70u);
    ctx->pc = 0x190B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190B30u, 0x190A68u, 0x190A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190A70u;
label_190a70:
    // 0x190a70: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x190a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190a74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x190a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190a78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x190a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190a7c: 0xc0642b0  jal         func_190AC0
    ctx->pc = 0x190A7Cu;
    SET_GPR_U32(ctx, 31, 0x190A84u);
    ctx->pc = 0x190AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190AC0u, 0x190A7Cu, 0x190A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190A84u;
label_190a84:
    // 0x190a84: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x190a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190a88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x190a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190a8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x190a8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190a90: 0xc0642d4  jal         func_190B50
    ctx->pc = 0x190A90u;
    SET_GPR_U32(ctx, 31, 0x190A98u);
    ctx->pc = 0x190B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190B50u, 0x190A90u, 0x190A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190A98u;
label_190a98:
    // 0x190a98: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x190a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190a9c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x190a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x190aa0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x190aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190aa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190aa8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x190aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x190aac: 0x3e00008  jr          $ra
    ctx->pc = 0x190AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190AB4u;
    // 0x190ab4: 0x0  nop
    ctx->pc = 0x190ab4u;
    // NOP
    // 0x190ab8: 0x0  nop
    ctx->pc = 0x190ab8u;
    // NOP
    // 0x190abc: 0x0  nop
    ctx->pc = 0x190abcu;
    // NOP
    ctx->pc = 0x190ac0u;
}
