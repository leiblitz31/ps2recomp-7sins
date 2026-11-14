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

// Function: sub_00418820
// Address: 0x418820 - 0x418860
void sub_00418820_0x418820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418820_0x418820");
#endif

    switch (ctx->pc) {
        case 0x418820u: goto label_418820;
        case 0x418824u: goto label_418824;
        case 0x418828u: goto label_418828;
        case 0x41882cu: goto label_41882c;
        case 0x418830u: goto label_418830;
        case 0x418834u: goto label_418834;
        case 0x418838u: goto label_418838;
        case 0x41883cu: goto label_41883c;
        case 0x418840u: goto label_418840;
        case 0x418844u: goto label_418844;
        case 0x418848u: goto label_418848;
        case 0x41884cu: goto label_41884c;
        case 0x418850u: goto label_418850;
        case 0x418854u: goto label_418854;
        case 0x418858u: goto label_418858;
        case 0x41885cu: goto label_41885c;
        default: break;
    }

    ctx->pc = 0x418820u;

label_418820:
    // 0x418820: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x418820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_418824:
    // 0x418824: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x418824u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_418828:
    // 0x418828: 0x8c62e894  lw          $v0, -0x176C($v1)
    ctx->pc = 0x418828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961300)));
label_41882c:
    // 0x41882c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x41882cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_418830:
    // 0x418830: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x418830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_418834:
    // 0x418834: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x418834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_418838:
    // 0x418838: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x418838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41883c:
    // 0x41883c: 0x40f809  jalr        $v0
label_418840:
    if (ctx->pc == 0x418840u) {
        ctx->pc = 0x418840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41883Cu;
        // 0x418840: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418844u;
        goto label_418844;
    }
    ctx->pc = 0x41883Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x418844u);
        ctx->pc = 0x418840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41883Cu;
        // 0x418840: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41883Cu, 0x418844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x418844u;
label_418844:
    // 0x418844: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_418848:
    if (ctx->pc == 0x418848u) {
        ctx->pc = 0x418848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418844u;
        // 0x418848: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41884Cu;
        goto label_41884c;
    }
    ctx->pc = 0x418844u;
    {
        const bool branch_taken_0x418844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x418844) {
            ctx->pc = 0x418848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x418844u;
            // 0x418848: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x418850u;
            goto label_418850;
        }
    }
    ctx->pc = 0x41884Cu;
label_41884c:
    // 0x41884c: 0x0  nop
    ctx->pc = 0x41884cu;
    // NOP
label_418850:
    // 0x418850: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x418850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_418854:
    // 0x418854: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x418854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_418858:
    // 0x418858: 0x3e00008  jr          $ra
label_41885c:
    if (ctx->pc == 0x41885Cu) {
        ctx->pc = 0x41885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418858u;
        // 0x41885c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418860u;
        goto label_fallthrough_0x418858;
    }
    ctx->pc = 0x418858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418858u;
        // 0x41885c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x418858:
    ctx->pc = 0x418860u;
}
