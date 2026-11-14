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

// Function: sub_00106B70
// Address: 0x106b70 - 0x106be0
void sub_00106B70_0x106b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106B70_0x106b70");
#endif

    switch (ctx->pc) {
        case 0x106b90u: goto label_106b90;
        case 0x106ba4u: goto label_106ba4;
        case 0x106bb8u: goto label_106bb8;
        default: break;
    }

    ctx->pc = 0x106b70u;

    // 0x106b70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x106b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x106b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106b78: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x106b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x106b7c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x106b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x106b80: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x106b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x106b84: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x106b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106b88: 0xc041b14  jal         func_106C50
    ctx->pc = 0x106B88u;
    SET_GPR_U32(ctx, 31, 0x106B90u);
    ctx->pc = 0x106C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C50u, 0x106B88u, 0x106B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106B90u;
label_106b90:
    // 0x106b90: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x106b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106b94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x106b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x106b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b9c: 0xc041af8  jal         func_106BE0
    ctx->pc = 0x106B9Cu;
    SET_GPR_U32(ctx, 31, 0x106BA4u);
    ctx->pc = 0x106BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106BE0u, 0x106B9Cu, 0x106BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106BA4u;
label_106ba4:
    // 0x106ba4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x106ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106ba8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x106ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106bac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x106bacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106bb0: 0xc0423f0  jal         func_108FC0
    ctx->pc = 0x106BB0u;
    SET_GPR_U32(ctx, 31, 0x106BB8u);
    ctx->pc = 0x108FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108FC0u, 0x106BB0u, 0x106BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106BB8u;
label_106bb8:
    // 0x106bb8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x106bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106bbc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x106bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x106bc0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x106bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106bc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106bc8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x106bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x106bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x106BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106BD4u;
    // 0x106bd4: 0x0  nop
    ctx->pc = 0x106bd4u;
    // NOP
    // 0x106bd8: 0x0  nop
    ctx->pc = 0x106bd8u;
    // NOP
    // 0x106bdc: 0x0  nop
    ctx->pc = 0x106bdcu;
    // NOP
    ctx->pc = 0x106be0u;
}
