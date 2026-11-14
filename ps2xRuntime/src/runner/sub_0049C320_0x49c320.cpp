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

// Function: sub_0049C320
// Address: 0x49c320 - 0x49c3b8
void sub_0049C320_0x49c320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049C320_0x49c320");
#endif

    switch (ctx->pc) {
        case 0x49c320u: goto label_49c320;
        case 0x49c324u: goto label_49c324;
        case 0x49c328u: goto label_49c328;
        case 0x49c32cu: goto label_49c32c;
        case 0x49c330u: goto label_49c330;
        case 0x49c334u: goto label_49c334;
        case 0x49c338u: goto label_49c338;
        case 0x49c33cu: goto label_49c33c;
        case 0x49c340u: goto label_49c340;
        case 0x49c344u: goto label_49c344;
        case 0x49c348u: goto label_49c348;
        case 0x49c34cu: goto label_49c34c;
        case 0x49c350u: goto label_49c350;
        case 0x49c354u: goto label_49c354;
        case 0x49c358u: goto label_49c358;
        case 0x49c35cu: goto label_49c35c;
        case 0x49c360u: goto label_49c360;
        case 0x49c364u: goto label_49c364;
        case 0x49c368u: goto label_49c368;
        case 0x49c36cu: goto label_49c36c;
        case 0x49c370u: goto label_49c370;
        case 0x49c374u: goto label_49c374;
        case 0x49c378u: goto label_49c378;
        case 0x49c37cu: goto label_49c37c;
        case 0x49c380u: goto label_49c380;
        case 0x49c384u: goto label_49c384;
        case 0x49c388u: goto label_49c388;
        case 0x49c38cu: goto label_49c38c;
        case 0x49c390u: goto label_49c390;
        case 0x49c394u: goto label_49c394;
        case 0x49c398u: goto label_49c398;
        case 0x49c39cu: goto label_49c39c;
        case 0x49c3a0u: goto label_49c3a0;
        case 0x49c3a4u: goto label_49c3a4;
        case 0x49c3a8u: goto label_49c3a8;
        case 0x49c3acu: goto label_49c3ac;
        case 0x49c3b0u: goto label_49c3b0;
        case 0x49c3b4u: goto label_49c3b4;
        default: break;
    }

    ctx->pc = 0x49c320u;

label_49c320:
    // 0x49c320: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x49c320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_49c324:
    // 0x49c324: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x49c324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_49c328:
    // 0x49c328: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x49c328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_49c32c:
    // 0x49c32c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x49c32cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49c330:
    // 0x49c330: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x49c330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_49c334:
    // 0x49c334: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x49c334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_49c338:
    // 0x49c338: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
label_49c33c:
    if (ctx->pc == 0x49C33Cu) {
        ctx->pc = 0x49C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C338u;
        // 0x49c33c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C340u;
        goto label_49c340;
    }
    ctx->pc = 0x49C338u;
    {
        const bool branch_taken_0x49c338 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x49C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C338u;
        // 0x49c33c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c338) {
            ctx->pc = 0x49C360u;
            goto label_49c360;
        }
    }
    ctx->pc = 0x49C340u;
label_49c340:
    // 0x49c340: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x49c340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_49c344:
    // 0x49c344: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x49c344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_49c348:
    // 0x49c348: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_49c34c:
    if (ctx->pc == 0x49C34Cu) {
        ctx->pc = 0x49C34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C348u;
        // 0x49c34c: 0x3880a  movz        $s1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C350u;
        goto label_49c350;
    }
    ctx->pc = 0x49C348u;
    {
        const bool branch_taken_0x49c348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49c348) {
            ctx->pc = 0x49C34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49C348u;
            // 0x49c34c: 0x3880a  movz        $s1, $zero, $v1 (Delay Slot)
            if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49C360u;
            goto label_49c360;
        }
    }
    ctx->pc = 0x49C350u;
label_49c350:
    // 0x49c350: 0x40f809  jalr        $v0
label_49c354:
    if (ctx->pc == 0x49C354u) {
        ctx->pc = 0x49C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C350u;
        // 0x49c354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C358u;
        goto label_49c358;
    }
    ctx->pc = 0x49C350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49C358u);
        ctx->pc = 0x49C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C350u;
        // 0x49c354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C350u, 0x49C358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49C358u;
label_49c358:
    // 0x49c358: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49c358u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49c35c:
    // 0x49c35c: 0x3880a  movz        $s1, $zero, $v1
    ctx->pc = 0x49c35cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_49c360:
    // 0x49c360: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x49c360u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_49c364:
    // 0x49c364: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x49c364u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_49c368:
    // 0x49c368: 0x1212000c  beq         $s0, $s2, . + 4 + (0xC << 2)
label_49c36c:
    if (ctx->pc == 0x49C36Cu) {
        ctx->pc = 0x49C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C368u;
        // 0x49c36c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C370u;
        goto label_49c370;
    }
    ctx->pc = 0x49C368u;
    {
        const bool branch_taken_0x49c368 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x49C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C368u;
        // 0x49c36c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c368) {
            ctx->pc = 0x49C39Cu;
            goto label_49c39c;
        }
    }
    ctx->pc = 0x49C370u;
label_49c370:
    // 0x49c370: 0x2604ffec  addiu       $a0, $s0, -0x14
    ctx->pc = 0x49c370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
label_49c374:
    // 0x49c374: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49c374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49c378:
    // 0x49c378: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x49c378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_49c37c:
    // 0x49c37c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_49c380:
    if (ctx->pc == 0x49C380u) {
        ctx->pc = 0x49C380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C37Cu;
        // 0x49c380: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C384u;
        goto label_49c384;
    }
    ctx->pc = 0x49C37Cu;
    {
        const bool branch_taken_0x49c37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C37Cu;
        // 0x49c380: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c37c) {
            ctx->pc = 0x49C390u;
            goto label_49c390;
        }
    }
    ctx->pc = 0x49C384u;
label_49c384:
    // 0x49c384: 0x40f809  jalr        $v0
label_49c388:
    if (ctx->pc == 0x49C388u) {
        ctx->pc = 0x49C38Cu;
        goto label_49c38c;
    }
    ctx->pc = 0x49C384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49C38Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C384u, 0x49C38Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49C38Cu;
label_49c38c:
    // 0x49c38c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49c38cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49c390:
    // 0x49c390: 0x1612fff7  bne         $s0, $s2, . + 4 + (-0x9 << 2)
label_49c394:
    if (ctx->pc == 0x49C394u) {
        ctx->pc = 0x49C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C390u;
        // 0x49c394: 0x3880a  movz        $s1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C398u;
        goto label_49c398;
    }
    ctx->pc = 0x49C390u;
    {
        const bool branch_taken_0x49c390 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x49C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C390u;
        // 0x49c394: 0x3880a  movz        $s1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c390) {
            ctx->pc = 0x49C370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49c370;
        }
    }
    ctx->pc = 0x49C398u;
label_49c398:
    // 0x49c398: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x49c398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49c39c:
    // 0x49c39c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x49c39cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49c3a0:
    // 0x49c3a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x49c3a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49c3a4:
    // 0x49c3a4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x49c3a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49c3a8:
    // 0x49c3a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49c3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49c3ac:
    // 0x49c3ac: 0x3e00008  jr          $ra
label_49c3b0:
    if (ctx->pc == 0x49C3B0u) {
        ctx->pc = 0x49C3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C3ACu;
        // 0x49c3b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C3B4u;
        goto label_49c3b4;
    }
    ctx->pc = 0x49C3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C3ACu;
        // 0x49c3b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49C3B4u;
label_49c3b4:
    // 0x49c3b4: 0x0  nop
    ctx->pc = 0x49c3b4u;
    // NOP
    ctx->pc = 0x49c3b8u;
}
