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

// Function: sub_00242610
// Address: 0x242610 - 0x242680
void sub_00242610_0x242610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242610_0x242610");
#endif

    switch (ctx->pc) {
        case 0x24266cu: goto label_24266c;
        default: break;
    }

    ctx->pc = 0x242610u;

    // 0x242610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x242610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x242614: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x242614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x242618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x242618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24261c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x24261cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x242620: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x242620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242624: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x242624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x242628: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x242628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x24262c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x24262cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x242630: 0x8012  mflo        $s0
    ctx->pc = 0x242630u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x242634: 0x2e010015  sltiu       $at, $s0, 0x15
    ctx->pc = 0x242634u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x242638: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x242638u;
    {
        const bool branch_taken_0x242638 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x242638) {
            ctx->pc = 0x24264Cu;
            goto label_24264c;
        }
    }
    ctx->pc = 0x242640u;
    // 0x242640: 0x24100014  addiu       $s0, $zero, 0x14
    ctx->pc = 0x242640u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x242644: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x242644u;
    {
        const bool branch_taken_0x242644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242644) {
            ctx->pc = 0x24265Cu;
            goto label_24265c;
        }
    }
    ctx->pc = 0x24264Cu;
label_24264c:
    // 0x24264c: 0x2e010005  sltiu       $at, $s0, 0x5
    ctx->pc = 0x24264cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x242650: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x242650u;
    {
        const bool branch_taken_0x242650 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x242650) {
            ctx->pc = 0x24265Cu;
            goto label_24265c;
        }
    }
    ctx->pc = 0x242658u;
    // 0x242658: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x242658u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_24265c:
    // 0x24265c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x24265cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242660: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x242660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242664: 0xc090930  jal         func_2424C0
    ctx->pc = 0x242664u;
    SET_GPR_U32(ctx, 31, 0x24266Cu);
    ctx->pc = 0x2424C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2424C0u, 0x242664u, 0x24266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24266Cu;
label_24266c:
    // 0x24266c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24266cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242670: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x242670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242674: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x242674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x242678: 0x3e00008  jr          $ra
    ctx->pc = 0x242678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242680u;
}
