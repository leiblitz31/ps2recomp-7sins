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

// Function: sub_00354568
// Address: 0x354568 - 0x354608
void sub_00354568_0x354568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354568_0x354568");
#endif

    switch (ctx->pc) {
        case 0x354568u: goto label_354568;
        case 0x35456cu: goto label_35456c;
        case 0x354570u: goto label_354570;
        case 0x354574u: goto label_354574;
        case 0x354578u: goto label_354578;
        case 0x35457cu: goto label_35457c;
        case 0x354580u: goto label_354580;
        case 0x354584u: goto label_354584;
        case 0x354588u: goto label_354588;
        case 0x35458cu: goto label_35458c;
        case 0x354590u: goto label_354590;
        case 0x354594u: goto label_354594;
        case 0x354598u: goto label_354598;
        case 0x35459cu: goto label_35459c;
        case 0x3545a0u: goto label_3545a0;
        case 0x3545a4u: goto label_3545a4;
        case 0x3545a8u: goto label_3545a8;
        case 0x3545acu: goto label_3545ac;
        case 0x3545b0u: goto label_3545b0;
        case 0x3545b4u: goto label_3545b4;
        case 0x3545b8u: goto label_3545b8;
        case 0x3545bcu: goto label_3545bc;
        case 0x3545c0u: goto label_3545c0;
        case 0x3545c4u: goto label_3545c4;
        case 0x3545c8u: goto label_3545c8;
        case 0x3545ccu: goto label_3545cc;
        case 0x3545d0u: goto label_3545d0;
        case 0x3545d4u: goto label_3545d4;
        case 0x3545d8u: goto label_3545d8;
        case 0x3545dcu: goto label_3545dc;
        case 0x3545e0u: goto label_3545e0;
        case 0x3545e4u: goto label_3545e4;
        case 0x3545e8u: goto label_3545e8;
        case 0x3545ecu: goto label_3545ec;
        case 0x3545f0u: goto label_3545f0;
        case 0x3545f4u: goto label_3545f4;
        case 0x3545f8u: goto label_3545f8;
        case 0x3545fcu: goto label_3545fc;
        case 0x354600u: goto label_354600;
        case 0x354604u: goto label_354604;
        default: break;
    }

    ctx->pc = 0x354568u;

label_354568:
    // 0x354568: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x354568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_35456c:
    // 0x35456c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x35456cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_354570:
    // 0x354570: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x354570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_354574:
    // 0x354574: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x354574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_354578:
    // 0x354578: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x354578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_35457c:
    // 0x35457c: 0x34a5012f  ori         $a1, $a1, 0x12F
    ctx->pc = 0x35457cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)303);
label_354580:
    // 0x354580: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x354580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_354584:
    // 0x354584: 0x2451e880  addiu       $s1, $v0, -0x1780
    ctx->pc = 0x354584u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_354588:
    // 0x354588: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x354588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_35458c:
    // 0x35458c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x35458cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_354590:
    // 0x354590: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x354590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_354594:
    // 0x354594: 0x40f809  jalr        $v0
label_354598:
    if (ctx->pc == 0x354598u) {
        ctx->pc = 0x354598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354594u;
        // 0x354598: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35459Cu;
        goto label_35459c;
    }
    ctx->pc = 0x354594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35459Cu);
        ctx->pc = 0x354598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354594u;
        // 0x354598: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354594u, 0x35459Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35459Cu;
label_35459c:
    // 0x35459c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35459cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3545a0:
    // 0x3545a0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_3545a4:
    if (ctx->pc == 0x3545A4u) {
        ctx->pc = 0x3545A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3545A0u;
        // 0x3545a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3545A8u;
        goto label_3545a8;
    }
    ctx->pc = 0x3545A0u;
    {
        const bool branch_taken_0x3545a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3545A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3545A0u;
        // 0x3545a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3545a0) {
            ctx->pc = 0x3545F0u;
            goto label_3545f0;
        }
    }
    ctx->pc = 0x3545A8u;
label_3545a8:
    // 0x3545a8: 0x8f82a85c  lw          $v0, -0x57A4($gp)
    ctx->pc = 0x3545a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944860)));
label_3545ac:
    // 0x3545ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3545acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3545b0:
    // 0x3545b0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3545b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3545b4:
    // 0x3545b4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3545b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3545b8:
    // 0x3545b8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3545b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_3545bc:
    // 0x3545bc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3545bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_3545c0:
    // 0x3545c0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x3545c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_3545c4:
    // 0x3545c4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3545c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_3545c8:
    // 0x3545c8: 0xc0d5dc8  jal         func_357720
label_3545cc:
    if (ctx->pc == 0x3545CCu) {
        ctx->pc = 0x3545CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3545C8u;
        // 0x3545cc: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3545D0u;
        goto label_3545d0;
    }
    ctx->pc = 0x3545C8u;
    SET_GPR_U32(ctx, 31, 0x3545D0u);
    ctx->pc = 0x3545CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3545C8u;
    // 0x3545cc: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357720u, 0x3545C8u, 0x3545D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3545D0u;
label_3545d0:
    // 0x3545d0: 0xc0d5682  jal         func_355A08
label_3545d4:
    if (ctx->pc == 0x3545D4u) {
        ctx->pc = 0x3545D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3545D0u;
        // 0x3545d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3545D8u;
        goto label_3545d8;
    }
    ctx->pc = 0x3545D0u;
    SET_GPR_U32(ctx, 31, 0x3545D8u);
    ctx->pc = 0x3545D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3545D0u;
    // 0x3545d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355A08u, 0x3545D0u, 0x3545D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3545D8u;
label_3545d8:
    // 0x3545d8: 0xc0d5fe8  jal         func_357FA0
label_3545dc:
    if (ctx->pc == 0x3545DCu) {
        ctx->pc = 0x3545E0u;
        goto label_3545e0;
    }
    ctx->pc = 0x3545D8u;
    SET_GPR_U32(ctx, 31, 0x3545E0u);
    ctx->pc = 0x357FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357FA0u, 0x3545D8u, 0x3545E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3545E0u;
label_3545e0:
    // 0x3545e0: 0xc0d6168  jal         func_3585A0
label_3545e4:
    if (ctx->pc == 0x3545E4u) {
        ctx->pc = 0x3545E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3545E0u;
        // 0x3545e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3545E8u;
        goto label_3545e8;
    }
    ctx->pc = 0x3545E0u;
    SET_GPR_U32(ctx, 31, 0x3545E8u);
    ctx->pc = 0x3545E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3545E0u;
    // 0x3545e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3585A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3585A0u, 0x3545E0u, 0x3545E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3545E8u;
label_3545e8:
    // 0x3545e8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x3545e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_3545ec:
    // 0x3545ec: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3545ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3545f0:
    // 0x3545f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3545f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3545f4:
    // 0x3545f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3545f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3545f8:
    // 0x3545f8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3545f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3545fc:
    // 0x3545fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3545fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_354600:
    // 0x354600: 0x3e00008  jr          $ra
label_354604:
    if (ctx->pc == 0x354604u) {
        ctx->pc = 0x354604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354600u;
        // 0x354604: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354608u;
        goto label_fallthrough_0x354600;
    }
    ctx->pc = 0x354600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354600u;
        // 0x354604: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x354600:
    ctx->pc = 0x354608u;
}
