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

// Function: sub_00100BB0
// Address: 0x100bb0 - 0x100c10
void sub_00100BB0_0x100bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100BB0_0x100bb0");
#endif

    switch (ctx->pc) {
        case 0x100bdcu: goto label_100bdc;
        default: break;
    }

    ctx->pc = 0x100bb0u;

    // 0x100bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x100bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x100bb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100bb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x100bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x100bbc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x100bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100bc0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x100bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x100bc4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x100BC4u;
    {
        const bool branch_taken_0x100bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x100bc4) {
            ctx->pc = 0x100BE4u;
            goto label_100be4;
        }
    }
    ctx->pc = 0x100BCCu;
    // 0x100bcc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x100bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100bd0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x100bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100bd4: 0xc119c5c  jal         func_467170
    ctx->pc = 0x100BD4u;
    SET_GPR_U32(ctx, 31, 0x100BDCu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x100BD4u, 0x100BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100BDCu;
label_100bdc:
    // 0x100bdc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x100bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100be0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x100be0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_100be4:
    // 0x100be4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x100be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100be8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x100be8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x100bec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x100becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100bf0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x100bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x100bf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100bf8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x100bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x100bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x100BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100C04u;
    // 0x100c04: 0x0  nop
    ctx->pc = 0x100c04u;
    // NOP
    // 0x100c08: 0x0  nop
    ctx->pc = 0x100c08u;
    // NOP
    // 0x100c0c: 0x0  nop
    ctx->pc = 0x100c0cu;
    // NOP
    ctx->pc = 0x100c10u;
}
