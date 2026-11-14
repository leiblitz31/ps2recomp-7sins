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

// Function: sub_0049D6E8
// Address: 0x49d6e8 - 0x49d778
void sub_0049D6E8_0x49d6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049D6E8_0x49d6e8");
#endif

    switch (ctx->pc) {
        case 0x49d704u: goto label_49d704;
        case 0x49d710u: goto label_49d710;
        case 0x49d744u: goto label_49d744;
        case 0x49d754u: goto label_49d754;
        default: break;
    }

    ctx->pc = 0x49d6e8u;

    // 0x49d6e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49d6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49d6ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x49d6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x49d6f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49d6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x49d6f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49d6f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d6f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49d6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49d6fc: 0xc12a47e  jal         func_4A91F8
    ctx->pc = 0x49D6FCu;
    SET_GPR_U32(ctx, 31, 0x49D704u);
    ctx->pc = 0x49D700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D6FCu;
    // 0x49d700: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A91F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A91F8u, 0x49D6FCu, 0x49D704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D704u;
label_49d704:
    // 0x49d704: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x49d704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d708: 0xc12a448  jal         func_4A9120
    ctx->pc = 0x49D708u;
    SET_GPR_U32(ctx, 31, 0x49D710u);
    ctx->pc = 0x49D70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D708u;
    // 0x49d70c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9120u, 0x49D708u, 0x49D710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D710u;
label_49d710:
    // 0x49d710: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49d710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d714: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49d714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49d718: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x49d718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49d71c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49d71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49d720: 0x3e00008  jr          $ra
    ctx->pc = 0x49D720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D720u;
        // 0x49d724: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49D720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49D728u;
    // 0x49d728: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49d728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49d72c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x49d72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x49d730: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49d730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x49d734: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49d734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49d738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49d73c: 0xc12a45c  jal         func_4A9170
    ctx->pc = 0x49D73Cu;
    SET_GPR_U32(ctx, 31, 0x49D744u);
    ctx->pc = 0x49D740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D73Cu;
    // 0x49d740: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9170u, 0x49D73Cu, 0x49D744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D744u;
label_49d744:
    // 0x49d744: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x49D744u;
    {
        const bool branch_taken_0x49d744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D744u;
        // 0x49d748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d744) {
            ctx->pc = 0x49D760u;
            goto label_49d760;
        }
    }
    ctx->pc = 0x49D74Cu;
    // 0x49d74c: 0xc12a424  jal         func_4A9090
    ctx->pc = 0x49D74Cu;
    SET_GPR_U32(ctx, 31, 0x49D754u);
    ctx->pc = 0x49D750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D74Cu;
    // 0x49d750: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9090u, 0x49D74Cu, 0x49D754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D754u;
label_49d754:
    // 0x49d754: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x49d754u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x49d758: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x49D758u;
    {
        const bool branch_taken_0x49d758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D758u;
        // 0x49d75c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d758) {
            ctx->pc = 0x49D764u;
            goto label_49d764;
        }
    }
    ctx->pc = 0x49D760u;
label_49d760:
    // 0x49d760: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49d760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49d764:
    // 0x49d764: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x49d764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49d768: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49d768u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49d76c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49d76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49d770: 0x3e00008  jr          $ra
    ctx->pc = 0x49D770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49D774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D770u;
        // 0x49d774: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49D770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49D778u;
}
