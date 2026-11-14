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

// Function: sub_00380748
// Address: 0x380748 - 0x3807d0
void sub_00380748_0x380748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380748_0x380748");
#endif

    switch (ctx->pc) {
        case 0x380770u: goto label_380770;
        default: break;
    }

    ctx->pc = 0x380748u;

    // 0x380748: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x380748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38074c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38074cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380750: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x380750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x380754: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x380754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x380758: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x380758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38075c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x38075cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380760: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x380760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x380764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x380764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x380768: 0xc0e01f4  jal         func_3807D0
    ctx->pc = 0x380768u;
    SET_GPR_U32(ctx, 31, 0x380770u);
    ctx->pc = 0x38076Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380768u;
    // 0x38076c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3807D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3807D0u, 0x380768u, 0x380770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380770u;
label_380770:
    // 0x380770: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x380770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x380774: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x380774u;
    {
        const bool branch_taken_0x380774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x380778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380774u;
        // 0x380778: 0x32220002  andi        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x380774) {
            ctx->pc = 0x380788u;
            goto label_380788;
        }
    }
    ctx->pc = 0x38077Cu;
    // 0x38077c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x38077cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x380780: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x380780u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380784: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x380784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_380788:
    // 0x380788: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x380788u;
    {
        const bool branch_taken_0x380788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380788u;
        // 0x38078c: 0x26020028  addiu       $v0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380788) {
            ctx->pc = 0x3807A0u;
            goto label_3807a0;
        }
    }
    ctx->pc = 0x380790u;
    // 0x380790: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x380790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x380794: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x380794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x380798: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x380798u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38079c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x38079cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_3807a0:
    // 0x3807a0: 0x32220004  andi        $v0, $s1, 0x4
    ctx->pc = 0x3807a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
    // 0x3807a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3807A4u;
    {
        const bool branch_taken_0x3807a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3807A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3807A4u;
        // 0x3807a8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3807a4) {
            ctx->pc = 0x3807B8u;
            goto label_3807b8;
        }
    }
    ctx->pc = 0x3807ACu;
    // 0x3807ac: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x3807acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x3807b0: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3807b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3807b4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3807b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3807b8:
    // 0x3807b8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3807b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3807bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3807bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3807c0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3807c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3807c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3807c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3807c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3807C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3807CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3807C8u;
        // 0x3807cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3807C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3807D0u;
}
