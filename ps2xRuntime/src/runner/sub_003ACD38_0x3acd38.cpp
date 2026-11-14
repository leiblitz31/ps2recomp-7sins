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

// Function: sub_003ACD38
// Address: 0x3acd38 - 0x3acd60
void sub_003ACD38_0x3acd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ACD38_0x3acd38");
#endif

    switch (ctx->pc) {
        case 0x3acd38u: goto label_3acd38;
        case 0x3acd3cu: goto label_3acd3c;
        case 0x3acd40u: goto label_3acd40;
        case 0x3acd44u: goto label_3acd44;
        case 0x3acd48u: goto label_3acd48;
        case 0x3acd4cu: goto label_3acd4c;
        case 0x3acd50u: goto label_3acd50;
        case 0x3acd54u: goto label_3acd54;
        case 0x3acd58u: goto label_3acd58;
        case 0x3acd5cu: goto label_3acd5c;
        default: break;
    }

    ctx->pc = 0x3acd38u;

label_3acd38:
    // 0x3acd38: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3acd38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3acd3c:
    // 0x3acd3c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3acd3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3acd40:
    // 0x3acd40: 0x8c62da98  lw          $v0, -0x2568($v1)
    ctx->pc = 0x3acd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957720)));
label_3acd44:
    // 0x3acd44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3acd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3acd48:
    // 0x3acd48: 0x40f809  jalr        $v0
label_3acd4c:
    if (ctx->pc == 0x3ACD4Cu) {
        ctx->pc = 0x3ACD50u;
        goto label_3acd50;
    }
    ctx->pc = 0x3ACD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ACD50u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACD48u, 0x3ACD50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ACD50u;
label_3acd50:
    // 0x3acd50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3acd50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3acd54:
    // 0x3acd54: 0x3e00008  jr          $ra
label_3acd58:
    if (ctx->pc == 0x3ACD58u) {
        ctx->pc = 0x3ACD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACD54u;
        // 0x3acd58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACD5Cu;
        goto label_3acd5c;
    }
    ctx->pc = 0x3ACD54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ACD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACD54u;
        // 0x3acd58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACD54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ACD5Cu;
label_3acd5c:
    // 0x3acd5c: 0x0  nop
    ctx->pc = 0x3acd5cu;
    // NOP
    ctx->pc = 0x3acd60u;
}
