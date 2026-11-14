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

// Function: sub_003AEA90
// Address: 0x3aea90 - 0x3aeab8
void sub_003AEA90_0x3aea90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AEA90_0x3aea90");
#endif

    switch (ctx->pc) {
        case 0x3aea90u: goto label_3aea90;
        case 0x3aea94u: goto label_3aea94;
        case 0x3aea98u: goto label_3aea98;
        case 0x3aea9cu: goto label_3aea9c;
        case 0x3aeaa0u: goto label_3aeaa0;
        case 0x3aeaa4u: goto label_3aeaa4;
        case 0x3aeaa8u: goto label_3aeaa8;
        case 0x3aeaacu: goto label_3aeaac;
        case 0x3aeab0u: goto label_3aeab0;
        case 0x3aeab4u: goto label_3aeab4;
        default: break;
    }

    ctx->pc = 0x3aea90u;

label_3aea90:
    // 0x3aea90: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3aea90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3aea94:
    // 0x3aea94: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3aea94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3aea98:
    // 0x3aea98: 0x8c62d5f0  lw          $v0, -0x2A10($v1)
    ctx->pc = 0x3aea98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956528)));
label_3aea9c:
    // 0x3aea9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3aea9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3aeaa0:
    // 0x3aeaa0: 0x40f809  jalr        $v0
label_3aeaa4:
    if (ctx->pc == 0x3AEAA4u) {
        ctx->pc = 0x3AEAA8u;
        goto label_3aeaa8;
    }
    ctx->pc = 0x3AEAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AEAA8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEAA0u, 0x3AEAA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AEAA8u;
label_3aeaa8:
    // 0x3aeaa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aeaa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3aeaac:
    // 0x3aeaac: 0x3e00008  jr          $ra
label_3aeab0:
    if (ctx->pc == 0x3AEAB0u) {
        ctx->pc = 0x3AEAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEAACu;
        // 0x3aeab0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEAB4u;
        goto label_3aeab4;
    }
    ctx->pc = 0x3AEAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AEAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEAACu;
        // 0x3aeab0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEAACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AEAB4u;
label_3aeab4:
    // 0x3aeab4: 0x0  nop
    ctx->pc = 0x3aeab4u;
    // NOP
    ctx->pc = 0x3aeab8u;
}
