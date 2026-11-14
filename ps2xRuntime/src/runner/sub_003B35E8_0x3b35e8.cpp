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

// Function: sub_003B35E8
// Address: 0x3b35e8 - 0x3b3770
void sub_003B35E8_0x3b35e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B35E8_0x3b35e8");
#endif

    switch (ctx->pc) {
        case 0x3b35e8u: goto label_3b35e8;
        case 0x3b35ecu: goto label_3b35ec;
        case 0x3b35f0u: goto label_3b35f0;
        case 0x3b35f4u: goto label_3b35f4;
        case 0x3b35f8u: goto label_3b35f8;
        case 0x3b35fcu: goto label_3b35fc;
        case 0x3b3600u: goto label_3b3600;
        case 0x3b3604u: goto label_3b3604;
        case 0x3b3608u: goto label_3b3608;
        case 0x3b360cu: goto label_3b360c;
        case 0x3b3610u: goto label_3b3610;
        case 0x3b3614u: goto label_3b3614;
        case 0x3b3618u: goto label_3b3618;
        case 0x3b361cu: goto label_3b361c;
        case 0x3b3620u: goto label_3b3620;
        case 0x3b3624u: goto label_3b3624;
        case 0x3b3628u: goto label_3b3628;
        case 0x3b362cu: goto label_3b362c;
        case 0x3b3630u: goto label_3b3630;
        case 0x3b3634u: goto label_3b3634;
        case 0x3b3638u: goto label_3b3638;
        case 0x3b363cu: goto label_3b363c;
        case 0x3b3640u: goto label_3b3640;
        case 0x3b3644u: goto label_3b3644;
        case 0x3b3648u: goto label_3b3648;
        case 0x3b364cu: goto label_3b364c;
        case 0x3b3650u: goto label_3b3650;
        case 0x3b3654u: goto label_3b3654;
        case 0x3b3658u: goto label_3b3658;
        case 0x3b365cu: goto label_3b365c;
        case 0x3b3660u: goto label_3b3660;
        case 0x3b3664u: goto label_3b3664;
        case 0x3b3668u: goto label_3b3668;
        case 0x3b366cu: goto label_3b366c;
        case 0x3b3670u: goto label_3b3670;
        case 0x3b3674u: goto label_3b3674;
        case 0x3b3678u: goto label_3b3678;
        case 0x3b367cu: goto label_3b367c;
        case 0x3b3680u: goto label_3b3680;
        case 0x3b3684u: goto label_3b3684;
        case 0x3b3688u: goto label_3b3688;
        case 0x3b368cu: goto label_3b368c;
        case 0x3b3690u: goto label_3b3690;
        case 0x3b3694u: goto label_3b3694;
        case 0x3b3698u: goto label_3b3698;
        case 0x3b369cu: goto label_3b369c;
        case 0x3b36a0u: goto label_3b36a0;
        case 0x3b36a4u: goto label_3b36a4;
        case 0x3b36a8u: goto label_3b36a8;
        case 0x3b36acu: goto label_3b36ac;
        case 0x3b36b0u: goto label_3b36b0;
        case 0x3b36b4u: goto label_3b36b4;
        case 0x3b36b8u: goto label_3b36b8;
        case 0x3b36bcu: goto label_3b36bc;
        case 0x3b36c0u: goto label_3b36c0;
        case 0x3b36c4u: goto label_3b36c4;
        case 0x3b36c8u: goto label_3b36c8;
        case 0x3b36ccu: goto label_3b36cc;
        case 0x3b36d0u: goto label_3b36d0;
        case 0x3b36d4u: goto label_3b36d4;
        case 0x3b36d8u: goto label_3b36d8;
        case 0x3b36dcu: goto label_3b36dc;
        case 0x3b36e0u: goto label_3b36e0;
        case 0x3b36e4u: goto label_3b36e4;
        case 0x3b36e8u: goto label_3b36e8;
        case 0x3b36ecu: goto label_3b36ec;
        case 0x3b36f0u: goto label_3b36f0;
        case 0x3b36f4u: goto label_3b36f4;
        case 0x3b36f8u: goto label_3b36f8;
        case 0x3b36fcu: goto label_3b36fc;
        case 0x3b3700u: goto label_3b3700;
        case 0x3b3704u: goto label_3b3704;
        case 0x3b3708u: goto label_3b3708;
        case 0x3b370cu: goto label_3b370c;
        case 0x3b3710u: goto label_3b3710;
        case 0x3b3714u: goto label_3b3714;
        case 0x3b3718u: goto label_3b3718;
        case 0x3b371cu: goto label_3b371c;
        case 0x3b3720u: goto label_3b3720;
        case 0x3b3724u: goto label_3b3724;
        case 0x3b3728u: goto label_3b3728;
        case 0x3b372cu: goto label_3b372c;
        case 0x3b3730u: goto label_3b3730;
        case 0x3b3734u: goto label_3b3734;
        case 0x3b3738u: goto label_3b3738;
        case 0x3b373cu: goto label_3b373c;
        case 0x3b3740u: goto label_3b3740;
        case 0x3b3744u: goto label_3b3744;
        case 0x3b3748u: goto label_3b3748;
        case 0x3b374cu: goto label_3b374c;
        case 0x3b3750u: goto label_3b3750;
        case 0x3b3754u: goto label_3b3754;
        case 0x3b3758u: goto label_3b3758;
        case 0x3b375cu: goto label_3b375c;
        case 0x3b3760u: goto label_3b3760;
        case 0x3b3764u: goto label_3b3764;
        case 0x3b3768u: goto label_3b3768;
        case 0x3b376cu: goto label_3b376c;
        default: break;
    }

    ctx->pc = 0x3b35e8u;

label_3b35e8:
    // 0x3b35e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b35e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3b35ec:
    // 0x3b35ec: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3b35ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3b35f0:
    // 0x3b35f0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3b35f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3b35f4:
    // 0x3b35f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b35f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b35f8:
    // 0x3b35f8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3b35f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3b35fc:
    // 0x3b35fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3b35fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3b3600:
    // 0x3b3600: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3b3600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_3b3604:
    // 0x3b3604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b3604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b3608:
    // 0x3b3608: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x3b3608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_3b360c:
    // 0x3b360c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3b360cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3b3610:
    // 0x3b3610: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
label_3b3614:
    if (ctx->pc == 0x3B3614u) {
        ctx->pc = 0x3B3614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3610u;
        // 0x3b3614: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3618u;
        goto label_3b3618;
    }
    ctx->pc = 0x3B3610u;
    {
        const bool branch_taken_0x3b3610 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3610u;
        // 0x3b3614: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3610) {
            ctx->pc = 0x3B36D4u;
            goto label_3b36d4;
        }
    }
    ctx->pc = 0x3B3618u;
label_3b3618:
    // 0x3b3618: 0xc0eb422  jal         func_3AD088
label_3b361c:
    if (ctx->pc == 0x3B361Cu) {
        ctx->pc = 0x3B3620u;
        goto label_3b3620;
    }
    ctx->pc = 0x3B3618u;
    SET_GPR_U32(ctx, 31, 0x3B3620u);
    ctx->pc = 0x3AD088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD088u, 0x3B3618u, 0x3B3620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3620u;
label_3b3620:
    // 0x3b3620: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_3b3624:
    if (ctx->pc == 0x3B3624u) {
        ctx->pc = 0x3B3624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3620u;
        // 0x3b3624: 0x260182d  daddu       $v1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3628u;
        goto label_3b3628;
    }
    ctx->pc = 0x3B3620u;
    {
        const bool branch_taken_0x3b3620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3620u;
        // 0x3b3624: 0x260182d  daddu       $v1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3620) {
            ctx->pc = 0x3B36D4u;
            goto label_3b36d4;
        }
    }
    ctx->pc = 0x3B3628u;
label_3b3628:
    // 0x3b3628: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x3b3628u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3b362c:
    // 0x3b362c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3b362cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b3630:
    // 0x3b3630: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3b3634:
    if (ctx->pc == 0x3B3634u) {
        ctx->pc = 0x3B3634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3630u;
        // 0x3b3634: 0x8e2500b8  lw          $a1, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3638u;
        goto label_3b3638;
    }
    ctx->pc = 0x3B3630u;
    {
        const bool branch_taken_0x3b3630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3630u;
        // 0x3b3634: 0x8e2500b8  lw          $a1, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3630) {
            ctx->pc = 0x3B3648u;
            goto label_3b3648;
        }
    }
    ctx->pc = 0x3B3638u;
label_3b3638:
    // 0x3b3638: 0x82620001  lb          $v0, 0x1($s3)
    ctx->pc = 0x3b3638u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_3b363c:
    // 0x3b363c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3b3640:
    if (ctx->pc == 0x3B3640u) {
        ctx->pc = 0x3B3640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B363Cu;
        // 0x3b3640: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3644u;
        goto label_3b3644;
    }
    ctx->pc = 0x3B363Cu;
    {
        const bool branch_taken_0x3b363c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B363Cu;
        // 0x3b3640: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b363c) {
            ctx->pc = 0x3B3674u;
            goto label_3b3674;
        }
    }
    ctx->pc = 0x3B3644u;
label_3b3644:
    // 0x3b3644: 0x0  nop
    ctx->pc = 0x3b3644u;
    // NOP
label_3b3648:
    // 0x3b3648: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3b3648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_3b364c:
    // 0x3b364c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3b364cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3b3650:
    // 0x3b3650: 0x0  nop
    ctx->pc = 0x3b3650u;
    // NOP
label_3b3654:
    // 0x3b3654: 0x0  nop
    ctx->pc = 0x3b3654u;
    // NOP
label_3b3658:
    // 0x3b3658: 0x0  nop
    ctx->pc = 0x3b3658u;
    // NOP
label_3b365c:
    // 0x3b365c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3b3660:
    if (ctx->pc == 0x3B3660u) {
        ctx->pc = 0x3B3660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B365Cu;
        // 0x3b3660: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3664u;
        goto label_3b3664;
    }
    ctx->pc = 0x3B365Cu;
    {
        const bool branch_taken_0x3b365c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B365Cu;
        // 0x3b3660: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b365c) {
            ctx->pc = 0x3B3648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b3648;
        }
    }
    ctx->pc = 0x3B3664u;
label_3b3664:
    // 0x3b3664: 0x80620001  lb          $v0, 0x1($v1)
    ctx->pc = 0x3b3664u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_3b3668:
    // 0x3b3668: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_3b366c:
    if (ctx->pc == 0x3B366Cu) {
        ctx->pc = 0x3B366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3668u;
        // 0x3b366c: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3670u;
        goto label_3b3670;
    }
    ctx->pc = 0x3B3668u;
    {
        const bool branch_taken_0x3b3668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b3668) {
            ctx->pc = 0x3B366Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B3668u;
            // 0x3b366c: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B364Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b364c;
        }
    }
    ctx->pc = 0x3B3670u;
label_3b3670:
    // 0x3b3670: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b3670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b3674:
    // 0x3b3674: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x3b3674u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3b3678:
    // 0x3b3678: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3b367c:
    if (ctx->pc == 0x3B367Cu) {
        ctx->pc = 0x3B367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3678u;
        // 0x3b367c: 0x26120002  addiu       $s2, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3680u;
        goto label_3b3680;
    }
    ctx->pc = 0x3B3678u;
    {
        const bool branch_taken_0x3b3678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3678u;
        // 0x3b367c: 0x26120002  addiu       $s2, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3678) {
            ctx->pc = 0x3B36BCu;
            goto label_3b36bc;
        }
    }
    ctx->pc = 0x3B3680u;
label_3b3680:
    // 0x3b3680: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x3b3680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_3b3684:
    // 0x3b3684: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3b3688:
    if (ctx->pc == 0x3B3688u) {
        ctx->pc = 0x3B3688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3684u;
        // 0x3b3688: 0x3c140062  lui         $s4, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B368Cu;
        goto label_3b368c;
    }
    ctx->pc = 0x3B3684u;
    {
        const bool branch_taken_0x3b3684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3684u;
        // 0x3b3688: 0x3c140062  lui         $s4, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3684) {
            ctx->pc = 0x3B369Cu;
            goto label_3b369c;
        }
    }
    ctx->pc = 0x3B368Cu;
label_3b368c:
    // 0x3b368c: 0x2682e880  addiu       $v0, $s4, -0x1780
    ctx->pc = 0x3b368cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961280));
label_3b3690:
    // 0x3b3690: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x3b3690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_3b3694:
    // 0x3b3694: 0x60f809  jalr        $v1
label_3b3698:
    if (ctx->pc == 0x3B3698u) {
        ctx->pc = 0x3B369Cu;
        goto label_3b369c;
    }
    ctx->pc = 0x3B3694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B369Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3694u, 0x3B369Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B369Cu;
label_3b369c:
    // 0x3b369c: 0x2683e880  addiu       $v1, $s4, -0x1780
    ctx->pc = 0x3b369cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961280));
label_3b36a0:
    // 0x3b36a0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b36a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3b36a4:
    // 0x3b36a4: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3b36a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_3b36a8:
    // 0x3b36a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b36a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b36ac:
    // 0x3b36ac: 0x40f809  jalr        $v0
label_3b36b0:
    if (ctx->pc == 0x3B36B0u) {
        ctx->pc = 0x3B36B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B36ACu;
        // 0x3b36b0: 0x34a501a7  ori         $a1, $a1, 0x1A7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)423);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B36B4u;
        goto label_3b36b4;
    }
    ctx->pc = 0x3B36ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B36B4u);
        ctx->pc = 0x3B36B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B36ACu;
        // 0x3b36b0: 0x34a501a7  ori         $a1, $a1, 0x1A7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)423);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B36ACu, 0x3B36B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B36B4u;
label_3b36b4:
    // 0x3b36b4: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x3b36b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
label_3b36b8:
    // 0x3b36b8: 0xae3000b8  sw          $s0, 0xB8($s1)
    ctx->pc = 0x3b36b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 16));
label_3b36bc:
    // 0x3b36bc: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x3b36bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_3b36c0:
    // 0x3b36c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3b36c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b36c4:
    // 0x3b36c4: 0xc0bb778  jal         func_2EDDE0
label_3b36c8:
    if (ctx->pc == 0x3B36C8u) {
        ctx->pc = 0x3B36C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B36C4u;
        // 0x3b36c8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B36CCu;
        goto label_3b36cc;
    }
    ctx->pc = 0x3B36C4u;
    SET_GPR_U32(ctx, 31, 0x3B36CCu);
    ctx->pc = 0x3B36C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B36C4u;
    // 0x3b36c8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3B36C4u, 0x3B36CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B36CCu;
label_3b36cc:
    // 0x3b36cc: 0x1000001f  b           . + 4 + (0x1F << 2)
label_3b36d0:
    if (ctx->pc == 0x3B36D0u) {
        ctx->pc = 0x3B36D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B36CCu;
        // 0x3b36d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B36D4u;
        goto label_3b36d4;
    }
    ctx->pc = 0x3B36CCu;
    {
        const bool branch_taken_0x3b36cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B36D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B36CCu;
        // 0x3b36d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b36cc) {
            ctx->pc = 0x3B374Cu;
            goto label_3b374c;
        }
    }
    ctx->pc = 0x3B36D4u;
label_3b36d4:
    // 0x3b36d4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3b36d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3b36d8:
    // 0x3b36d8: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x3b36d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3b36dc:
    // 0x3b36dc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3b36dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b36e0:
    // 0x3b36e0: 0x8e4200f4  lw          $v0, 0xF4($s2)
    ctx->pc = 0x3b36e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
label_3b36e4:
    // 0x3b36e4: 0x40f809  jalr        $v0
label_3b36e8:
    if (ctx->pc == 0x3B36E8u) {
        ctx->pc = 0x3B36E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B36E4u;
        // 0x3b36e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B36ECu;
        goto label_3b36ec;
    }
    ctx->pc = 0x3B36E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B36ECu);
        ctx->pc = 0x3B36E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B36E4u;
        // 0x3b36e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B36E4u, 0x3B36ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B36ECu;
label_3b36ec:
    // 0x3b36ec: 0x8e2300b8  lw          $v1, 0xB8($s1)
    ctx->pc = 0x3b36ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_3b36f0:
    // 0x3b36f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b36f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b36f4:
    // 0x3b36f4: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x3b36f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3b36f8:
    // 0x3b36f8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_3b36fc:
    if (ctx->pc == 0x3B36FCu) {
        ctx->pc = 0x3B36FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B36F8u;
        // 0x3b36fc: 0x2683e880  addiu       $v1, $s4, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3700u;
        goto label_3b3700;
    }
    ctx->pc = 0x3B36F8u;
    {
        const bool branch_taken_0x3b36f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B36FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B36F8u;
        // 0x3b36fc: 0x2683e880  addiu       $v1, $s4, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b36f8) {
            ctx->pc = 0x3B3738u;
            goto label_3b3738;
        }
    }
    ctx->pc = 0x3B3700u;
label_3b3700:
    // 0x3b3700: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x3b3700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_3b3704:
    // 0x3b3704: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3b3708:
    if (ctx->pc == 0x3B3708u) {
        ctx->pc = 0x3B3708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3704u;
        // 0x3b3708: 0x8e420108  lw          $v0, 0x108($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B370Cu;
        goto label_3b370c;
    }
    ctx->pc = 0x3B3704u;
    {
        const bool branch_taken_0x3b3704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3704) {
            ctx->pc = 0x3B3708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B3704u;
            // 0x3b3708: 0x8e420108  lw          $v0, 0x108($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B371Cu;
            goto label_3b371c;
        }
    }
    ctx->pc = 0x3B370Cu;
label_3b370c:
    // 0x3b370c: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x3b370cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_3b3710:
    // 0x3b3710: 0x40f809  jalr        $v0
label_3b3714:
    if (ctx->pc == 0x3B3714u) {
        ctx->pc = 0x3B3718u;
        goto label_3b3718;
    }
    ctx->pc = 0x3B3710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B3718u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3710u, 0x3B3718u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B3718u;
label_3b3718:
    // 0x3b3718: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x3b3718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_3b371c:
    // 0x3b371c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b371cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3b3720:
    // 0x3b3720: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x3b3720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3b3724:
    // 0x3b3724: 0x40f809  jalr        $v0
label_3b3728:
    if (ctx->pc == 0x3B3728u) {
        ctx->pc = 0x3B3728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3724u;
        // 0x3b3728: 0x34a501a7  ori         $a1, $a1, 0x1A7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)423);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B372Cu;
        goto label_3b372c;
    }
    ctx->pc = 0x3B3724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B372Cu);
        ctx->pc = 0x3B3728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3724u;
        // 0x3b3728: 0x34a501a7  ori         $a1, $a1, 0x1A7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)423);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3724u, 0x3B372Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B372Cu;
label_3b372c:
    // 0x3b372c: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x3b372cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
label_3b3730:
    // 0x3b3730: 0xae3000b8  sw          $s0, 0xB8($s1)
    ctx->pc = 0x3b3730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 16));
label_3b3734:
    // 0x3b3734: 0x2683e880  addiu       $v1, $s4, -0x1780
    ctx->pc = 0x3b3734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961280));
label_3b3738:
    // 0x3b3738: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x3b3738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_3b373c:
    // 0x3b373c: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3b373cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3b3740:
    // 0x3b3740: 0x40f809  jalr        $v0
label_3b3744:
    if (ctx->pc == 0x3B3744u) {
        ctx->pc = 0x3B3744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3740u;
        // 0x3b3744: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3748u;
        goto label_3b3748;
    }
    ctx->pc = 0x3B3740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B3748u);
        ctx->pc = 0x3B3744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3740u;
        // 0x3b3744: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3740u, 0x3B3748u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B3748u;
label_3b3748:
    // 0x3b3748: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b3748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b374c:
    // 0x3b374c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3b374cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b3750:
    // 0x3b3750: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3b3750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b3754:
    // 0x3b3754: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3b3754u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b3758:
    // 0x3b3758: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3b3758u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b375c:
    // 0x3b375c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3b375cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b3760:
    // 0x3b3760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b3760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b3764:
    // 0x3b3764: 0x3e00008  jr          $ra
label_3b3768:
    if (ctx->pc == 0x3B3768u) {
        ctx->pc = 0x3B3768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3764u;
        // 0x3b3768: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B376Cu;
        goto label_3b376c;
    }
    ctx->pc = 0x3B3764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3764u;
        // 0x3b3768: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B376Cu;
label_3b376c:
    // 0x3b376c: 0x0  nop
    ctx->pc = 0x3b376cu;
    // NOP
    ctx->pc = 0x3b3770u;
}
