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

// Function: sub_003797E0
// Address: 0x3797e0 - 0x379868
void sub_003797E0_0x3797e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003797E0_0x3797e0");
#endif

    switch (ctx->pc) {
        case 0x379828u: goto label_379828;
        case 0x379840u: goto label_379840;
        default: break;
    }

    ctx->pc = 0x3797e0u;

    // 0x3797e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3797e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3797e4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3797e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x3797e8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3797e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3797ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3797ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3797f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3797f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3797f4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3797f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3797f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3797f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3797fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3797fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x379800: 0x2452ac48  addiu       $s2, $v0, -0x53B8
    ctx->pc = 0x379800u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945864));
    // 0x379804: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x379804u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5DAC50u));
    // 0x379808: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x379808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x37980c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37980cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x379810: 0x5202000f  beql        $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x379810u;
    {
        const bool branch_taken_0x379810 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x379810) {
            ctx->pc = 0x379814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379810u;
            // 0x379814: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x379850u;
            goto label_379850;
        }
    }
    ctx->pc = 0x379818u;
    // 0x379818: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x379818u;
    {
        const bool branch_taken_0x379818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x379818) {
            ctx->pc = 0x37981Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379818u;
            // 0x37981c: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37982Cu;
            goto label_37982c;
        }
    }
    ctx->pc = 0x379820u;
    // 0x379820: 0xc0de906  jal         func_37A418
    ctx->pc = 0x379820u;
    SET_GPR_U32(ctx, 31, 0x379828u);
    ctx->pc = 0x37A418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A418u, 0x379820u, 0x379828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379828u;
label_379828:
    // 0x379828: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x379828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_37982c:
    // 0x37982c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x37982cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x379830: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x379830u;
    {
        const bool branch_taken_0x379830 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x379834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379830u;
        // 0x379834: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379830) {
            ctx->pc = 0x37984Cu;
            goto label_37984c;
        }
    }
    ctx->pc = 0x379838u;
    // 0x379838: 0xc0de796  jal         func_379E58
    ctx->pc = 0x379838u;
    SET_GPR_U32(ctx, 31, 0x379840u);
    ctx->pc = 0x37983Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379838u;
    // 0x37983c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379E58u, 0x379838u, 0x379840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379840u;
label_379840:
    // 0x379840: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x379840u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379844: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x379844u;
    {
        const bool branch_taken_0x379844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x379848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379844u;
        // 0x379848: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379844) {
            ctx->pc = 0x379850u;
            goto label_379850;
        }
    }
    ctx->pc = 0x37984Cu;
label_37984c:
    // 0x37984c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x37984cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_379850:
    // 0x379850: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x379850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x379854: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x379854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379858: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x379858u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37985c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37985cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379860: 0x3e00008  jr          $ra
    ctx->pc = 0x379860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379860u;
        // 0x379864: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379868u;
}
