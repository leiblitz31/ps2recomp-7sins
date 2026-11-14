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

// Function: sub_00106A70
// Address: 0x106a70 - 0x106ad0
void sub_00106A70_0x106a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106A70_0x106a70");
#endif

    switch (ctx->pc) {
        case 0x106a94u: goto label_106a94;
        case 0x106abcu: goto label_106abc;
        default: break;
    }

    ctx->pc = 0x106a70u;

    // 0x106a70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x106a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x106a74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106a78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x106a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x106a7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x106a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x106a80: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x106a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x106a84: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x106a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106a88: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x106a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106a8c: 0xc041adc  jal         func_106B70
    ctx->pc = 0x106A8Cu;
    SET_GPR_U32(ctx, 31, 0x106A94u);
    ctx->pc = 0x106B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106B70u, 0x106A8Cu, 0x106A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106A94u;
label_106a94:
    // 0x106a94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x106a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106a98: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x106a98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x106a9c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x106a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106aa0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x106aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106aa4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x106aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x106aa8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x106aa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106aac: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x106aacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x106ab0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x106ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106ab4: 0xc041ab4  jal         func_106AD0
    ctx->pc = 0x106AB4u;
    SET_GPR_U32(ctx, 31, 0x106ABCu);
    ctx->pc = 0x106AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106AD0u, 0x106AB4u, 0x106ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106ABCu;
label_106abc:
    // 0x106abc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x106abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106ac4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x106ac4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x106ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x106AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106AD0u;
}
