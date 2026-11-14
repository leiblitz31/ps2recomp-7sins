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

// Function: sub_0040D6C0
// Address: 0x40d6c0 - 0x40d7a8
void sub_0040D6C0_0x40d6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040D6C0_0x40d6c0");
#endif

    switch (ctx->pc) {
        case 0x40d6f8u: goto label_40d6f8;
        case 0x40d714u: goto label_40d714;
        case 0x40d72cu: goto label_40d72c;
        case 0x40d73cu: goto label_40d73c;
        case 0x40d760u: goto label_40d760;
        case 0x40d778u: goto label_40d778;
        case 0x40d788u: goto label_40d788;
        default: break;
    }

    ctx->pc = 0x40d6c0u;

    // 0x40d6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x40D6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40D6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D6C0u;
        // 0x40d6c4: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40D6C8u;
    // 0x40d6c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x40d6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x40d6cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40d6ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d6d0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x40d6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x40d6d4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x40d6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x40d6d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40d6d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d6dc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x40d6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x40d6e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x40d6e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d6e4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x40d6e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d6e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x40d6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x40d6ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x40d6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40d6f0: 0xc103322  jal         func_40CC88
    ctx->pc = 0x40D6F0u;
    SET_GPR_U32(ctx, 31, 0x40D6F8u);
    ctx->pc = 0x40D6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D6F0u;
    // 0x40d6f4: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x40D6F0u, 0x40D6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D6F8u;
label_40d6f8:
    // 0x40d6f8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x40D6F8u;
    {
        const bool branch_taken_0x40d6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40d6f8) {
            ctx->pc = 0x40D6FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40D6F8u;
            // 0x40d6fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40D720u;
            goto label_40d720;
        }
    }
    ctx->pc = 0x40D700u;
    // 0x40d700: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40d700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40d704: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40d704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x40d708: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x40d708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x40d70c: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x40D70Cu;
    SET_GPR_U32(ctx, 31, 0x40D714u);
    ctx->pc = 0x40D710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D70Cu;
    // 0x40d710: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40D70Cu, 0x40D714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D714u;
label_40d714:
    // 0x40d714: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40d714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d718: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x40D718u;
    {
        const bool branch_taken_0x40d718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D718u;
        // 0x40d71c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d718) {
            ctx->pc = 0x40D780u;
            goto label_40d780;
        }
    }
    ctx->pc = 0x40D720u;
label_40d720:
    // 0x40d720: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x40d720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d724: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x40D724u;
    SET_GPR_U32(ctx, 31, 0x40D72Cu);
    ctx->pc = 0x40D728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D724u;
    // 0x40d728: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x40D724u, 0x40D72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D72Cu;
label_40d72c:
    // 0x40d72c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40d72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d730: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40d730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d734: 0xc10480a  jal         func_412028
    ctx->pc = 0x40D734u;
    SET_GPR_U32(ctx, 31, 0x40D73Cu);
    ctx->pc = 0x40D738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D734u;
    // 0x40d738: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x40D734u, 0x40D73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D73Cu;
label_40d73c:
    // 0x40d73c: 0x38420034  xori        $v0, $v0, 0x34
    ctx->pc = 0x40d73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)52);
    // 0x40d740: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x40D740u;
    {
        const bool branch_taken_0x40d740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40d740) {
            ctx->pc = 0x40D744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40D740u;
            // 0x40d744: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40D768u;
            goto label_40d768;
        }
    }
    ctx->pc = 0x40D748u;
    // 0x40d748: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x40d748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40d74c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40d74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d750: 0x24a2000c  addiu       $v0, $a1, 0xC
    ctx->pc = 0x40d750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x40d754: 0x24a5ffcc  addiu       $a1, $a1, -0x34
    ctx->pc = 0x40d754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967244));
    // 0x40d758: 0xc1048ec  jal         func_4123B0
    ctx->pc = 0x40D758u;
    SET_GPR_U32(ctx, 31, 0x40D760u);
    ctx->pc = 0x40D75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D758u;
    // 0x40d75c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4123B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4123B0u, 0x40D758u, 0x40D760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D760u;
label_40d760:
    // 0x40d760: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x40D760u;
    {
        const bool branch_taken_0x40d760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D760u;
        // 0x40d764: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d760) {
            ctx->pc = 0x40D78Cu;
            goto label_40d78c;
        }
    }
    ctx->pc = 0x40D768u;
label_40d768:
    // 0x40d768: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40d768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x40d76c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x40d76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x40d770: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x40D770u;
    SET_GPR_U32(ctx, 31, 0x40D778u);
    ctx->pc = 0x40D774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D770u;
    // 0x40d774: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40D770u, 0x40D778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D778u;
label_40d778:
    // 0x40d778: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x40d778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x40d77c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x40d77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_40d780:
    // 0x40d780: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x40D780u;
    SET_GPR_U32(ctx, 31, 0x40D788u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x40D780u, 0x40D788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D788u;
label_40d788:
    // 0x40d788: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x40d788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40d78c:
    // 0x40d78c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x40d78cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x40d790: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x40d790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x40d794: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x40d794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x40d798: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x40d798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40d79c: 0x3e00008  jr          $ra
    ctx->pc = 0x40D79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40D7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D79Cu;
        // 0x40d7a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40D7A4u;
    // 0x40d7a4: 0x0  nop
    ctx->pc = 0x40d7a4u;
    // NOP
    ctx->pc = 0x40d7a8u;
}
