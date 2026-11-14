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

// Function: sub_00447328
// Address: 0x447328 - 0x4477a8
void sub_00447328_0x447328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00447328_0x447328");
#endif

    switch (ctx->pc) {
        case 0x447350u: goto label_447350;
        case 0x447398u: goto label_447398;
        case 0x447470u: goto label_447470;
        case 0x44755cu: goto label_44755c;
        case 0x4475bcu: goto label_4475bc;
        case 0x4475f0u: goto label_4475f0;
        case 0x447628u: goto label_447628;
        case 0x447650u: goto label_447650;
        case 0x447674u: goto label_447674;
        case 0x4476a4u: goto label_4476a4;
        case 0x4476d4u: goto label_4476d4;
        case 0x447704u: goto label_447704;
        case 0x447728u: goto label_447728;
        case 0x447740u: goto label_447740;
        case 0x447768u: goto label_447768;
        case 0x447778u: goto label_447778;
        default: break;
    }

    ctx->pc = 0x447328u;

    // 0x447328: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x447328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x44732c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x44732cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x447330: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x447330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x447334: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x447334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447338: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x447338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x44733c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x44733cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447340: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x447340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x447344: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x447344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x447348: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x447348u;
    {
        const bool branch_taken_0x447348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447348u;
        // 0x44734c: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447348) {
            ctx->pc = 0x44737Cu;
            goto label_44737c;
        }
    }
    ctx->pc = 0x447350u;
label_447350:
    // 0x447350: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x447350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x447354: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x447354u;
    {
        const bool branch_taken_0x447354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x447354) {
            ctx->pc = 0x447358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x447354u;
            // 0x447358: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44736Cu;
            goto label_44736c;
        }
    }
    ctx->pc = 0x44735Cu;
    // 0x44735c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x44735cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x447360: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x447360u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x447364: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x447364u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x447368: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x447368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_44736c:
    // 0x44736c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x44736cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x447370: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x447370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x447374: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x447374u;
    {
        const bool branch_taken_0x447374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x447378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447374u;
        // 0x447378: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447374) {
            ctx->pc = 0x447350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_447350;
        }
    }
    ctx->pc = 0x44737Cu;
label_44737c:
    // 0x44737c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x44737cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x447380: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x447380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447384: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x447384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x447388: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x447388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44738c: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x44738Cu;
    {
        const bool branch_taken_0x44738c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x447390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44738Cu;
        // 0x447390: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44738c) {
            ctx->pc = 0x44752Cu;
            goto label_44752c;
        }
    }
    ctx->pc = 0x447394u;
    // 0x447394: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x447394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_447398:
    // 0x447398: 0x248b0001  addiu       $t3, $a0, 0x1
    ctx->pc = 0x447398u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x44739c: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x44739Cu;
    {
        const bool branch_taken_0x44739c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4473A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44739Cu;
        // 0x4473a0: 0x246a0028  addiu       $t2, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44739c) {
            ctx->pc = 0x447510u;
            goto label_447510;
        }
    }
    ctx->pc = 0x4473A4u;
    // 0x4473a4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4473a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4473a8: 0x5040005a  beql        $v0, $zero, . + 4 + (0x5A << 2)
    ctx->pc = 0x4473A8u;
    {
        const bool branch_taken_0x4473a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4473a8) {
            ctx->pc = 0x4473ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4473A8u;
            // 0x4473ac: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x447514u;
            goto label_447514;
        }
    }
    ctx->pc = 0x4473B0u;
    // 0x4473b0: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x4473b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4473b4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4473b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4473b8: 0x71023  negu        $v0, $a3
    ctx->pc = 0x4473b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x4473bc: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x4473bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4473c0: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x4473c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4473c4: 0x24080028  addiu       $t0, $zero, 0x28
    ctx->pc = 0x4473c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x4473c8: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x4473C8u;
    {
        const bool branch_taken_0x4473c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4473CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4473C8u;
        // 0x4473cc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4473c8) {
            ctx->pc = 0x447470u;
            goto label_447470;
        }
    }
    ctx->pc = 0x4473D0u;
    // 0x4473d0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x4473d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x4473d4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x4473D4u;
    {
        const bool branch_taken_0x4473d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4473D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4473D4u;
        // 0x4473d8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4473d4) {
            ctx->pc = 0x44743Cu;
            goto label_44743c;
        }
    }
    ctx->pc = 0x4473DCu;
    // 0x4473dc: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x4473DCu;
    {
        const bool branch_taken_0x4473dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4473dc) {
            ctx->pc = 0x4473E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4473DCu;
            // 0x4473e0: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x447414u;
            goto label_447414;
        }
    }
    ctx->pc = 0x4473E4u;
    // 0x4473e4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4473e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4473e8: 0x10690007  beq         $v1, $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4473E8u;
    {
        const bool branch_taken_0x4473e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        ctx->pc = 0x4473ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4473E8u;
        // 0x4473ec: 0x681818  mult        $v1, $v1, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4473e8) {
            ctx->pc = 0x447408u;
            goto label_447408;
        }
    }
    ctx->pc = 0x4473F0u;
    // 0x4473f0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4473f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4473f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4473f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4473f8: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x4473f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x4473fc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4473fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x447400: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x447400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x447404: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x447404u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_447408:
    // 0x447408: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x447408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x44740c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x44740cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x447410: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x447410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_447414:
    // 0x447414: 0x10690007  beq         $v1, $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x447414u;
    {
        const bool branch_taken_0x447414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        ctx->pc = 0x447418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447414u;
        // 0x447418: 0x681818  mult        $v1, $v1, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x447414) {
            ctx->pc = 0x447434u;
            goto label_447434;
        }
    }
    ctx->pc = 0x44741Cu;
    // 0x44741c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x44741cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x447420: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x447420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x447424: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x447424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x447428: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x447428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44742c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x44742cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x447430: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x447430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_447434:
    // 0x447434: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x447434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x447438: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x447438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_44743c:
    // 0x44743c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x44743cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x447440: 0x10690007  beq         $v1, $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x447440u;
    {
        const bool branch_taken_0x447440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        ctx->pc = 0x447444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447440u;
        // 0x447444: 0x681818  mult        $v1, $v1, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x447440) {
            ctx->pc = 0x447460u;
            goto label_447460;
        }
    }
    ctx->pc = 0x447448u;
    // 0x447448: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x447448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x44744c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x44744cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x447450: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x447450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x447454: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x447454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x447458: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x447458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x44745c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x44745cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_447460:
    // 0x447460: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x447460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x447464: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x447464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x447468: 0x10e00029  beqz        $a3, . + 4 + (0x29 << 2)
    ctx->pc = 0x447468u;
    {
        const bool branch_taken_0x447468 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x44746Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447468u;
        // 0x44746c: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447468) {
            ctx->pc = 0x447510u;
            goto label_447510;
        }
    }
    ctx->pc = 0x447470u;
label_447470:
    // 0x447470: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x447470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x447474: 0x10690007  beq         $v1, $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x447474u;
    {
        const bool branch_taken_0x447474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        ctx->pc = 0x447478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447474u;
        // 0x447478: 0x681818  mult        $v1, $v1, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x447474) {
            ctx->pc = 0x447494u;
            goto label_447494;
        }
    }
    ctx->pc = 0x44747Cu;
    // 0x44747c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x44747cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x447480: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x447480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x447484: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x447484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x447488: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x447488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44748c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x44748cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x447490: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x447490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_447494:
    // 0x447494: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x447494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x447498: 0x10490007  beq         $v0, $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x447498u;
    {
        const bool branch_taken_0x447498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x44749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447498u;
        // 0x44749c: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447498) {
            ctx->pc = 0x4474B8u;
            goto label_4474b8;
        }
    }
    ctx->pc = 0x4474A0u;
    // 0x4474a0: 0x481818  mult        $v1, $v0, $t0
    ctx->pc = 0x4474a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4474a4: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x4474a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4474a8: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x4474a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x4474ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4474acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4474b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4474b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4474b4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4474b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4474b8:
    // 0x4474b8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4474b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4474bc: 0x10490007  beq         $v0, $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4474BCu;
    {
        const bool branch_taken_0x4474bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x4474C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4474BCu;
        // 0x4474c0: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4474bc) {
            ctx->pc = 0x4474DCu;
            goto label_4474dc;
        }
    }
    ctx->pc = 0x4474C4u;
    // 0x4474c4: 0x481818  mult        $v1, $v0, $t0
    ctx->pc = 0x4474c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4474c8: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x4474c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4474cc: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x4474ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x4474d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4474d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4474d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4474d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4474d8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4474d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4474dc:
    // 0x4474dc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4474dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4474e0: 0x10490007  beq         $v0, $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4474E0u;
    {
        const bool branch_taken_0x4474e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x4474E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4474E0u;
        // 0x4474e4: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4474e0) {
            ctx->pc = 0x447500u;
            goto label_447500;
        }
    }
    ctx->pc = 0x4474E8u;
    // 0x4474e8: 0x481818  mult        $v1, $v0, $t0
    ctx->pc = 0x4474e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4474ec: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x4474ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4474f0: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x4474f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x4474f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4474f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4474f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4474f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4474fc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4474fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_447500:
    // 0x447500: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x447500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x447504: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x447504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x447508: 0x14e0ffd9  bnez        $a3, . + 4 + (-0x27 << 2)
    ctx->pc = 0x447508u;
    {
        const bool branch_taken_0x447508 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x44750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447508u;
        // 0x44750c: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447508) {
            ctx->pc = 0x447470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_447470;
        }
    }
    ctx->pc = 0x447510u;
label_447510:
    // 0x447510: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x447510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_447514:
    // 0x447514: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x447514u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447518: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x447518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44751c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x44751cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447520: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x447520u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x447524: 0x5440ff9c  bnel        $v0, $zero, . + 4 + (-0x64 << 2)
    ctx->pc = 0x447524u;
    {
        const bool branch_taken_0x447524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x447524) {
            ctx->pc = 0x447528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x447524u;
            // 0x447528: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x447398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_447398;
        }
    }
    ctx->pc = 0x44752Cu;
label_44752c:
    // 0x44752c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x44752cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x447530: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x447530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x447534: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x447534u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x447538: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x447538u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44753c: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x44753cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x447540: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x447540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x447544: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x447544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x447548: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x447548u;
    {
        const bool branch_taken_0x447548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x44754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447548u;
        // 0x44754c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447548) {
            ctx->pc = 0x447568u;
            goto label_447568;
        }
    }
    ctx->pc = 0x447550u;
    // 0x447550: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x447550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x447554: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x447554u;
    SET_GPR_U32(ctx, 31, 0x44755Cu);
    ctx->pc = 0x447558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447554u;
    // 0x447558: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x447554u, 0x44755Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44755Cu;
label_44755c:
    // 0x44755c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x44755cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x447560: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x447560u;
    {
        const bool branch_taken_0x447560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x447564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447560u;
        // 0x447564: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447560) {
            ctx->pc = 0x447770u;
            goto label_447770;
        }
    }
    ctx->pc = 0x447568u;
label_447568:
    // 0x447568: 0x1140006c  beqz        $t2, . + 4 + (0x6C << 2)
    ctx->pc = 0x447568u;
    {
        const bool branch_taken_0x447568 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x44756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447568u;
        // 0x44756c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447568) {
            ctx->pc = 0x44771Cu;
            goto label_44771c;
        }
    }
    ctx->pc = 0x447570u;
    // 0x447570: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x447570u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x447574: 0x24a7001c  addiu       $a3, $a1, 0x1C
    ctx->pc = 0x447574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
    // 0x447578: 0x19400022  blez        $t2, . + 4 + (0x22 << 2)
    ctx->pc = 0x447578u;
    {
        const bool branch_taken_0x447578 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x44757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447578u;
        // 0x44757c: 0x31430003  andi        $v1, $t2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x447578) {
            ctx->pc = 0x447604u;
            goto label_447604;
        }
    }
    ctx->pc = 0x447580u;
    // 0x447580: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x447580u;
    {
        const bool branch_taken_0x447580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x447584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447580u;
        // 0x447584: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x447580) {
            ctx->pc = 0x447644u;
            goto label_447644;
        }
    }
    ctx->pc = 0x447588u;
    // 0x447588: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x447588u;
    {
        const bool branch_taken_0x447588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447588u;
        // 0x44758c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x447588) {
            ctx->pc = 0x447604u;
            goto label_447604;
        }
    }
    ctx->pc = 0x447590u;
    // 0x447590: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x447590u;
    {
        const bool branch_taken_0x447590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x447590) {
            ctx->pc = 0x4475CCu;
            goto label_4475cc;
        }
    }
    ctx->pc = 0x447598u;
    // 0x447598: 0x1120000b  beqz        $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x447598u;
    {
        const bool branch_taken_0x447598 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x44759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447598u;
        // 0x44759c: 0x24e70028  addiu       $a3, $a3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447598) {
            ctx->pc = 0x4475C8u;
            goto label_4475c8;
        }
    }
    ctx->pc = 0x4475A0u;
    // 0x4475a0: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x4475a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x4475a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4475a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4475a8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4475A8u;
    {
        const bool branch_taken_0x4475a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4475ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4475A8u;
        // 0x4475ac: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4475a8) {
            ctx->pc = 0x4475CCu;
            goto label_4475cc;
        }
    }
    ctx->pc = 0x4475B0u;
    // 0x4475b0: 0xafa80020  sw          $t0, 0x20($sp)
    ctx->pc = 0x4475b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 8));
    // 0x4475b4: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x4475B4u;
    SET_GPR_U32(ctx, 31, 0x4475BCu);
    ctx->pc = 0x4475B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4475B4u;
    // 0x4475b8: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x4475B4u, 0x4475BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4475BCu;
label_4475bc:
    // 0x4475bc: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x4475bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x4475c0: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x4475C0u;
    {
        const bool branch_taken_0x4475c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4475C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4475C0u;
        // 0x4475c4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4475c0) {
            ctx->pc = 0x447770u;
            goto label_447770;
        }
    }
    ctx->pc = 0x4475C8u;
label_4475c8:
    // 0x4475c8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4475c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4475cc:
    // 0x4475cc: 0x50c9000c  beql        $a2, $t1, . + 4 + (0xC << 2)
    ctx->pc = 0x4475CCu;
    {
        const bool branch_taken_0x4475cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        if (branch_taken_0x4475cc) {
            ctx->pc = 0x4475D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4475CCu;
            // 0x4475d0: 0x24e70028  addiu       $a3, $a3, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x447600u;
            goto label_447600;
        }
    }
    ctx->pc = 0x4475D4u;
    // 0x4475d4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4475d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4475d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4475d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4475dc: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4475DCu;
    {
        const bool branch_taken_0x4475dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4475E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4475DCu;
        // 0x4475e0: 0x24e70028  addiu       $a3, $a3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4475dc) {
            ctx->pc = 0x447600u;
            goto label_447600;
        }
    }
    ctx->pc = 0x4475E4u;
    // 0x4475e4: 0xafa80020  sw          $t0, 0x20($sp)
    ctx->pc = 0x4475e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 8));
    // 0x4475e8: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x4475E8u;
    SET_GPR_U32(ctx, 31, 0x4475F0u);
    ctx->pc = 0x4475ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4475E8u;
    // 0x4475ec: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x4475E8u, 0x4475F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4475F0u;
label_4475f0:
    // 0x4475f0: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x4475f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x4475f4: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x4475F4u;
    {
        const bool branch_taken_0x4475f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4475F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4475F4u;
        // 0x4475f8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4475f4) {
            ctx->pc = 0x447770u;
            goto label_447770;
        }
    }
    ctx->pc = 0x4475FCu;
    // 0x4475fc: 0x0  nop
    ctx->pc = 0x4475fcu;
    // NOP
label_447600:
    // 0x447600: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x447600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_447604:
    // 0x447604: 0x10c9000c  beq         $a2, $t1, . + 4 + (0xC << 2)
    ctx->pc = 0x447604u;
    {
        const bool branch_taken_0x447604 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        ctx->pc = 0x447608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447604u;
        // 0x447608: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447604) {
            ctx->pc = 0x447638u;
            goto label_447638;
        }
    }
    ctx->pc = 0x44760Cu;
    // 0x44760c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x44760cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x447610: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x447610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x447614: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x447614u;
    {
        const bool branch_taken_0x447614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x447618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447614u;
        // 0x447618: 0xca102b  sltu        $v0, $a2, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x447614) {
            ctx->pc = 0x44763Cu;
            goto label_44763c;
        }
    }
    ctx->pc = 0x44761Cu;
    // 0x44761c: 0xafa80020  sw          $t0, 0x20($sp)
    ctx->pc = 0x44761cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 8));
    // 0x447620: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x447620u;
    SET_GPR_U32(ctx, 31, 0x447628u);
    ctx->pc = 0x447624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447620u;
    // 0x447624: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x447620u, 0x447628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447628u;
label_447628:
    // 0x447628: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x447628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x44762c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x44762Cu;
    {
        const bool branch_taken_0x44762c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x447630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44762Cu;
        // 0x447630: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44762c) {
            ctx->pc = 0x447770u;
            goto label_447770;
        }
    }
    ctx->pc = 0x447634u;
    // 0x447634: 0x0  nop
    ctx->pc = 0x447634u;
    // NOP
label_447638:
    // 0x447638: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x447638u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_44763c:
    // 0x44763c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x44763Cu;
    {
        const bool branch_taken_0x44763c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x447640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44763Cu;
        // 0x447640: 0x24e70028  addiu       $a3, $a3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44763c) {
            ctx->pc = 0x44771Cu;
            goto label_44771c;
        }
    }
    ctx->pc = 0x447644u;
label_447644:
    // 0x447644: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x447644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447648: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x447648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44764c: 0x0  nop
    ctx->pc = 0x44764cu;
    // NOP
label_447650:
    // 0x447650: 0x1089000b  beq         $a0, $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x447650u;
    {
        const bool branch_taken_0x447650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 9));
        ctx->pc = 0x447654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447650u;
        // 0x447654: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447650) {
            ctx->pc = 0x447680u;
            goto label_447680;
        }
    }
    ctx->pc = 0x447658u;
    // 0x447658: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x447658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44765c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x44765cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x447660: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x447660u;
    {
        const bool branch_taken_0x447660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x447664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447660u;
        // 0x447664: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447660) {
            ctx->pc = 0x447680u;
            goto label_447680;
        }
    }
    ctx->pc = 0x447668u;
    // 0x447668: 0xafa80020  sw          $t0, 0x20($sp)
    ctx->pc = 0x447668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 8));
    // 0x44766c: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x44766Cu;
    SET_GPR_U32(ctx, 31, 0x447674u);
    ctx->pc = 0x447670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44766Cu;
    // 0x447670: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x44766Cu, 0x447674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447674u;
label_447674:
    // 0x447674: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x447674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x447678: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x447678u;
    {
        const bool branch_taken_0x447678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447678u;
        // 0x44767c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447678) {
            ctx->pc = 0x447770u;
            goto label_447770;
        }
    }
    ctx->pc = 0x447680u;
label_447680:
    // 0x447680: 0x1049000b  beq         $v0, $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x447680u;
    {
        const bool branch_taken_0x447680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x447684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447680u;
        // 0x447684: 0x24820002  addiu       $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447680) {
            ctx->pc = 0x4476B0u;
            goto label_4476b0;
        }
    }
    ctx->pc = 0x447688u;
    // 0x447688: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x447688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x44768c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x44768cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x447690: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x447690u;
    {
        const bool branch_taken_0x447690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x447694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447690u;
        // 0x447694: 0x24820002  addiu       $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447690) {
            ctx->pc = 0x4476B0u;
            goto label_4476b0;
        }
    }
    ctx->pc = 0x447698u;
    // 0x447698: 0xafa80020  sw          $t0, 0x20($sp)
    ctx->pc = 0x447698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 8));
    // 0x44769c: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x44769Cu;
    SET_GPR_U32(ctx, 31, 0x4476A4u);
    ctx->pc = 0x4476A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44769Cu;
    // 0x4476a0: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x44769Cu, 0x4476A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4476A4u;
label_4476a4:
    // 0x4476a4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x4476a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x4476a8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x4476A8u;
    {
        const bool branch_taken_0x4476a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4476ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4476A8u;
        // 0x4476ac: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4476a8) {
            ctx->pc = 0x447770u;
            goto label_447770;
        }
    }
    ctx->pc = 0x4476B0u;
label_4476b0:
    // 0x4476b0: 0x1049000b  beq         $v0, $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x4476B0u;
    {
        const bool branch_taken_0x4476b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x4476B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4476B0u;
        // 0x4476b4: 0x24820003  addiu       $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4476b0) {
            ctx->pc = 0x4476E0u;
            goto label_4476e0;
        }
    }
    ctx->pc = 0x4476B8u;
    // 0x4476b8: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x4476b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x4476bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4476bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4476c0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4476C0u;
    {
        const bool branch_taken_0x4476c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4476C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4476C0u;
        // 0x4476c4: 0x24820003  addiu       $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4476c0) {
            ctx->pc = 0x4476E0u;
            goto label_4476e0;
        }
    }
    ctx->pc = 0x4476C8u;
    // 0x4476c8: 0xafa80020  sw          $t0, 0x20($sp)
    ctx->pc = 0x4476c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 8));
    // 0x4476cc: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x4476CCu;
    SET_GPR_U32(ctx, 31, 0x4476D4u);
    ctx->pc = 0x4476D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4476CCu;
    // 0x4476d0: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x4476CCu, 0x4476D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4476D4u;
label_4476d4:
    // 0x4476d4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x4476d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x4476d8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x4476D8u;
    {
        const bool branch_taken_0x4476d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4476DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4476D8u;
        // 0x4476dc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4476d8) {
            ctx->pc = 0x447770u;
            goto label_447770;
        }
    }
    ctx->pc = 0x4476E0u;
label_4476e0:
    // 0x4476e0: 0x1049000b  beq         $v0, $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x4476E0u;
    {
        const bool branch_taken_0x4476e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x4476E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4476E0u;
        // 0x4476e4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4476e0) {
            ctx->pc = 0x447710u;
            goto label_447710;
        }
    }
    ctx->pc = 0x4476E8u;
    // 0x4476e8: 0x8ca20078  lw          $v0, 0x78($a1)
    ctx->pc = 0x4476e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 120)));
    // 0x4476ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4476ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4476f0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4476F0u;
    {
        const bool branch_taken_0x4476f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4476F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4476F0u;
        // 0x4476f4: 0x8a102b  sltu        $v0, $a0, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4476f0) {
            ctx->pc = 0x447714u;
            goto label_447714;
        }
    }
    ctx->pc = 0x4476F8u;
    // 0x4476f8: 0xafa80020  sw          $t0, 0x20($sp)
    ctx->pc = 0x4476f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 8));
    // 0x4476fc: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x4476FCu;
    SET_GPR_U32(ctx, 31, 0x447704u);
    ctx->pc = 0x447700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4476FCu;
    // 0x447700: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x4476FCu, 0x447704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447704u;
label_447704:
    // 0x447704: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x447704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x447708: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x447708u;
    {
        const bool branch_taken_0x447708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447708u;
        // 0x44770c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447708) {
            ctx->pc = 0x447770u;
            goto label_447770;
        }
    }
    ctx->pc = 0x447710u;
label_447710:
    // 0x447710: 0x8a102b  sltu        $v0, $a0, $t2
    ctx->pc = 0x447710u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_447714:
    // 0x447714: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x447714u;
    {
        const bool branch_taken_0x447714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x447718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447714u;
        // 0x447718: 0x24a500a0  addiu       $a1, $a1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447714) {
            ctx->pc = 0x447650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_447650;
        }
    }
    ctx->pc = 0x44771Cu;
label_44771c:
    // 0x44771c: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x44771cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x447720: 0xc111bd4  jal         func_446F50
    ctx->pc = 0x447720u;
    SET_GPR_U32(ctx, 31, 0x447728u);
    ctx->pc = 0x447724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447720u;
    // 0x447724: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446F50u, 0x447720u, 0x447728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447728u;
label_447728:
    // 0x447728: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x447728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x44772c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x44772Cu;
    {
        const bool branch_taken_0x44772c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x447730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44772Cu;
        // 0x447730: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44772c) {
            ctx->pc = 0x447790u;
            goto label_447790;
        }
    }
    ctx->pc = 0x447734u;
    // 0x447734: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x447734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x447738: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x447738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44773c: 0x0  nop
    ctx->pc = 0x44773cu;
    // NOP
label_447740:
    // 0x447740: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x447740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x447744: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x447744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x447748: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x447748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x44774c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x44774cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x447750: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x447750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x447754: 0x5044000a  beql        $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x447754u;
    {
        const bool branch_taken_0x447754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x447754) {
            ctx->pc = 0x447758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x447754u;
            // 0x447758: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x447780u;
            goto label_447780;
        }
    }
    ctx->pc = 0x44775Cu;
    // 0x44775c: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x44775cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x447760: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x447760u;
    SET_GPR_U32(ctx, 31, 0x447768u);
    ctx->pc = 0x447764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447760u;
    // 0x447764: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x447760u, 0x447768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447768u;
label_447768:
    // 0x447768: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x447768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x44776c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x44776cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_447770:
    // 0x447770: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x447770u;
    SET_GPR_U32(ctx, 31, 0x447778u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x447770u, 0x447778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447778u;
label_447778:
    // 0x447778: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x447778u;
    {
        const bool branch_taken_0x447778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447778u;
        // 0x44777c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447778) {
            ctx->pc = 0x447798u;
            goto label_447798;
        }
    }
    ctx->pc = 0x447780u;
label_447780:
    // 0x447780: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x447780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x447784: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x447784u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x447788: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x447788u;
    {
        const bool branch_taken_0x447788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447788u;
        // 0x44778c: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447788) {
            ctx->pc = 0x447740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_447740;
        }
    }
    ctx->pc = 0x447790u;
label_447790:
    // 0x447790: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x447790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x447794: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x447794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_447798:
    // 0x447798: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x447798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x44779c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x44779cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4477a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4477A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4477A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4477A0u;
        // 0x4477a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4477A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4477A8u;
}
