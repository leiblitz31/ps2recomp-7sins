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

// Function: sub_00390408
// Address: 0x390408 - 0x390430
void sub_00390408_0x390408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390408_0x390408");
#endif

    switch (ctx->pc) {
        case 0x390408u: goto label_390408;
        case 0x39040cu: goto label_39040c;
        case 0x390410u: goto label_390410;
        case 0x390414u: goto label_390414;
        case 0x390418u: goto label_390418;
        case 0x39041cu: goto label_39041c;
        case 0x390420u: goto label_390420;
        case 0x390424u: goto label_390424;
        case 0x390428u: goto label_390428;
        case 0x39042cu: goto label_39042c;
        default: break;
    }

    ctx->pc = 0x390408u;

label_390408:
    // 0x390408: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x390408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_39040c:
    // 0x39040c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39040cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_390410:
    // 0x390410: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x390410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_390414:
    // 0x390414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x390414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_390418:
    // 0x390418: 0x40f809  jalr        $v0
label_39041c:
    if (ctx->pc == 0x39041Cu) {
        ctx->pc = 0x390420u;
        goto label_390420;
    }
    ctx->pc = 0x390418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x390420u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390418u, 0x390420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x390420u;
label_390420:
    // 0x390420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x390420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_390424:
    // 0x390424: 0x3e00008  jr          $ra
label_390428:
    if (ctx->pc == 0x390428u) {
        ctx->pc = 0x390428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390424u;
        // 0x390428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39042Cu;
        goto label_39042c;
    }
    ctx->pc = 0x390424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390424u;
        // 0x390428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39042Cu;
label_39042c:
    // 0x39042c: 0x0  nop
    ctx->pc = 0x39042cu;
    // NOP
    ctx->pc = 0x390430u;
}
