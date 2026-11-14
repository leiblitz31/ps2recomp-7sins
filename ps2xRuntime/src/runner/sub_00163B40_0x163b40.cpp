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

// Function: sub_00163B40
// Address: 0x163b40 - 0x163b90
void sub_00163B40_0x163b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163B40_0x163b40");
#endif

    switch (ctx->pc) {
        case 0x163b70u: goto label_163b70;
        default: break;
    }

    ctx->pc = 0x163b40u;

    // 0x163b40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x163b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x163b44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x163b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x163b48: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x163b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x163b4c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x163b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163b50: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x163B50u;
    {
        const bool branch_taken_0x163b50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x163b50) {
            ctx->pc = 0x163B74u;
            goto label_163b74;
        }
    }
    ctx->pc = 0x163B58u;
    // 0x163b58: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x163b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163b5c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x163B5Cu;
    {
        const bool branch_taken_0x163b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x163b5c) {
            ctx->pc = 0x163B74u;
            goto label_163b74;
        }
    }
    ctx->pc = 0x163B64u;
    // 0x163b64: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x163b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163b68: 0xc119c5c  jal         func_467170
    ctx->pc = 0x163B68u;
    SET_GPR_U32(ctx, 31, 0x163B70u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x163B68u, 0x163B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163B70u;
label_163b70:
    // 0x163b70: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x163b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_163b74:
    // 0x163b74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x163b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163b78: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x163b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x163b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x163B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163B84u;
    // 0x163b84: 0x0  nop
    ctx->pc = 0x163b84u;
    // NOP
    // 0x163b88: 0x0  nop
    ctx->pc = 0x163b88u;
    // NOP
    // 0x163b8c: 0x0  nop
    ctx->pc = 0x163b8cu;
    // NOP
    ctx->pc = 0x163b90u;
}
