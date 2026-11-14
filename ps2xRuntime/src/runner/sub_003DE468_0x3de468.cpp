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

// Function: sub_003DE468
// Address: 0x3de468 - 0x3de518
void sub_003DE468_0x3de468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE468_0x3de468");
#endif

    switch (ctx->pc) {
        case 0x3de468u: goto label_3de468;
        case 0x3de46cu: goto label_3de46c;
        case 0x3de470u: goto label_3de470;
        case 0x3de474u: goto label_3de474;
        case 0x3de478u: goto label_3de478;
        case 0x3de47cu: goto label_3de47c;
        case 0x3de480u: goto label_3de480;
        case 0x3de484u: goto label_3de484;
        case 0x3de488u: goto label_3de488;
        case 0x3de48cu: goto label_3de48c;
        case 0x3de490u: goto label_3de490;
        case 0x3de494u: goto label_3de494;
        case 0x3de498u: goto label_3de498;
        case 0x3de49cu: goto label_3de49c;
        case 0x3de4a0u: goto label_3de4a0;
        case 0x3de4a4u: goto label_3de4a4;
        case 0x3de4a8u: goto label_3de4a8;
        case 0x3de4acu: goto label_3de4ac;
        case 0x3de4b0u: goto label_3de4b0;
        case 0x3de4b4u: goto label_3de4b4;
        case 0x3de4b8u: goto label_3de4b8;
        case 0x3de4bcu: goto label_3de4bc;
        case 0x3de4c0u: goto label_3de4c0;
        case 0x3de4c4u: goto label_3de4c4;
        case 0x3de4c8u: goto label_3de4c8;
        case 0x3de4ccu: goto label_3de4cc;
        case 0x3de4d0u: goto label_3de4d0;
        case 0x3de4d4u: goto label_3de4d4;
        case 0x3de4d8u: goto label_3de4d8;
        case 0x3de4dcu: goto label_3de4dc;
        case 0x3de4e0u: goto label_3de4e0;
        case 0x3de4e4u: goto label_3de4e4;
        case 0x3de4e8u: goto label_3de4e8;
        case 0x3de4ecu: goto label_3de4ec;
        case 0x3de4f0u: goto label_3de4f0;
        case 0x3de4f4u: goto label_3de4f4;
        case 0x3de4f8u: goto label_3de4f8;
        case 0x3de4fcu: goto label_3de4fc;
        case 0x3de500u: goto label_3de500;
        case 0x3de504u: goto label_3de504;
        case 0x3de508u: goto label_3de508;
        case 0x3de50cu: goto label_3de50c;
        case 0x3de510u: goto label_3de510;
        case 0x3de514u: goto label_3de514;
        default: break;
    }

    ctx->pc = 0x3de468u;

label_3de468:
    // 0x3de468: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3de468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3de46c:
    // 0x3de46c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3de46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3de470:
    // 0x3de470: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3de470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3de474:
    // 0x3de474: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3de474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3de478:
    // 0x3de478: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3de478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3de47c:
    // 0x3de47c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_3de480:
    if (ctx->pc == 0x3DE480u) {
        ctx->pc = 0x3DE480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE47Cu;
        // 0x3de480: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE484u;
        goto label_3de484;
    }
    ctx->pc = 0x3DE47Cu;
    {
        const bool branch_taken_0x3de47c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE47Cu;
        // 0x3de480: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de47c) {
            ctx->pc = 0x3DE48Cu;
            goto label_3de48c;
        }
    }
    ctx->pc = 0x3DE484u;
label_3de484:
    // 0x3de484: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x3de484u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
label_3de488:
    // 0x3de488: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x3de488u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_3de48c:
    // 0x3de48c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3de48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3de490:
    // 0x3de490: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x3de490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_3de494:
    // 0x3de494: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3de494u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3de498:
    // 0x3de498: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3de49c:
    if (ctx->pc == 0x3DE49Cu) {
        ctx->pc = 0x3DE49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE498u;
        // 0x3de49c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE4A0u;
        goto label_3de4a0;
    }
    ctx->pc = 0x3DE498u;
    {
        const bool branch_taken_0x3de498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3de498) {
            ctx->pc = 0x3DE49Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DE498u;
            // 0x3de49c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DE4B4u;
            goto label_3de4b4;
        }
    }
    ctx->pc = 0x3DE4A0u;
label_3de4a0:
    // 0x3de4a0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x3de4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3de4a4:
    // 0x3de4a4: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x3de4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3de4a8:
    // 0x3de4a8: 0x40f809  jalr        $v0
label_3de4ac:
    if (ctx->pc == 0x3DE4ACu) {
        ctx->pc = 0x3DE4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE4A8u;
        // 0x3de4ac: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE4B0u;
        goto label_3de4b0;
    }
    ctx->pc = 0x3DE4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DE4B0u);
        ctx->pc = 0x3DE4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE4A8u;
        // 0x3de4ac: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE4A8u, 0x3DE4B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DE4B0u;
label_3de4b0:
    // 0x3de4b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3de4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3de4b4:
    // 0x3de4b4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3de4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3de4b8:
    // 0x3de4b8: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_3de4bc:
    if (ctx->pc == 0x3DE4BCu) {
        ctx->pc = 0x3DE4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE4B8u;
        // 0x3de4bc: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE4C0u;
        goto label_3de4c0;
    }
    ctx->pc = 0x3DE4B8u;
    {
        const bool branch_taken_0x3de4b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3de4b8) {
            ctx->pc = 0x3DE4BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DE4B8u;
            // 0x3de4bc: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DE4D0u;
            goto label_3de4d0;
        }
    }
    ctx->pc = 0x3DE4C0u;
label_3de4c0:
    // 0x3de4c0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3de4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3de4c4:
    // 0x3de4c4: 0xc0f804a  jal         func_3E0128
label_3de4c8:
    if (ctx->pc == 0x3DE4C8u) {
        ctx->pc = 0x3DE4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE4C4u;
        // 0x3de4c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE4CCu;
        goto label_3de4cc;
    }
    ctx->pc = 0x3DE4C4u;
    SET_GPR_U32(ctx, 31, 0x3DE4CCu);
    ctx->pc = 0x3DE4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE4C4u;
    // 0x3de4c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0128u, 0x3DE4C4u, 0x3DE4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE4CCu;
label_3de4cc:
    // 0x3de4cc: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3de4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3de4d0:
    // 0x3de4d0: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x3de4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_3de4d4:
    // 0x3de4d4: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x3de4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_3de4d8:
    // 0x3de4d8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3de4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3de4dc:
    // 0x3de4dc: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3de4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_3de4e0:
    // 0x3de4e0: 0xfe000020  sd          $zero, 0x20($s0)
    ctx->pc = 0x3de4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 0));
label_3de4e4:
    // 0x3de4e4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_3de4e8:
    if (ctx->pc == 0x3DE4E8u) {
        ctx->pc = 0x3DE4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE4E4u;
        // 0x3de4e8: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE4ECu;
        goto label_3de4ec;
    }
    ctx->pc = 0x3DE4E4u;
    {
        const bool branch_taken_0x3de4e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE4E4u;
        // 0x3de4e8: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de4e4) {
            ctx->pc = 0x3DE504u;
            goto label_3de504;
        }
    }
    ctx->pc = 0x3DE4ECu;
label_3de4ec:
    // 0x3de4ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3de4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3de4f0:
    // 0x3de4f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3de4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3de4f4:
    // 0x3de4f4: 0x60f809  jalr        $v1
label_3de4f8:
    if (ctx->pc == 0x3DE4F8u) {
        ctx->pc = 0x3DE4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE4F4u;
        // 0x3de4f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE4FCu;
        goto label_3de4fc;
    }
    ctx->pc = 0x3DE4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3DE4FCu);
        ctx->pc = 0x3DE4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE4F4u;
        // 0x3de4f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE4F4u, 0x3DE4FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DE4FCu;
label_3de4fc:
    // 0x3de4fc: 0xfe020040  sd          $v0, 0x40($s0)
    ctx->pc = 0x3de4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
label_3de500:
    // 0x3de500: 0xfe220038  sd          $v0, 0x38($s1)
    ctx->pc = 0x3de500u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 2));
label_3de504:
    // 0x3de504: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3de504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3de508:
    // 0x3de508: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3de508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3de50c:
    // 0x3de50c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3de50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3de510:
    // 0x3de510: 0x3e00008  jr          $ra
label_3de514:
    if (ctx->pc == 0x3DE514u) {
        ctx->pc = 0x3DE514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE510u;
        // 0x3de514: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE518u;
        goto label_fallthrough_0x3de510;
    }
    ctx->pc = 0x3DE510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DE514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE510u;
        // 0x3de514: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3de510:
    ctx->pc = 0x3DE518u;
}
