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

// Function: sub_0033B418
// Address: 0x33b418 - 0x33b950
void sub_0033B418_0x33b418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B418_0x33b418");
#endif

    switch (ctx->pc) {
        case 0x33b450u: goto label_33b450;
        case 0x33b464u: goto label_33b464;
        case 0x33b478u: goto label_33b478;
        case 0x33b48cu: goto label_33b48c;
        case 0x33b76cu: goto label_33b76c;
        case 0x33b788u: goto label_33b788;
        case 0x33b928u: goto label_33b928;
        default: break;
    }

    ctx->pc = 0x33b418u;

    // 0x33b418: 0x27bdfc70  addiu       $sp, $sp, -0x390
    ctx->pc = 0x33b418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966384));
    // 0x33b41c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33b41cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b420: 0x7fb20360  sq          $s2, 0x360($sp)
    ctx->pc = 0x33b420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 18));
    // 0x33b424: 0x24060160  addiu       $a2, $zero, 0x160
    ctx->pc = 0x33b424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x33b428: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x33b428u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b42c: 0x7fb10370  sq          $s1, 0x370($sp)
    ctx->pc = 0x33b42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 17));
    // 0x33b430: 0x7fb30350  sq          $s3, 0x350($sp)
    ctx->pc = 0x33b430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 19));
    // 0x33b434: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x33b434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b438: 0x7fb40340  sq          $s4, 0x340($sp)
    ctx->pc = 0x33b438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 20));
    // 0x33b43c: 0x7fb50330  sq          $s5, 0x330($sp)
    ctx->pc = 0x33b43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 21));
    // 0x33b440: 0x7fb00380  sq          $s0, 0x380($sp)
    ctx->pc = 0x33b440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), GPR_VEC(ctx, 16));
    // 0x33b444: 0xffbf0320  sd          $ra, 0x320($sp)
    ctx->pc = 0x33b444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 800), GPR_U64(ctx, 31));
    // 0x33b448: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x33B448u;
    SET_GPR_U32(ctx, 31, 0x33B450u);
    ctx->pc = 0x33B44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B448u;
    // 0x33b44c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x33B448u, 0x33B450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B450u;
label_33b450:
    // 0x33b450: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x33b450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x33b454: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33b454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b458: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x33b458u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b45c: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x33B45Cu;
    SET_GPR_U32(ctx, 31, 0x33B464u);
    ctx->pc = 0x33B460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B45Cu;
    // 0x33b460: 0x240600b0  addiu       $a2, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x33B45Cu, 0x33B464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B464u;
label_33b464:
    // 0x33b464: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x33b464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x33b468: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33b468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b46c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x33b46cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b470: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x33B470u;
    SET_GPR_U32(ctx, 31, 0x33B478u);
    ctx->pc = 0x33B474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B470u;
    // 0x33b474: 0x240600b0  addiu       $a2, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x33B470u, 0x33B478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B478u;
label_33b478:
    // 0x33b478: 0x27a402f0  addiu       $a0, $sp, 0x2F0
    ctx->pc = 0x33b478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x33b47c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33b47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b480: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x33b480u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b484: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x33B484u;
    SET_GPR_U32(ctx, 31, 0x33B48Cu);
    ctx->pc = 0x33B488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B484u;
    // 0x33b488: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x33B484u, 0x33B48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B48Cu;
label_33b48c:
    // 0x33b48c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x33b48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x33b490: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x33b490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x33b494: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x33b494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x33b498: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x33b498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33b49c: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33B49Cu;
    {
        const bool branch_taken_0x33b49c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x33B4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B49Cu;
        // 0x33b4a0: 0x83102a  slt         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b49c) {
            ctx->pc = 0x33B4C4u;
            goto label_33b4c4;
        }
    }
    ctx->pc = 0x33B4A4u;
    // 0x33b4a4: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x33B4A4u;
    {
        const bool branch_taken_0x33b4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B4A4u;
        // 0x33b4a8: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b4a4) {
            ctx->pc = 0x33B57Cu;
            goto label_33b57c;
        }
    }
    ctx->pc = 0x33B4ACu;
    // 0x33b4ac: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x33B4ACu;
    {
        const bool branch_taken_0x33b4ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x33B4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B4ACu;
        // 0x33b4b0: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b4ac) {
            ctx->pc = 0x33B514u;
            goto label_33b514;
        }
    }
    ctx->pc = 0x33B4B4u;
    // 0x33b4b4: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x33B4B4u;
    {
        const bool branch_taken_0x33b4b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x33B4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B4B4u;
        // 0x33b4b8: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b4b4) {
            ctx->pc = 0x33B540u;
            goto label_33b540;
        }
    }
    ctx->pc = 0x33B4BCu;
    // 0x33b4bc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x33B4BCu;
    {
        const bool branch_taken_0x33b4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B4BCu;
        // 0x33b4c0: 0x8e4c0004  lw          $t4, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b4bc) {
            ctx->pc = 0x33B580u;
            goto label_33b580;
        }
    }
    ctx->pc = 0x33B4C4u;
label_33b4c4:
    // 0x33b4c4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x33b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x33b4c8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x33b4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x33b4cc: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33b4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33b4d0: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x33b4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x33b4d4: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x33b4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x33b4d8: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x33b4d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
    // 0x33b4dc: 0x244201f8  addiu       $v0, $v0, 0x1F8
    ctx->pc = 0x33b4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 504));
    // 0x33b4e0: 0x24630998  addiu       $v1, $v1, 0x998
    ctx->pc = 0x33b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2456));
    // 0x33b4e4: 0x24840ad0  addiu       $a0, $a0, 0xAD0
    ctx->pc = 0x33b4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2768));
    // 0x33b4e8: 0x24a50900  addiu       $a1, $a1, 0x900
    ctx->pc = 0x33b4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2304));
    // 0x33b4ec: 0x24c60c30  addiu       $a2, $a2, 0xC30
    ctx->pc = 0x33b4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3120));
    // 0x33b4f0: 0x24e70828  addiu       $a3, $a3, 0x828
    ctx->pc = 0x33b4f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2088));
    // 0x33b4f4: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x33b4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
    // 0x33b4f8: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x33b4f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33b4fc: 0xafa3025c  sw          $v1, 0x25C($sp)
    ctx->pc = 0x33b4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 3));
    // 0x33b500: 0xafa40260  sw          $a0, 0x260($sp)
    ctx->pc = 0x33b500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
    // 0x33b504: 0xafa50264  sw          $a1, 0x264($sp)
    ctx->pc = 0x33b504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 5));
    // 0x33b508: 0xafa60254  sw          $a2, 0x254($sp)
    ctx->pc = 0x33b508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 6));
    // 0x33b50c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x33B50Cu;
    {
        const bool branch_taken_0x33b50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B50Cu;
        // 0x33b510: 0xafa70268  sw          $a3, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b50c) {
            ctx->pc = 0x33B57Cu;
            goto label_33b57c;
        }
    }
    ctx->pc = 0x33B514u;
label_33b514:
    // 0x33b514: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x33b514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x33b518: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x33b518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x33b51c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33b51cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33b520: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x33b520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x33b524: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x33b524u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x33b528: 0x2442f360  addiu       $v0, $v0, -0xCA0
    ctx->pc = 0x33b528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964064));
    // 0x33b52c: 0x2463f9c8  addiu       $v1, $v1, -0x638
    ctx->pc = 0x33b52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965704));
    // 0x33b530: 0x2484fa88  addiu       $a0, $a0, -0x578
    ctx->pc = 0x33b530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965896));
    // 0x33b534: 0x24a5f970  addiu       $a1, $a1, -0x690
    ctx->pc = 0x33b534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965616));
    // 0x33b538: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x33B538u;
    {
        const bool branch_taken_0x33b538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B538u;
        // 0x33b53c: 0x24c6f8d0  addiu       $a2, $a2, -0x730 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b538) {
            ctx->pc = 0x33B564u;
            goto label_33b564;
        }
    }
    ctx->pc = 0x33B540u;
label_33b540:
    // 0x33b540: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x33b540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x33b544: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33b544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33b548: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x33b548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x33b54c: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x33b54cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x33b550: 0x2442fb40  addiu       $v0, $v0, -0x4C0
    ctx->pc = 0x33b550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966080));
    // 0x33b554: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x33b554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x33b558: 0x24840160  addiu       $a0, $a0, 0x160
    ctx->pc = 0x33b558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x33b55c: 0x24a50068  addiu       $a1, $a1, 0x68
    ctx->pc = 0x33b55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 104));
    // 0x33b560: 0x24c6ffd8  addiu       $a2, $a2, -0x28
    ctx->pc = 0x33b560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967256));
label_33b564:
    // 0x33b564: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x33b564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
    // 0x33b568: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x33b568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33b56c: 0xafa3025c  sw          $v1, 0x25C($sp)
    ctx->pc = 0x33b56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 3));
    // 0x33b570: 0xafa40260  sw          $a0, 0x260($sp)
    ctx->pc = 0x33b570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
    // 0x33b574: 0xafa50264  sw          $a1, 0x264($sp)
    ctx->pc = 0x33b574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 5));
    // 0x33b578: 0xafa60268  sw          $a2, 0x268($sp)
    ctx->pc = 0x33b578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 6));
label_33b57c:
    // 0x33b57c: 0x8e4c0004  lw          $t4, 0x4($s2)
    ctx->pc = 0x33b57cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_33b580:
    // 0x33b580: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x33b580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x33b584: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x33b584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x33b588: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x33b588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x33b58c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x33b58cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x33b590: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x33b590u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x33b594: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x33b594u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
    // 0x33b598: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x33b598u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
    // 0x33b59c: 0x3c090035  lui         $t1, 0x35
    ctx->pc = 0x33b59cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)53 << 16));
    // 0x33b5a0: 0x3c0a0035  lui         $t2, 0x35
    ctx->pc = 0x33b5a0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)53 << 16));
    // 0x33b5a4: 0x3c0b0034  lui         $t3, 0x34
    ctx->pc = 0x33b5a4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)52 << 16));
    // 0x33b5a8: 0x24428c58  addiu       $v0, $v0, -0x73A8
    ctx->pc = 0x33b5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937688));
    // 0x33b5ac: 0x24638cf8  addiu       $v1, $v1, -0x7308
    ctx->pc = 0x33b5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937848));
    // 0x33b5b0: 0x2484cc70  addiu       $a0, $a0, -0x3390
    ctx->pc = 0x33b5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954096));
    // 0x33b5b4: 0x24a58d60  addiu       $a1, $a1, -0x72A0
    ctx->pc = 0x33b5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937952));
    // 0x33b5b8: 0x24c68e68  addiu       $a2, $a2, -0x7198
    ctx->pc = 0x33b5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938216));
    // 0x33b5bc: 0x24e78f18  addiu       $a3, $a3, -0x70E8
    ctx->pc = 0x33b5bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294938392));
    // 0x33b5c0: 0x250883b0  addiu       $t0, $t0, -0x7C50
    ctx->pc = 0x33b5c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935472));
    // 0x33b5c4: 0x25298810  addiu       $t1, $t1, -0x77F0
    ctx->pc = 0x33b5c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294936592));
    // 0x33b5c8: 0x254a8f88  addiu       $t2, $t2, -0x7078
    ctx->pc = 0x33b5c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294938504));
    // 0x33b5cc: 0x256b7bc8  addiu       $t3, $t3, 0x7BC8
    ctx->pc = 0x33b5ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 31688));
    // 0x33b5d0: 0xafa20304  sw          $v0, 0x304($sp)
    ctx->pc = 0x33b5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 772), GPR_U32(ctx, 2));
    // 0x33b5d4: 0xafa30308  sw          $v1, 0x308($sp)
    ctx->pc = 0x33b5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 776), GPR_U32(ctx, 3));
    // 0x33b5d8: 0x318c0100  andi        $t4, $t4, 0x100
    ctx->pc = 0x33b5d8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)256);
    // 0x33b5dc: 0xafa402f0  sw          $a0, 0x2F0($sp)
    ctx->pc = 0x33b5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 4));
    // 0x33b5e0: 0xafa502f4  sw          $a1, 0x2F4($sp)
    ctx->pc = 0x33b5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 5));
    // 0x33b5e4: 0xafa602f8  sw          $a2, 0x2F8($sp)
    ctx->pc = 0x33b5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 760), GPR_U32(ctx, 6));
    // 0x33b5e8: 0xafa702fc  sw          $a3, 0x2FC($sp)
    ctx->pc = 0x33b5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 764), GPR_U32(ctx, 7));
    // 0x33b5ec: 0xafa8030c  sw          $t0, 0x30C($sp)
    ctx->pc = 0x33b5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 780), GPR_U32(ctx, 8));
    // 0x33b5f0: 0xafa90310  sw          $t1, 0x310($sp)
    ctx->pc = 0x33b5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 784), GPR_U32(ctx, 9));
    // 0x33b5f4: 0xafaa0314  sw          $t2, 0x314($sp)
    ctx->pc = 0x33b5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 788), GPR_U32(ctx, 10));
    // 0x33b5f8: 0x11800019  beqz        $t4, . + 4 + (0x19 << 2)
    ctx->pc = 0x33B5F8u;
    {
        const bool branch_taken_0x33b5f8 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B5F8u;
        // 0x33b5fc: 0xafab0318  sw          $t3, 0x318($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 792), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b5f8) {
            ctx->pc = 0x33B660u;
            goto label_33b660;
        }
    }
    ctx->pc = 0x33B600u;
    // 0x33b600: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x33b600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x33b604: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x33b604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x33b608: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x33b608u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33b60c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33b60cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33b610: 0x2484c390  addiu       $a0, $a0, -0x3C70
    ctx->pc = 0x33b610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951824));
    // 0x33b614: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x33b614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x33b618: 0x24a5c630  addiu       $a1, $a1, -0x39D0
    ctx->pc = 0x33b618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952496));
    // 0x33b61c: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x33b61cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x33b620: 0x24c6c6c8  addiu       $a2, $a2, -0x3938
    ctx->pc = 0x33b620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952648));
    // 0x33b624: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x33b624u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
    // 0x33b628: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x33b628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x33b62c: 0x3a34021  addu        $t0, $sp, $v1
    ctx->pc = 0x33b62cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x33b630: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x33b630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x33b634: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x33b634u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b638: 0xad05025c  sw          $a1, 0x25C($t0)
    ctx->pc = 0x33b638u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 604), GPR_U32(ctx, 5));
    // 0x33b63c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x33b63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b640: 0xad260260  sw          $a2, 0x260($t1)
    ctx->pc = 0x33b640u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 608), GPR_U32(ctx, 6));
    // 0x33b644: 0x24e7c5d8  addiu       $a3, $a3, -0x3A28
    ctx->pc = 0x33b644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952408));
    // 0x33b648: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x33b648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x33b64c: 0xac870264  sw          $a3, 0x264($a0)
    ctx->pc = 0x33b64cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 612), GPR_U32(ctx, 7));
    // 0x33b650: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x33b650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b654: 0x2442c530  addiu       $v0, $v0, -0x3AD0
    ctx->pc = 0x33b654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952240));
    // 0x33b658: 0xaca20268  sw          $v0, 0x268($a1)
    ctx->pc = 0x33b658u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 616), GPR_U32(ctx, 2));
    // 0x33b65c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x33b65cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_33b660:
    // 0x33b660: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x33b660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x33b664: 0x30421600  andi        $v0, $v0, 0x1600
    ctx->pc = 0x33b664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)5632);
    // 0x33b668: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x33B668u;
    {
        const bool branch_taken_0x33b668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B668u;
        // 0x33b66c: 0x2624ffff  addiu       $a0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b668) {
            ctx->pc = 0x33B6DCu;
            goto label_33b6dc;
        }
    }
    ctx->pc = 0x33B670u;
    // 0x33b670: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x33b670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x33b674: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x33b674u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x33b678: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x33b678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x33b67c: 0x2463ca68  addiu       $v1, $v1, -0x3598
    ctx->pc = 0x33b67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953576));
    // 0x33b680: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x33b680u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x33b684: 0x24a5e1e8  addiu       $a1, $a1, -0x1E18
    ctx->pc = 0x33b684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959592));
    // 0x33b688: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x33b688u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x33b68c: 0x24c6e6c8  addiu       $a2, $a2, -0x1938
    ctx->pc = 0x33b68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960840));
    // 0x33b690: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x33b690u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
    // 0x33b694: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x33b694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x33b698: 0x3a44021  addu        $t0, $sp, $a0
    ctx->pc = 0x33b698u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x33b69c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x33b69cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x33b6a0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x33b6a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b6a4: 0xad05025c  sw          $a1, 0x25C($t0)
    ctx->pc = 0x33b6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 604), GPR_U32(ctx, 5));
    // 0x33b6a8: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x33b6a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b6ac: 0xad260260  sw          $a2, 0x260($t1)
    ctx->pc = 0x33b6acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 608), GPR_U32(ctx, 6));
    // 0x33b6b0: 0x24e7e5f8  addiu       $a3, $a3, -0x1A08
    ctx->pc = 0x33b6b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960632));
    // 0x33b6b4: 0xac470264  sw          $a3, 0x264($v0)
    ctx->pc = 0x33b6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 612), GPR_U32(ctx, 7));
    // 0x33b6b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x33b6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b6bc: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x33b6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x33b6c0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x33b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x33b6c4: 0x2463e3b8  addiu       $v1, $v1, -0x1C48
    ctx->pc = 0x33b6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960056));
    // 0x33b6c8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x33b6c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b6cc: 0xaca30254  sw          $v1, 0x254($a1)
    ctx->pc = 0x33b6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 596), GPR_U32(ctx, 3));
    // 0x33b6d0: 0x2442e090  addiu       $v0, $v0, -0x1F70
    ctx->pc = 0x33b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959248));
    // 0x33b6d4: 0xacc20268  sw          $v0, 0x268($a2)
    ctx->pc = 0x33b6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 616), GPR_U32(ctx, 2));
    // 0x33b6d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x33b6d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_33b6dc:
    // 0x33b6dc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x33b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x33b6e0: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x33b6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x33b6e4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x33B6E4u;
    {
        const bool branch_taken_0x33b6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B6E4u;
        // 0x33b6e8: 0x2624ffff  addiu       $a0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b6e4) {
            ctx->pc = 0x33B758u;
            goto label_33b758;
        }
    }
    ctx->pc = 0x33B6ECu;
    // 0x33b6ec: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x33b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x33b6f0: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x33b6f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x33b6f4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x33b6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x33b6f8: 0x2463e938  addiu       $v1, $v1, -0x16C8
    ctx->pc = 0x33b6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961464));
    // 0x33b6fc: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x33b6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x33b700: 0x24a5f138  addiu       $a1, $a1, -0xEC8
    ctx->pc = 0x33b700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963512));
    // 0x33b704: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x33b704u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x33b708: 0x24c6f1f0  addiu       $a2, $a2, -0xE10
    ctx->pc = 0x33b708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963696));
    // 0x33b70c: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x33b70cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
    // 0x33b710: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x33b710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x33b714: 0x3a44021  addu        $t0, $sp, $a0
    ctx->pc = 0x33b714u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x33b718: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x33b718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x33b71c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x33b71cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b720: 0xad05025c  sw          $a1, 0x25C($t0)
    ctx->pc = 0x33b720u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 604), GPR_U32(ctx, 5));
    // 0x33b724: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x33b724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b728: 0xad260260  sw          $a2, 0x260($t1)
    ctx->pc = 0x33b728u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 608), GPR_U32(ctx, 6));
    // 0x33b72c: 0x24e7f0c8  addiu       $a3, $a3, -0xF38
    ctx->pc = 0x33b72cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963400));
    // 0x33b730: 0xac470264  sw          $a3, 0x264($v0)
    ctx->pc = 0x33b730u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 612), GPR_U32(ctx, 7));
    // 0x33b734: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x33b734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b738: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x33b738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x33b73c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x33b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x33b740: 0x2463f278  addiu       $v1, $v1, -0xD88
    ctx->pc = 0x33b740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963832));
    // 0x33b744: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x33b744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b748: 0xaca30254  sw          $v1, 0x254($a1)
    ctx->pc = 0x33b748u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 596), GPR_U32(ctx, 3));
    // 0x33b74c: 0x2442f030  addiu       $v0, $v0, -0xFD0
    ctx->pc = 0x33b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963248));
    // 0x33b750: 0xacc20268  sw          $v0, 0x268($a2)
    ctx->pc = 0x33b750u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 616), GPR_U32(ctx, 2));
    // 0x33b754: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x33b754u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_33b758:
    // 0x33b758: 0x27b00160  addiu       $s0, $sp, 0x160
    ctx->pc = 0x33b758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x33b75c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33b75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33b760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b764: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x33B764u;
    SET_GPR_U32(ctx, 31, 0x33B76Cu);
    ctx->pc = 0x33B768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B764u;
    // 0x33b768: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x33B764u, 0x33B76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B76Cu;
label_33b76c:
    // 0x33b76c: 0x2a0702d  daddu       $t6, $s5, $zero
    ctx->pc = 0x33b76cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b770: 0x280682d  daddu       $t5, $s4, $zero
    ctx->pc = 0x33b770u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b774: 0x260602d  daddu       $t4, $s3, $zero
    ctx->pc = 0x33b774u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b778: 0x240a002c  addiu       $t2, $zero, 0x2C
    ctx->pc = 0x33b778u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x33b77c: 0x200782d  daddu       $t7, $s0, $zero
    ctx->pc = 0x33b77cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b780: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33b780u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b784: 0x39880  sll         $s3, $v1, 2
    ctx->pc = 0x33b784u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33b788:
    // 0x33b788: 0x246b0001  addiu       $t3, $v1, 0x1
    ctx->pc = 0x33b788u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33b78c: 0x26e1021  addu        $v0, $s3, $t6
    ctx->pc = 0x33b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 14)));
    // 0x33b790: 0x2133821  addu        $a3, $s0, $s3
    ctx->pc = 0x33b790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x33b794: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x33b794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33b798: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x33B798u;
    {
        const bool branch_taken_0x33b798 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B798u;
        // 0x33b79c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b798) {
            ctx->pc = 0x33B7C0u;
            goto label_33b7c0;
        }
    }
    ctx->pc = 0x33B7A0u;
    // 0x33b7a0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x33b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33b7a4: 0x4a1818  mult        $v1, $v0, $t2
    ctx->pc = 0x33b7a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33b7a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33b7ac: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x33b7acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x33b7b0: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x33b7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x33b7b4: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x33b7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x33b7b8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x33b7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x33b7bc: 0x0  nop
    ctx->pc = 0x33b7bcu;
    // NOP
label_33b7c0:
    // 0x33b7c0: 0x8cc5002c  lw          $a1, 0x2C($a2)
    ctx->pc = 0x33b7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x33b7c4: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x33B7C4u;
    {
        const bool branch_taken_0x33b7c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b7c4) {
            ctx->pc = 0x33B7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B7C4u;
            // 0x33b7c8: 0x8cc50058  lw          $a1, 0x58($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B7ECu;
            goto label_33b7ec;
        }
    }
    ctx->pc = 0x33B7CCu;
    // 0x33b7cc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x33b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33b7d0: 0x4a1818  mult        $v1, $v0, $t2
    ctx->pc = 0x33b7d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33b7d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33b7d8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x33b7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x33b7dc: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x33b7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x33b7e0: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x33b7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x33b7e4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x33b7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x33b7e8: 0x8cc50058  lw          $a1, 0x58($a2)
    ctx->pc = 0x33b7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
label_33b7ec:
    // 0x33b7ec: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x33B7ECu;
    {
        const bool branch_taken_0x33b7ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b7ec) {
            ctx->pc = 0x33B7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B7ECu;
            // 0x33b7f0: 0x8cc50084  lw          $a1, 0x84($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B814u;
            goto label_33b814;
        }
    }
    ctx->pc = 0x33B7F4u;
    // 0x33b7f4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x33b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33b7f8: 0x4a1818  mult        $v1, $v0, $t2
    ctx->pc = 0x33b7f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33b7fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33b7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33b800: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x33b800u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x33b804: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x33b804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x33b808: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x33b808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x33b80c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x33b80cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x33b810: 0x8cc50084  lw          $a1, 0x84($a2)
    ctx->pc = 0x33b810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 132)));
label_33b814:
    // 0x33b814: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x33B814u;
    {
        const bool branch_taken_0x33b814 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b814) {
            ctx->pc = 0x33B818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B814u;
            // 0x33b818: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B83Cu;
            goto label_33b83c;
        }
    }
    ctx->pc = 0x33B81Cu;
    // 0x33b81c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x33b81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33b820: 0x4a1818  mult        $v1, $v0, $t2
    ctx->pc = 0x33b820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33b824: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33b824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33b828: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x33b828u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x33b82c: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x33b82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x33b830: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x33b830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x33b834: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x33b834u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x33b838: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x33b838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_33b83c:
    // 0x33b83c: 0x1b31021  addu        $v0, $t5, $s3
    ctx->pc = 0x33b83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 19)));
    // 0x33b840: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x33b840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33b844: 0x26c2021  addu        $a0, $s3, $t4
    ctx->pc = 0x33b844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 12)));
    // 0x33b848: 0x6a1018  mult        $v0, $v1, $t2
    ctx->pc = 0x33b848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33b84c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x33b84cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b850: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33b850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33b854: 0x2409002c  addiu       $t1, $zero, 0x2C
    ctx->pc = 0x33b854u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x33b858: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x33b858u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x33b85c: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x33b85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x33b860: 0x3a51021  addu        $v0, $sp, $a1
    ctx->pc = 0x33b860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x33b864: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x33b864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x33b868: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x33b868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33b86c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x33B86Cu;
    {
        const bool branch_taken_0x33b86c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B86Cu;
        // 0x33b870: 0x1f33821  addu        $a3, $t7, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b86c) {
            ctx->pc = 0x33B890u;
            goto label_33b890;
        }
    }
    ctx->pc = 0x33B874u;
    // 0x33b874: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x33b874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33b878: 0x491818  mult        $v1, $v0, $t1
    ctx->pc = 0x33b878u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33b87c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33b87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33b880: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x33b880u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x33b884: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x33b884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x33b888: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x33b888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x33b88c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x33b88cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_33b890:
    // 0x33b890: 0x8d05002c  lw          $a1, 0x2C($t0)
    ctx->pc = 0x33b890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x33b894: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x33B894u;
    {
        const bool branch_taken_0x33b894 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b894) {
            ctx->pc = 0x33B898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B894u;
            // 0x33b898: 0x8d050058  lw          $a1, 0x58($t0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B8BCu;
            goto label_33b8bc;
        }
    }
    ctx->pc = 0x33B89Cu;
    // 0x33b89c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x33b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33b8a0: 0x491818  mult        $v1, $v0, $t1
    ctx->pc = 0x33b8a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33b8a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33b8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33b8a8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x33b8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x33b8ac: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x33b8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x33b8b0: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x33b8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x33b8b4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x33b8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x33b8b8: 0x8d050058  lw          $a1, 0x58($t0)
    ctx->pc = 0x33b8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
label_33b8bc:
    // 0x33b8bc: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x33B8BCu;
    {
        const bool branch_taken_0x33b8bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b8bc) {
            ctx->pc = 0x33B8C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B8BCu;
            // 0x33b8c0: 0x8d050084  lw          $a1, 0x84($t0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B8E4u;
            goto label_33b8e4;
        }
    }
    ctx->pc = 0x33B8C4u;
    // 0x33b8c4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x33b8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33b8c8: 0x491818  mult        $v1, $v0, $t1
    ctx->pc = 0x33b8c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33b8cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33b8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33b8d0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x33b8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x33b8d4: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x33b8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x33b8d8: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x33b8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x33b8dc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x33b8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x33b8e0: 0x8d050084  lw          $a1, 0x84($t0)
    ctx->pc = 0x33b8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 132)));
label_33b8e4:
    // 0x33b8e4: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x33B8E4u;
    {
        const bool branch_taken_0x33b8e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B8E4u;
        // 0x33b8e8: 0x160182d  daddu       $v1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b8e4) {
            ctx->pc = 0x33B90Cu;
            goto label_33b90c;
        }
    }
    ctx->pc = 0x33B8ECu;
    // 0x33b8ec: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x33b8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33b8f0: 0x491818  mult        $v1, $v0, $t1
    ctx->pc = 0x33b8f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33b8f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33b8f8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x33b8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x33b8fc: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x33b8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x33b900: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x33b900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x33b904: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x33b904u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x33b908: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x33b908u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_33b90c:
    // 0x33b90c: 0x2862000b  slti        $v0, $v1, 0xB
    ctx->pc = 0x33b90cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x33b910: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x33B910u;
    {
        const bool branch_taken_0x33b910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B910u;
        // 0x33b914: 0x39880  sll         $s3, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b910) {
            ctx->pc = 0x33B788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b788;
        }
    }
    ctx->pc = 0x33B918u;
    // 0x33b918: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33b918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b91c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33b91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b920: 0xc0d042c  jal         func_3410B0
    ctx->pc = 0x33B920u;
    SET_GPR_U32(ctx, 31, 0x33B928u);
    ctx->pc = 0x33B924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B920u;
    // 0x33b924: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3410B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3410B0u, 0x33B920u, 0x33B928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B928u;
label_33b928:
    // 0x33b928: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x33b928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b92c: 0x7bb00380  lq          $s0, 0x380($sp)
    ctx->pc = 0x33b92cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x33b930: 0x7bb10370  lq          $s1, 0x370($sp)
    ctx->pc = 0x33b930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x33b934: 0x7bb20360  lq          $s2, 0x360($sp)
    ctx->pc = 0x33b934u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x33b938: 0x7bb30350  lq          $s3, 0x350($sp)
    ctx->pc = 0x33b938u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x33b93c: 0x7bb40340  lq          $s4, 0x340($sp)
    ctx->pc = 0x33b93cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x33b940: 0x7bb50330  lq          $s5, 0x330($sp)
    ctx->pc = 0x33b940u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x33b944: 0xdfbf0320  ld          $ra, 0x320($sp)
    ctx->pc = 0x33b944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x33b948: 0x3e00008  jr          $ra
    ctx->pc = 0x33B948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B948u;
        // 0x33b94c: 0x27bd0390  addiu       $sp, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B950u;
}
