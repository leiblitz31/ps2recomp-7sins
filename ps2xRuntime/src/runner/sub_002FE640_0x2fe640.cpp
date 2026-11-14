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

// Function: sub_002FE640
// Address: 0x2fe640 - 0x2fe6a8
void sub_002FE640_0x2fe640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE640_0x2fe640");
#endif

    switch (ctx->pc) {
        case 0x2fe670u: goto label_2fe670;
        case 0x2fe678u: goto label_2fe678;
        case 0x2fe690u: goto label_2fe690;
        default: break;
    }

    ctx->pc = 0x2fe640u;

    // 0x2fe640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fe640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fe644: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2fe644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2fe648: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fe648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fe64c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fe64cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe650: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fe650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fe654: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x2fe654u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x2fe658: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2fe658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2fe65c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2fe65cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2fe660: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE660u;
    {
        const bool branch_taken_0x2fe660 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe660) {
            ctx->pc = 0x2FE670u;
            goto label_2fe670;
        }
    }
    ctx->pc = 0x2FE668u;
    // 0x2fe668: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x2FE668u;
    SET_GPR_U32(ctx, 31, 0x2FE670u);
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x2FE668u, 0x2FE670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE670u;
label_2fe670:
    // 0x2fe670: 0xc0bf62c  jal         func_2FD8B0
    ctx->pc = 0x2FE670u;
    SET_GPR_U32(ctx, 31, 0x2FE678u);
    ctx->pc = 0x2FE674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE670u;
    // 0x2fe674: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD8B0u, 0x2FE670u, 0x2FE678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE678u;
label_2fe678:
    // 0x2fe678: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fe678u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe67c: 0xf  sync
    ctx->pc = 0x2fe67cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2fe680: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FE680u;
    {
        const bool branch_taken_0x2fe680 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE680u;
        // 0x2fe684: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe680) {
            ctx->pc = 0x2FE694u;
            goto label_2fe694;
        }
    }
    ctx->pc = 0x2FE688u;
    // 0x2fe688: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x2FE688u;
    SET_GPR_U32(ctx, 31, 0x2FE690u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x2FE688u, 0x2FE690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE690u;
label_2fe690:
    // 0x2fe690: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fe690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fe694:
    // 0x2fe694: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fe694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fe698: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2fe698u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe69c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fe69cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE6A0u;
        // 0x2fe6a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE6A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE6A8u;
}
