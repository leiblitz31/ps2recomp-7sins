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

// Function: sub_003265F0
// Address: 0x3265f0 - 0x3267a8
void sub_003265F0_0x3265f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003265F0_0x3265f0");
#endif

    switch (ctx->pc) {
        case 0x326608u: goto label_326608;
        case 0x32668cu: goto label_32668c;
        case 0x3266acu: goto label_3266ac;
        case 0x3266f4u: goto label_3266f4;
        case 0x326714u: goto label_326714;
        case 0x326724u: goto label_326724;
        case 0x32672cu: goto label_32672c;
        case 0x32673cu: goto label_32673c;
        case 0x32675cu: goto label_32675c;
        case 0x326798u: goto label_326798;
        default: break;
    }

    ctx->pc = 0x3265f0u;

    // 0x3265f0: 0x8f82a634  lw          $v0, -0x59CC($gp)
    ctx->pc = 0x3265f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
    // 0x3265f4: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x3265f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3265f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3265f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3265fc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3265fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x326600: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x326600u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x326604: 0x71180  sll         $v0, $a3, 6
    ctx->pc = 0x326604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_326608:
    // 0x326608: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x326608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x32660c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x32660cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x326610: 0x54690003  bnel        $v1, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x326610u;
    {
        const bool branch_taken_0x326610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x326610) {
            ctx->pc = 0x326614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326610u;
            // 0x326614: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326620u;
            goto label_326620;
        }
    }
    ctx->pc = 0x326618u;
    // 0x326618: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x326618u;
    {
        const bool branch_taken_0x326618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326618u;
        // 0x32661c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326618) {
            ctx->pc = 0x326634u;
            goto label_326634;
        }
    }
    ctx->pc = 0x326620u;
label_326620:
    // 0x326620: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x326620u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x326624: 0x2ce30002  sltiu       $v1, $a3, 0x2
    ctx->pc = 0x326624u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x326628: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x326628u;
    {
        const bool branch_taken_0x326628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326628u;
        // 0x32662c: 0x71180  sll         $v0, $a3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326628) {
            ctx->pc = 0x326608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326608;
        }
    }
    ctx->pc = 0x326630u;
    // 0x326630: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x326630u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_326634:
    // 0x326634: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x326634u;
    {
        const bool branch_taken_0x326634 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x326634) {
            ctx->pc = 0x326644u;
            goto label_326644;
        }
    }
    ctx->pc = 0x32663Cu;
    // 0x32663c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32663cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x326640: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x326640u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_326644:
    // 0x326644: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x326644u;
    {
        const bool branch_taken_0x326644 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x326644) {
            ctx->pc = 0x326654u;
            goto label_326654;
        }
    }
    ctx->pc = 0x32664Cu;
    // 0x32664c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32664cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x326650: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x326650u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_326654:
    // 0x326654: 0x3e00008  jr          $ra
    ctx->pc = 0x326654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326654u;
        // 0x326658: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32665Cu;
    // 0x32665c: 0x0  nop
    ctx->pc = 0x32665cu;
    // NOP
    // 0x326660: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x326660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x326664: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x326664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x326668: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x326668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x32666c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32666cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326670: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x326670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x326674: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x326674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326678: 0x11102b  sltu        $v0, $zero, $s1
    ctx->pc = 0x326678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x32667c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32667cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x326680: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x326680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x326684: 0xc103440  jal         func_40D100
    ctx->pc = 0x326684u;
    SET_GPR_U32(ctx, 31, 0x32668Cu);
    ctx->pc = 0x326688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326684u;
    // 0x326688: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x326684u, 0x32668Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32668Cu;
label_32668c:
    // 0x32668c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32668Cu;
    {
        const bool branch_taken_0x32668c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x326690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32668Cu;
        // 0x326690: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32668c) {
            ctx->pc = 0x32669Cu;
            goto label_32669c;
        }
    }
    ctx->pc = 0x326694u;
    // 0x326694: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x326694u;
    {
        const bool branch_taken_0x326694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326694u;
        // 0x326698: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326694) {
            ctx->pc = 0x3266BCu;
            goto label_3266bc;
        }
    }
    ctx->pc = 0x32669Cu;
label_32669c:
    // 0x32669c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32669Cu;
    {
        const bool branch_taken_0x32669c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3266A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32669Cu;
        // 0x3266a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32669c) {
            ctx->pc = 0x3266B8u;
            goto label_3266b8;
        }
    }
    ctx->pc = 0x3266A4u;
    // 0x3266a4: 0xc105778  jal         func_415DE0
    ctx->pc = 0x3266A4u;
    SET_GPR_U32(ctx, 31, 0x3266ACu);
    ctx->pc = 0x3266A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3266A4u;
    // 0x3266a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DE0u, 0x3266A4u, 0x3266ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3266ACu;
label_3266ac:
    // 0x3266ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3266acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3266b0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3266B0u;
    {
        const bool branch_taken_0x3266b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3266B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3266B0u;
        // 0x3266b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3266b0) {
            ctx->pc = 0x3266BCu;
            goto label_3266bc;
        }
    }
    ctx->pc = 0x3266B8u;
label_3266b8:
    // 0x3266b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3266b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3266bc:
    // 0x3266bc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3266bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3266c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3266c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3266c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3266c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3266c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3266C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3266CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3266C8u;
        // 0x3266cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3266C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3266D0u;
    // 0x3266d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3266d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3266d4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3266d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3266d8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3266d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3266dc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3266dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3266e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3266e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3266e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3266e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3266e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3266e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3266ec: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x3266ECu;
    SET_GPR_U32(ctx, 31, 0x3266F4u);
    ctx->pc = 0x3266F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3266ECu;
    // 0x3266f0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3266ECu, 0x3266F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3266F4u;
label_3266f4:
    // 0x3266f4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3266F4u;
    {
        const bool branch_taken_0x3266f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3266F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3266F4u;
        // 0x3266f8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3266f4) {
            ctx->pc = 0x32675Cu;
            goto label_32675c;
        }
    }
    ctx->pc = 0x3266FCu;
    // 0x3266fc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3266FCu;
    {
        const bool branch_taken_0x3266fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3266FCu;
        // 0x326700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3266fc) {
            ctx->pc = 0x326764u;
            goto label_326764;
        }
    }
    ctx->pc = 0x326704u;
    // 0x326704: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x326704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x326708: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x326708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32670c: 0xc103322  jal         func_40CC88
    ctx->pc = 0x32670Cu;
    SET_GPR_U32(ctx, 31, 0x326714u);
    ctx->pc = 0x326710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32670Cu;
    // 0x326710: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x32670Cu, 0x326714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326714u;
label_326714:
    // 0x326714: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x326714u;
    {
        const bool branch_taken_0x326714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326714u;
        // 0x326718: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326714) {
            ctx->pc = 0x32676Cu;
            goto label_32676c;
        }
    }
    ctx->pc = 0x32671Cu;
    // 0x32671c: 0xc103618  jal         func_40D860
    ctx->pc = 0x32671Cu;
    SET_GPR_U32(ctx, 31, 0x326724u);
    ctx->pc = 0x326720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32671Cu;
    // 0x326720: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D860u, 0x32671Cu, 0x326724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326724u;
label_326724:
    // 0x326724: 0xc1057ca  jal         func_415F28
    ctx->pc = 0x326724u;
    SET_GPR_U32(ctx, 31, 0x32672Cu);
    ctx->pc = 0x326728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326724u;
    // 0x326728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415F28u, 0x326724u, 0x32672Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32672Cu;
label_32672c:
    // 0x32672c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x32672Cu;
    {
        const bool branch_taken_0x32672c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x326730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32672Cu;
        // 0x326730: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32672c) {
            ctx->pc = 0x326768u;
            goto label_326768;
        }
    }
    ctx->pc = 0x326734u;
    // 0x326734: 0xc103618  jal         func_40D860
    ctx->pc = 0x326734u;
    SET_GPR_U32(ctx, 31, 0x32673Cu);
    ctx->pc = 0x326738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326734u;
    // 0x326738: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D860u, 0x326734u, 0x32673Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32673Cu;
label_32673c:
    // 0x32673c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x32673cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x326740: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x326740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x326744: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x326744u;
    {
        const bool branch_taken_0x326744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x326748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326744u;
        // 0x326748: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326744) {
            ctx->pc = 0x326768u;
            goto label_326768;
        }
    }
    ctx->pc = 0x32674Cu;
    // 0x32674c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32674Cu;
    {
        const bool branch_taken_0x32674c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x326750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32674Cu;
        // 0x326750: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32674c) {
            ctx->pc = 0x32676Cu;
            goto label_32676c;
        }
    }
    ctx->pc = 0x326754u;
    // 0x326754: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x326754u;
    SET_GPR_U32(ctx, 31, 0x32675Cu);
    ctx->pc = 0x326758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326754u;
    // 0x326758: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x326754u, 0x32675Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32675Cu;
label_32675c:
    // 0x32675c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32675Cu;
    {
        const bool branch_taken_0x32675c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32675Cu;
        // 0x326760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32675c) {
            ctx->pc = 0x32676Cu;
            goto label_32676c;
        }
    }
    ctx->pc = 0x326764u;
label_326764:
    // 0x326764: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x326764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_326768:
    // 0x326768: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x326768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32676c:
    // 0x32676c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x32676cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x326770: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x326770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326774: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x326774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326778: 0x3e00008  jr          $ra
    ctx->pc = 0x326778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326778u;
        // 0x32677c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326780u;
    // 0x326780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x326784: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x326784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x326788: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x326788u;
    {
        const bool branch_taken_0x326788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326788u;
        // 0x32678c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326788) {
            ctx->pc = 0x32679Cu;
            goto label_32679c;
        }
    }
    ctx->pc = 0x326790u;
    // 0x326790: 0xc10598e  jal         func_416638
    ctx->pc = 0x326790u;
    SET_GPR_U32(ctx, 31, 0x326798u);
    ctx->pc = 0x416638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416638u, 0x326790u, 0x326798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326798u;
label_326798:
    // 0x326798: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x326798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_32679c:
    // 0x32679c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32679cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3267a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3267A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3267A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3267A0u;
        // 0x3267a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3267A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3267A8u;
}
