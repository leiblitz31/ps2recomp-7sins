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

// Function: sub_0025BE70
// Address: 0x25be70 - 0x25bef0
void sub_0025BE70_0x25be70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BE70_0x25be70");
#endif

    ctx->pc = 0x25be70u;

    // 0x25be70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25be70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25be74: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25be74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25be78: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x25be78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x25be7c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25be7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25be80: 0x8c630194  lw          $v1, 0x194($v1)
    ctx->pc = 0x25be80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
    // 0x25be84: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25BE84u;
    {
        const bool branch_taken_0x25be84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25be84) {
            ctx->pc = 0x25BE98u;
            goto label_25be98;
        }
    }
    ctx->pc = 0x25BE8Cu;
    // 0x25be8c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25be8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25be90: 0x8c630194  lw          $v1, 0x194($v1)
    ctx->pc = 0x25be90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
    // 0x25be94: 0xac600198  sw          $zero, 0x198($v1)
    ctx->pc = 0x25be94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 408), GPR_U32(ctx, 0));
label_25be98:
    // 0x25be98: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25be98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25be9c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x25BE9Cu;
    {
        const bool branch_taken_0x25be9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25be9c) {
            ctx->pc = 0x25BECCu;
            goto label_25becc;
        }
    }
    ctx->pc = 0x25BEA4u;
    // 0x25bea4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25bea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25bea8: 0x8c630198  lw          $v1, 0x198($v1)
    ctx->pc = 0x25bea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 408)));
    // 0x25beac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25BEACu;
    {
        const bool branch_taken_0x25beac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25beac) {
            ctx->pc = 0x25BEC0u;
            goto label_25bec0;
        }
    }
    ctx->pc = 0x25BEB4u;
    // 0x25beb4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25beb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25beb8: 0x8c630198  lw          $v1, 0x198($v1)
    ctx->pc = 0x25beb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 408)));
    // 0x25bebc: 0xac600194  sw          $zero, 0x194($v1)
    ctx->pc = 0x25bebcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 404), GPR_U32(ctx, 0));
label_25bec0:
    // 0x25bec0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x25bec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25bec4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25bec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25bec8: 0xac640198  sw          $a0, 0x198($v1)
    ctx->pc = 0x25bec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 408), GPR_U32(ctx, 4));
label_25becc:
    // 0x25becc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25beccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25bed0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25bed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25bed4: 0xac640194  sw          $a0, 0x194($v1)
    ctx->pc = 0x25bed4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 404), GPR_U32(ctx, 4));
    // 0x25bed8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25bed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25bedc: 0x3e00008  jr          $ra
    ctx->pc = 0x25BEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BEDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25BEE4u;
    // 0x25bee4: 0x0  nop
    ctx->pc = 0x25bee4u;
    // NOP
    // 0x25bee8: 0x0  nop
    ctx->pc = 0x25bee8u;
    // NOP
    // 0x25beec: 0x0  nop
    ctx->pc = 0x25beecu;
    // NOP
    ctx->pc = 0x25bef0u;
}
