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

// Function: sub_00298B30
// Address: 0x298b30 - 0x298b80
void sub_00298B30_0x298b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298B30_0x298b30");
#endif

    switch (ctx->pc) {
        case 0x298b54u: goto label_298b54;
        case 0x298b68u: goto label_298b68;
        default: break;
    }

    ctx->pc = 0x298b30u;

    // 0x298b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x298b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x298b34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x298b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x298b38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x298b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x298b3c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x298b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298b40: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x298b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x298b44: 0x10030008  beq         $zero, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x298B44u;
    {
        const bool branch_taken_0x298b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x298b44) {
            ctx->pc = 0x298B68u;
            goto label_298b68;
        }
    }
    ctx->pc = 0x298B4Cu;
    // 0x298b4c: 0xc122470  jal         func_4891C0
    ctx->pc = 0x298B4Cu;
    SET_GPR_U32(ctx, 31, 0x298B54u);
    ctx->pc = 0x4891C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891C0u, 0x298B4Cu, 0x298B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298B54u;
label_298b54:
    // 0x298b54: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x298b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298b58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x298b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b5c: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x298b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x298b60: 0xc123bbc  jal         func_48EEF0
    ctx->pc = 0x298B60u;
    SET_GPR_U32(ctx, 31, 0x298B68u);
    ctx->pc = 0x48EEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EEF0u, 0x298B60u, 0x298B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298B68u;
label_298b68:
    // 0x298b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x298b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298b6c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x298b6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x298b70: 0x3e00008  jr          $ra
    ctx->pc = 0x298B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298B78u;
    // 0x298b78: 0x0  nop
    ctx->pc = 0x298b78u;
    // NOP
    // 0x298b7c: 0x0  nop
    ctx->pc = 0x298b7cu;
    // NOP
    ctx->pc = 0x298b80u;
}
