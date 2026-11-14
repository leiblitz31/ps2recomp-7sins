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

// Function: sub_00402308
// Address: 0x402308 - 0x4025c0
void sub_00402308_0x402308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00402308_0x402308");
#endif

    switch (ctx->pc) {
        case 0x402344u: goto label_402344;
        case 0x40239cu: goto label_40239c;
        case 0x4023acu: goto label_4023ac;
        case 0x4023b4u: goto label_4023b4;
        case 0x4023c4u: goto label_4023c4;
        case 0x402410u: goto label_402410;
        case 0x402424u: goto label_402424;
        case 0x402448u: goto label_402448;
        case 0x40245cu: goto label_40245c;
        case 0x402480u: goto label_402480;
        case 0x40248cu: goto label_40248c;
        case 0x4024acu: goto label_4024ac;
        case 0x4024bcu: goto label_4024bc;
        case 0x4024dcu: goto label_4024dc;
        case 0x4024ecu: goto label_4024ec;
        case 0x40250cu: goto label_40250c;
        case 0x40251cu: goto label_40251c;
        case 0x402540u: goto label_402540;
        case 0x402550u: goto label_402550;
        case 0x4025a4u: goto label_4025a4;
        default: break;
    }

    ctx->pc = 0x402308u;

    // 0x402308: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x402308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x40230c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x40230cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x402310: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x402310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x402314: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x402314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402318: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x402318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x40231c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x40231cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402320: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x402320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x402324: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x402324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x402328: 0x960201fc  lhu         $v0, 0x1FC($s0)
    ctx->pc = 0x402328u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 508)));
    // 0x40232c: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x40232cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x402330: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x402330u;
    {
        const bool branch_taken_0x402330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x402334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402330u;
        // 0x402334: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402330) {
            ctx->pc = 0x40234Cu;
            goto label_40234c;
        }
    }
    ctx->pc = 0x402338u;
    // 0x402338: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x402338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x40233c: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x40233Cu;
    SET_GPR_U32(ctx, 31, 0x402344u);
    ctx->pc = 0x402340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40233Cu;
    // 0x402340: 0x24a502d0  addiu       $a1, $a1, 0x2D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x40233Cu, 0x402344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402344u;
label_402344:
    // 0x402344: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x402344u;
    {
        const bool branch_taken_0x402344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x402348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402344u;
        // 0x402348: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402344) {
            ctx->pc = 0x4025A8u;
            goto label_4025a8;
        }
    }
    ctx->pc = 0x40234Cu;
label_40234c:
    // 0x40234c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x40234cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x402350: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x402350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x402354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x402354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402358: 0x2343a  dsrl        $a2, $v0, 16
    ctx->pc = 0x402358u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> 16);
    // 0x40235c: 0x21e3a  dsrl        $v1, $v0, 24
    ctx->pc = 0x40235cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 24);
    // 0x402360: 0x23a3a  dsrl        $a3, $v0, 8
    ctx->pc = 0x402360u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> 8);
    // 0x402364: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x402364u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x402368: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x402368u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x40236c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x40236cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x402370: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x402370u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x402374: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x402374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x402378: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x402378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x40237c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x40237cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x402380: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x402380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x402384: 0xa3a60011  sb          $a2, 0x11($sp)
    ctx->pc = 0x402384u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 6));
    // 0x402388: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x402388u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x40238c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x40238cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x402390: 0xa3a70012  sb          $a3, 0x12($sp)
    ctx->pc = 0x402390u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 7));
    // 0x402394: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x402394u;
    SET_GPR_U32(ctx, 31, 0x40239Cu);
    ctx->pc = 0x402398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402394u;
    // 0x402398: 0xa3a20013  sb          $v0, 0x13($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x402394u, 0x40239Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40239Cu;
label_40239c:
    // 0x40239c: 0x2785ac70  addiu       $a1, $gp, -0x5390
    ctx->pc = 0x40239cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945904));
    // 0x4023a0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4023a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4023a4: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x4023A4u;
    SET_GPR_U32(ctx, 31, 0x4023ACu);
    ctx->pc = 0x4023A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4023A4u;
    // 0x4023a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x4023A4u, 0x4023ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4023ACu;
label_4023ac:
    // 0x4023ac: 0xc0f85de  jal         func_3E1778
    ctx->pc = 0x4023ACu;
    SET_GPR_U32(ctx, 31, 0x4023B4u);
    ctx->pc = 0x4023B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4023ACu;
    // 0x4023b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1778u, 0x4023ACu, 0x4023B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4023B4u;
label_4023b4:
    // 0x4023b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4023b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4023b8: 0x2785ac70  addiu       $a1, $gp, -0x5390
    ctx->pc = 0x4023b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945904));
    // 0x4023bc: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x4023BCu;
    SET_GPR_U32(ctx, 31, 0x4023C4u);
    ctx->pc = 0x4023C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4023BCu;
    // 0x4023c0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x4023BCu, 0x4023C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4023C4u;
label_4023c4:
    // 0x4023c4: 0x1a200064  blez        $s1, . + 4 + (0x64 << 2)
    ctx->pc = 0x4023C4u;
    {
        const bool branch_taken_0x4023c4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x4023C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4023C4u;
        // 0x4023c8: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4023c4) {
            ctx->pc = 0x402558u;
            goto label_402558;
        }
    }
    ctx->pc = 0x4023CCu;
    // 0x4023cc: 0x131023  negu        $v0, $s3
    ctx->pc = 0x4023ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x4023d0: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x4023d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4023d4: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x4023D4u;
    {
        const bool branch_taken_0x4023d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4023D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4023D4u;
        // 0x4023d8: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4023d4) {
            ctx->pc = 0x402488u;
            goto label_402488;
        }
    }
    ctx->pc = 0x4023DCu;
    // 0x4023dc: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x4023dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x4023e0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4023E0u;
    {
        const bool branch_taken_0x4023e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4023E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4023E0u;
        // 0x4023e4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4023e0) {
            ctx->pc = 0x40245Cu;
            goto label_40245c;
        }
    }
    ctx->pc = 0x4023E8u;
    // 0x4023e8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4023E8u;
    {
        const bool branch_taken_0x4023e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4023ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4023E8u;
        // 0x4023ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4023e8) {
            ctx->pc = 0x402424u;
            goto label_402424;
        }
    }
    ctx->pc = 0x4023F0u;
    // 0x4023f0: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4023f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4023f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4023f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4023f8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4023f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4023fc: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x4023fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x402400: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x402400u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x402404: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x402404u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x402408: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x402408u;
    SET_GPR_U32(ctx, 31, 0x402410u);
    ctx->pc = 0x40240Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402408u;
    // 0x40240c: 0x26510002  addiu       $s1, $s2, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x402408u, 0x402410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402410u;
label_402410:
    // 0x402410: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x402410u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x402414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x402414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402418: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x402418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40241c: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x40241Cu;
    SET_GPR_U32(ctx, 31, 0x402424u);
    ctx->pc = 0x402420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40241Cu;
    // 0x402420: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x40241Cu, 0x402424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402424u;
label_402424:
    // 0x402424: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x402424u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x402428: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x402428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40242c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40242cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402430: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x402430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x402434: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x402434u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x402438: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x402438u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x40243c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x40243cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x402440: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x402440u;
    SET_GPR_U32(ctx, 31, 0x402448u);
    ctx->pc = 0x402444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402440u;
    // 0x402444: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x402440u, 0x402448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402448u;
label_402448:
    // 0x402448: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x402448u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x40244c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40244cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402450: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x402450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402454: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x402454u;
    SET_GPR_U32(ctx, 31, 0x40245Cu);
    ctx->pc = 0x402458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402454u;
    // 0x402458: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x402454u, 0x40245Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40245Cu;
label_40245c:
    // 0x40245c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x40245cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x402460: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x402460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x402464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402468: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x402468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x40246c: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x40246cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x402470: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x402470u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x402474: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x402474u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x402478: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x402478u;
    SET_GPR_U32(ctx, 31, 0x402480u);
    ctx->pc = 0x40247Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402478u;
    // 0x40247c: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x402478u, 0x402480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402480u;
label_402480:
    // 0x402480: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x402480u;
    {
        const bool branch_taken_0x402480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x402484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402480u;
        // 0x402484: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402480) {
            ctx->pc = 0x402540u;
            goto label_402540;
        }
    }
    ctx->pc = 0x402488u;
label_402488:
    // 0x402488: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x402488u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_40248c:
    // 0x40248c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x40248cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x402490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402494: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x402494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x402498: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x402498u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x40249c: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x40249cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x4024a0: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x4024a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4024a4: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x4024A4u;
    SET_GPR_U32(ctx, 31, 0x4024ACu);
    ctx->pc = 0x4024A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4024A4u;
    // 0x4024a8: 0x2673fffc  addiu       $s3, $s3, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x4024A4u, 0x4024ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4024ACu;
label_4024ac:
    // 0x4024ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4024acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4024b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4024b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4024b4: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x4024B4u;
    SET_GPR_U32(ctx, 31, 0x4024BCu);
    ctx->pc = 0x4024B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4024B4u;
    // 0x4024b8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x4024B4u, 0x4024BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4024BCu;
label_4024bc:
    // 0x4024bc: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x4024bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x4024c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4024c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4024c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4024c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4024c8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4024c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4024cc: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x4024ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x4024d0: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x4024d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x4024d4: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x4024D4u;
    SET_GPR_U32(ctx, 31, 0x4024DCu);
    ctx->pc = 0x4024D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4024D4u;
    // 0x4024d8: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x4024D4u, 0x4024DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4024DCu;
label_4024dc:
    // 0x4024dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4024dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4024e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4024e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4024e4: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x4024E4u;
    SET_GPR_U32(ctx, 31, 0x4024ECu);
    ctx->pc = 0x4024E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4024E4u;
    // 0x4024e8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x4024E4u, 0x4024ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4024ECu;
label_4024ec:
    // 0x4024ec: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x4024ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4024f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4024f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4024f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4024f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4024f8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4024f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4024fc: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x4024fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x402500: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x402500u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x402504: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x402504u;
    SET_GPR_U32(ctx, 31, 0x40250Cu);
    ctx->pc = 0x402508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402504u;
    // 0x402508: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x402504u, 0x40250Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40250Cu;
label_40250c:
    // 0x40250c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x40250cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x402510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402514: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x402514u;
    SET_GPR_U32(ctx, 31, 0x40251Cu);
    ctx->pc = 0x402518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402514u;
    // 0x402518: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x402514u, 0x40251Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40251Cu;
label_40251c:
    // 0x40251c: 0x96230006  lhu         $v1, 0x6($s1)
    ctx->pc = 0x40251cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x402520: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x402520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x402524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402528: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x402528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x40252c: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x40252cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x402530: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x402530u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x402534: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x402534u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x402538: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x402538u;
    SET_GPR_U32(ctx, 31, 0x402540u);
    ctx->pc = 0x40253Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402538u;
    // 0x40253c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x402538u, 0x402540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402540u;
label_402540:
    // 0x402540: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x402540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402544: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x402544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402548: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x402548u;
    SET_GPR_U32(ctx, 31, 0x402550u);
    ctx->pc = 0x40254Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402548u;
    // 0x40254c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x402548u, 0x402550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402550u;
label_402550:
    // 0x402550: 0x5660ffce  bnel        $s3, $zero, . + 4 + (-0x32 << 2)
    ctx->pc = 0x402550u;
    {
        const bool branch_taken_0x402550 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x402550) {
            ctx->pc = 0x402554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x402550u;
            // 0x402554: 0x96230000  lhu         $v1, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40248Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40248c;
        }
    }
    ctx->pc = 0x402558u;
label_402558:
    // 0x402558: 0xde0201f0  ld          $v0, 0x1F0($s0)
    ctx->pc = 0x402558u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 496)));
    // 0x40255c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40255cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402560: 0x920601f3  lbu         $a2, 0x1F3($s0)
    ctx->pc = 0x402560u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 499)));
    // 0x402564: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x402564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x402568: 0x21c3a  dsrl        $v1, $v0, 16
    ctx->pc = 0x402568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 16);
    // 0x40256c: 0x23a3a  dsrl        $a3, $v0, 8
    ctx->pc = 0x40256cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> 8);
    // 0x402570: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x402570u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x402574: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x402574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x402578: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x402578u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x40257c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x40257cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x402580: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x402580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x402584: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x402584u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x402588: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x402588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x40258c: 0xa3a60020  sb          $a2, 0x20($sp)
    ctx->pc = 0x40258cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 6));
    // 0x402590: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x402590u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
    // 0x402594: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x402594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x402598: 0xa3a70022  sb          $a3, 0x22($sp)
    ctx->pc = 0x402598u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 34), (uint8_t)GPR_U32(ctx, 7));
    // 0x40259c: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x40259Cu;
    SET_GPR_U32(ctx, 31, 0x4025A4u);
    ctx->pc = 0x4025A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40259Cu;
    // 0x4025a0: 0xa3a20023  sb          $v0, 0x23($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 35), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x40259Cu, 0x4025A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4025A4u;
label_4025a4:
    // 0x4025a4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4025a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4025a8:
    // 0x4025a8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4025a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4025ac: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4025acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4025b0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4025b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4025b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4025b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4025b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4025B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4025BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4025B8u;
        // 0x4025bc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4025B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4025C0u;
}
