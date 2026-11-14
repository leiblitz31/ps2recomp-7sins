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

// Function: sub_003FA300
// Address: 0x3fa300 - 0x3fa590
void sub_003FA300_0x3fa300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FA300_0x3fa300");
#endif

    switch (ctx->pc) {
        case 0x3fa37cu: goto label_3fa37c;
        case 0x3fa3acu: goto label_3fa3ac;
        case 0x3fa3e0u: goto label_3fa3e0;
        case 0x3fa410u: goto label_3fa410;
        case 0x3fa45cu: goto label_3fa45c;
        case 0x3fa474u: goto label_3fa474;
        case 0x3fa488u: goto label_3fa488;
        case 0x3fa49cu: goto label_3fa49c;
        case 0x3fa524u: goto label_3fa524;
        case 0x3fa53cu: goto label_3fa53c;
        case 0x3fa550u: goto label_3fa550;
        default: break;
    }

    ctx->pc = 0x3fa300u;

    // 0x3fa300: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3fa300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3fa304: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3fa304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x3fa308: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3fa308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x3fa30c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3fa30cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa310: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3fa310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x3fa314: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x3fa314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa318: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3fa318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x3fa31c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3fa31cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa320: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3fa320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3fa324: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3fa324u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa328: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3fa328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x3fa32c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3fa32cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa330: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3fa330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x3fa334: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3fa334u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa338: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3fa338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x3fa33c: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x3fa33cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa340: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3fa340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x3fa344: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x3fa344u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa348: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3fa348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3fa34c: 0x12600083  beqz        $s3, . + 4 + (0x83 << 2)
    ctx->pc = 0x3FA34Cu;
    {
        const bool branch_taken_0x3fa34c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA34Cu;
        // 0x3fa350: 0x8fbe00a0  lw          $fp, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa34c) {
            ctx->pc = 0x3FA55Cu;
            goto label_3fa55c;
        }
    }
    ctx->pc = 0x3FA354u;
    // 0x3fa354: 0x52000082  beql        $s0, $zero, . + 4 + (0x82 << 2)
    ctx->pc = 0x3FA354u;
    {
        const bool branch_taken_0x3fa354 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fa354) {
            ctx->pc = 0x3FA358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FA354u;
            // 0x3fa358: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FA560u;
            goto label_3fa560;
        }
    }
    ctx->pc = 0x3FA35Cu;
    // 0x3fa35c: 0x52a00004  beql        $s5, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FA35Cu;
    {
        const bool branch_taken_0x3fa35c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fa35c) {
            ctx->pc = 0x3FA360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FA35Cu;
            // 0x3fa360: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FA370u;
            goto label_3fa370;
        }
    }
    ctx->pc = 0x3FA364u;
    // 0x3fa364: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x3FA364u;
    {
        const bool branch_taken_0x3fa364 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fa364) {
            ctx->pc = 0x3FA37Cu;
            goto label_3fa37c;
        }
    }
    ctx->pc = 0x3FA36Cu;
    // 0x3fa36c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3fa36cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3fa370:
    // 0x3fa370: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fa370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa374: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3FA374u;
    SET_GPR_U32(ctx, 31, 0x3FA37Cu);
    ctx->pc = 0x3FA378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA374u;
    // 0x3fa378: 0x24a5f778  addiu       $a1, $a1, -0x888 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3FA374u, 0x3FA37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA37Cu;
label_3fa37c:
    // 0x3fa37c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x3fa37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x3fa380: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3fa380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3fa384: 0x75102b  sltu        $v0, $v1, $s5
    ctx->pc = 0x3fa384u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x3fa388: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3FA388u;
    {
        const bool branch_taken_0x3fa388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fa388) {
            ctx->pc = 0x3FA38Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FA388u;
            // 0x3fa38c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FA3A0u;
            goto label_3fa3a0;
        }
    }
    ctx->pc = 0x3FA390u;
    // 0x3fa390: 0x74102b  sltu        $v0, $v1, $s4
    ctx->pc = 0x3fa390u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x3fa394: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3FA394u;
    {
        const bool branch_taken_0x3fa394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA394u;
        // 0x3fa398: 0x2642ffff  addiu       $v0, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa394) {
            ctx->pc = 0x3FA3B0u;
            goto label_3fa3b0;
        }
    }
    ctx->pc = 0x3FA39Cu;
    // 0x3fa39c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3fa39cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3fa3a0:
    // 0x3fa3a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fa3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa3a4: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3FA3A4u;
    SET_GPR_U32(ctx, 31, 0x3FA3ACu);
    ctx->pc = 0x3FA3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA3A4u;
    // 0x3fa3a8: 0x24a5f7a0  addiu       $a1, $a1, -0x860 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3FA3A4u, 0x3FA3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA3ACu;
label_3fa3ac:
    // 0x3fa3ac: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x3fa3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3fa3b0:
    // 0x3fa3b0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3fa3b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3fa3b4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3FA3B4u;
    {
        const bool branch_taken_0x3fa3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FA3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA3B4u;
        // 0x3fa3b8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa3b4) {
            ctx->pc = 0x3FA3E0u;
            goto label_3fa3e0;
        }
    }
    ctx->pc = 0x3FA3BCu;
    // 0x3fa3bc: 0x12420008  beq         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3FA3BCu;
    {
        const bool branch_taken_0x3fa3bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FA3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA3BCu;
        // 0x3fa3c0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa3bc) {
            ctx->pc = 0x3FA3E0u;
            goto label_3fa3e0;
        }
    }
    ctx->pc = 0x3FA3C4u;
    // 0x3fa3c4: 0x12420006  beq         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3FA3C4u;
    {
        const bool branch_taken_0x3fa3c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FA3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA3C4u;
        // 0x3fa3c8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa3c4) {
            ctx->pc = 0x3FA3E0u;
            goto label_3fa3e0;
        }
    }
    ctx->pc = 0x3FA3CCu;
    // 0x3fa3cc: 0x12420004  beq         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FA3CCu;
    {
        const bool branch_taken_0x3fa3cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FA3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA3CCu;
        // 0x3fa3d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa3cc) {
            ctx->pc = 0x3FA3E0u;
            goto label_3fa3e0;
        }
    }
    ctx->pc = 0x3FA3D4u;
    // 0x3fa3d4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3fa3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3fa3d8: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3FA3D8u;
    SET_GPR_U32(ctx, 31, 0x3FA3E0u);
    ctx->pc = 0x3FA3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA3D8u;
    // 0x3fa3dc: 0x24a5f7c0  addiu       $a1, $a1, -0x840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3FA3D8u, 0x3FA3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA3E0u;
label_3fa3e0:
    // 0x3fa3e0: 0x6200007  bltz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FA3E0u;
    {
        const bool branch_taken_0x3fa3e0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x3FA3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA3E0u;
        // 0x3fa3e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa3e0) {
            ctx->pc = 0x3FA400u;
            goto label_3fa400;
        }
    }
    ctx->pc = 0x3FA3E8u;
    // 0x3fa3e8: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3FA3E8u;
    {
        const bool branch_taken_0x3fa3e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FA3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA3E8u;
        // 0x3fa3ec: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa3e8) {
            ctx->pc = 0x3FA400u;
            goto label_3fa400;
        }
    }
    ctx->pc = 0x3FA3F0u;
    // 0x3fa3f0: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3FA3F0u;
    {
        const bool branch_taken_0x3fa3f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FA3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA3F0u;
        // 0x3fa3f4: 0x2a220007  slti        $v0, $s1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa3f0) {
            ctx->pc = 0x3FA400u;
            goto label_3fa400;
        }
    }
    ctx->pc = 0x3FA3F8u;
    // 0x3fa3f8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3FA3F8u;
    {
        const bool branch_taken_0x3fa3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FA3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA3F8u;
        // 0x3fa3fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa3f8) {
            ctx->pc = 0x3FA414u;
            goto label_3fa414;
        }
    }
    ctx->pc = 0x3FA400u;
label_3fa400:
    // 0x3fa400: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3fa400u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3fa404: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fa404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa408: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3FA408u;
    SET_GPR_U32(ctx, 31, 0x3FA410u);
    ctx->pc = 0x3FA40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA408u;
    // 0x3fa40c: 0x24a5f7e0  addiu       $a1, $a1, -0x820 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3FA408u, 0x3FA410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA410u;
label_3fa410:
    // 0x3fa410: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3fa410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3fa414:
    // 0x3fa414: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FA414u;
    {
        const bool branch_taken_0x3fa414 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FA418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA414u;
        // 0x3fa418: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa414) {
            ctx->pc = 0x3FA428u;
            goto label_3fa428;
        }
    }
    ctx->pc = 0x3FA41Cu;
    // 0x3fa41c: 0x2a420009  slti        $v0, $s2, 0x9
    ctx->pc = 0x3fa41cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3fa420: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3FA420u;
    {
        const bool branch_taken_0x3fa420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA420u;
        // 0x3fa424: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa420) {
            ctx->pc = 0x3FA44Cu;
            goto label_3fa44c;
        }
    }
    ctx->pc = 0x3FA428u;
label_3fa428:
    // 0x3fa428: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3FA428u;
    {
        const bool branch_taken_0x3fa428 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FA42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA428u;
        // 0x3fa42c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa428) {
            ctx->pc = 0x3FA440u;
            goto label_3fa440;
        }
    }
    ctx->pc = 0x3FA430u;
    // 0x3fa430: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3FA430u;
    {
        const bool branch_taken_0x3fa430 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FA434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA430u;
        // 0x3fa434: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa430) {
            ctx->pc = 0x3FA440u;
            goto label_3fa440;
        }
    }
    ctx->pc = 0x3FA438u;
    // 0x3fa438: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3FA438u;
    {
        const bool branch_taken_0x3fa438 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FA43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA438u;
        // 0x3fa43c: 0x2ae20002  slti        $v0, $s7, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa438) {
            ctx->pc = 0x3FA460u;
            goto label_3fa460;
        }
    }
    ctx->pc = 0x3FA440u;
label_3fa440:
    // 0x3fa440: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x3fa440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3fa444: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3FA444u;
    {
        const bool branch_taken_0x3fa444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA444u;
        // 0x3fa448: 0x2ae20002  slti        $v0, $s7, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa444) {
            ctx->pc = 0x3FA460u;
            goto label_3fa460;
        }
    }
    ctx->pc = 0x3FA44Cu;
label_3fa44c:
    // 0x3fa44c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3fa44cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3fa450: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fa450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa454: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3FA454u;
    SET_GPR_U32(ctx, 31, 0x3FA45Cu);
    ctx->pc = 0x3FA458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA454u;
    // 0x3fa458: 0x24a5f800  addiu       $a1, $a1, -0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3FA454u, 0x3FA45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA45Cu;
label_3fa45c:
    // 0x3fa45c: 0x2ae20002  slti        $v0, $s7, 0x2
    ctx->pc = 0x3fa45cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
label_3fa460:
    // 0x3fa460: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FA460u;
    {
        const bool branch_taken_0x3fa460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FA464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA460u;
        // 0x3fa464: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa460) {
            ctx->pc = 0x3FA474u;
            goto label_3fa474;
        }
    }
    ctx->pc = 0x3FA468u;
    // 0x3fa468: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3fa468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3fa46c: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3FA46Cu;
    SET_GPR_U32(ctx, 31, 0x3FA474u);
    ctx->pc = 0x3FA470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA46Cu;
    // 0x3fa470: 0x24a5f838  addiu       $a1, $a1, -0x7C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3FA46Cu, 0x3FA474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA474u;
label_3fa474:
    // 0x3fa474: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FA474u;
    {
        const bool branch_taken_0x3fa474 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA474u;
        // 0x3fa478: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa474) {
            ctx->pc = 0x3FA488u;
            goto label_3fa488;
        }
    }
    ctx->pc = 0x3FA47Cu;
    // 0x3fa47c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3fa47cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3fa480: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3FA480u;
    SET_GPR_U32(ctx, 31, 0x3FA488u);
    ctx->pc = 0x3FA484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA480u;
    // 0x3fa484: 0x24a5f860  addiu       $a1, $a1, -0x7A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3FA480u, 0x3FA488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA488u;
label_3fa488:
    // 0x3fa488: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FA488u;
    {
        const bool branch_taken_0x3fa488 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA488u;
        // 0x3fa48c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa488) {
            ctx->pc = 0x3FA49Cu;
            goto label_3fa49c;
        }
    }
    ctx->pc = 0x3FA490u;
    // 0x3fa490: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3fa490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3fa494: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3FA494u;
    SET_GPR_U32(ctx, 31, 0x3FA49Cu);
    ctx->pc = 0x3FA498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA494u;
    // 0x3fa498: 0x24a5f888  addiu       $a1, $a1, -0x778 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3FA494u, 0x3FA49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA49Cu;
label_3fa49c:
    // 0x3fa49c: 0xfe140008  sd          $s4, 0x8($s0)
    ctx->pc = 0x3fa49cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 20));
    // 0x3fa4a0: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x3fa4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3fa4a4: 0xa2120028  sb          $s2, 0x28($s0)
    ctx->pc = 0x3fa4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 18));
    // 0x3fa4a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3fa4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3fa4ac: 0xa216002a  sb          $s6, 0x2A($s0)
    ctx->pc = 0x3fa4acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 22));
    // 0x3fa4b0: 0xa21e002b  sb          $fp, 0x2B($s0)
    ctx->pc = 0x3fa4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 30));
    // 0x3fa4b4: 0xa217002c  sb          $s7, 0x2C($s0)
    ctx->pc = 0x3fa4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 23));
    // 0x3fa4b8: 0xfe150000  sd          $s5, 0x0($s0)
    ctx->pc = 0x3fa4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 21));
    // 0x3fa4bc: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3FA4BCu;
    {
        const bool branch_taken_0x3fa4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3FA4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA4BCu;
        // 0x3fa4c0: 0xa2110029  sb          $s1, 0x29($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa4bc) {
            ctx->pc = 0x3FA4D8u;
            goto label_3fa4d8;
        }
    }
    ctx->pc = 0x3FA4C4u;
    // 0x3fa4c4: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x3fa4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x3fa4c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FA4C8u;
    {
        const bool branch_taken_0x3fa4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA4C8u;
        // 0x3fa4cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa4c8) {
            ctx->pc = 0x3FA4DCu;
            goto label_3fa4dc;
        }
    }
    ctx->pc = 0x3FA4D0u;
    // 0x3fa4d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3FA4D0u;
    {
        const bool branch_taken_0x3fa4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA4D0u;
        // 0x3fa4d4: 0xa203002d  sb          $v1, 0x2D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa4d0) {
            ctx->pc = 0x3FA4E0u;
            goto label_3fa4e0;
        }
    }
    ctx->pc = 0x3FA4D8u;
label_3fa4d8:
    // 0x3fa4d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3fa4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fa4dc:
    // 0x3fa4dc: 0xa202002d  sb          $v0, 0x2D($s0)
    ctx->pc = 0x3fa4dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 2));
label_3fa4e0:
    // 0x3fa4e0: 0x92020029  lbu         $v0, 0x29($s0)
    ctx->pc = 0x3fa4e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x3fa4e4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3fa4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3fa4e8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3FA4E8u;
    {
        const bool branch_taken_0x3fa4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fa4e8) {
            ctx->pc = 0x3FA4ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FA4E8u;
            // 0x3fa4ec: 0x92030028  lbu         $v1, 0x28($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FA500u;
            goto label_3fa500;
        }
    }
    ctx->pc = 0x3FA4F0u;
    // 0x3fa4f0: 0x9202002d  lbu         $v0, 0x2D($s0)
    ctx->pc = 0x3fa4f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    // 0x3fa4f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3fa4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3fa4f8: 0xa202002d  sb          $v0, 0x2D($s0)
    ctx->pc = 0x3fa4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fa4fc: 0x92030028  lbu         $v1, 0x28($s0)
    ctx->pc = 0x3fa4fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
label_3fa500:
    // 0x3fa500: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x3fa500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x3fa504: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x3fa504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x3fa508: 0x9202002d  lbu         $v0, 0x2D($s0)
    ctx->pc = 0x3fa508u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    // 0x3fa50c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3fa50cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3fa510: 0xa202002e  sb          $v0, 0x2E($s0)
    ctx->pc = 0x3fa510u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 46), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fa514: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3fa514u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3fa518: 0x24a50007  addiu       $a1, $a1, 0x7
    ctx->pc = 0x3fa518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x3fa51c: 0xc0be820  jal         func_2FA080
    ctx->pc = 0x3FA51Cu;
    SET_GPR_U32(ctx, 31, 0x3FA524u);
    ctx->pc = 0x3FA520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA51Cu;
    // 0x3fa520: 0x528fa  dsrl        $a1, $a1, 3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA080u, 0x3FA51Cu, 0x3FA524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA524u;
label_3fa524:
    // 0x3fa524: 0x55102b  sltu        $v0, $v0, $s5
    ctx->pc = 0x3fa524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x3fa528: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3FA528u;
    {
        const bool branch_taken_0x3fa528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA528u;
        // 0x3fa52c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa528) {
            ctx->pc = 0x3FA544u;
            goto label_3fa544;
        }
    }
    ctx->pc = 0x3FA530u;
    // 0x3fa530: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fa530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa534: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3FA534u;
    SET_GPR_U32(ctx, 31, 0x3FA53Cu);
    ctx->pc = 0x3FA538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA534u;
    // 0x3fa538: 0x24a5f8a8  addiu       $a1, $a1, -0x758 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3FA534u, 0x3FA53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA53Cu;
label_3fa53c:
    // 0x3fa53c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3FA53Cu;
    {
        const bool branch_taken_0x3fa53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA53Cu;
        // 0x3fa540: 0xfe000018  sd          $zero, 0x18($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa53c) {
            ctx->pc = 0x3FA55Cu;
            goto label_3fa55c;
        }
    }
    ctx->pc = 0x3FA544u;
label_3fa544:
    // 0x3fa544: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x3fa544u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3fa548: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3FA548u;
    SET_GPR_U32(ctx, 31, 0x3FA550u);
    ctx->pc = 0x3FA54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA548u;
    // 0x3fa54c: 0x9205002e  lbu         $a1, 0x2E($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3FA548u, 0x3FA550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA550u;
label_3fa550:
    // 0x3fa550: 0x64420007  daddiu      $v0, $v0, 0x7
    ctx->pc = 0x3fa550u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)7);
    // 0x3fa554: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x3fa554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x3fa558: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x3fa558u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
label_3fa55c:
    // 0x3fa55c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3fa55cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3fa560:
    // 0x3fa560: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3fa560u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3fa564: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3fa564u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3fa568: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3fa568u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3fa56c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3fa56cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3fa570: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3fa570u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3fa574: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3fa574u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3fa578: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3fa578u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fa57c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3fa57cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fa580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fa580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fa584: 0x3e00008  jr          $ra
    ctx->pc = 0x3FA584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FA588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA584u;
        // 0x3fa588: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FA584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FA58Cu;
    // 0x3fa58c: 0x0  nop
    ctx->pc = 0x3fa58cu;
    // NOP
    ctx->pc = 0x3fa590u;
}
