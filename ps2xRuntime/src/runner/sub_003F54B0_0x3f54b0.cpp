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

// Function: sub_003F54B0
// Address: 0x3f54b0 - 0x3f5998
void sub_003F54B0_0x3f54b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F54B0_0x3f54b0");
#endif

    switch (ctx->pc) {
        case 0x3f54f4u: goto label_3f54f4;
        case 0x3f551cu: goto label_3f551c;
        case 0x3f5530u: goto label_3f5530;
        case 0x3f5548u: goto label_3f5548;
        case 0x3f5558u: goto label_3f5558;
        case 0x3f5564u: goto label_3f5564;
        case 0x3f557cu: goto label_3f557c;
        case 0x3f558cu: goto label_3f558c;
        case 0x3f5594u: goto label_3f5594;
        case 0x3f55ecu: goto label_3f55ec;
        case 0x3f5600u: goto label_3f5600;
        case 0x3f5618u: goto label_3f5618;
        case 0x3f5628u: goto label_3f5628;
        case 0x3f5668u: goto label_3f5668;
        case 0x3f5680u: goto label_3f5680;
        case 0x3f5698u: goto label_3f5698;
        case 0x3f56a8u: goto label_3f56a8;
        case 0x3f5700u: goto label_3f5700;
        case 0x3f5718u: goto label_3f5718;
        case 0x3f5730u: goto label_3f5730;
        case 0x3f5740u: goto label_3f5740;
        case 0x3f5764u: goto label_3f5764;
        case 0x3f5774u: goto label_3f5774;
        case 0x3f577cu: goto label_3f577c;
        case 0x3f57c4u: goto label_3f57c4;
        case 0x3f57d8u: goto label_3f57d8;
        case 0x3f57ecu: goto label_3f57ec;
        case 0x3f57fcu: goto label_3f57fc;
        case 0x3f5804u: goto label_3f5804;
        case 0x3f584cu: goto label_3f584c;
        case 0x3f5860u: goto label_3f5860;
        case 0x3f58a8u: goto label_3f58a8;
        case 0x3f5974u: goto label_3f5974;
        default: break;
    }

    ctx->pc = 0x3f54b0u;

    // 0x3f54b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3f54b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3f54b4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3f54b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3f54b8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3f54b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3f54bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3f54bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f54c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f54c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3f54c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f54c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f54c8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3f54c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3f54cc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3f54ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3f54d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f54d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f54d4: 0xde4400f8  ld          $a0, 0xF8($s2)
    ctx->pc = 0x3f54d4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x3f54d8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3f54d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3f54dc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F54DCu;
    {
        const bool branch_taken_0x3f54dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F54E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F54DCu;
        // 0x3f54e0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f54dc) {
            ctx->pc = 0x3F54FCu;
            goto label_3f54fc;
        }
    }
    ctx->pc = 0x3F54E4u;
    // 0x3f54e4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f54e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f54e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f54e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f54ec: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3F54ECu;
    SET_GPR_U32(ctx, 31, 0x3F54F4u);
    ctx->pc = 0x3F54F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F54ECu;
    // 0x3f54f0: 0x24a5f1b8  addiu       $a1, $a1, -0xE48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3F54ECu, 0x3F54F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F54F4u;
label_3f54f4:
    // 0x3f54f4: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x3F54F4u;
    {
        const bool branch_taken_0x3f54f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F54F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F54F4u;
        // 0x3f54f8: 0x9243020a  lbu         $v1, 0x20A($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 522)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f54f4) {
            ctx->pc = 0x3F56C0u;
            goto label_3f56c0;
        }
    }
    ctx->pc = 0x3F54FCu;
label_3f54fc:
    // 0x3f54fc: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x3f54fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x3f5500: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3F5500u;
    {
        const bool branch_taken_0x3f5500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5500u;
        // 0x3f5504: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5500) {
            ctx->pc = 0x3F55C0u;
            goto label_3f55c0;
        }
    }
    ctx->pc = 0x3F5508u;
    // 0x3f5508: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f550c: 0x11983c  dsll32      $s3, $s1, 0
    ctx->pc = 0x3f550cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3f5510: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f5510u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f5514: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F5514u;
    SET_GPR_U32(ctx, 31, 0x3F551Cu);
    ctx->pc = 0x3F5518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5514u;
    // 0x3f5518: 0x24a5f1d8  addiu       $a1, $a1, -0xE28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F5514u, 0x3F551Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F551Cu;
label_3f551c:
    // 0x3f551c: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f551cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f5520: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f5520u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f5524: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3F5524u;
    {
        const bool branch_taken_0x3f5524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5524) {
            ctx->pc = 0x3F5564u;
            goto label_3f5564;
        }
    }
    ctx->pc = 0x3F552Cu;
    // 0x3f552c: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f552cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_3f5530:
    // 0x3f5530: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5534: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f5534u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f5538: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f5538u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f553c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f553cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5540: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F5540u;
    SET_GPR_U32(ctx, 31, 0x3F5548u);
    ctx->pc = 0x3F5544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5540u;
    // 0x3f5544: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F5540u, 0x3F5548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5548u;
label_3f5548:
    // 0x3f5548: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f5548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f554c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f554cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5550: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F5550u;
    SET_GPR_U32(ctx, 31, 0x3F5558u);
    ctx->pc = 0x3F5554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5550u;
    // 0x3f5554: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F5550u, 0x3F5558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5558u;
label_3f5558:
    // 0x3f5558: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f5558u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f555c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F555Cu;
    {
        const bool branch_taken_0x3f555c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f555c) {
            ctx->pc = 0x3F5560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F555Cu;
            // 0x3f5560: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F5530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f5530;
        }
    }
    ctx->pc = 0x3F5564u;
label_3f5564:
    // 0x3f5564: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F5564u;
    {
        const bool branch_taken_0x3f5564 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5564u;
        // 0x3f5568: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5564) {
            ctx->pc = 0x3F558Cu;
            goto label_3f558c;
        }
    }
    ctx->pc = 0x3F556Cu;
    // 0x3f556c: 0x8e500158  lw          $s0, 0x158($s2)
    ctx->pc = 0x3f556cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f5570: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f5570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5574: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F5574u;
    SET_GPR_U32(ctx, 31, 0x3F557Cu);
    ctx->pc = 0x3F5578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5574u;
    // 0x3f5578: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F5574u, 0x3F557Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F557Cu;
label_3f557c:
    // 0x3f557c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f557cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5580: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f5580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5584: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F5584u;
    SET_GPR_U32(ctx, 31, 0x3F558Cu);
    ctx->pc = 0x3F5588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5584u;
    // 0x3f5588: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F5584u, 0x3F558Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F558Cu;
label_3f558c:
    // 0x3f558c: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F558Cu;
    SET_GPR_U32(ctx, 31, 0x3F5594u);
    ctx->pc = 0x3F5590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F558Cu;
    // 0x3f5590: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F558Cu, 0x3F5594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5594u;
label_3f5594:
    // 0x3f5594: 0x104000f8  beqz        $v0, . + 4 + (0xF8 << 2)
    ctx->pc = 0x3F5594u;
    {
        const bool branch_taken_0x3f5594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5594u;
        // 0x3f5598: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5594) {
            ctx->pc = 0x3F5978u;
            goto label_3f5978;
        }
    }
    ctx->pc = 0x3F559Cu;
    // 0x3f559c: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f559cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f55a0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f55a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f55a4: 0x1440007b  bnez        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x3F55A4u;
    {
        const bool branch_taken_0x3f55a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F55A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F55A4u;
        // 0x3f55a8: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f55a4) {
            ctx->pc = 0x3F5794u;
            goto label_3f5794;
        }
    }
    ctx->pc = 0x3F55ACu;
    // 0x3f55ac: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f55acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f55b0: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x3F55B0u;
    {
        const bool branch_taken_0x3f55b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F55B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F55B0u;
        // 0x3f55b4: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f55b0) {
            ctx->pc = 0x3F57B8u;
            goto label_3f57b8;
        }
    }
    ctx->pc = 0x3F55B8u;
    // 0x3f55b8: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x3F55B8u;
    {
        const bool branch_taken_0x3f55b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F55BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F55B8u;
        // 0x3f55bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f55b8) {
            ctx->pc = 0x3F57D0u;
            goto label_3f57d0;
        }
    }
    ctx->pc = 0x3F55C0u;
label_3f55c0:
    // 0x3f55c0: 0x9243020a  lbu         $v1, 0x20A($s2)
    ctx->pc = 0x3f55c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 522)));
    // 0x3f55c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3f55c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f55c8: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3F55C8u;
    {
        const bool branch_taken_0x3f55c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F55CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F55C8u;
        // 0x3f55cc: 0x30820002  andi        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f55c8) {
            ctx->pc = 0x3F563Cu;
            goto label_3f563c;
        }
    }
    ctx->pc = 0x3F55D0u;
    // 0x3f55d0: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3F55D0u;
    {
        const bool branch_taken_0x3f55d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F55D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F55D0u;
        // 0x3f55d4: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f55d0) {
            ctx->pc = 0x3F563Cu;
            goto label_3f563c;
        }
    }
    ctx->pc = 0x3F55D8u;
    // 0x3f55d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f55d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f55dc: 0x11983c  dsll32      $s3, $s1, 0
    ctx->pc = 0x3f55dcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3f55e0: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f55e0u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f55e4: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F55E4u;
    SET_GPR_U32(ctx, 31, 0x3F55ECu);
    ctx->pc = 0x3F55E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F55E4u;
    // 0x3f55e8: 0x24a5f1f0  addiu       $a1, $a1, -0xE10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F55E4u, 0x3F55ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F55ECu;
label_3f55ec:
    // 0x3f55ec: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f55ecu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f55f0: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f55f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f55f4: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x3F55F4u;
    {
        const bool branch_taken_0x3f55f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f55f4) {
            ctx->pc = 0x3F5564u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f5564;
        }
    }
    ctx->pc = 0x3F55FCu;
    // 0x3f55fc: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f55fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_3f5600:
    // 0x3f5600: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5604: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f5604u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f5608: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f5608u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f560c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f560cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5610: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F5610u;
    SET_GPR_U32(ctx, 31, 0x3F5618u);
    ctx->pc = 0x3F5614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5610u;
    // 0x3f5614: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F5610u, 0x3F5618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5618u;
label_3f5618:
    // 0x3f5618: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f5618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f561c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f561cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5620: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F5620u;
    SET_GPR_U32(ctx, 31, 0x3F5628u);
    ctx->pc = 0x3F5624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5620u;
    // 0x3f5624: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F5620u, 0x3F5628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5628u;
label_3f5628:
    // 0x3f5628: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f5628u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f562c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F562Cu;
    {
        const bool branch_taken_0x3f562c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f562c) {
            ctx->pc = 0x3F5630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F562Cu;
            // 0x3f5630: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F5600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f5600;
        }
    }
    ctx->pc = 0x3F5634u;
    // 0x3f5634: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
    ctx->pc = 0x3F5634u;
    {
        const bool branch_taken_0x3f5634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5634) {
            ctx->pc = 0x3F5564u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f5564;
        }
    }
    ctx->pc = 0x3F563Cu;
label_3f563c:
    // 0x3f563c: 0x52600020  beql        $s3, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x3F563Cu;
    {
        const bool branch_taken_0x3f563c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f563c) {
            ctx->pc = 0x3F5640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F563Cu;
            // 0x3f5640: 0x9243020a  lbu         $v1, 0x20A($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 522)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F56C0u;
            goto label_3f56c0;
        }
    }
    ctx->pc = 0x3F5644u;
    // 0x3f5644: 0xde620010  ld          $v0, 0x10($s3)
    ctx->pc = 0x3f5644u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x3f5648: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f5648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f564c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3F564Cu;
    {
        const bool branch_taken_0x3f564c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F564Cu;
        // 0x3f5650: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f564c) {
            ctx->pc = 0x3F56BCu;
            goto label_3f56bc;
        }
    }
    ctx->pc = 0x3F5654u;
    // 0x3f5654: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5658: 0x11983c  dsll32      $s3, $s1, 0
    ctx->pc = 0x3f5658u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3f565c: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f565cu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f5660: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F5660u;
    SET_GPR_U32(ctx, 31, 0x3F5668u);
    ctx->pc = 0x3F5664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5660u;
    // 0x3f5664: 0x24a5f210  addiu       $a1, $a1, -0xDF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F5660u, 0x3F5668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5668u;
label_3f5668:
    // 0x3f5668: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f5668u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f566c: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f566cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f5670: 0x1040ffbc  beqz        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x3F5670u;
    {
        const bool branch_taken_0x3f5670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5670) {
            ctx->pc = 0x3F5564u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f5564;
        }
    }
    ctx->pc = 0x3F5678u;
    // 0x3f5678: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f5678u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f567c: 0x0  nop
    ctx->pc = 0x3f567cu;
    // NOP
label_3f5680:
    // 0x3f5680: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5684: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f5684u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f5688: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f5688u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f568c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f568cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5690: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F5690u;
    SET_GPR_U32(ctx, 31, 0x3F5698u);
    ctx->pc = 0x3F5694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5690u;
    // 0x3f5694: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F5690u, 0x3F5698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5698u;
label_3f5698:
    // 0x3f5698: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f5698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f569c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f569cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f56a0: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F56A0u;
    SET_GPR_U32(ctx, 31, 0x3F56A8u);
    ctx->pc = 0x3F56A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F56A0u;
    // 0x3f56a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F56A0u, 0x3F56A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F56A8u;
label_3f56a8:
    // 0x3f56a8: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f56a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f56ac: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F56ACu;
    {
        const bool branch_taken_0x3f56ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f56ac) {
            ctx->pc = 0x3F56B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F56ACu;
            // 0x3f56b0: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F5680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f5680;
        }
    }
    ctx->pc = 0x3F56B4u;
    // 0x3f56b4: 0x1000ffab  b           . + 4 + (-0x55 << 2)
    ctx->pc = 0x3F56B4u;
    {
        const bool branch_taken_0x3f56b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f56b4) {
            ctx->pc = 0x3F5564u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f5564;
        }
    }
    ctx->pc = 0x3F56BCu;
label_3f56bc:
    // 0x3f56bc: 0x9243020a  lbu         $v1, 0x20A($s2)
    ctx->pc = 0x3f56bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 522)));
label_3f56c0:
    // 0x3f56c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3f56c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f56c4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F56C4u;
    {
        const bool branch_taken_0x3f56c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F56C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F56C4u;
        // 0x3f56c8: 0x30630002  andi        $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f56c4) {
            ctx->pc = 0x3F56D4u;
            goto label_3f56d4;
        }
    }
    ctx->pc = 0x3F56CCu;
    // 0x3f56cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3F56CCu;
    {
        const bool branch_taken_0x3f56cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F56D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F56CCu;
        // 0x3f56d0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f56cc) {
            ctx->pc = 0x3F56E0u;
            goto label_3f56e0;
        }
    }
    ctx->pc = 0x3F56D4u;
label_3f56d4:
    // 0x3f56d4: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x3f56d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f56d8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3f56d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3f56dc: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x3f56dcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_3f56e0:
    // 0x3f56e0: 0x1230003f  beq         $s1, $s0, . + 4 + (0x3F << 2)
    ctx->pc = 0x3F56E0u;
    {
        const bool branch_taken_0x3f56e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x3F56E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F56E0u;
        // 0x3f56e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f56e0) {
            ctx->pc = 0x3F57E0u;
            goto label_3f57e0;
        }
    }
    ctx->pc = 0x3F56E8u;
    // 0x3f56e8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f56e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f56ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f56ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f56f0: 0x11983c  dsll32      $s3, $s1, 0
    ctx->pc = 0x3f56f0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3f56f4: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f56f4u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f56f8: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F56F8u;
    SET_GPR_U32(ctx, 31, 0x3F5700u);
    ctx->pc = 0x3F56FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F56F8u;
    // 0x3f56fc: 0x24a5f228  addiu       $a1, $a1, -0xDD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F56F8u, 0x3F5700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5700u;
label_3f5700:
    // 0x3f5700: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f5700u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f5704: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f5704u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f5708: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F5708u;
    {
        const bool branch_taken_0x3f5708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5708) {
            ctx->pc = 0x3F574Cu;
            goto label_3f574c;
        }
    }
    ctx->pc = 0x3F5710u;
    // 0x3f5710: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f5710u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f5714: 0x0  nop
    ctx->pc = 0x3f5714u;
    // NOP
label_3f5718:
    // 0x3f5718: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f571c: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f571cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f5720: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f5720u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f5724: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f5724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5728: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F5728u;
    SET_GPR_U32(ctx, 31, 0x3F5730u);
    ctx->pc = 0x3F572Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5728u;
    // 0x3f572c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F5728u, 0x3F5730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5730u;
label_3f5730:
    // 0x3f5730: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f5730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5734: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f5734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5738: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F5738u;
    SET_GPR_U32(ctx, 31, 0x3F5740u);
    ctx->pc = 0x3F573Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5738u;
    // 0x3f573c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F5738u, 0x3F5740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5740u;
label_3f5740:
    // 0x3f5740: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f5740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f5744: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F5744u;
    {
        const bool branch_taken_0x3f5744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f5744) {
            ctx->pc = 0x3F5748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F5744u;
            // 0x3f5748: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F5718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f5718;
        }
    }
    ctx->pc = 0x3F574Cu;
label_3f574c:
    // 0x3f574c: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F574Cu;
    {
        const bool branch_taken_0x3f574c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F574Cu;
        // 0x3f5750: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f574c) {
            ctx->pc = 0x3F5774u;
            goto label_3f5774;
        }
    }
    ctx->pc = 0x3F5754u;
    // 0x3f5754: 0x8e500158  lw          $s0, 0x158($s2)
    ctx->pc = 0x3f5754u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f5758: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f5758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f575c: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F575Cu;
    SET_GPR_U32(ctx, 31, 0x3F5764u);
    ctx->pc = 0x3F5760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F575Cu;
    // 0x3f5760: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F575Cu, 0x3F5764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5764u;
label_3f5764:
    // 0x3f5764: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f5764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5768: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f5768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f576c: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F576Cu;
    SET_GPR_U32(ctx, 31, 0x3F5774u);
    ctx->pc = 0x3F5770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F576Cu;
    // 0x3f5770: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F576Cu, 0x3F5774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5774u;
label_3f5774:
    // 0x3f5774: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F5774u;
    SET_GPR_U32(ctx, 31, 0x3F577Cu);
    ctx->pc = 0x3F5778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5774u;
    // 0x3f5778: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F5774u, 0x3F577Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F577Cu;
label_3f577c:
    // 0x3f577c: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x3F577Cu;
    {
        const bool branch_taken_0x3f577c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F577Cu;
        // 0x3f5780: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f577c) {
            ctx->pc = 0x3F5978u;
            goto label_3f5978;
        }
    }
    ctx->pc = 0x3F5784u;
    // 0x3f5784: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f5784u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f5788: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f5788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f578c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F578Cu;
    {
        const bool branch_taken_0x3f578c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F578Cu;
        // 0x3f5790: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f578c) {
            ctx->pc = 0x3F57A8u;
            goto label_3f57a8;
        }
    }
    ctx->pc = 0x3F5794u;
label_3f5794:
    // 0x3f5794: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f5794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f5798: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F5798u;
    {
        const bool branch_taken_0x3f5798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5798u;
        // 0x3f579c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5798) {
            ctx->pc = 0x3F57B4u;
            goto label_3f57b4;
        }
    }
    ctx->pc = 0x3F57A0u;
    // 0x3f57a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3F57A0u;
    {
        const bool branch_taken_0x3f57a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F57A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F57A0u;
        // 0x3f57a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f57a0) {
            ctx->pc = 0x3F57D0u;
            goto label_3f57d0;
        }
    }
    ctx->pc = 0x3F57A8u;
label_3f57a8:
    // 0x3f57a8: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f57a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f57ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F57ACu;
    {
        const bool branch_taken_0x3f57ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F57B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F57ACu;
        // 0x3f57b0: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f57ac) {
            ctx->pc = 0x3F57CCu;
            goto label_3f57cc;
        }
    }
    ctx->pc = 0x3F57B4u;
label_3f57b4:
    // 0x3f57b4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f57b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3f57b8:
    // 0x3f57b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f57b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f57bc: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F57BCu;
    SET_GPR_U32(ctx, 31, 0x3F57C4u);
    ctx->pc = 0x3F57C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F57BCu;
    // 0x3f57c0: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F57BCu, 0x3F57C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F57C4u;
label_3f57c4:
    // 0x3f57c4: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x3F57C4u;
    {
        const bool branch_taken_0x3f57c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F57C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F57C4u;
        // 0x3f57c8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f57c4) {
            ctx->pc = 0x3F5978u;
            goto label_3f5978;
        }
    }
    ctx->pc = 0x3F57CCu;
label_3f57cc:
    // 0x3f57cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f57ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f57d0:
    // 0x3f57d0: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F57D0u;
    SET_GPR_U32(ctx, 31, 0x3F57D8u);
    ctx->pc = 0x3F57D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F57D0u;
    // 0x3f57d4: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F57D0u, 0x3F57D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F57D8u;
label_3f57d8:
    // 0x3f57d8: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x3F57D8u;
    {
        const bool branch_taken_0x3f57d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F57DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F57D8u;
        // 0x3f57dc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f57d8) {
            ctx->pc = 0x3F5978u;
            goto label_3f5978;
        }
    }
    ctx->pc = 0x3F57E0u;
label_3f57e0:
    // 0x3f57e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f57e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f57e4: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F57E4u;
    SET_GPR_U32(ctx, 31, 0x3F57ECu);
    ctx->pc = 0x3F57E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F57E4u;
    // 0x3f57e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F57E4u, 0x3F57ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F57ECu;
label_3f57ec:
    // 0x3f57ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f57ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f57f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f57f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f57f4: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F57F4u;
    SET_GPR_U32(ctx, 31, 0x3F57FCu);
    ctx->pc = 0x3F57F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F57F4u;
    // 0x3f57f8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F57F4u, 0x3F57FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F57FCu;
label_3f57fc:
    // 0x3f57fc: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F57FCu;
    SET_GPR_U32(ctx, 31, 0x3F5804u);
    ctx->pc = 0x3F5800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F57FCu;
    // 0x3f5800: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F57FCu, 0x3F5804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5804u;
label_3f5804:
    // 0x3f5804: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3F5804u;
    {
        const bool branch_taken_0x3f5804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5804u;
        // 0x3f5808: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5804) {
            ctx->pc = 0x3F5864u;
            goto label_3f5864;
        }
    }
    ctx->pc = 0x3F580Cu;
    // 0x3f580c: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f580cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f5810: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f5810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f5814: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F5814u;
    {
        const bool branch_taken_0x3f5814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5814u;
        // 0x3f5818: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5814) {
            ctx->pc = 0x3F5830u;
            goto label_3f5830;
        }
    }
    ctx->pc = 0x3F581Cu;
    // 0x3f581c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f581cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f5820: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F5820u;
    {
        const bool branch_taken_0x3f5820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5820u;
        // 0x3f5824: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5820) {
            ctx->pc = 0x3F583Cu;
            goto label_3f583c;
        }
    }
    ctx->pc = 0x3F5828u;
    // 0x3f5828: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3F5828u;
    {
        const bool branch_taken_0x3f5828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5828u;
        // 0x3f582c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5828) {
            ctx->pc = 0x3F5858u;
            goto label_3f5858;
        }
    }
    ctx->pc = 0x3F5830u;
label_3f5830:
    // 0x3f5830: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f5830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f5834: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F5834u;
    {
        const bool branch_taken_0x3f5834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5834u;
        // 0x3f5838: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5834) {
            ctx->pc = 0x3F5854u;
            goto label_3f5854;
        }
    }
    ctx->pc = 0x3F583Cu;
label_3f583c:
    // 0x3f583c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f583cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f5840: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5844: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F5844u;
    SET_GPR_U32(ctx, 31, 0x3F584Cu);
    ctx->pc = 0x3F5848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5844u;
    // 0x3f5848: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F5844u, 0x3F584Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F584Cu;
label_3f584c:
    // 0x3f584c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3F584Cu;
    {
        const bool branch_taken_0x3f584c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F584Cu;
        // 0x3f5850: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f584c) {
            ctx->pc = 0x3F5864u;
            goto label_3f5864;
        }
    }
    ctx->pc = 0x3F5854u;
label_3f5854:
    // 0x3f5854: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f5858:
    // 0x3f5858: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F5858u;
    SET_GPR_U32(ctx, 31, 0x3F5860u);
    ctx->pc = 0x3F585Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5858u;
    // 0x3f585c: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F5858u, 0x3F5860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5860u;
label_3f5860:
    // 0x3f5860: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f5860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f5864:
    // 0x3f5864: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x3F5864u;
    {
        const bool branch_taken_0x3f5864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F5868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5864u;
        // 0x3f5868: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5864) {
            ctx->pc = 0x3F5978u;
            goto label_3f5978;
        }
    }
    ctx->pc = 0x3F586Cu;
    // 0x3f586c: 0x9243020a  lbu         $v1, 0x20A($s2)
    ctx->pc = 0x3f586cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 522)));
    // 0x3f5870: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3f5870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f5874: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3F5874u;
    {
        const bool branch_taken_0x3f5874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F5878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5874u;
        // 0x3f5878: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5874) {
            ctx->pc = 0x3F5900u;
            goto label_3f5900;
        }
    }
    ctx->pc = 0x3F587Cu;
    // 0x3f587c: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x3f587cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f5880: 0xa242021c  sb          $v0, 0x21C($s2)
    ctx->pc = 0x3f5880u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 540), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f5884: 0x96630024  lhu         $v1, 0x24($s3)
    ctx->pc = 0x3f5884u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x3f5888: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x3F5888u;
    {
        const bool branch_taken_0x3f5888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5888u;
        // 0x3f588c: 0x93a20000  lbu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5888) {
            ctx->pc = 0x3F5964u;
            goto label_3f5964;
        }
    }
    ctx->pc = 0x3F5890u;
    // 0x3f5890: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x3f5890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3f5894: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F5894u;
    {
        const bool branch_taken_0x3f5894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5894u;
        // 0x3f5898: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5894) {
            ctx->pc = 0x3F58B0u;
            goto label_3f58b0;
        }
    }
    ctx->pc = 0x3F589Cu;
    // 0x3f589c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f589cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f58a0: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F58A0u;
    SET_GPR_U32(ctx, 31, 0x3F58A8u);
    ctx->pc = 0x3F58A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F58A0u;
    // 0x3f58a4: 0x24a5f248  addiu       $a1, $a1, -0xDB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F58A0u, 0x3F58A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F58A8u;
label_3f58a8:
    // 0x3f58a8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x3F58A8u;
    {
        const bool branch_taken_0x3f58a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F58ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F58A8u;
        // 0x3f58ac: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f58a8) {
            ctx->pc = 0x3F5978u;
            goto label_3f5978;
        }
    }
    ctx->pc = 0x3F58B0u;
label_3f58b0:
    // 0x3f58b0: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x3f58b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f58b4: 0x8e4501f8  lw          $a1, 0x1F8($s2)
    ctx->pc = 0x3f58b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 504)));
    // 0x3f58b8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3f58b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3f58bc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3f58bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f58c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f58c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f58c4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x3f58c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f58c8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3f58c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3f58cc: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x3f58ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3f58d0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3f58d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3f58d4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3f58d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3f58d8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3f58d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3f58dc: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x3f58dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x3f58e0: 0xa643021e  sh          $v1, 0x21E($s2)
    ctx->pc = 0x3f58e0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 542), (uint16_t)GPR_U32(ctx, 3));
    // 0x3f58e4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3f58e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3f58e8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3f58e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3f58ec: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x3f58ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3f58f0: 0xa6430220  sh          $v1, 0x220($s2)
    ctx->pc = 0x3f58f0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 544), (uint16_t)GPR_U32(ctx, 3));
    // 0x3f58f4: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x3f58f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3f58f8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3F58F8u;
    {
        const bool branch_taken_0x3f58f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F58FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F58F8u;
        // 0x3f58fc: 0xa6440222  sh          $a0, 0x222($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 546), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f58f8) {
            ctx->pc = 0x3F5964u;
            goto label_3f5964;
        }
    }
    ctx->pc = 0x3F5900u;
label_3f5900:
    // 0x3f5900: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3F5900u;
    {
        const bool branch_taken_0x3f5900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F5904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5900u;
        // 0x3f5904: 0x93a50000  lbu         $a1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5900) {
            ctx->pc = 0x3F592Cu;
            goto label_3f592c;
        }
    }
    ctx->pc = 0x3F5908u;
    // 0x3f5908: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x3f5908u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f590c: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x3f590cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x3f5910: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3f5910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3f5914: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f5914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f5918: 0xa643021e  sh          $v1, 0x21E($s2)
    ctx->pc = 0x3f5918u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 542), (uint16_t)GPR_U32(ctx, 3));
    // 0x3f591c: 0xa6430224  sh          $v1, 0x224($s2)
    ctx->pc = 0x3f591cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 548), (uint16_t)GPR_U32(ctx, 3));
    // 0x3f5920: 0xa6430222  sh          $v1, 0x222($s2)
    ctx->pc = 0x3f5920u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 546), (uint16_t)GPR_U32(ctx, 3));
    // 0x3f5924: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3F5924u;
    {
        const bool branch_taken_0x3f5924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5924u;
        // 0x3f5928: 0xa6430220  sh          $v1, 0x220($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 544), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5924) {
            ctx->pc = 0x3F5964u;
            goto label_3f5964;
        }
    }
    ctx->pc = 0x3F592Cu;
label_3f592c:
    // 0x3f592c: 0x93a60002  lbu         $a2, 0x2($sp)
    ctx->pc = 0x3f592cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x3f5930: 0x93a70004  lbu         $a3, 0x4($sp)
    ctx->pc = 0x3f5930u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3f5934: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x3f5934u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x3f5938: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x3f5938u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x3f593c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x3f593cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x3f5940: 0x93a40003  lbu         $a0, 0x3($sp)
    ctx->pc = 0x3f5940u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x3f5944: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3f5944u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3f5948: 0x93a20005  lbu         $v0, 0x5($sp)
    ctx->pc = 0x3f5948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 5)));
    // 0x3f594c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3f594cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3f5950: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x3f5950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x3f5954: 0xa643021e  sh          $v1, 0x21E($s2)
    ctx->pc = 0x3f5954u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 542), (uint16_t)GPR_U32(ctx, 3));
    // 0x3f5958: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x3f5958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x3f595c: 0xa6440220  sh          $a0, 0x220($s2)
    ctx->pc = 0x3f595cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 544), (uint16_t)GPR_U32(ctx, 4));
    // 0x3f5960: 0xa6420222  sh          $v0, 0x222($s2)
    ctx->pc = 0x3f5960u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 546), (uint16_t)GPR_U32(ctx, 2));
label_3f5964:
    // 0x3f5964: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5968: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f5968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f596c: 0xc0feba6  jal         func_3FAE98
    ctx->pc = 0x3F596Cu;
    SET_GPR_U32(ctx, 31, 0x3F5974u);
    ctx->pc = 0x3F5970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F596Cu;
    // 0x3f5970: 0x2486021c  addiu       $a2, $a0, 0x21C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 540));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FAE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FAE98u, 0x3F596Cu, 0x3F5974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5974u;
label_3f5974:
    // 0x3f5974: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3f5974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f5978:
    // 0x3f5978: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3f5978u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f597c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3f597cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f5980: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f5980u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f5984: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3f5984u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f5988: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f5988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f598c: 0x3e00008  jr          $ra
    ctx->pc = 0x3F598Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F5990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F598Cu;
        // 0x3f5990: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F598Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F5994u;
    // 0x3f5994: 0x0  nop
    ctx->pc = 0x3f5994u;
    // NOP
    ctx->pc = 0x3f5998u;
}
