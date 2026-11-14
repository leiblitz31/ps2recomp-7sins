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

// Function: sub_003260B0
// Address: 0x3260b0 - 0x326158
void sub_003260B0_0x3260b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003260B0_0x3260b0");
#endif

    switch (ctx->pc) {
        case 0x3260e8u: goto label_3260e8;
        case 0x326130u: goto label_326130;
        default: break;
    }

    ctx->pc = 0x3260b0u;

    // 0x3260b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3260b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3260b4: 0x8f82a634  lw          $v0, -0x59CC($gp)
    ctx->pc = 0x3260b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
    // 0x3260b8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3260b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3260bc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3260bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3260c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3260c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3260c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3260c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3260c8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3260c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3260cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3260ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3260d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3260d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3260d4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3260d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3260d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3260d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3260dc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3260dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3260e0: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x3260e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x3260e4: 0x0  nop
    ctx->pc = 0x3260e4u;
    // NOP
label_3260e8:
    // 0x3260e8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3260e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3260ec: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x3260ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3260f0: 0x54660003  bnel        $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3260F0u;
    {
        const bool branch_taken_0x3260f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x3260f0) {
            ctx->pc = 0x3260F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3260F0u;
            // 0x3260f4: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326100u;
            goto label_326100;
        }
    }
    ctx->pc = 0x3260F8u;
    // 0x3260f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3260F8u;
    {
        const bool branch_taken_0x3260f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3260FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3260F8u;
        // 0x3260fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3260f8) {
            ctx->pc = 0x326114u;
            goto label_326114;
        }
    }
    ctx->pc = 0x326100u;
label_326100:
    // 0x326100: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x326100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x326104: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x326104u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x326108: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x326108u;
    {
        const bool branch_taken_0x326108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326108u;
        // 0x32610c: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326108) {
            ctx->pc = 0x3260E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3260e8;
        }
    }
    ctx->pc = 0x326110u;
    // 0x326110: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x326110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_326114:
    // 0x326114: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x326114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x326118: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x326118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32611c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32611cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x326120: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x326120u;
    {
        const bool branch_taken_0x326120 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x326124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326120u;
        // 0x326124: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326120) {
            ctx->pc = 0x326134u;
            goto label_326134;
        }
    }
    ctx->pc = 0x326128u;
    // 0x326128: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x326128u;
    SET_GPR_U32(ctx, 31, 0x326130u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x326128u, 0x326130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326130u;
label_326130:
    // 0x326130: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x326130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_326134:
    // 0x326134: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x326134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x326138: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x326138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32613c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x32613cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326140: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x326140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326144: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x326144u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32614c: 0x3e00008  jr          $ra
    ctx->pc = 0x32614Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32614Cu;
        // 0x326150: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32614Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326154u;
    // 0x326154: 0x0  nop
    ctx->pc = 0x326154u;
    // NOP
    ctx->pc = 0x326158u;
}
