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

// Function: sub_00408448
// Address: 0x408448 - 0x408470
void sub_00408448_0x408448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00408448_0x408448");
#endif

    switch (ctx->pc) {
        case 0x408448u: goto label_408448;
        case 0x40844cu: goto label_40844c;
        case 0x408450u: goto label_408450;
        case 0x408454u: goto label_408454;
        case 0x408458u: goto label_408458;
        case 0x40845cu: goto label_40845c;
        case 0x408460u: goto label_408460;
        case 0x408464u: goto label_408464;
        case 0x408468u: goto label_408468;
        case 0x40846cu: goto label_40846c;
        default: break;
    }

    ctx->pc = 0x408448u;

label_408448:
    // 0x408448: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x408448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_40844c:
    // 0x40844c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x40844cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_408450:
    // 0x408450: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x408450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_408454:
    // 0x408454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x408454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_408458:
    // 0x408458: 0x40f809  jalr        $v0
label_40845c:
    if (ctx->pc == 0x40845Cu) {
        ctx->pc = 0x40845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408458u;
        // 0x40845c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408460u;
        goto label_408460;
    }
    ctx->pc = 0x408458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x408460u);
        ctx->pc = 0x40845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408458u;
        // 0x40845c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x408458u, 0x408460u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x408460u;
label_408460:
    // 0x408460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x408460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_408464:
    // 0x408464: 0x3e00008  jr          $ra
label_408468:
    if (ctx->pc == 0x408468u) {
        ctx->pc = 0x408468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408464u;
        // 0x408468: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40846Cu;
        goto label_40846c;
    }
    ctx->pc = 0x408464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x408468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408464u;
        // 0x408468: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x408464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40846Cu;
label_40846c:
    // 0x40846c: 0x0  nop
    ctx->pc = 0x40846cu;
    // NOP
    ctx->pc = 0x408470u;
}
