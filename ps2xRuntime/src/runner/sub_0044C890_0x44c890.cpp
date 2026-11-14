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

// Function: sub_0044C890
// Address: 0x44c890 - 0x44c940
void sub_0044C890_0x44c890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044C890_0x44c890");
#endif

    switch (ctx->pc) {
        case 0x44c8c0u: goto label_44c8c0;
        case 0x44c8ccu: goto label_44c8cc;
        case 0x44c904u: goto label_44c904;
        default: break;
    }

    ctx->pc = 0x44c890u;

    // 0x44c890: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x44c890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x44c894: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x44c894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x44c898: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x44c898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x44c89c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x44c89cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c8a0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x44c8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x44c8a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44c8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44c8a8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x44c8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x44c8ac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x44c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x44c8b0: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x44c8b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x44c8b4: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x44C8B4u;
    {
        const bool branch_taken_0x44c8b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C8B4u;
        // 0x44c8b8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c8b4) {
            ctx->pc = 0x44C8F0u;
            goto label_44c8f0;
        }
    }
    ctx->pc = 0x44C8BCu;
    // 0x44c8bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44c8c0:
    // 0x44c8c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x44c8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c8c4: 0xc112e3a  jal         func_44B8E8
    ctx->pc = 0x44C8C4u;
    SET_GPR_U32(ctx, 31, 0x44C8CCu);
    ctx->pc = 0x44C8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C8C4u;
    // 0x44c8c8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44B8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44B8E8u, 0x44C8C4u, 0x44C8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C8CCu;
label_44c8cc:
    // 0x44c8cc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x44C8CCu;
    {
        const bool branch_taken_0x44c8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C8CCu;
        // 0x44c8d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c8cc) {
            ctx->pc = 0x44C924u;
            goto label_44c924;
        }
    }
    ctx->pc = 0x44C8D4u;
    // 0x44c8d4: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x44C8D4u;
    {
        const bool branch_taken_0x44c8d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x44C8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C8D4u;
        // 0x44c8d8: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c8d4) {
            ctx->pc = 0x44C8E4u;
            goto label_44c8e4;
        }
    }
    ctx->pc = 0x44C8DCu;
    // 0x44c8dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x44c8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x44c8e0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x44c8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_44c8e4:
    // 0x44c8e4: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x44c8e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x44c8e8: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x44C8E8u;
    {
        const bool branch_taken_0x44c8e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x44C8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C8E8u;
        // 0x44c8ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c8e8) {
            ctx->pc = 0x44C8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44c8c0;
        }
    }
    ctx->pc = 0x44C8F0u;
label_44c8f0:
    // 0x44c8f0: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x44c8f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x44c8f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x44c8f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c8f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x44c8f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c8fc: 0xc112e3a  jal         func_44B8E8
    ctx->pc = 0x44C8FCu;
    SET_GPR_U32(ctx, 31, 0x44C904u);
    ctx->pc = 0x44C900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C8FCu;
    // 0x44c900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44B8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44B8E8u, 0x44C8FCu, 0x44C904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C904u;
label_44c904:
    // 0x44c904: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x44C904u;
    {
        const bool branch_taken_0x44c904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C904u;
        // 0x44c908: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c904) {
            ctx->pc = 0x44C924u;
            goto label_44c924;
        }
    }
    ctx->pc = 0x44C90Cu;
    // 0x44c90c: 0x56400004  bnel        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x44C90Cu;
    {
        const bool branch_taken_0x44c90c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x44c90c) {
            ctx->pc = 0x44C910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44C90Cu;
            // 0x44c910: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44C920u;
            goto label_44c920;
        }
    }
    ctx->pc = 0x44C914u;
    // 0x44c914: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x44c914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x44c918: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x44c918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x44c91c: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x44c91cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_44c920:
    // 0x44c920: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44c920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44c924:
    // 0x44c924: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x44c924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44c928: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x44c928u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44c92c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x44c92cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44c930: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44c930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44c934: 0x3e00008  jr          $ra
    ctx->pc = 0x44C934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C934u;
        // 0x44c938: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44C934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44C93Cu;
    // 0x44c93c: 0x0  nop
    ctx->pc = 0x44c93cu;
    // NOP
    ctx->pc = 0x44c940u;
}
