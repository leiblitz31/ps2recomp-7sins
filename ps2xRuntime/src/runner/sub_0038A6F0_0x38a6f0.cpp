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

// Function: sub_0038A6F0
// Address: 0x38a6f0 - 0x38a790
void sub_0038A6F0_0x38a6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A6F0_0x38a6f0");
#endif

    switch (ctx->pc) {
        case 0x38a710u: goto label_38a710;
        case 0x38a738u: goto label_38a738;
        case 0x38a748u: goto label_38a748;
        case 0x38a754u: goto label_38a754;
        case 0x38a764u: goto label_38a764;
        case 0x38a770u: goto label_38a770;
        default: break;
    }

    ctx->pc = 0x38a6f0u;

    // 0x38a6f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38a6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x38a6f4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x38a6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x38a6f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38a6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x38a6fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38a6fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a700: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x38a700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x38a704: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38a704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38a708: 0xc0e27da  jal         func_389F68
    ctx->pc = 0x38A708u;
    SET_GPR_U32(ctx, 31, 0x38A710u);
    ctx->pc = 0x38A70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A708u;
    // 0x38a70c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389F68u, 0x38A708u, 0x38A710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A710u;
label_38a710:
    // 0x38a710: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38a710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a714: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x38A714u;
    {
        const bool branch_taken_0x38a714 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x38a714) {
            ctx->pc = 0x38A718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38A714u;
            // 0x38a718: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38A728u;
            goto label_38a728;
        }
    }
    ctx->pc = 0x38A71Cu;
    // 0x38a71c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x38a71cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x38a720: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x38A720u;
    {
        const bool branch_taken_0x38a720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A720u;
        // 0x38a724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a720) {
            ctx->pc = 0x38A778u;
            goto label_38a778;
        }
    }
    ctx->pc = 0x38A728u;
label_38a728:
    // 0x38a728: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x38A728u;
    {
        const bool branch_taken_0x38a728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38a728) {
            ctx->pc = 0x38A72Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38A728u;
            // 0x38a72c: 0x8c4500a0  lw          $a1, 0xA0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38A75Cu;
            goto label_38a75c;
        }
    }
    ctx->pc = 0x38A730u;
    // 0x38a730: 0xc0e27ae  jal         func_389EB8
    ctx->pc = 0x38A730u;
    SET_GPR_U32(ctx, 31, 0x38A738u);
    ctx->pc = 0x38A734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A730u;
    // 0x38a734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389EB8u, 0x38A730u, 0x38A738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A738u;
label_38a738:
    // 0x38a738: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38a738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38a73c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x38a73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x38a740: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x38A740u;
    SET_GPR_U32(ctx, 31, 0x38A748u);
    ctx->pc = 0x38A744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A740u;
    // 0x38a744: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x38A740u, 0x38A748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A748u;
label_38a748:
    // 0x38a748: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38a748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a74c: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x38A74Cu;
    SET_GPR_U32(ctx, 31, 0x38A754u);
    ctx->pc = 0x38A750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A74Cu;
    // 0x38a750: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x38A74Cu, 0x38A754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A754u;
label_38a754:
    // 0x38a754: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38A754u;
    {
        const bool branch_taken_0x38a754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A754u;
        // 0x38a758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a754) {
            ctx->pc = 0x38A778u;
            goto label_38a778;
        }
    }
    ctx->pc = 0x38A75Cu;
label_38a75c:
    // 0x38a75c: 0xc0e2686  jal         func_389A18
    ctx->pc = 0x38A75Cu;
    SET_GPR_U32(ctx, 31, 0x38A764u);
    ctx->pc = 0x38A760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A75Cu;
    // 0x38a760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x38A75Cu, 0x38A764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A764u;
label_38a764:
    // 0x38a764: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x38a764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x38a768: 0xc0e2700  jal         func_389C00
    ctx->pc = 0x38A768u;
    SET_GPR_U32(ctx, 31, 0x38A770u);
    ctx->pc = 0x38A76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A768u;
    // 0x38a76c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389C00u, 0x38A768u, 0x38A770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A770u;
label_38a770:
    // 0x38a770: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x38a770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a774: 0x0  nop
    ctx->pc = 0x38a774u;
    // NOP
label_38a778:
    // 0x38a778: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x38a778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38a77c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x38a77cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38a780: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38a780u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38a784: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38a784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38a788: 0x3e00008  jr          $ra
    ctx->pc = 0x38A788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A788u;
        // 0x38a78c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A790u;
}
