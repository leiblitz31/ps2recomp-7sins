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

// Function: sub_003C35F0
// Address: 0x3c35f0 - 0x3c3760
void sub_003C35F0_0x3c35f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C35F0_0x3c35f0");
#endif

    switch (ctx->pc) {
        case 0x3c35f0u: goto label_3c35f0;
        case 0x3c35f4u: goto label_3c35f4;
        case 0x3c35f8u: goto label_3c35f8;
        case 0x3c35fcu: goto label_3c35fc;
        case 0x3c3600u: goto label_3c3600;
        case 0x3c3604u: goto label_3c3604;
        case 0x3c3608u: goto label_3c3608;
        case 0x3c360cu: goto label_3c360c;
        case 0x3c3610u: goto label_3c3610;
        case 0x3c3614u: goto label_3c3614;
        case 0x3c3618u: goto label_3c3618;
        case 0x3c361cu: goto label_3c361c;
        case 0x3c3620u: goto label_3c3620;
        case 0x3c3624u: goto label_3c3624;
        case 0x3c3628u: goto label_3c3628;
        case 0x3c362cu: goto label_3c362c;
        case 0x3c3630u: goto label_3c3630;
        case 0x3c3634u: goto label_3c3634;
        case 0x3c3638u: goto label_3c3638;
        case 0x3c363cu: goto label_3c363c;
        case 0x3c3640u: goto label_3c3640;
        case 0x3c3644u: goto label_3c3644;
        case 0x3c3648u: goto label_3c3648;
        case 0x3c364cu: goto label_3c364c;
        case 0x3c3650u: goto label_3c3650;
        case 0x3c3654u: goto label_3c3654;
        case 0x3c3658u: goto label_3c3658;
        case 0x3c365cu: goto label_3c365c;
        case 0x3c3660u: goto label_3c3660;
        case 0x3c3664u: goto label_3c3664;
        case 0x3c3668u: goto label_3c3668;
        case 0x3c366cu: goto label_3c366c;
        case 0x3c3670u: goto label_3c3670;
        case 0x3c3674u: goto label_3c3674;
        case 0x3c3678u: goto label_3c3678;
        case 0x3c367cu: goto label_3c367c;
        case 0x3c3680u: goto label_3c3680;
        case 0x3c3684u: goto label_3c3684;
        case 0x3c3688u: goto label_3c3688;
        case 0x3c368cu: goto label_3c368c;
        case 0x3c3690u: goto label_3c3690;
        case 0x3c3694u: goto label_3c3694;
        case 0x3c3698u: goto label_3c3698;
        case 0x3c369cu: goto label_3c369c;
        case 0x3c36a0u: goto label_3c36a0;
        case 0x3c36a4u: goto label_3c36a4;
        case 0x3c36a8u: goto label_3c36a8;
        case 0x3c36acu: goto label_3c36ac;
        case 0x3c36b0u: goto label_3c36b0;
        case 0x3c36b4u: goto label_3c36b4;
        case 0x3c36b8u: goto label_3c36b8;
        case 0x3c36bcu: goto label_3c36bc;
        case 0x3c36c0u: goto label_3c36c0;
        case 0x3c36c4u: goto label_3c36c4;
        case 0x3c36c8u: goto label_3c36c8;
        case 0x3c36ccu: goto label_3c36cc;
        case 0x3c36d0u: goto label_3c36d0;
        case 0x3c36d4u: goto label_3c36d4;
        case 0x3c36d8u: goto label_3c36d8;
        case 0x3c36dcu: goto label_3c36dc;
        case 0x3c36e0u: goto label_3c36e0;
        case 0x3c36e4u: goto label_3c36e4;
        case 0x3c36e8u: goto label_3c36e8;
        case 0x3c36ecu: goto label_3c36ec;
        case 0x3c36f0u: goto label_3c36f0;
        case 0x3c36f4u: goto label_3c36f4;
        case 0x3c36f8u: goto label_3c36f8;
        case 0x3c36fcu: goto label_3c36fc;
        case 0x3c3700u: goto label_3c3700;
        case 0x3c3704u: goto label_3c3704;
        case 0x3c3708u: goto label_3c3708;
        case 0x3c370cu: goto label_3c370c;
        case 0x3c3710u: goto label_3c3710;
        case 0x3c3714u: goto label_3c3714;
        case 0x3c3718u: goto label_3c3718;
        case 0x3c371cu: goto label_3c371c;
        case 0x3c3720u: goto label_3c3720;
        case 0x3c3724u: goto label_3c3724;
        case 0x3c3728u: goto label_3c3728;
        case 0x3c372cu: goto label_3c372c;
        case 0x3c3730u: goto label_3c3730;
        case 0x3c3734u: goto label_3c3734;
        case 0x3c3738u: goto label_3c3738;
        case 0x3c373cu: goto label_3c373c;
        case 0x3c3740u: goto label_3c3740;
        case 0x3c3744u: goto label_3c3744;
        case 0x3c3748u: goto label_3c3748;
        case 0x3c374cu: goto label_3c374c;
        case 0x3c3750u: goto label_3c3750;
        case 0x3c3754u: goto label_3c3754;
        case 0x3c3758u: goto label_3c3758;
        case 0x3c375cu: goto label_3c375c;
        default: break;
    }

    ctx->pc = 0x3c35f0u;

label_3c35f0:
    // 0x3c35f0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x3c35f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_3c35f4:
    // 0x3c35f4: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x3c35f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_3c35f8:
    // 0x3c35f8: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x3c35f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_3c35fc:
    // 0x3c35fc: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x3c35fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
label_3c3600:
    // 0x3c3600: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3c3600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c3604:
    // 0x3c3604: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x3c3604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
label_3c3608:
    // 0x3c3608: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3c3608u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c360c:
    // 0x3c360c: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x3c360cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_3c3610:
    // 0x3c3610: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x3c3610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_3c3614:
    // 0x3c3614: 0x40f809  jalr        $v0
label_3c3618:
    if (ctx->pc == 0x3C3618u) {
        ctx->pc = 0x3C3618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3614u;
        // 0x3c3618: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C361Cu;
        goto label_3c361c;
    }
    ctx->pc = 0x3C3614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C361Cu);
        ctx->pc = 0x3C3618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3614u;
        // 0x3c3618: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3614u, 0x3C361Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C361Cu;
label_3c361c:
    // 0x3c361c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c361cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c3620:
    // 0x3c3620: 0xc0f0810  jal         func_3C2040
label_3c3624:
    if (ctx->pc == 0x3C3624u) {
        ctx->pc = 0x3C3624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3620u;
        // 0x3c3624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3628u;
        goto label_3c3628;
    }
    ctx->pc = 0x3C3620u;
    SET_GPR_U32(ctx, 31, 0x3C3628u);
    ctx->pc = 0x3C3624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3620u;
    // 0x3c3624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2040u, 0x3C3620u, 0x3C3628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3628u;
label_3c3628:
    // 0x3c3628: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c3628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c362c:
    // 0x3c362c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3c362cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c3630:
    // 0x3c3630: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c3630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c3634:
    // 0x3c3634: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x3c3634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3c3638:
    // 0x3c3638: 0xc0f082c  jal         func_3C20B0
label_3c363c:
    if (ctx->pc == 0x3C363Cu) {
        ctx->pc = 0x3C363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3638u;
        // 0x3c363c: 0x2408002f  addiu       $t0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3640u;
        goto label_3c3640;
    }
    ctx->pc = 0x3C3638u;
    SET_GPR_U32(ctx, 31, 0x3C3640u);
    ctx->pc = 0x3C363Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3638u;
    // 0x3c363c: 0x2408002f  addiu       $t0, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C20B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C20B0u, 0x3C3638u, 0x3C3640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3640u;
label_3c3640:
    // 0x3c3640: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3c3644:
    if (ctx->pc == 0x3C3644u) {
        ctx->pc = 0x3C3644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3640u;
        // 0x3c3644: 0x32630003  andi        $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3648u;
        goto label_3c3648;
    }
    ctx->pc = 0x3C3640u;
    {
        const bool branch_taken_0x3c3640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3640u;
        // 0x3c3644: 0x32630003  andi        $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3640) {
            ctx->pc = 0x3C3650u;
            goto label_3c3650;
        }
    }
    ctx->pc = 0x3C3648u;
label_3c3648:
    // 0x3c3648: 0x1000003e  b           . + 4 + (0x3E << 2)
label_3c364c:
    if (ctx->pc == 0x3C364Cu) {
        ctx->pc = 0x3C364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3648u;
        // 0x3c364c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3650u;
        goto label_3c3650;
    }
    ctx->pc = 0x3C3648u;
    {
        const bool branch_taken_0x3c3648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3648u;
        // 0x3c364c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3648) {
            ctx->pc = 0x3C3744u;
            goto label_3c3744;
        }
    }
    ctx->pc = 0x3C3650u;
label_3c3650:
    // 0x3c3650: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3c3650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c3654:
    // 0x3c3654: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_3c3658:
    if (ctx->pc == 0x3C3658u) {
        ctx->pc = 0x3C3658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3654u;
        // 0x3c3658: 0x32700001  andi        $s0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C365Cu;
        goto label_3c365c;
    }
    ctx->pc = 0x3C3654u;
    {
        const bool branch_taken_0x3c3654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C3658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3654u;
        // 0x3c3658: 0x32700001  andi        $s0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3654) {
            ctx->pc = 0x3C3664u;
            goto label_3c3664;
        }
    }
    ctx->pc = 0x3C365Cu;
label_3c365c:
    // 0x3c365c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3c3660:
    if (ctx->pc == 0x3C3660u) {
        ctx->pc = 0x3C3660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C365Cu;
        // 0x3c3660: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3664u;
        goto label_3c3664;
    }
    ctx->pc = 0x3C365Cu;
    {
        const bool branch_taken_0x3c365c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C365Cu;
        // 0x3c3660: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c365c) {
            ctx->pc = 0x3C3670u;
            goto label_3c3670;
        }
    }
    ctx->pc = 0x3C3664u;
label_3c3664:
    // 0x3c3664: 0x32630002  andi        $v1, $s3, 0x2
    ctx->pc = 0x3c3664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
label_3c3668:
    // 0x3c3668: 0x36020002  ori         $v0, $s0, 0x2
    ctx->pc = 0x3c3668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
label_3c366c:
    // 0x3c366c: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x3c366cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_3c3670:
    // 0x3c3670: 0x32640004  andi        $a0, $s3, 0x4
    ctx->pc = 0x3c3670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
label_3c3674:
    // 0x3c3674: 0x36030200  ori         $v1, $s0, 0x200
    ctx->pc = 0x3c3674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)512);
label_3c3678:
    // 0x3c3678: 0x64800b  movn        $s0, $v1, $a0
    ctx->pc = 0x3c3678u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_3c367c:
    // 0x3c367c: 0x3262000a  andi        $v0, $s3, 0xA
    ctx->pc = 0x3c367cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)10);
label_3c3680:
    // 0x3c3680: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x3c3680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_3c3684:
    // 0x3c3684: 0x36030400  ori         $v1, $s0, 0x400
    ctx->pc = 0x3c3684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1024);
label_3c3688:
    // 0x3c3688: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x3c3688u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_3c368c:
    // 0x3c368c: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x3c368cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_3c3690:
    // 0x3c3690: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c3690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c3694:
    // 0x3c3694: 0xc0c0bba  jal         func_302EE8
label_3c3698:
    if (ctx->pc == 0x3C3698u) {
        ctx->pc = 0x3C3698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3694u;
        // 0x3c3698: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C369Cu;
        goto label_3c369c;
    }
    ctx->pc = 0x3C3694u;
    SET_GPR_U32(ctx, 31, 0x3C369Cu);
    ctx->pc = 0x3C3698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3694u;
    // 0x3c3698: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EE8u, 0x3C3694u, 0x3C369Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C369Cu;
label_3c369c:
    // 0x3c369c: 0x440001a  bltz        $v0, . + 4 + (0x1A << 2)
label_3c36a0:
    if (ctx->pc == 0x3C36A0u) {
        ctx->pc = 0x3C36A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C369Cu;
        // 0x3c36a0: 0xae420060  sw          $v0, 0x60($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C36A4u;
        goto label_3c36a4;
    }
    ctx->pc = 0x3C369Cu;
    {
        const bool branch_taken_0x3c369c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3C36A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C369Cu;
        // 0x3c36a0: 0xae420060  sw          $v0, 0x60($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c369c) {
            ctx->pc = 0x3C3708u;
            goto label_3c3708;
        }
    }
    ctx->pc = 0x3C36A4u;
label_3c36a4:
    // 0x3c36a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c36a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c36a8:
    // 0x3c36a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c36a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c36ac:
    // 0x3c36ac: 0xc0c0cbc  jal         func_3032F0
label_3c36b0:
    if (ctx->pc == 0x3C36B0u) {
        ctx->pc = 0x3C36B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C36ACu;
        // 0x3c36b0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C36B4u;
        goto label_3c36b4;
    }
    ctx->pc = 0x3C36ACu;
    SET_GPR_U32(ctx, 31, 0x3C36B4u);
    ctx->pc = 0x3C36B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C36ACu;
    // 0x3c36b0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3032F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3032F0u, 0x3C36ACu, 0x3C36B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C36B4u;
label_3c36b4:
    // 0x3c36b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3c36b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c36b8:
    // 0x3c36b8: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x3c36b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_3c36bc:
    // 0x3c36bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3c36c0:
    if (ctx->pc == 0x3C36C0u) {
        ctx->pc = 0x3C36C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C36BCu;
        // 0x3c36c0: 0xfe430000  sd          $v1, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C36C4u;
        goto label_3c36c4;
    }
    ctx->pc = 0x3C36BCu;
    {
        const bool branch_taken_0x3c36bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C36C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C36BCu;
        // 0x3c36c0: 0xfe430000  sd          $v1, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c36bc) {
            ctx->pc = 0x3C36CCu;
            goto label_3c36cc;
        }
    }
    ctx->pc = 0x3C36C4u;
label_3c36c4:
    // 0x3c36c4: 0x10000006  b           . + 4 + (0x6 << 2)
label_3c36c8:
    if (ctx->pc == 0x3C36C8u) {
        ctx->pc = 0x3C36C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C36C4u;
        // 0x3c36c8: 0xfe430010  sd          $v1, 0x10($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C36CCu;
        goto label_3c36cc;
    }
    ctx->pc = 0x3C36C4u;
    {
        const bool branch_taken_0x3c36c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C36C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C36C4u;
        // 0x3c36c8: 0xfe430010  sd          $v1, 0x10($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c36c4) {
            ctx->pc = 0x3C36E0u;
            goto label_3c36e0;
        }
    }
    ctx->pc = 0x3C36CCu;
label_3c36cc:
    // 0x3c36cc: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x3c36ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_3c36d0:
    // 0x3c36d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c36d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c36d4:
    // 0x3c36d4: 0xc0c0cbc  jal         func_3032F0
label_3c36d8:
    if (ctx->pc == 0x3C36D8u) {
        ctx->pc = 0x3C36D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C36D4u;
        // 0x3c36d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C36DCu;
        goto label_3c36dc;
    }
    ctx->pc = 0x3C36D4u;
    SET_GPR_U32(ctx, 31, 0x3C36DCu);
    ctx->pc = 0x3C36D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C36D4u;
    // 0x3c36d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3032F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3032F0u, 0x3C36D4u, 0x3C36DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C36DCu;
label_3c36dc:
    // 0x3c36dc: 0xfe400010  sd          $zero, 0x10($s2)
    ctx->pc = 0x3c36dcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 0));
label_3c36e0:
    // 0x3c36e0: 0x32620010  andi        $v0, $s3, 0x10
    ctx->pc = 0x3c36e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
label_3c36e4:
    // 0x3c36e4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_3c36e8:
    if (ctx->pc == 0x3C36E8u) {
        ctx->pc = 0x3C36E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C36E4u;
        // 0x3c36e8: 0x8e42006c  lw          $v0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C36ECu;
        goto label_3c36ec;
    }
    ctx->pc = 0x3C36E4u;
    {
        const bool branch_taken_0x3c36e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c36e4) {
            ctx->pc = 0x3C36E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C36E4u;
            // 0x3c36e8: 0x8e42006c  lw          $v0, 0x6C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3724u;
            goto label_3c3724;
        }
    }
    ctx->pc = 0x3C36ECu;
label_3c36ec:
    // 0x3c36ec: 0xc0c0c5e  jal         func_303178
label_3c36f0:
    if (ctx->pc == 0x3C36F0u) {
        ctx->pc = 0x3C36F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C36ECu;
        // 0x3c36f0: 0x8e440060  lw          $a0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C36F4u;
        goto label_3c36f4;
    }
    ctx->pc = 0x3C36ECu;
    SET_GPR_U32(ctx, 31, 0x3C36F4u);
    ctx->pc = 0x3C36F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C36ECu;
    // 0x3c36f0: 0x8e440060  lw          $a0, 0x60($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303178u, 0x3C36ECu, 0x3C36F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C36F4u;
label_3c36f4:
    // 0x3c36f4: 0x36058000  ori         $a1, $s0, 0x8000
    ctx->pc = 0x3c36f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32768);
label_3c36f8:
    // 0x3c36f8: 0xc0c0bba  jal         func_302EE8
label_3c36fc:
    if (ctx->pc == 0x3C36FCu) {
        ctx->pc = 0x3C36FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C36F8u;
        // 0x3c36fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3700u;
        goto label_3c3700;
    }
    ctx->pc = 0x3C36F8u;
    SET_GPR_U32(ctx, 31, 0x3C3700u);
    ctx->pc = 0x3C36FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C36F8u;
    // 0x3c36fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EE8u, 0x3C36F8u, 0x3C3700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3700u;
label_3c3700:
    // 0x3c3700: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_3c3704:
    if (ctx->pc == 0x3C3704u) {
        ctx->pc = 0x3C3704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3700u;
        // 0x3c3704: 0xae420060  sw          $v0, 0x60($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3708u;
        goto label_3c3708;
    }
    ctx->pc = 0x3C3700u;
    {
        const bool branch_taken_0x3c3700 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3C3704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3700u;
        // 0x3c3704: 0xae420060  sw          $v0, 0x60($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3700) {
            ctx->pc = 0x3C3710u;
            goto label_3c3710;
        }
    }
    ctx->pc = 0x3C3708u;
label_3c3708:
    // 0x3c3708: 0x1000000e  b           . + 4 + (0xE << 2)
label_3c370c:
    if (ctx->pc == 0x3C370Cu) {
        ctx->pc = 0x3C370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3708u;
        // 0x3c370c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3710u;
        goto label_3c3710;
    }
    ctx->pc = 0x3C3708u;
    {
        const bool branch_taken_0x3c3708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3708u;
        // 0x3c370c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3708) {
            ctx->pc = 0x3C3744u;
            goto label_3c3744;
        }
    }
    ctx->pc = 0x3C3710u;
label_3c3710:
    // 0x3c3710: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c3710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c3714:
    // 0x3c3714: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c3714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c3718:
    // 0x3c3718: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x3c3718u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
label_3c371c:
    // 0x3c371c: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x3c371cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
label_3c3720:
    // 0x3c3720: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x3c3720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_3c3724:
    // 0x3c3724: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x3c3724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_3c3728:
    // 0x3c3728: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_3c372c:
    if (ctx->pc == 0x3C372Cu) {
        ctx->pc = 0x3C372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3728u;
        // 0x3c372c: 0xae420064  sw          $v0, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3730u;
        goto label_3c3730;
    }
    ctx->pc = 0x3C3728u;
    {
        const bool branch_taken_0x3c3728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3728u;
        // 0x3c372c: 0xae420064  sw          $v0, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3728) {
            ctx->pc = 0x3C3738u;
            goto label_3c3738;
        }
    }
    ctx->pc = 0x3C3730u;
label_3c3730:
    // 0x3c3730: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c3730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c3734:
    // 0x3c3734: 0xae420038  sw          $v0, 0x38($s2)
    ctx->pc = 0x3c3734u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
label_3c3738:
    // 0x3c3738: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c3738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c373c:
    // 0x3c373c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c373cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c3740:
    // 0x3c3740: 0xae43003c  sw          $v1, 0x3C($s2)
    ctx->pc = 0x3c3740u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 3));
label_3c3744:
    // 0x3c3744: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x3c3744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_3c3748:
    // 0x3c3748: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x3c3748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_3c374c:
    // 0x3c374c: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x3c374cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3c3750:
    // 0x3c3750: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x3c3750u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3c3754:
    // 0x3c3754: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x3c3754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_3c3758:
    // 0x3c3758: 0x3e00008  jr          $ra
label_3c375c:
    if (ctx->pc == 0x3C375Cu) {
        ctx->pc = 0x3C375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3758u;
        // 0x3c375c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3760u;
        goto label_fallthrough_0x3c3758;
    }
    ctx->pc = 0x3C3758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3758u;
        // 0x3c375c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c3758:
    ctx->pc = 0x3C3760u;
}
