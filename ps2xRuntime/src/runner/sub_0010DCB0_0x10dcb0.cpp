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

// Function: sub_0010DCB0
// Address: 0x10dcb0 - 0x10dd00
void sub_0010DCB0_0x10dcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DCB0_0x10dcb0");
#endif

    switch (ctx->pc) {
        case 0x10dce0u: goto label_10dce0;
        default: break;
    }

    ctx->pc = 0x10dcb0u;

    // 0x10dcb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10dcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10dcb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10dcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10dcb8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10dcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10dcbc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x10dcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10dcc0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x10DCC0u;
    {
        const bool branch_taken_0x10dcc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10dcc0) {
            ctx->pc = 0x10DCE4u;
            goto label_10dce4;
        }
    }
    ctx->pc = 0x10DCC8u;
    // 0x10dcc8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x10dcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10dccc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10DCCCu;
    {
        const bool branch_taken_0x10dccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10dccc) {
            ctx->pc = 0x10DCE4u;
            goto label_10dce4;
        }
    }
    ctx->pc = 0x10DCD4u;
    // 0x10dcd4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10dcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10dcd8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x10DCD8u;
    SET_GPR_U32(ctx, 31, 0x10DCE0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x10DCD8u, 0x10DCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DCE0u;
label_10dce0:
    // 0x10dce0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10dce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_10dce4:
    // 0x10dce4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10dce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10dce8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x10dce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10dcec: 0x3e00008  jr          $ra
    ctx->pc = 0x10DCECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DCECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DCF4u;
    // 0x10dcf4: 0x0  nop
    ctx->pc = 0x10dcf4u;
    // NOP
    // 0x10dcf8: 0x0  nop
    ctx->pc = 0x10dcf8u;
    // NOP
    // 0x10dcfc: 0x0  nop
    ctx->pc = 0x10dcfcu;
    // NOP
    ctx->pc = 0x10dd00u;
}
