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

// Function: sub_00329560
// Address: 0x329560 - 0x329710
void sub_00329560_0x329560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329560_0x329560");
#endif

    switch (ctx->pc) {
        case 0x329584u: goto label_329584;
        case 0x329598u: goto label_329598;
        case 0x3295c8u: goto label_3295c8;
        case 0x3295fcu: goto label_3295fc;
        case 0x329624u: goto label_329624;
        case 0x329650u: goto label_329650;
        case 0x329680u: goto label_329680;
        case 0x3296b0u: goto label_3296b0;
        case 0x3296d4u: goto label_3296d4;
        case 0x3296e4u: goto label_3296e4;
        default: break;
    }

    ctx->pc = 0x329560u;

    // 0x329560: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x329560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x329564: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x329564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x329568: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x329568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x32956c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x32956cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x329570: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x329570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x329574: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x329574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x329578: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x329578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32957c: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x32957Cu;
    SET_GPR_U32(ctx, 31, 0x329584u);
    ctx->pc = 0x329580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32957Cu;
    // 0x329580: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x32957Cu, 0x329584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329584u;
label_329584:
    // 0x329584: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329588: 0x1200005a  beqz        $s0, . + 4 + (0x5A << 2)
    ctx->pc = 0x329588u;
    {
        const bool branch_taken_0x329588 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329588u;
        // 0x32958c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329588) {
            ctx->pc = 0x3296F4u;
            goto label_3296f4;
        }
    }
    ctx->pc = 0x329590u;
    // 0x329590: 0xc0c9f5e  jal         func_327D78
    ctx->pc = 0x329590u;
    SET_GPR_U32(ctx, 31, 0x329598u);
    ctx->pc = 0x329594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329590u;
    // 0x329594: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327D78u, 0x329590u, 0x329598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329598u;
label_329598:
    // 0x329598: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x329598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32959c: 0x8e32002c  lw          $s2, 0x2C($s1)
    ctx->pc = 0x32959cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x3295a0: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x3295a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x3295a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3295A4u;
    {
        const bool branch_taken_0x3295a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3295A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3295A4u;
        // 0x3295a8: 0x8e33003c  lw          $s3, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3295a4) {
            ctx->pc = 0x3295D8u;
            goto label_3295d8;
        }
    }
    ctx->pc = 0x3295ACu;
    // 0x3295ac: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3295acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3295b0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x3295b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3295b4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3295b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3295b8: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x3295b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3295bc: 0x3012  mflo        $a2
    ctx->pc = 0x3295bcu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3295c0: 0xc103454  jal         func_40D150
    ctx->pc = 0x3295C0u;
    SET_GPR_U32(ctx, 31, 0x3295C8u);
    ctx->pc = 0x3295C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3295C0u;
    // 0x3295c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x3295C0u, 0x3295C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3295C8u;
label_3295c8:
    // 0x3295c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3295c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3295cc: 0x12000049  beqz        $s0, . + 4 + (0x49 << 2)
    ctx->pc = 0x3295CCu;
    {
        const bool branch_taken_0x3295cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3295D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3295CCu;
        // 0x3295d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3295cc) {
            ctx->pc = 0x3296F4u;
            goto label_3296f4;
        }
    }
    ctx->pc = 0x3295D4u;
    // 0x3295d4: 0x0  nop
    ctx->pc = 0x3295d4u;
    // NOP
label_3295d8:
    // 0x3295d8: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x3295d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x3295dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3295DCu;
    {
        const bool branch_taken_0x3295dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3295E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3295DCu;
        // 0x3295e0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3295dc) {
            ctx->pc = 0x329608u;
            goto label_329608;
        }
    }
    ctx->pc = 0x3295E4u;
    // 0x3295e4: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x3295e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3295e8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3295e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3295ec: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x3295ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3295f0: 0x3012  mflo        $a2
    ctx->pc = 0x3295f0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3295f4: 0xc103454  jal         func_40D150
    ctx->pc = 0x3295F4u;
    SET_GPR_U32(ctx, 31, 0x3295FCu);
    ctx->pc = 0x3295F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3295F4u;
    // 0x3295f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x3295F4u, 0x3295FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3295FCu;
label_3295fc:
    // 0x3295fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3295fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329600: 0x1200003c  beqz        $s0, . + 4 + (0x3C << 2)
    ctx->pc = 0x329600u;
    {
        const bool branch_taken_0x329600 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x329604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329600u;
        // 0x329604: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329600) {
            ctx->pc = 0x3296F4u;
            goto label_3296f4;
        }
    }
    ctx->pc = 0x329608u;
label_329608:
    // 0x329608: 0x32420004  andi        $v0, $s2, 0x4
    ctx->pc = 0x329608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x32960c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32960Cu;
    {
        const bool branch_taken_0x32960c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32960Cu;
        // 0x329610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32960c) {
            ctx->pc = 0x329630u;
            goto label_329630;
        }
    }
    ctx->pc = 0x329614u;
    // 0x329614: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x329614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x329618: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x329618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32961c: 0xc103454  jal         func_40D150
    ctx->pc = 0x32961Cu;
    SET_GPR_U32(ctx, 31, 0x329624u);
    ctx->pc = 0x329620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32961Cu;
    // 0x329620: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x32961Cu, 0x329624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329624u;
label_329624:
    // 0x329624: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329628: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
    ctx->pc = 0x329628u;
    {
        const bool branch_taken_0x329628 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329628u;
        // 0x32962c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329628) {
            ctx->pc = 0x3296F4u;
            goto label_3296f4;
        }
    }
    ctx->pc = 0x329630u;
label_329630:
    // 0x329630: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x329630u;
    {
        const bool branch_taken_0x329630 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x329634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329630u;
        // 0x329634: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329630) {
            ctx->pc = 0x329660u;
            goto label_329660;
        }
    }
    ctx->pc = 0x329638u;
    // 0x329638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x329638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32963c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x32963cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x329640: 0x2660018  mult        $zero, $s3, $a2
    ctx->pc = 0x329640u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x329644: 0x3012  mflo        $a2
    ctx->pc = 0x329644u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x329648: 0xc103454  jal         func_40D150
    ctx->pc = 0x329648u;
    SET_GPR_U32(ctx, 31, 0x329650u);
    ctx->pc = 0x32964Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329648u;
    // 0x32964c: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x329648u, 0x329650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329650u;
label_329650:
    // 0x329650: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329654: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x329654u;
    {
        const bool branch_taken_0x329654 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x329658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329654u;
        // 0x329658: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329654) {
            ctx->pc = 0x3296F4u;
            goto label_3296f4;
        }
    }
    ctx->pc = 0x32965Cu;
    // 0x32965c: 0x0  nop
    ctx->pc = 0x32965cu;
    // NOP
label_329660:
    // 0x329660: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x329660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x329664: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x329664u;
    {
        const bool branch_taken_0x329664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329664u;
        // 0x329668: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329664) {
            ctx->pc = 0x329690u;
            goto label_329690;
        }
    }
    ctx->pc = 0x32966Cu;
    // 0x32966c: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x32966cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x329670: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x329670u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x329674: 0x3012  mflo        $a2
    ctx->pc = 0x329674u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x329678: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x329678u;
    SET_GPR_U32(ctx, 31, 0x329680u);
    ctx->pc = 0x32967Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329678u;
    // 0x32967c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x329678u, 0x329680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329680u;
label_329680:
    // 0x329680: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329684: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x329684u;
    {
        const bool branch_taken_0x329684 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x329688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329684u;
        // 0x329688: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329684) {
            ctx->pc = 0x3296F4u;
            goto label_3296f4;
        }
    }
    ctx->pc = 0x32968Cu;
    // 0x32968c: 0x0  nop
    ctx->pc = 0x32968cu;
    // NOP
label_329690:
    // 0x329690: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x329690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x329694: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x329694u;
    {
        const bool branch_taken_0x329694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329694u;
        // 0x329698: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329694) {
            ctx->pc = 0x3296C0u;
            goto label_3296c0;
        }
    }
    ctx->pc = 0x32969Cu;
    // 0x32969c: 0x8e25005c  lw          $a1, 0x5C($s1)
    ctx->pc = 0x32969cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x3296a0: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x3296a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3296a4: 0x3012  mflo        $a2
    ctx->pc = 0x3296a4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3296a8: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x3296A8u;
    SET_GPR_U32(ctx, 31, 0x3296B0u);
    ctx->pc = 0x3296ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3296A8u;
    // 0x3296ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3296A8u, 0x3296B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3296B0u;
label_3296b0:
    // 0x3296b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3296b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3296b4: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x3296B4u;
    {
        const bool branch_taken_0x3296b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3296B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3296B4u;
        // 0x3296b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3296b4) {
            ctx->pc = 0x3296F4u;
            goto label_3296f4;
        }
    }
    ctx->pc = 0x3296BCu;
    // 0x3296bc: 0x0  nop
    ctx->pc = 0x3296bcu;
    // NOP
label_3296c0:
    // 0x3296c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3296c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3296c4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3296c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3296c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3296c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3296cc: 0xc103322  jal         func_40CC88
    ctx->pc = 0x3296CCu;
    SET_GPR_U32(ctx, 31, 0x3296D4u);
    ctx->pc = 0x3296D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3296CCu;
    // 0x3296d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x3296CCu, 0x3296D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3296D4u;
label_3296d4:
    // 0x3296d4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3296D4u;
    {
        const bool branch_taken_0x3296d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3296D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3296D4u;
        // 0x3296d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3296d4) {
            ctx->pc = 0x3296F0u;
            goto label_3296f0;
        }
    }
    ctx->pc = 0x3296DCu;
    // 0x3296dc: 0xc0e3bf0  jal         func_38EFC0
    ctx->pc = 0x3296DCu;
    SET_GPR_U32(ctx, 31, 0x3296E4u);
    ctx->pc = 0x3296E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3296DCu;
    // 0x3296e0: 0x26250048  addiu       $a1, $s1, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EFC0u, 0x3296DCu, 0x3296E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3296E4u;
label_3296e4:
    // 0x3296e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3296E4u;
    {
        const bool branch_taken_0x3296e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3296E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3296E4u;
        // 0x3296e8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3296e4) {
            ctx->pc = 0x3296F4u;
            goto label_3296f4;
        }
    }
    ctx->pc = 0x3296ECu;
    // 0x3296ec: 0x0  nop
    ctx->pc = 0x3296ecu;
    // NOP
label_3296f0:
    // 0x3296f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3296f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3296f4:
    // 0x3296f4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3296f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3296f8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3296f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3296fc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3296fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x329700: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x329700u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x329704: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x329704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x329708: 0x3e00008  jr          $ra
    ctx->pc = 0x329708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329708u;
        // 0x32970c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329710u;
}
