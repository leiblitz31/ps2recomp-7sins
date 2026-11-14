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

// Function: sub_0041E5D0
// Address: 0x41e5d0 - 0x41e698
void sub_0041E5D0_0x41e5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041E5D0_0x41e5d0");
#endif

    switch (ctx->pc) {
        case 0x41e5d0u: goto label_41e5d0;
        case 0x41e5d4u: goto label_41e5d4;
        case 0x41e5d8u: goto label_41e5d8;
        case 0x41e5dcu: goto label_41e5dc;
        case 0x41e5e0u: goto label_41e5e0;
        case 0x41e5e4u: goto label_41e5e4;
        case 0x41e5e8u: goto label_41e5e8;
        case 0x41e5ecu: goto label_41e5ec;
        case 0x41e5f0u: goto label_41e5f0;
        case 0x41e5f4u: goto label_41e5f4;
        case 0x41e5f8u: goto label_41e5f8;
        case 0x41e5fcu: goto label_41e5fc;
        case 0x41e600u: goto label_41e600;
        case 0x41e604u: goto label_41e604;
        case 0x41e608u: goto label_41e608;
        case 0x41e60cu: goto label_41e60c;
        case 0x41e610u: goto label_41e610;
        case 0x41e614u: goto label_41e614;
        case 0x41e618u: goto label_41e618;
        case 0x41e61cu: goto label_41e61c;
        case 0x41e620u: goto label_41e620;
        case 0x41e624u: goto label_41e624;
        case 0x41e628u: goto label_41e628;
        case 0x41e62cu: goto label_41e62c;
        case 0x41e630u: goto label_41e630;
        case 0x41e634u: goto label_41e634;
        case 0x41e638u: goto label_41e638;
        case 0x41e63cu: goto label_41e63c;
        case 0x41e640u: goto label_41e640;
        case 0x41e644u: goto label_41e644;
        case 0x41e648u: goto label_41e648;
        case 0x41e64cu: goto label_41e64c;
        case 0x41e650u: goto label_41e650;
        case 0x41e654u: goto label_41e654;
        case 0x41e658u: goto label_41e658;
        case 0x41e65cu: goto label_41e65c;
        case 0x41e660u: goto label_41e660;
        case 0x41e664u: goto label_41e664;
        case 0x41e668u: goto label_41e668;
        case 0x41e66cu: goto label_41e66c;
        case 0x41e670u: goto label_41e670;
        case 0x41e674u: goto label_41e674;
        case 0x41e678u: goto label_41e678;
        case 0x41e67cu: goto label_41e67c;
        case 0x41e680u: goto label_41e680;
        case 0x41e684u: goto label_41e684;
        case 0x41e688u: goto label_41e688;
        case 0x41e68cu: goto label_41e68c;
        case 0x41e690u: goto label_41e690;
        case 0x41e694u: goto label_41e694;
        default: break;
    }

    ctx->pc = 0x41e5d0u;

label_41e5d0:
    // 0x41e5d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x41e5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_41e5d4:
    // 0x41e5d4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x41e5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_41e5d8:
    // 0x41e5d8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x41e5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_41e5dc:
    // 0x41e5dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41e5dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41e5e0:
    // 0x41e5e0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x41e5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_41e5e4:
    // 0x41e5e4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x41e5e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41e5e8:
    // 0x41e5e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x41e5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_41e5ec:
    // 0x41e5ec: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x41e5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_41e5f0:
    // 0x41e5f0: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
label_41e5f4:
    if (ctx->pc == 0x41E5F4u) {
        ctx->pc = 0x41E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E5F0u;
        // 0x41e5f4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E5F8u;
        goto label_41e5f8;
    }
    ctx->pc = 0x41E5F0u;
    {
        const bool branch_taken_0x41e5f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E5F0u;
        // 0x41e5f4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e5f0) {
            ctx->pc = 0x41E674u;
            goto label_41e674;
        }
    }
    ctx->pc = 0x41E5F8u;
label_41e5f8:
    // 0x41e5f8: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x41e5f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_41e5fc:
    // 0x41e5fc: 0x0  nop
    ctx->pc = 0x41e5fcu;
    // NOP
label_41e600:
    // 0x41e600: 0x2829825  or          $s3, $s4, $v0
    ctx->pc = 0x41e600u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_41e604:
    // 0x41e604: 0x32630004  andi        $v1, $s3, 0x4
    ctx->pc = 0x41e604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
label_41e608:
    // 0x41e608: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_41e60c:
    if (ctx->pc == 0x41E60Cu) {
        ctx->pc = 0x41E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E608u;
        // 0x41e60c: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E610u;
        goto label_41e610;
    }
    ctx->pc = 0x41E608u;
    {
        const bool branch_taken_0x41e608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E608u;
        // 0x41e60c: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e608) {
            ctx->pc = 0x41E620u;
            goto label_41e620;
        }
    }
    ctx->pc = 0x41E610u;
label_41e610:
    // 0x41e610: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x41e610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_41e614:
    // 0x41e614: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x41e614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_41e618:
    // 0x41e618: 0xc103dd4  jal         func_40F750
label_41e61c:
    if (ctx->pc == 0x41E61Cu) {
        ctx->pc = 0x41E61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E618u;
        // 0x41e61c: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E620u;
        goto label_41e620;
    }
    ctx->pc = 0x41E618u;
    SET_GPR_U32(ctx, 31, 0x41E620u);
    ctx->pc = 0x41E61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E618u;
    // 0x41e61c: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F750u, 0x41E618u, 0x41E620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E620u;
label_41e620:
    // 0x41e620: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x41e620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_41e624:
    // 0x41e624: 0x26320090  addiu       $s2, $s1, 0x90
    ctx->pc = 0x41e624u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_41e628:
    // 0x41e628: 0x5092000a  beql        $a0, $s2, . + 4 + (0xA << 2)
label_41e62c:
    if (ctx->pc == 0x41E62Cu) {
        ctx->pc = 0x41E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E628u;
        // 0x41e62c: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E630u;
        goto label_41e630;
    }
    ctx->pc = 0x41E628u;
    {
        const bool branch_taken_0x41e628 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        if (branch_taken_0x41e628) {
            ctx->pc = 0x41E62Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41E628u;
            // 0x41e62c: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41E654u;
            goto label_41e654;
        }
    }
    ctx->pc = 0x41E630u;
label_41e630:
    // 0x41e630: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41e630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41e634:
    // 0x41e634: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x41e634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_41e638:
    // 0x41e638: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x41e638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_41e63c:
    // 0x41e63c: 0x40f809  jalr        $v0
label_41e640:
    if (ctx->pc == 0x41E640u) {
        ctx->pc = 0x41E644u;
        goto label_41e644;
    }
    ctx->pc = 0x41E63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41E644u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E63Cu, 0x41E644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41E644u;
label_41e644:
    // 0x41e644: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x41e644u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41e648:
    // 0x41e648: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
label_41e64c:
    if (ctx->pc == 0x41E64Cu) {
        ctx->pc = 0x41E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E648u;
        // 0x41e64c: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E650u;
        goto label_41e650;
    }
    ctx->pc = 0x41E648u;
    {
        const bool branch_taken_0x41e648 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x41E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E648u;
        // 0x41e64c: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e648) {
            ctx->pc = 0x41E638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41e638;
        }
    }
    ctx->pc = 0x41E650u;
label_41e650:
    // 0x41e650: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x41e650u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_41e654:
    // 0x41e654: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x41e654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41e658:
    // 0x41e658: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x41e658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_41e65c:
    // 0x41e65c: 0x304200f3  andi        $v0, $v0, 0xF3
    ctx->pc = 0x41e65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)243);
label_41e660:
    // 0x41e660: 0xc107974  jal         func_41E5D0
label_41e664:
    if (ctx->pc == 0x41E664u) {
        ctx->pc = 0x41E664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E660u;
        // 0x41e664: 0xa2220003  sb          $v0, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E668u;
        goto label_41e668;
    }
    ctx->pc = 0x41E660u;
    SET_GPR_U32(ctx, 31, 0x41E668u);
    ctx->pc = 0x41E664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E660u;
    // 0x41e664: 0xa2220003  sb          $v0, 0x3($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5D0u;
    goto label_41e5d0;
    ctx->pc = 0x41E668u;
label_41e668:
    // 0x41e668: 0x8e31009c  lw          $s1, 0x9C($s1)
    ctx->pc = 0x41e668u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_41e66c:
    // 0x41e66c: 0x5620ffe4  bnel        $s1, $zero, . + 4 + (-0x1C << 2)
label_41e670:
    if (ctx->pc == 0x41E670u) {
        ctx->pc = 0x41E670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E66Cu;
        // 0x41e670: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E674u;
        goto label_41e674;
    }
    ctx->pc = 0x41E66Cu;
    {
        const bool branch_taken_0x41e66c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x41e66c) {
            ctx->pc = 0x41E670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41E66Cu;
            // 0x41e670: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41E600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41e600;
        }
    }
    ctx->pc = 0x41E674u;
label_41e674:
    // 0x41e674: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x41e674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41e678:
    // 0x41e678: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x41e678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41e67c:
    // 0x41e67c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x41e67cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41e680:
    // 0x41e680: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x41e680u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41e684:
    // 0x41e684: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x41e684u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41e688:
    // 0x41e688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41e688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41e68c:
    // 0x41e68c: 0x3e00008  jr          $ra
label_41e690:
    if (ctx->pc == 0x41E690u) {
        ctx->pc = 0x41E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E68Cu;
        // 0x41e690: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E694u;
        goto label_41e694;
    }
    ctx->pc = 0x41E68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E68Cu;
        // 0x41e690: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41E694u;
label_41e694:
    // 0x41e694: 0x0  nop
    ctx->pc = 0x41e694u;
    // NOP
    ctx->pc = 0x41e698u;
}
