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

// Function: sub_003BCD58
// Address: 0x3bcd58 - 0x3bcd80
void sub_003BCD58_0x3bcd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BCD58_0x3bcd58");
#endif

    switch (ctx->pc) {
        case 0x3bcd58u: goto label_3bcd58;
        case 0x3bcd5cu: goto label_3bcd5c;
        case 0x3bcd60u: goto label_3bcd60;
        case 0x3bcd64u: goto label_3bcd64;
        case 0x3bcd68u: goto label_3bcd68;
        case 0x3bcd6cu: goto label_3bcd6c;
        case 0x3bcd70u: goto label_3bcd70;
        case 0x3bcd74u: goto label_3bcd74;
        case 0x3bcd78u: goto label_3bcd78;
        case 0x3bcd7cu: goto label_3bcd7c;
        default: break;
    }

    ctx->pc = 0x3bcd58u;

label_3bcd58:
    // 0x3bcd58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3bcd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3bcd5c:
    // 0x3bcd5c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3bcd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3bcd60:
    // 0x3bcd60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bcd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3bcd64:
    // 0x3bcd64: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x3bcd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3bcd68:
    // 0x3bcd68: 0x40f809  jalr        $v0
label_3bcd6c:
    if (ctx->pc == 0x3BCD6Cu) {
        ctx->pc = 0x3BCD70u;
        goto label_3bcd70;
    }
    ctx->pc = 0x3BCD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BCD70u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BCD68u, 0x3BCD70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BCD70u;
label_3bcd70:
    // 0x3bcd70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bcd70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3bcd74:
    // 0x3bcd74: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x3bcd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_3bcd78:
    // 0x3bcd78: 0x3e00008  jr          $ra
label_3bcd7c:
    if (ctx->pc == 0x3BCD7Cu) {
        ctx->pc = 0x3BCD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCD78u;
        // 0x3bcd7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCD80u;
        goto label_fallthrough_0x3bcd78;
    }
    ctx->pc = 0x3BCD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BCD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCD78u;
        // 0x3bcd7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BCD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3bcd78:
    ctx->pc = 0x3BCD80u;
}
