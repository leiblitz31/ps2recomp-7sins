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

// Function: sub_00390430
// Address: 0x390430 - 0x390458
void sub_00390430_0x390430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390430_0x390430");
#endif

    switch (ctx->pc) {
        case 0x390430u: goto label_390430;
        case 0x390434u: goto label_390434;
        case 0x390438u: goto label_390438;
        case 0x39043cu: goto label_39043c;
        case 0x390440u: goto label_390440;
        case 0x390444u: goto label_390444;
        case 0x390448u: goto label_390448;
        case 0x39044cu: goto label_39044c;
        case 0x390450u: goto label_390450;
        case 0x390454u: goto label_390454;
        default: break;
    }

    ctx->pc = 0x390430u;

label_390430:
    // 0x390430: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x390430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_390434:
    // 0x390434: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x390434u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_390438:
    // 0x390438: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x390438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_39043c:
    // 0x39043c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x39043cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_390440:
    // 0x390440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x390440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_390444:
    // 0x390444: 0x40f809  jalr        $v0
label_390448:
    if (ctx->pc == 0x390448u) {
        ctx->pc = 0x390448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390444u;
        // 0x390448: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39044Cu;
        goto label_39044c;
    }
    ctx->pc = 0x390444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39044Cu);
        ctx->pc = 0x390448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390444u;
        // 0x390448: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390444u, 0x39044Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39044Cu;
label_39044c:
    // 0x39044c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39044cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_390450:
    // 0x390450: 0x3e00008  jr          $ra
label_390454:
    if (ctx->pc == 0x390454u) {
        ctx->pc = 0x390454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390450u;
        // 0x390454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390458u;
        goto label_fallthrough_0x390450;
    }
    ctx->pc = 0x390450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390450u;
        // 0x390454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x390450:
    ctx->pc = 0x390458u;
}
