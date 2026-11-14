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

// Function: sub_00408418
// Address: 0x408418 - 0x408448
void sub_00408418_0x408418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00408418_0x408418");
#endif

    switch (ctx->pc) {
        case 0x408418u: goto label_408418;
        case 0x40841cu: goto label_40841c;
        case 0x408420u: goto label_408420;
        case 0x408424u: goto label_408424;
        case 0x408428u: goto label_408428;
        case 0x40842cu: goto label_40842c;
        case 0x408430u: goto label_408430;
        case 0x408434u: goto label_408434;
        case 0x408438u: goto label_408438;
        case 0x40843cu: goto label_40843c;
        case 0x408440u: goto label_408440;
        case 0x408444u: goto label_408444;
        default: break;
    }

    ctx->pc = 0x408418u;

label_408418:
    // 0x408418: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x408418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_40841c:
    // 0x40841c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x40841cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_408420:
    // 0x408420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x408420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_408424:
    // 0x408424: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x408424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_408428:
    // 0x408428: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x408428u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_40842c:
    // 0x40842c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40842cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_408430:
    // 0x408430: 0x40f809  jalr        $v0
label_408434:
    if (ctx->pc == 0x408434u) {
        ctx->pc = 0x408434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408430u;
        // 0x408434: 0x34a5010d  ori         $a1, $a1, 0x10D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)269);
        ctx->in_delay_slot = false;
        ctx->pc = 0x408438u;
        goto label_408438;
    }
    ctx->pc = 0x408430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x408438u);
        ctx->pc = 0x408434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408430u;
        // 0x408434: 0x34a5010d  ori         $a1, $a1, 0x10D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)269);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x408430u, 0x408438u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x408438u;
label_408438:
    // 0x408438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x408438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_40843c:
    // 0x40843c: 0x3e00008  jr          $ra
label_408440:
    if (ctx->pc == 0x408440u) {
        ctx->pc = 0x408440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40843Cu;
        // 0x408440: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408444u;
        goto label_408444;
    }
    ctx->pc = 0x40843Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x408440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40843Cu;
        // 0x408440: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40843Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x408444u;
label_408444:
    // 0x408444: 0x0  nop
    ctx->pc = 0x408444u;
    // NOP
    ctx->pc = 0x408448u;
}
