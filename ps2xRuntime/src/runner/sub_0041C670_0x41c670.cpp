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

// Function: sub_0041C670
// Address: 0x41c670 - 0x41c6a0
void sub_0041C670_0x41c670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041C670_0x41c670");
#endif

    switch (ctx->pc) {
        case 0x41c670u: goto label_41c670;
        case 0x41c674u: goto label_41c674;
        case 0x41c678u: goto label_41c678;
        case 0x41c67cu: goto label_41c67c;
        case 0x41c680u: goto label_41c680;
        case 0x41c684u: goto label_41c684;
        case 0x41c688u: goto label_41c688;
        case 0x41c68cu: goto label_41c68c;
        case 0x41c690u: goto label_41c690;
        case 0x41c694u: goto label_41c694;
        case 0x41c698u: goto label_41c698;
        case 0x41c69cu: goto label_41c69c;
        default: break;
    }

    ctx->pc = 0x41c670u;

label_41c670:
    // 0x41c670: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41c670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_41c674:
    // 0x41c674: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x41c674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41c678:
    // 0x41c678: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41c678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_41c67c:
    // 0x41c67c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x41c67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41c680:
    // 0x41c680: 0x8c62e8d0  lw          $v0, -0x1730($v1)
    ctx->pc = 0x41c680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961360)));
label_41c684:
    // 0x41c684: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41c684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41c688:
    // 0x41c688: 0x40f809  jalr        $v0
label_41c68c:
    if (ctx->pc == 0x41C68Cu) {
        ctx->pc = 0x41C68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C688u;
        // 0x41c68c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C690u;
        goto label_41c690;
    }
    ctx->pc = 0x41C688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41C690u);
        ctx->pc = 0x41C68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C688u;
        // 0x41c68c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C688u, 0x41C690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41C690u;
label_41c690:
    // 0x41c690: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x41c690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_41c694:
    // 0x41c694: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41c694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41c698:
    // 0x41c698: 0x3e00008  jr          $ra
label_41c69c:
    if (ctx->pc == 0x41C69Cu) {
        ctx->pc = 0x41C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C698u;
        // 0x41c69c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C6A0u;
        goto label_fallthrough_0x41c698;
    }
    ctx->pc = 0x41C698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C698u;
        // 0x41c69c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x41c698:
    ctx->pc = 0x41C6A0u;
}
