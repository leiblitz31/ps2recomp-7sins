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

// Function: sub_0049D778
// Address: 0x49d778 - 0x49d820
void sub_0049D778_0x49d778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049D778_0x49d778");
#endif

    switch (ctx->pc) {
        case 0x49d7a0u: goto label_49d7a0;
        case 0x49d7dcu: goto label_49d7dc;
        default: break;
    }

    ctx->pc = 0x49d778u;

    // 0x49d778: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49d778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x49d77c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x49d77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x49d780: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49d780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d784: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x49D784u;
    {
        const bool branch_taken_0x49d784 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x49D788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D784u;
        // 0x49d788: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d784) {
            ctx->pc = 0x49D7B4u;
            goto label_49d7b4;
        }
    }
    ctx->pc = 0x49D78Cu;
    // 0x49d78c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x49d78cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x49d790: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x49d790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x49d794: 0x24848308  addiu       $a0, $a0, -0x7CF8
    ctx->pc = 0x49d794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935304));
    // 0x49d798: 0xc12a936  jal         func_4AA4D8
    ctx->pc = 0x49D798u;
    SET_GPR_U32(ctx, 31, 0x49D7A0u);
    ctx->pc = 0x49D79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D798u;
    // 0x49d79c: 0x34a5080a  ori         $a1, $a1, 0x80A (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2058);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA4D8u, 0x49D798u, 0x49D7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D7A0u;
label_49d7a0:
    // 0x49d7a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x49d7a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d7a4: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x49D7A4u;
    {
        const bool branch_taken_0x49d7a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D7A4u;
        // 0x49d7a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d7a4) {
            ctx->pc = 0x49D810u;
            goto label_49d810;
        }
    }
    ctx->pc = 0x49D7ACu;
    // 0x49d7ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x49D7ACu;
    {
        const bool branch_taken_0x49d7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D7ACu;
        // 0x49d7b0: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d7ac) {
            ctx->pc = 0x49D7BCu;
            goto label_49d7bc;
        }
    }
    ctx->pc = 0x49D7B4u;
label_49d7b4:
    // 0x49d7b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x49d7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x49d7b8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x49d7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_49d7bc:
    // 0x49d7bc: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x49D7BCu;
    {
        const bool branch_taken_0x49d7bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D7BCu;
        // 0x49d7c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d7bc) {
            ctx->pc = 0x49D80Cu;
            goto label_49d80c;
        }
    }
    ctx->pc = 0x49D7C4u;
    // 0x49d7c4: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x49d7c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x49d7c8: 0xa6000016  sh          $zero, 0x16($s0)
    ctx->pc = 0x49d7c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x49d7cc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x49d7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x49d7d0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x49d7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x49d7d4: 0xc12a4ce  jal         func_4A9338
    ctx->pc = 0x49D7D4u;
    SET_GPR_U32(ctx, 31, 0x49D7DCu);
    ctx->pc = 0x49D7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D7D4u;
    // 0x49d7d8: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9338u, 0x49D7D4u, 0x49D7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D7DCu;
label_49d7dc:
    // 0x49d7dc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x49d7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x49d7e0: 0x2783c1a8  addiu       $v1, $gp, -0x3E58
    ctx->pc = 0x49d7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951336));
    // 0x49d7e4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x49d7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x49d7e8: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x49d7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x49d7ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49d7ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d7f0: 0x8f84c1a8  lw          $a0, -0x3E58($gp)
    ctx->pc = 0x49d7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951336)));
    // 0x49d7f4: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x49d7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x49d7f8: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x49d7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x49d7fc: 0x8f83c1a8  lw          $v1, -0x3E58($gp)
    ctx->pc = 0x49d7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951336)));
    // 0x49d800: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x49d800u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x49d804: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x49D804u;
    {
        const bool branch_taken_0x49d804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D804u;
        // 0x49d808: 0xaf85c1a8  sw          $a1, -0x3E58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294951336), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d804) {
            ctx->pc = 0x49D810u;
            goto label_49d810;
        }
    }
    ctx->pc = 0x49D80Cu;
label_49d80c:
    // 0x49d80c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49d80cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49d810:
    // 0x49d810: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x49d810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49d814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49d814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49d818: 0x3e00008  jr          $ra
    ctx->pc = 0x49D818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D818u;
        // 0x49d81c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49D818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49D820u;
}
