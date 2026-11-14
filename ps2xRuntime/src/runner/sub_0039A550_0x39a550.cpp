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

// Function: sub_0039A550
// Address: 0x39a550 - 0x39a610
void sub_0039A550_0x39a550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A550_0x39a550");
#endif

    switch (ctx->pc) {
        case 0x39a550u: goto label_39a550;
        case 0x39a554u: goto label_39a554;
        case 0x39a558u: goto label_39a558;
        case 0x39a55cu: goto label_39a55c;
        case 0x39a560u: goto label_39a560;
        case 0x39a564u: goto label_39a564;
        case 0x39a568u: goto label_39a568;
        case 0x39a56cu: goto label_39a56c;
        case 0x39a570u: goto label_39a570;
        case 0x39a574u: goto label_39a574;
        case 0x39a578u: goto label_39a578;
        case 0x39a57cu: goto label_39a57c;
        case 0x39a580u: goto label_39a580;
        case 0x39a584u: goto label_39a584;
        case 0x39a588u: goto label_39a588;
        case 0x39a58cu: goto label_39a58c;
        case 0x39a590u: goto label_39a590;
        case 0x39a594u: goto label_39a594;
        case 0x39a598u: goto label_39a598;
        case 0x39a59cu: goto label_39a59c;
        case 0x39a5a0u: goto label_39a5a0;
        case 0x39a5a4u: goto label_39a5a4;
        case 0x39a5a8u: goto label_39a5a8;
        case 0x39a5acu: goto label_39a5ac;
        case 0x39a5b0u: goto label_39a5b0;
        case 0x39a5b4u: goto label_39a5b4;
        case 0x39a5b8u: goto label_39a5b8;
        case 0x39a5bcu: goto label_39a5bc;
        case 0x39a5c0u: goto label_39a5c0;
        case 0x39a5c4u: goto label_39a5c4;
        case 0x39a5c8u: goto label_39a5c8;
        case 0x39a5ccu: goto label_39a5cc;
        case 0x39a5d0u: goto label_39a5d0;
        case 0x39a5d4u: goto label_39a5d4;
        case 0x39a5d8u: goto label_39a5d8;
        case 0x39a5dcu: goto label_39a5dc;
        case 0x39a5e0u: goto label_39a5e0;
        case 0x39a5e4u: goto label_39a5e4;
        case 0x39a5e8u: goto label_39a5e8;
        case 0x39a5ecu: goto label_39a5ec;
        case 0x39a5f0u: goto label_39a5f0;
        case 0x39a5f4u: goto label_39a5f4;
        case 0x39a5f8u: goto label_39a5f8;
        case 0x39a5fcu: goto label_39a5fc;
        case 0x39a600u: goto label_39a600;
        case 0x39a604u: goto label_39a604;
        case 0x39a608u: goto label_39a608;
        case 0x39a60cu: goto label_39a60c;
        default: break;
    }

    ctx->pc = 0x39a550u;

label_39a550:
    // 0x39a550: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x39a550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_39a554:
    // 0x39a554: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x39a554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_39a558:
    // 0x39a558: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x39a558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_39a55c:
    // 0x39a55c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39a55cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39a560:
    // 0x39a560: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x39a560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_39a564:
    // 0x39a564: 0x2632003c  addiu       $s2, $s1, 0x3C
    ctx->pc = 0x39a564u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
label_39a568:
    // 0x39a568: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x39a568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_39a56c:
    // 0x39a56c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x39a56cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39a570:
    // 0x39a570: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x39a570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_39a574:
    // 0x39a574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39a574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39a578:
    // 0x39a578: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x39a578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_39a57c:
    // 0x39a57c: 0x1092000d  beq         $a0, $s2, . + 4 + (0xD << 2)
label_39a580:
    if (ctx->pc == 0x39A580u) {
        ctx->pc = 0x39A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A57Cu;
        // 0x39a580: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A584u;
        goto label_39a584;
    }
    ctx->pc = 0x39A57Cu;
    {
        const bool branch_taken_0x39a57c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        ctx->pc = 0x39A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A57Cu;
        // 0x39a580: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a57c) {
            ctx->pc = 0x39A5B4u;
            goto label_39a5b4;
        }
    }
    ctx->pc = 0x39A584u;
label_39a584:
    // 0x39a584: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x39a584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39a588:
    // 0x39a588: 0x5242000b  beql        $s2, $v0, . + 4 + (0xB << 2)
label_39a58c:
    if (ctx->pc == 0x39A58Cu) {
        ctx->pc = 0x39A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A588u;
        // 0x39a58c: 0x8e240034  lw          $a0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A590u;
        goto label_39a590;
    }
    ctx->pc = 0x39A588u;
    {
        const bool branch_taken_0x39a588 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x39a588) {
            ctx->pc = 0x39A58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A588u;
            // 0x39a58c: 0x8e240034  lw          $a0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A5B8u;
            goto label_39a5b8;
        }
    }
    ctx->pc = 0x39A590u;
label_39a590:
    // 0x39a590: 0x2444ffcc  addiu       $a0, $v0, -0x34
    ctx->pc = 0x39a590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967244));
label_39a594:
    // 0x39a594: 0x0  nop
    ctx->pc = 0x39a594u;
    // NOP
label_39a598:
    // 0x39a598: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x39a598u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39a59c:
    // 0x39a59c: 0x280f809  jalr        $s4
label_39a5a0:
    if (ctx->pc == 0x39A5A0u) {
        ctx->pc = 0x39A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A59Cu;
        // 0x39a5a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A5A4u;
        goto label_39a5a4;
    }
    ctx->pc = 0x39A59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x39A5A4u);
        ctx->pc = 0x39A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A59Cu;
        // 0x39a5a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A59Cu, 0x39A5A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A5A4u;
label_39a5a4:
    // 0x39a5a4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_39a5a8:
    if (ctx->pc == 0x39A5A8u) {
        ctx->pc = 0x39A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A5A4u;
        // 0x39a5a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A5ACu;
        goto label_39a5ac;
    }
    ctx->pc = 0x39A5A4u;
    {
        const bool branch_taken_0x39a5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A5A4u;
        // 0x39a5a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a5a4) {
            ctx->pc = 0x39A5ECu;
            goto label_39a5ec;
        }
    }
    ctx->pc = 0x39A5ACu;
label_39a5ac:
    // 0x39a5ac: 0x1642fffa  bne         $s2, $v0, . + 4 + (-0x6 << 2)
label_39a5b0:
    if (ctx->pc == 0x39A5B0u) {
        ctx->pc = 0x39A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A5ACu;
        // 0x39a5b0: 0x2444ffcc  addiu       $a0, $v0, -0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967244));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A5B4u;
        goto label_39a5b4;
    }
    ctx->pc = 0x39A5ACu;
    {
        const bool branch_taken_0x39a5ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x39A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A5ACu;
        // 0x39a5b0: 0x2444ffcc  addiu       $a0, $v0, -0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a5ac) {
            ctx->pc = 0x39A598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39a598;
        }
    }
    ctx->pc = 0x39A5B4u;
label_39a5b4:
    // 0x39a5b4: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x39a5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_39a5b8:
    // 0x39a5b8: 0x26320034  addiu       $s2, $s1, 0x34
    ctx->pc = 0x39a5b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
label_39a5bc:
    // 0x39a5bc: 0x1092000b  beq         $a0, $s2, . + 4 + (0xB << 2)
label_39a5c0:
    if (ctx->pc == 0x39A5C0u) {
        ctx->pc = 0x39A5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A5BCu;
        // 0x39a5c0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A5C4u;
        goto label_39a5c4;
    }
    ctx->pc = 0x39A5BCu;
    {
        const bool branch_taken_0x39a5bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        ctx->pc = 0x39A5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A5BCu;
        // 0x39a5c0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a5bc) {
            ctx->pc = 0x39A5ECu;
            goto label_39a5ec;
        }
    }
    ctx->pc = 0x39A5C4u;
label_39a5c4:
    // 0x39a5c4: 0x5242000a  beql        $s2, $v0, . + 4 + (0xA << 2)
label_39a5c8:
    if (ctx->pc == 0x39A5C8u) {
        ctx->pc = 0x39A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A5C4u;
        // 0x39a5c8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A5CCu;
        goto label_39a5cc;
    }
    ctx->pc = 0x39A5C4u;
    {
        const bool branch_taken_0x39a5c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x39a5c4) {
            ctx->pc = 0x39A5C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A5C4u;
            // 0x39a5c8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A5F0u;
            goto label_39a5f0;
        }
    }
    ctx->pc = 0x39A5CCu;
label_39a5cc:
    // 0x39a5cc: 0x2444ffcc  addiu       $a0, $v0, -0x34
    ctx->pc = 0x39a5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967244));
label_39a5d0:
    // 0x39a5d0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x39a5d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39a5d4:
    // 0x39a5d4: 0x280f809  jalr        $s4
label_39a5d8:
    if (ctx->pc == 0x39A5D8u) {
        ctx->pc = 0x39A5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A5D4u;
        // 0x39a5d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A5DCu;
        goto label_39a5dc;
    }
    ctx->pc = 0x39A5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x39A5DCu);
        ctx->pc = 0x39A5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A5D4u;
        // 0x39a5d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A5D4u, 0x39A5DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A5DCu;
label_39a5dc:
    // 0x39a5dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_39a5e0:
    if (ctx->pc == 0x39A5E0u) {
        ctx->pc = 0x39A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A5DCu;
        // 0x39a5e0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A5E4u;
        goto label_39a5e4;
    }
    ctx->pc = 0x39A5DCu;
    {
        const bool branch_taken_0x39a5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A5DCu;
        // 0x39a5e0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a5dc) {
            ctx->pc = 0x39A5ECu;
            goto label_39a5ec;
        }
    }
    ctx->pc = 0x39A5E4u;
label_39a5e4:
    // 0x39a5e4: 0x1642fffa  bne         $s2, $v0, . + 4 + (-0x6 << 2)
label_39a5e8:
    if (ctx->pc == 0x39A5E8u) {
        ctx->pc = 0x39A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A5E4u;
        // 0x39a5e8: 0x2444ffcc  addiu       $a0, $v0, -0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967244));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A5ECu;
        goto label_39a5ec;
    }
    ctx->pc = 0x39A5E4u;
    {
        const bool branch_taken_0x39a5e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x39A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A5E4u;
        // 0x39a5e8: 0x2444ffcc  addiu       $a0, $v0, -0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a5e4) {
            ctx->pc = 0x39A5D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39a5d0;
        }
    }
    ctx->pc = 0x39A5ECu;
label_39a5ec:
    // 0x39a5ec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x39a5ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39a5f0:
    // 0x39a5f0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x39a5f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39a5f4:
    // 0x39a5f4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x39a5f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39a5f8:
    // 0x39a5f8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x39a5f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39a5fc:
    // 0x39a5fc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x39a5fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39a600:
    // 0x39a600: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x39a600u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39a604:
    // 0x39a604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39a604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39a608:
    // 0x39a608: 0x3e00008  jr          $ra
label_39a60c:
    if (ctx->pc == 0x39A60Cu) {
        ctx->pc = 0x39A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A608u;
        // 0x39a60c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A610u;
        goto label_fallthrough_0x39a608;
    }
    ctx->pc = 0x39A608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A608u;
        // 0x39a60c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39a608:
    ctx->pc = 0x39A610u;
}
