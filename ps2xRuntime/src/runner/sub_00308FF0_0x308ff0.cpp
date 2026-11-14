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

// Function: sub_00308FF0
// Address: 0x308ff0 - 0x3090a0
void sub_00308FF0_0x308ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308FF0_0x308ff0");
#endif

    switch (ctx->pc) {
        case 0x309040u: goto label_309040;
        case 0x309060u: goto label_309060;
        case 0x309070u: goto label_309070;
        case 0x309080u: goto label_309080;
        default: break;
    }

    ctx->pc = 0x308ff0u;

label_308ff0:
    // 0x308ff0: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x308ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x308ff4: 0x24432228  addiu       $v1, $v0, 0x2228
    ctx->pc = 0x308ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8744));
    // 0x308ff8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x308ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4F2230u));
    // 0x308ffc: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x308FFCu;
    {
        const bool branch_taken_0x308ffc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x308ffc) {
            ctx->pc = 0x309010u;
            goto label_309010;
        }
    }
    ctx->pc = 0x309004u;
    // 0x309004: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x309004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x309008: 0x3e00008  jr          $ra
    ctx->pc = 0x309008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309008u;
        // 0x30900c: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309010u;
label_309010:
    // 0x309010: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x309010u;
    {
        const bool branch_taken_0x309010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x309010) {
            ctx->pc = 0x309020u;
            goto label_309020;
        }
    }
    ctx->pc = 0x309018u;
    // 0x309018: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x309018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x30901c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x30901cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_309020:
    // 0x309020: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x309020u;
    {
        const bool branch_taken_0x309020 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x309020) {
            ctx->pc = 0x309038u;
            goto label_309038;
        }
    }
    ctx->pc = 0x309028u;
    // 0x309028: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x309028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x30902c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x30902cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x309030: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x309030u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x309034: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x309034u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_309038:
    // 0x309038: 0x3e00008  jr          $ra
    ctx->pc = 0x309038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30903Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309038u;
        // 0x30903c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309040u;
label_309040:
    // 0x309040: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x309040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x309044: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x309044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x309048: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x309048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30904c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30904cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309050: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x309050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x309054: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x309054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x309058: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x309058u;
    SET_GPR_U32(ctx, 31, 0x309060u);
    ctx->pc = 0x30905Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309058u;
    // 0x30905c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x309058u, 0x309060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309060u;
label_309060:
    // 0x309060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x309060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309064: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x309064u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309068: 0xc0c23fc  jal         func_308FF0
    ctx->pc = 0x309068u;
    SET_GPR_U32(ctx, 31, 0x309070u);
    ctx->pc = 0x30906Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309068u;
    // 0x30906c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308FF0u;
    goto label_308ff0;
    ctx->pc = 0x309070u;
label_309070:
    // 0x309070: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x309070u;
    {
        const bool branch_taken_0x309070 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x309074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309070u;
        // 0x309074: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309070) {
            ctx->pc = 0x309080u;
            goto label_309080;
        }
    }
    ctx->pc = 0x309078u;
    // 0x309078: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x309078u;
    SET_GPR_U32(ctx, 31, 0x309080u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x309078u, 0x309080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309080u;
label_309080:
    // 0x309080: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x309080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309084: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x309084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x309088: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x309088u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30908c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x30908cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x309090: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x309090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309094: 0x3e00008  jr          $ra
    ctx->pc = 0x309094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309094u;
        // 0x309098: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30909Cu;
    // 0x30909c: 0x0  nop
    ctx->pc = 0x30909cu;
    // NOP
    ctx->pc = 0x3090a0u;
}
