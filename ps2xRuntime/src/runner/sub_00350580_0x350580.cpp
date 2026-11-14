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

// Function: sub_00350580
// Address: 0x350580 - 0x3506d0
void sub_00350580_0x350580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350580_0x350580");
#endif

    ctx->pc = 0x350580u;

    // 0x350580: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x350580u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350584: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x350584u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x350588: 0x37083  sra         $t6, $v1, 2
    ctx->pc = 0x350588u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 3), 2));
    // 0x35058c: 0x328c3  sra         $a1, $v1, 3
    ctx->pc = 0x35058cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 3));
    // 0x350590: 0x36943  sra         $t5, $v1, 5
    ctx->pc = 0x350590u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 3), 5));
    // 0x350594: 0x33983  sra         $a3, $v1, 6
    ctx->pc = 0x350594u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 6));
    // 0x350598: 0x349c3  sra         $t1, $v1, 7
    ctx->pc = 0x350598u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 7));
    // 0x35059c: 0x35a03  sra         $t3, $v1, 8
    ctx->pc = 0x35059cu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 3), 8));
    // 0x3505a0: 0x313c3  sra         $v0, $v1, 15
    ctx->pc = 0x3505a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 15));
    // 0x3505a4: 0x33443  sra         $a2, $v1, 17
    ctx->pc = 0x3505a4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 17));
    // 0x3505a8: 0x34483  sra         $t0, $v1, 18
    ctx->pc = 0x3505a8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 18));
    // 0x3505ac: 0x354c3  sra         $t2, $v1, 19
    ctx->pc = 0x3505acu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 19));
    // 0x3505b0: 0x36503  sra         $t4, $v1, 20
    ctx->pc = 0x3505b0u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 20));
    // 0x3505b4: 0x30780001  andi        $t8, $v1, 0x1
    ctx->pc = 0x3505b4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3505b8: 0x31ce0001  andi        $t6, $t6, 0x1
    ctx->pc = 0x3505b8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x3505bc: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3505bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3505c0: 0x31ad0001  andi        $t5, $t5, 0x1
    ctx->pc = 0x3505c0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x3505c4: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x3505c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x3505c8: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x3505c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x3505cc: 0x316b0001  andi        $t3, $t3, 0x1
    ctx->pc = 0x3505ccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x3505d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3505d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3505d4: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x3505d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x3505d8: 0x31080001  andi        $t0, $t0, 0x1
    ctx->pc = 0x3505d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x3505dc: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x3505dcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x3505e0: 0x14af0003  bne         $a1, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x3505E0u;
    {
        const bool branch_taken_0x3505e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 15));
        ctx->pc = 0x3505E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3505E0u;
        // 0x3505e4: 0x318c0001  andi        $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3505e0) {
            ctx->pc = 0x3505F0u;
            goto label_3505f0;
        }
    }
    ctx->pc = 0x3505E8u;
    // 0x3505e8: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x3505e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x3505ec: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x3505ecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_3505f0:
    // 0x3505f0: 0x15af0006  bne         $t5, $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x3505F0u;
    {
        const bool branch_taken_0x3505f0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x3505F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3505F0u;
        // 0x3505f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3505f0) {
            ctx->pc = 0x35060Cu;
            goto label_35060c;
        }
    }
    ctx->pc = 0x3505F8u;
    // 0x3505f8: 0x14cd0004  bne         $a2, $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x3505F8u;
    {
        const bool branch_taken_0x3505f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 13));
        if (branch_taken_0x3505f8) {
            ctx->pc = 0x35060Cu;
            goto label_35060c;
        }
    }
    ctx->pc = 0x350600u;
    // 0x350600: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x350600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x350604: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x350604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x350608: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x350608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35060c:
    // 0x35060c: 0x14e20006  bne         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35060Cu;
    {
        const bool branch_taken_0x35060c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x350610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35060Cu;
        // 0x350610: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35060c) {
            ctx->pc = 0x350628u;
            goto label_350628;
        }
    }
    ctx->pc = 0x350614u;
    // 0x350614: 0x15070004  bne         $t0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x350614u;
    {
        const bool branch_taken_0x350614 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x350614) {
            ctx->pc = 0x350628u;
            goto label_350628;
        }
    }
    ctx->pc = 0x35061Cu;
    // 0x35061c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x35061cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x350620: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x350620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x350624: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x350624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_350628:
    // 0x350628: 0x15220006  bne         $t1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x350628u;
    {
        const bool branch_taken_0x350628 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x35062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350628u;
        // 0x35062c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350628) {
            ctx->pc = 0x350644u;
            goto label_350644;
        }
    }
    ctx->pc = 0x350630u;
    // 0x350630: 0x15490004  bne         $t2, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x350630u;
    {
        const bool branch_taken_0x350630 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 9));
        if (branch_taken_0x350630) {
            ctx->pc = 0x350644u;
            goto label_350644;
        }
    }
    ctx->pc = 0x350638u;
    // 0x350638: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x350638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x35063c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x35063cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x350640: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x350640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_350644:
    // 0x350644: 0x15620006  bne         $t3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x350644u;
    {
        const bool branch_taken_0x350644 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        ctx->pc = 0x350648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350644u;
        // 0x350648: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350644) {
            ctx->pc = 0x350660u;
            goto label_350660;
        }
    }
    ctx->pc = 0x35064Cu;
    // 0x35064c: 0x158b0004  bne         $t4, $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x35064Cu;
    {
        const bool branch_taken_0x35064c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 11));
        if (branch_taken_0x35064c) {
            ctx->pc = 0x350660u;
            goto label_350660;
        }
    }
    ctx->pc = 0x350654u;
    // 0x350654: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x350654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x350658: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x350658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35065c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35065cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_350660:
    // 0x350660: 0x14a20010  bne         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x350660u;
    {
        const bool branch_taken_0x350660 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x350660) {
            ctx->pc = 0x3506A4u;
            goto label_3506a4;
        }
    }
    ctx->pc = 0x350668u;
    // 0x350668: 0x17050004  bne         $t8, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x350668u;
    {
        const bool branch_taken_0x350668 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 5));
        if (branch_taken_0x350668) {
            ctx->pc = 0x35067Cu;
            goto label_35067c;
        }
    }
    ctx->pc = 0x350670u;
    // 0x350670: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x350670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x350674: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x350674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x350678: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x350678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_35067c:
    // 0x35067c: 0x15c50004  bne         $t6, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35067Cu;
    {
        const bool branch_taken_0x35067c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 5));
        if (branch_taken_0x35067c) {
            ctx->pc = 0x350690u;
            goto label_350690;
        }
    }
    ctx->pc = 0x350684u;
    // 0x350684: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x350684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x350688: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x350688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x35068c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x35068cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_350690:
    // 0x350690: 0x15a50004  bne         $t5, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x350690u;
    {
        const bool branch_taken_0x350690 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 5));
        if (branch_taken_0x350690) {
            ctx->pc = 0x3506A4u;
            goto label_3506a4;
        }
    }
    ctx->pc = 0x350698u;
    // 0x350698: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x350698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x35069c: 0x3442ffdf  ori         $v0, $v0, 0xFFDF
    ctx->pc = 0x35069cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65503);
    // 0x3506a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3506a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3506a4:
    // 0x3506a4: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3506A4u;
    {
        const bool branch_taken_0x3506a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3506A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3506A4u;
        // 0x3506a8: 0x3c023000  lui         $v0, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3506a4) {
            ctx->pc = 0x3506B8u;
            goto label_3506b8;
        }
    }
    ctx->pc = 0x3506ACu;
    // 0x3506ac: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x3506acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3506b0: 0x58180a  movz        $v1, $v0, $t8
    ctx->pc = 0x3506b0u;
    if (GPR_U64(ctx, 24) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x3506b4: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x3506b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
label_3506b8:
    // 0x3506b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3506b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3506bc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3506BCu;
    {
        const bool branch_taken_0x3506bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3506C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3506BCu;
        // 0x3506c0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3506bc) {
            ctx->pc = 0x3506C8u;
            goto label_3506c8;
        }
    }
    ctx->pc = 0x3506C4u;
    // 0x3506c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3506c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3506c8:
    // 0x3506c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3506C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3506CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3506C8u;
        // 0x3506cc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3506C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3506D0u;
}
