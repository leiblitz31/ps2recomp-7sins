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

// Function: sub_0043D340
// Address: 0x43d340 - 0x43e260
void sub_0043D340_0x43d340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043D340_0x43d340");
#endif

    switch (ctx->pc) {
        case 0x43d3d0u: goto label_43d3d0;
        case 0x43d488u: goto label_43d488;
        case 0x43d550u: goto label_43d550;
        case 0x43d5e0u: goto label_43d5e0;
        case 0x43d648u: goto label_43d648;
        case 0x43d688u: goto label_43d688;
        case 0x43d7e8u: goto label_43d7e8;
        case 0x43d918u: goto label_43d918;
        case 0x43d998u: goto label_43d998;
        case 0x43dc58u: goto label_43dc58;
        case 0x43dc90u: goto label_43dc90;
        case 0x43dcc4u: goto label_43dcc4;
        case 0x43dcd4u: goto label_43dcd4;
        case 0x43dcf8u: goto label_43dcf8;
        case 0x43dd08u: goto label_43dd08;
        case 0x43dd74u: goto label_43dd74;
        case 0x43df28u: goto label_43df28;
        case 0x43e1d0u: goto label_43e1d0;
        default: break;
    }

    ctx->pc = 0x43d340u;

label_43d340:
    // 0x43d340: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x43d340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x43d344: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x43d344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x43d348: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x43d348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x43d34c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x43d34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x43d350: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43d350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d354: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x43d354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x43d358: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x43d358u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d35c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x43d35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x43d360: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x43d360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x43d364: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x43d364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x43d368: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x43d368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x43d36c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x43d36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x43d370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43d370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x43d374: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x43d374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x43d378: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x43d378u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x43d37c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x43D37Cu;
    {
        const bool branch_taken_0x43d37c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x43D380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D37Cu;
        // 0x43d380: 0x8eb10014  lw          $s1, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d37c) {
            ctx->pc = 0x43D3B4u;
            goto label_43d3b4;
        }
    }
    ctx->pc = 0x43D384u;
    // 0x43d384: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x43d384u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x43d388: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43D388u;
    {
        const bool branch_taken_0x43d388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D388u;
        // 0x43d38c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d388) {
            ctx->pc = 0x43D3A0u;
            goto label_43d3a0;
        }
    }
    ctx->pc = 0x43D390u;
    // 0x43d390: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x43D390u;
    {
        const bool branch_taken_0x43d390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x43D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D390u;
        // 0x43d394: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d390) {
            ctx->pc = 0x43D3B4u;
            goto label_43d3b4;
        }
    }
    ctx->pc = 0x43D398u;
    // 0x43d398: 0x1000019d  b           . + 4 + (0x19D << 2)
    ctx->pc = 0x43D398u;
    {
        const bool branch_taken_0x43d398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D398u;
        // 0x43d39c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d398) {
            ctx->pc = 0x43DA10u;
            goto label_43da10;
        }
    }
    ctx->pc = 0x43D3A0u;
label_43d3a0:
    // 0x43d3a0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x43d3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x43d3a4: 0x106200b2  beq         $v1, $v0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x43D3A4u;
    {
        const bool branch_taken_0x43d3a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x43D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D3A4u;
        // 0x43d3a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d3a4) {
            ctx->pc = 0x43D670u;
            goto label_43d670;
        }
    }
    ctx->pc = 0x43D3ACu;
    // 0x43d3ac: 0x10000198  b           . + 4 + (0x198 << 2)
    ctx->pc = 0x43D3ACu;
    {
        const bool branch_taken_0x43d3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D3ACu;
        // 0x43d3b0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d3ac) {
            ctx->pc = 0x43DA10u;
            goto label_43da10;
        }
    }
    ctx->pc = 0x43D3B4u;
label_43d3b4:
    // 0x43d3b4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x43d3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x43d3b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x43d3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d3bc: 0x18400192  blez        $v0, . + 4 + (0x192 << 2)
    ctx->pc = 0x43D3BCu;
    {
        const bool branch_taken_0x43d3bc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x43D3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D3BCu;
        // 0x43d3c0: 0x8eb30018  lw          $s3, 0x18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d3bc) {
            ctx->pc = 0x43DA08u;
            goto label_43da08;
        }
    }
    ctx->pc = 0x43D3C4u;
    // 0x43d3c4: 0x24170005  addiu       $s7, $zero, 0x5
    ctx->pc = 0x43d3c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x43d3c8: 0x24160006  addiu       $s6, $zero, 0x6
    ctx->pc = 0x43d3c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x43d3cc: 0x0  nop
    ctx->pc = 0x43d3ccu;
    // NOP
label_43d3d0:
    // 0x43d3d0: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x43d3d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x43d3d4: 0x3043006f  andi        $v1, $v0, 0x6F
    ctx->pc = 0x43d3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)111);
    // 0x43d3d8: 0x10770077  beq         $v1, $s7, . + 4 + (0x77 << 2)
    ctx->pc = 0x43D3D8u;
    {
        const bool branch_taken_0x43d3d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        ctx->pc = 0x43D3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D3D8u;
        // 0x43d3dc: 0x28620006  slti        $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d3d8) {
            ctx->pc = 0x43D5B8u;
            goto label_43d5b8;
        }
    }
    ctx->pc = 0x43D3E0u;
    // 0x43d3e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43D3E0u;
    {
        const bool branch_taken_0x43d3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43D3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D3E0u;
        // 0x43d3e4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d3e0) {
            ctx->pc = 0x43D3F8u;
            goto label_43d3f8;
        }
    }
    ctx->pc = 0x43D3E8u;
    // 0x43d3e8: 0x10760051  beq         $v1, $s6, . + 4 + (0x51 << 2)
    ctx->pc = 0x43D3E8u;
    {
        const bool branch_taken_0x43d3e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x43D3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D3E8u;
        // 0x43d3ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d3e8) {
            ctx->pc = 0x43D530u;
            goto label_43d530;
        }
    }
    ctx->pc = 0x43D3F0u;
    // 0x43d3f0: 0x10000187  b           . + 4 + (0x187 << 2)
    ctx->pc = 0x43D3F0u;
    {
        const bool branch_taken_0x43d3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D3F0u;
        // 0x43d3f4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d3f0) {
            ctx->pc = 0x43DA10u;
            goto label_43da10;
        }
    }
    ctx->pc = 0x43D3F8u;
label_43d3f8:
    // 0x43d3f8: 0x10400184  beqz        $v0, . + 4 + (0x184 << 2)
    ctx->pc = 0x43D3F8u;
    {
        const bool branch_taken_0x43d3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D3F8u;
        // 0x43d3fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d3f8) {
            ctx->pc = 0x43DA0Cu;
            goto label_43da0c;
        }
    }
    ctx->pc = 0x43D400u;
    // 0x43d400: 0x4620183  bltzl       $v1, . + 4 + (0x183 << 2)
    ctx->pc = 0x43D400u;
    {
        const bool branch_taken_0x43d400 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x43d400) {
            ctx->pc = 0x43D404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43D400u;
            // 0x43d404: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43DA10u;
            goto label_43da10;
        }
    }
    ctx->pc = 0x43D408u;
    // 0x43d408: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x43d408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x43d40c: 0x18400089  blez        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x43D40Cu;
    {
        const bool branch_taken_0x43d40c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x43D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D40Cu;
        // 0x43d410: 0x24b40001  addiu       $s4, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d40c) {
            ctx->pc = 0x43D634u;
            goto label_43d634;
        }
    }
    ctx->pc = 0x43D414u;
    // 0x43d414: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x43d414u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d418: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x43d418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d41c: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x43d41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x43d420: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x43D420u;
    {
        const bool branch_taken_0x43d420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D420u;
        // 0x43d424: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d420) {
            ctx->pc = 0x43D480u;
            goto label_43d480;
        }
    }
    ctx->pc = 0x43D428u;
    // 0x43d428: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x43d428u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x43d42c: 0x264a0002  addiu       $t2, $s2, 0x2
    ctx->pc = 0x43d42cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x43d430: 0x26270001  addiu       $a3, $s1, 0x1
    ctx->pc = 0x43d430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x43d434: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x43d434u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x43d438: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x43d438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x43d43c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x43d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x43d440: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x43d440u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x43d444: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x43d444u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x43d448: 0x90460003  lbu         $a2, 0x3($v0)
    ctx->pc = 0x43d448u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x43d44c: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x43d44cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x43d450: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x43d450u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x43d454: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x43d454u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x43d458: 0x308203e0  andi        $v0, $a0, 0x3E0
    ctx->pc = 0x43d458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)992);
    // 0x43d45c: 0x30637c00  andi        $v1, $v1, 0x7C00
    ctx->pc = 0x43d45cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31744);
    // 0x43d460: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x43d460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x43d464: 0x62200  sll         $a0, $a2, 8
    ctx->pc = 0x43d464u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x43d468: 0x510c2  srl         $v0, $a1, 3
    ctx->pc = 0x43d468u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x43d46c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x43d46cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x43d470: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x43d470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x43d474: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x43d474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x43d478: 0x1100006e  beqz        $t0, . + 4 + (0x6E << 2)
    ctx->pc = 0x43D478u;
    {
        const bool branch_taken_0x43d478 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D478u;
        // 0x43d47c: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d478) {
            ctx->pc = 0x43D634u;
            goto label_43d634;
        }
    }
    ctx->pc = 0x43D480u;
label_43d480:
    // 0x43d480: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x43d480u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d484: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x43d484u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_43d488:
    // 0x43d488: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x43d488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x43d48c: 0x2508fffe  addiu       $t0, $t0, -0x2
    ctx->pc = 0x43d48cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
    // 0x43d490: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x43d490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x43d494: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x43d494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x43d498: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x43d498u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x43d49c: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x43d49cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x43d4a0: 0x90460003  lbu         $a2, 0x3($v0)
    ctx->pc = 0x43d4a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x43d4a4: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x43d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x43d4a8: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x43d4a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x43d4ac: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x43d4acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x43d4b0: 0x308203e0  andi        $v0, $a0, 0x3E0
    ctx->pc = 0x43d4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)992);
    // 0x43d4b4: 0x30637c00  andi        $v1, $v1, 0x7C00
    ctx->pc = 0x43d4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31744);
    // 0x43d4b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x43d4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x43d4bc: 0x62200  sll         $a0, $a2, 8
    ctx->pc = 0x43d4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x43d4c0: 0x510c2  srl         $v0, $a1, 3
    ctx->pc = 0x43d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x43d4c4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x43d4c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x43d4c8: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x43d4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x43d4cc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x43d4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x43d4d0: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x43d4d0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x43d4d4: 0x91220001  lbu         $v0, 0x1($t1)
    ctx->pc = 0x43d4d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x43d4d8: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x43d4d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x43d4dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x43d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x43d4e0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x43d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x43d4e4: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x43d4e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x43d4e8: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x43d4e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x43d4ec: 0x90460003  lbu         $a2, 0x3($v0)
    ctx->pc = 0x43d4ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x43d4f0: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x43d4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x43d4f4: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x43d4f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x43d4f8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x43d4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x43d4fc: 0x308203e0  andi        $v0, $a0, 0x3E0
    ctx->pc = 0x43d4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)992);
    // 0x43d500: 0x30637c00  andi        $v1, $v1, 0x7C00
    ctx->pc = 0x43d500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31744);
    // 0x43d504: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x43d504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x43d508: 0x62200  sll         $a0, $a2, 8
    ctx->pc = 0x43d508u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x43d50c: 0x510c2  srl         $v0, $a1, 3
    ctx->pc = 0x43d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x43d510: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x43d510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x43d514: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x43d514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x43d518: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x43d518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x43d51c: 0xa4e20002  sh          $v0, 0x2($a3)
    ctx->pc = 0x43d51cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x43d520: 0x1500ffd9  bnez        $t0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x43D520u;
    {
        const bool branch_taken_0x43d520 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x43D524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D520u;
        // 0x43d524: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d520) {
            ctx->pc = 0x43D488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43d488;
        }
    }
    ctx->pc = 0x43D528u;
    // 0x43d528: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x43D528u;
    {
        const bool branch_taken_0x43d528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D528u;
        // 0x43d52c: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d528) {
            ctx->pc = 0x43D638u;
            goto label_43d638;
        }
    }
    ctx->pc = 0x43D530u;
label_43d530:
    // 0x43d530: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x43d530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x43d534: 0x24b40001  addiu       $s4, $a1, 0x1
    ctx->pc = 0x43d534u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x43d538: 0x1840003e  blez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x43D538u;
    {
        const bool branch_taken_0x43d538 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x43D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D538u;
        // 0x43d53c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d538) {
            ctx->pc = 0x43D634u;
            goto label_43d634;
        }
    }
    ctx->pc = 0x43D540u;
    // 0x43d540: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x43d540u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x43d544: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x43d544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d548: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x43d548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d54c: 0x0  nop
    ctx->pc = 0x43d54cu;
    // NOP
label_43d550:
    // 0x43d550: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x43d550u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x43d554: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x43d554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x43d558: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x43d558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x43d55c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x43d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x43d560: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x43d560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x43d564: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x43d564u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x43d568: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x43d568u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x43d56c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x43d56cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x43d570: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x43d570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x43d574: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x43d574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x43d578: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x43d578u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x43d57c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x43d57cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x43d580: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x43d580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x43d584: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x43d584u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x43d588: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x43d588u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x43d58c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x43d58cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x43d590: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x43d590u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x43d594: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x43d594u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x43d598: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x43d598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x43d59c: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x43d59cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x43d5a0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x43d5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x43d5a4: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x43d5a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x43d5a8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x43D5A8u;
    {
        const bool branch_taken_0x43d5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D5A8u;
        // 0x43d5ac: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d5a8) {
            ctx->pc = 0x43D550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43d550;
        }
    }
    ctx->pc = 0x43D5B0u;
    // 0x43d5b0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x43D5B0u;
    {
        const bool branch_taken_0x43d5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D5B0u;
        // 0x43d5b4: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d5b0) {
            ctx->pc = 0x43D638u;
            goto label_43d638;
        }
    }
    ctx->pc = 0x43D5B8u;
label_43d5b8:
    // 0x43d5b8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x43d5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x43d5bc: 0x24b40001  addiu       $s4, $a1, 0x1
    ctx->pc = 0x43d5bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x43d5c0: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x43D5C0u;
    {
        const bool branch_taken_0x43d5c0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x43D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D5C0u;
        // 0x43d5c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d5c0) {
            ctx->pc = 0x43D634u;
            goto label_43d634;
        }
    }
    ctx->pc = 0x43D5C8u;
    // 0x43d5c8: 0x3c0a0080  lui         $t2, 0x80
    ctx->pc = 0x43d5c8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)128 << 16));
    // 0x43d5cc: 0x3c0bff00  lui         $t3, 0xFF00
    ctx->pc = 0x43d5ccu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65280 << 16));
    // 0x43d5d0: 0x354a8081  ori         $t2, $t2, 0x8081
    ctx->pc = 0x43d5d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32897);
    // 0x43d5d4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x43d5d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d5d8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x43d5d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d5dc: 0x0  nop
    ctx->pc = 0x43d5dcu;
    // NOP
label_43d5e0:
    // 0x43d5e0: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x43d5e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x43d5e4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x43d5e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x43d5e8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x43d5e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x43d5ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x43d5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x43d5f0: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x43d5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x43d5f4: 0x90650003  lbu         $a1, 0x3($v1)
    ctx->pc = 0x43d5f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x43d5f8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x43d5f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x43d5fc: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x43d5fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x43d600: 0xaa2818  mult        $a1, $a1, $t2
    ctx->pc = 0x43d600u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x43d604: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x43d604u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x43d608: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x43d608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x43d60c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x43d60cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x43d610: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x43d610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x43d614: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x43d614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x43d618: 0xab2824  and         $a1, $a1, $t3
    ctx->pc = 0x43d618u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 11));
    // 0x43d61c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x43d61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x43d620: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x43d620u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x43d624: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x43d624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x43d628: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x43d628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x43d62c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x43D62Cu;
    {
        const bool branch_taken_0x43d62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43D630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D62Cu;
        // 0x43d630: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d62c) {
            ctx->pc = 0x43D5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43d5e0;
        }
    }
    ctx->pc = 0x43D634u;
label_43d634:
    // 0x43d634: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x43d634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_43d638:
    // 0x43d638: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x43d638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d63c: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x43d63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x43d640: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x43D640u;
    SET_GPR_U32(ctx, 31, 0x43D648u);
    ctx->pc = 0x43D644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43D640u;
    // 0x43d644: 0x24a5007f  addiu       $a1, $a1, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x43D640u, 0x43D648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D648u;
label_43d648:
    // 0x43d648: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x43d648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x43d64c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x43d64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d650: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x43d650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x43d654: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x43d654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x43d658: 0x2449021  addu        $s2, $s2, $a0
    ctx->pc = 0x43d658u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x43d65c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x43d65cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x43d660: 0x1440ff5b  bnez        $v0, . + 4 + (-0xA5 << 2)
    ctx->pc = 0x43D660u;
    {
        const bool branch_taken_0x43d660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43D664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D660u;
        // 0x43d664: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d660) {
            ctx->pc = 0x43D3D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43d3d0;
        }
    }
    ctx->pc = 0x43D668u;
    // 0x43d668: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x43D668u;
    {
        const bool branch_taken_0x43d668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D668u;
        // 0x43d66c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d668) {
            ctx->pc = 0x43DA0Cu;
            goto label_43da0c;
        }
    }
    ctx->pc = 0x43D670u;
label_43d670:
    // 0x43d670: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x43d670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x43d674: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x43d674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d678: 0x184000e3  blez        $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x43D678u;
    {
        const bool branch_taken_0x43d678 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x43D67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D678u;
        // 0x43d67c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d678) {
            ctx->pc = 0x43DA08u;
            goto label_43da08;
        }
    }
    ctx->pc = 0x43D680u;
    // 0x43d680: 0x240c0005  addiu       $t4, $zero, 0x5
    ctx->pc = 0x43d680u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x43d684: 0x240d0006  addiu       $t5, $zero, 0x6
    ctx->pc = 0x43d684u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_43d688:
    // 0x43d688: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x43d688u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x43d68c: 0x3043006f  andi        $v1, $v0, 0x6F
    ctx->pc = 0x43d68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)111);
    // 0x43d690: 0x106c00b8  beq         $v1, $t4, . + 4 + (0xB8 << 2)
    ctx->pc = 0x43D690u;
    {
        const bool branch_taken_0x43d690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 12));
        ctx->pc = 0x43D694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D690u;
        // 0x43d694: 0x28620006  slti        $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d690) {
            ctx->pc = 0x43D974u;
            goto label_43d974;
        }
    }
    ctx->pc = 0x43D698u;
    // 0x43d698: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43D698u;
    {
        const bool branch_taken_0x43d698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D698u;
        // 0x43d69c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d698) {
            ctx->pc = 0x43D6B0u;
            goto label_43d6b0;
        }
    }
    ctx->pc = 0x43D6A0u;
    // 0x43d6a0: 0x106d0096  beq         $v1, $t5, . + 4 + (0x96 << 2)
    ctx->pc = 0x43D6A0u;
    {
        const bool branch_taken_0x43d6a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 13));
        ctx->pc = 0x43D6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D6A0u;
        // 0x43d6a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d6a0) {
            ctx->pc = 0x43D8FCu;
            goto label_43d8fc;
        }
    }
    ctx->pc = 0x43D6A8u;
    // 0x43d6a8: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x43D6A8u;
    {
        const bool branch_taken_0x43d6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D6A8u;
        // 0x43d6ac: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d6a8) {
            ctx->pc = 0x43DA10u;
            goto label_43da10;
        }
    }
    ctx->pc = 0x43D6B0u;
label_43d6b0:
    // 0x43d6b0: 0x104000d6  beqz        $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x43D6B0u;
    {
        const bool branch_taken_0x43d6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D6B0u;
        // 0x43d6b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d6b0) {
            ctx->pc = 0x43DA0Cu;
            goto label_43da0c;
        }
    }
    ctx->pc = 0x43D6B8u;
    // 0x43d6b8: 0x46200d5  bltzl       $v1, . + 4 + (0xD5 << 2)
    ctx->pc = 0x43D6B8u;
    {
        const bool branch_taken_0x43d6b8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x43d6b8) {
            ctx->pc = 0x43D6BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43D6B8u;
            // 0x43d6bc: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43DA10u;
            goto label_43da10;
        }
    }
    ctx->pc = 0x43D6C0u;
    // 0x43d6c0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x43d6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x43d6c4: 0x184000c7  blez        $v0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x43D6C4u;
    {
        const bool branch_taken_0x43d6c4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x43D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D6C4u;
        // 0x43d6c8: 0x24b40001  addiu       $s4, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d6c4) {
            ctx->pc = 0x43D9E4u;
            goto label_43d9e4;
        }
    }
    ctx->pc = 0x43D6CCu;
    // 0x43d6cc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x43d6ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d6d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x43d6d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d6d4: 0x81023  negu        $v0, $t0
    ctx->pc = 0x43d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
    // 0x43d6d8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x43d6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x43d6dc: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x43D6DCu;
    {
        const bool branch_taken_0x43d6dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D6DCu;
        // 0x43d6e0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d6dc) {
            ctx->pc = 0x43D7D4u;
            goto label_43d7d4;
        }
    }
    ctx->pc = 0x43D6E4u;
    // 0x43d6e4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x43d6e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x43d6e8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x43D6E8u;
    {
        const bool branch_taken_0x43d6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D6E8u;
        // 0x43d6ec: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d6e8) {
            ctx->pc = 0x43D788u;
            goto label_43d788;
        }
    }
    ctx->pc = 0x43D6F0u;
    // 0x43d6f0: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x43D6F0u;
    {
        const bool branch_taken_0x43d6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43d6f0) {
            ctx->pc = 0x43D6F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43D6F0u;
            // 0x43d6f4: 0x90c20002  lbu         $v0, 0x2($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43D744u;
            goto label_43d744;
        }
    }
    ctx->pc = 0x43D6F8u;
    // 0x43d6f8: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x43d6f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x43d6fc: 0x26470002  addiu       $a3, $s2, 0x2
    ctx->pc = 0x43d6fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x43d700: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x43d700u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x43d704: 0x26260004  addiu       $a2, $s1, 0x4
    ctx->pc = 0x43d704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x43d708: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x43d708u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x43d70c: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x43d70cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x43d710: 0x92250003  lbu         $a1, 0x3($s1)
    ctx->pc = 0x43d710u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x43d714: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x43d714u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x43d718: 0x30637c00  andi        $v1, $v1, 0x7C00
    ctx->pc = 0x43d718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31744);
    // 0x43d71c: 0x308403e0  andi        $a0, $a0, 0x3E0
    ctx->pc = 0x43d71cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)992);
    // 0x43d720: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x43d720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x43d724: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x43d724u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x43d728: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x43d728u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x43d72c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x43d72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x43d730: 0x30a58000  andi        $a1, $a1, 0x8000
    ctx->pc = 0x43d730u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x43d734: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x43d734u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x43d738: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x43d738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x43d73c: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x43d73cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x43d740: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x43d740u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_43d744:
    // 0x43d744: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x43d744u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x43d748: 0x90c40001  lbu         $a0, 0x1($a2)
    ctx->pc = 0x43d748u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x43d74c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x43d74cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x43d750: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x43d750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x43d754: 0x90c50003  lbu         $a1, 0x3($a2)
    ctx->pc = 0x43d754u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x43d758: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x43d758u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x43d75c: 0x30427c00  andi        $v0, $v0, 0x7C00
    ctx->pc = 0x43d75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31744);
    // 0x43d760: 0x308403e0  andi        $a0, $a0, 0x3E0
    ctx->pc = 0x43d760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)992);
    // 0x43d764: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x43d764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x43d768: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x43d768u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x43d76c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x43d76cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x43d770: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x43d770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x43d774: 0x30a58000  andi        $a1, $a1, 0x8000
    ctx->pc = 0x43d774u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x43d778: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x43d778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x43d77c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x43d77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x43d780: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x43d780u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x43d784: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x43d784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_43d788:
    // 0x43d788: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x43d788u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x43d78c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x43d78cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x43d790: 0x90c40001  lbu         $a0, 0x1($a2)
    ctx->pc = 0x43d790u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x43d794: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x43d794u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x43d798: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x43d798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x43d79c: 0x90c50003  lbu         $a1, 0x3($a2)
    ctx->pc = 0x43d79cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x43d7a0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x43d7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x43d7a4: 0x30427c00  andi        $v0, $v0, 0x7C00
    ctx->pc = 0x43d7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31744);
    // 0x43d7a8: 0x308403e0  andi        $a0, $a0, 0x3E0
    ctx->pc = 0x43d7a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)992);
    // 0x43d7ac: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x43d7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x43d7b0: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x43d7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x43d7b4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x43d7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x43d7b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x43d7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x43d7bc: 0x30a58000  andi        $a1, $a1, 0x8000
    ctx->pc = 0x43d7bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x43d7c0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x43d7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x43d7c4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x43d7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x43d7c8: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x43d7c8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x43d7cc: 0x11000067  beqz        $t0, . + 4 + (0x67 << 2)
    ctx->pc = 0x43D7CCu;
    {
        const bool branch_taken_0x43d7cc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D7CCu;
        // 0x43d7d0: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d7cc) {
            ctx->pc = 0x43D96Cu;
            goto label_43d96c;
        }
    }
    ctx->pc = 0x43D7D4u;
label_43d7d4:
    // 0x43d7d4: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x43d7d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d7d8: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x43d7d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d7dc: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x43d7dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d7e0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x43d7e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d7e4: 0x0  nop
    ctx->pc = 0x43d7e4u;
    // NOP
label_43d7e8:
    // 0x43d7e8: 0x90e50002  lbu         $a1, 0x2($a3)
    ctx->pc = 0x43d7e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x43d7ec: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x43d7ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x43d7f0: 0x91220001  lbu         $v0, 0x1($t1)
    ctx->pc = 0x43d7f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x43d7f4: 0x91440000  lbu         $a0, 0x0($t2)
    ctx->pc = 0x43d7f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x43d7f8: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x43d7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x43d7fc: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x43d7fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x43d800: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x43d800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x43d804: 0x304203e0  andi        $v0, $v0, 0x3E0
    ctx->pc = 0x43d804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)992);
    // 0x43d808: 0x30a57c00  andi        $a1, $a1, 0x7C00
    ctx->pc = 0x43d808u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31744);
    // 0x43d80c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x43d80cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x43d810: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x43d810u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x43d814: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x43d814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x43d818: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x43d818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x43d81c: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x43d81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x43d820: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x43d820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x43d824: 0xa5640000  sh          $a0, 0x0($t3)
    ctx->pc = 0x43d824u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x43d828: 0x90e50006  lbu         $a1, 0x6($a3)
    ctx->pc = 0x43d828u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x43d82c: 0x91220005  lbu         $v0, 0x5($t1)
    ctx->pc = 0x43d82cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 5)));
    // 0x43d830: 0x91440004  lbu         $a0, 0x4($t2)
    ctx->pc = 0x43d830u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x43d834: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x43d834u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x43d838: 0x90c30007  lbu         $v1, 0x7($a2)
    ctx->pc = 0x43d838u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
    // 0x43d83c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x43d83cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x43d840: 0x304203e0  andi        $v0, $v0, 0x3E0
    ctx->pc = 0x43d840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)992);
    // 0x43d844: 0x30a57c00  andi        $a1, $a1, 0x7C00
    ctx->pc = 0x43d844u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31744);
    // 0x43d848: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x43d848u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x43d84c: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x43d84cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x43d850: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x43d850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x43d854: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x43d854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x43d858: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x43d858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x43d85c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x43d85cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x43d860: 0xa5640002  sh          $a0, 0x2($t3)
    ctx->pc = 0x43d860u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x43d864: 0x90e5000a  lbu         $a1, 0xA($a3)
    ctx->pc = 0x43d864u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x43d868: 0x91220009  lbu         $v0, 0x9($t1)
    ctx->pc = 0x43d868u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 9)));
    // 0x43d86c: 0x91440008  lbu         $a0, 0x8($t2)
    ctx->pc = 0x43d86cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x43d870: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x43d870u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x43d874: 0x90c3000b  lbu         $v1, 0xB($a2)
    ctx->pc = 0x43d874u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 11)));
    // 0x43d878: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x43d878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x43d87c: 0x304203e0  andi        $v0, $v0, 0x3E0
    ctx->pc = 0x43d87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)992);
    // 0x43d880: 0x30a57c00  andi        $a1, $a1, 0x7C00
    ctx->pc = 0x43d880u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31744);
    // 0x43d884: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x43d884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x43d888: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x43d888u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x43d88c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x43d88cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x43d890: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x43d890u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x43d894: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x43d894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x43d898: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x43d898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x43d89c: 0xa5640004  sh          $a0, 0x4($t3)
    ctx->pc = 0x43d89cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x43d8a0: 0x90e3000e  lbu         $v1, 0xE($a3)
    ctx->pc = 0x43d8a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x43d8a4: 0x9122000d  lbu         $v0, 0xD($t1)
    ctx->pc = 0x43d8a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 13)));
    // 0x43d8a8: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x43d8a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x43d8ac: 0x9145000c  lbu         $a1, 0xC($t2)
    ctx->pc = 0x43d8acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x43d8b0: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x43d8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x43d8b4: 0x90c4000f  lbu         $a0, 0xF($a2)
    ctx->pc = 0x43d8b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 15)));
    // 0x43d8b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x43d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x43d8bc: 0x30637c00  andi        $v1, $v1, 0x7C00
    ctx->pc = 0x43d8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31744);
    // 0x43d8c0: 0x304203e0  andi        $v0, $v0, 0x3E0
    ctx->pc = 0x43d8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)992);
    // 0x43d8c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x43d8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x43d8c8: 0x528c2  srl         $a1, $a1, 3
    ctx->pc = 0x43d8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x43d8cc: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x43d8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x43d8d0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x43d8d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x43d8d4: 0x30848000  andi        $a0, $a0, 0x8000
    ctx->pc = 0x43d8d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x43d8d8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x43d8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x43d8dc: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x43d8dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x43d8e0: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x43d8e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x43d8e4: 0xa5650006  sh          $a1, 0x6($t3)
    ctx->pc = 0x43d8e4u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x43d8e8: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x43d8e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x43d8ec: 0x1500ffbe  bnez        $t0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x43D8ECu;
    {
        const bool branch_taken_0x43d8ec = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x43D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D8ECu;
        // 0x43d8f0: 0x256b0008  addiu       $t3, $t3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d8ec) {
            ctx->pc = 0x43D7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43d7e8;
        }
    }
    ctx->pc = 0x43D8F4u;
    // 0x43d8f4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x43D8F4u;
    {
        const bool branch_taken_0x43d8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D8F4u;
        // 0x43d8f8: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d8f4) {
            ctx->pc = 0x43D9E4u;
            goto label_43d9e4;
        }
    }
    ctx->pc = 0x43D8FCu;
label_43d8fc:
    // 0x43d8fc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x43d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x43d900: 0x24b40001  addiu       $s4, $a1, 0x1
    ctx->pc = 0x43d900u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x43d904: 0x18400037  blez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x43D904u;
    {
        const bool branch_taken_0x43d904 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x43D908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D904u;
        // 0x43d908: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d904) {
            ctx->pc = 0x43D9E4u;
            goto label_43d9e4;
        }
    }
    ctx->pc = 0x43D90Cu;
    // 0x43d90c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x43d90cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x43d910: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x43d910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d914: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x43d914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_43d918:
    // 0x43d918: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x43d918u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x43d91c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x43d91cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x43d920: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x43d920u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x43d924: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x43d924u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x43d928: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x43d928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x43d92c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x43d92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x43d930: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x43d930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x43d934: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x43d934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x43d938: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x43d938u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x43d93c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x43d93cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x43d940: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x43d940u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x43d944: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x43d944u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x43d948: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x43d948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x43d94c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x43d94cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x43d950: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x43d950u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x43d954: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x43d954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x43d958: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x43d958u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x43d95c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x43d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x43d960: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x43d960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x43d964: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x43D964u;
    {
        const bool branch_taken_0x43d964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43D968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D964u;
        // 0x43d968: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d964) {
            ctx->pc = 0x43D918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43d918;
        }
    }
    ctx->pc = 0x43D96Cu;
label_43d96c:
    // 0x43d96c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x43D96Cu;
    {
        const bool branch_taken_0x43d96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D96Cu;
        // 0x43d970: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d96c) {
            ctx->pc = 0x43D9E4u;
            goto label_43d9e4;
        }
    }
    ctx->pc = 0x43D974u;
label_43d974:
    // 0x43d974: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x43d974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x43d978: 0x24b40001  addiu       $s4, $a1, 0x1
    ctx->pc = 0x43d978u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x43d97c: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x43D97Cu;
    {
        const bool branch_taken_0x43d97c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x43D980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D97Cu;
        // 0x43d980: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d97c) {
            ctx->pc = 0x43D9E4u;
            goto label_43d9e4;
        }
    }
    ctx->pc = 0x43D984u;
    // 0x43d984: 0x3c090080  lui         $t1, 0x80
    ctx->pc = 0x43d984u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)128 << 16));
    // 0x43d988: 0x3c0aff00  lui         $t2, 0xFF00
    ctx->pc = 0x43d988u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65280 << 16));
    // 0x43d98c: 0x35298081  ori         $t1, $t1, 0x8081
    ctx->pc = 0x43d98cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32897);
    // 0x43d990: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x43d990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d994: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x43d994u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_43d998:
    // 0x43d998: 0x90c40003  lbu         $a0, 0x3($a2)
    ctx->pc = 0x43d998u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x43d99c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x43d99cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x43d9a0: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x43d9a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x43d9a4: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x43d9a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x43d9a8: 0x892018  mult        $a0, $a0, $t1
    ctx->pc = 0x43d9a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x43d9ac: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x43d9acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x43d9b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x43d9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x43d9b4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x43d9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x43d9b8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x43d9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x43d9bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x43d9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x43d9c0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x43d9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x43d9c4: 0x8a2024  and         $a0, $a0, $t2
    ctx->pc = 0x43d9c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
    // 0x43d9c8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x43d9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x43d9cc: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x43d9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x43d9d0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x43d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x43d9d4: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x43d9d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x43d9d8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x43D9D8u;
    {
        const bool branch_taken_0x43d9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D9D8u;
        // 0x43d9dc: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d9d8) {
            ctx->pc = 0x43D998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43d998;
        }
    }
    ctx->pc = 0x43D9E0u;
    // 0x43d9e0: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x43d9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_43d9e4:
    // 0x43d9e4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x43d9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x43d9e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x43d9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d9ec: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x43d9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x43d9f0: 0xa6202a  slt         $a0, $a1, $a2
    ctx->pc = 0x43d9f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x43d9f4: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x43d9f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x43d9f8: 0x1480ff23  bnez        $a0, . + 4 + (-0xDD << 2)
    ctx->pc = 0x43D9F8u;
    {
        const bool branch_taken_0x43d9f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x43D9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D9F8u;
        // 0x43d9fc: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d9f8) {
            ctx->pc = 0x43D688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43d688;
        }
    }
    ctx->pc = 0x43DA00u;
    // 0x43da00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x43DA00u;
    {
        const bool branch_taken_0x43da00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DA00u;
        // 0x43da04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43da00) {
            ctx->pc = 0x43DA0Cu;
            goto label_43da0c;
        }
    }
    ctx->pc = 0x43DA08u;
label_43da08:
    // 0x43da08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43da08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43da0c:
    // 0x43da0c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x43da0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_43da10:
    // 0x43da10: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x43da10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x43da14: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x43da14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x43da18: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x43da18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x43da1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x43da1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x43da20: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x43da20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x43da24: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x43da24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43da28: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x43da28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43da2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43da2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43da30: 0x3e00008  jr          $ra
    ctx->pc = 0x43DA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DA30u;
        // 0x43da34: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43DA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43DA38u;
    // 0x43da38: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x43da38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43da3c: 0x30c60f00  andi        $a2, $a2, 0xF00
    ctx->pc = 0x43da3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3840);
    // 0x43da40: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x43da40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x43da44: 0x10c2000e  beq         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x43DA44u;
    {
        const bool branch_taken_0x43da44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x43DA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DA44u;
        // 0x43da48: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43da44) {
            ctx->pc = 0x43DA80u;
            goto label_43da80;
        }
    }
    ctx->pc = 0x43DA4Cu;
    // 0x43da4c: 0x28c20101  slti        $v0, $a2, 0x101
    ctx->pc = 0x43da4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x43da50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43DA50u;
    {
        const bool branch_taken_0x43da50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DA50u;
        // 0x43da54: 0x24020500  addiu       $v0, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43da50) {
            ctx->pc = 0x43DA68u;
            goto label_43da68;
        }
    }
    ctx->pc = 0x43DA58u;
    // 0x43da58: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x43DA58u;
    {
        const bool branch_taken_0x43da58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x43DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DA58u;
        // 0x43da5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43da58) {
            ctx->pc = 0x43DA80u;
            goto label_43da80;
        }
    }
    ctx->pc = 0x43DA60u;
    // 0x43da60: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x43DA60u;
    {
        const bool branch_taken_0x43da60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43da60) {
            ctx->pc = 0x43DB24u;
            goto label_43db24;
        }
    }
    ctx->pc = 0x43DA68u;
label_43da68:
    // 0x43da68: 0x10c20013  beq         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x43DA68u;
    {
        const bool branch_taken_0x43da68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x43DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DA68u;
        // 0x43da6c: 0x24020600  addiu       $v0, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43da68) {
            ctx->pc = 0x43DAB8u;
            goto label_43dab8;
        }
    }
    ctx->pc = 0x43DA70u;
    // 0x43da70: 0x10c20021  beq         $a2, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x43DA70u;
    {
        const bool branch_taken_0x43da70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x43DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DA70u;
        // 0x43da74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43da70) {
            ctx->pc = 0x43DAF8u;
            goto label_43daf8;
        }
    }
    ctx->pc = 0x43DA78u;
    // 0x43da78: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x43DA78u;
    {
        const bool branch_taken_0x43da78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43da78) {
            ctx->pc = 0x43DB24u;
            goto label_43db24;
        }
    }
    ctx->pc = 0x43DA80u;
label_43da80:
    // 0x43da80: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x43da80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x43da84: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x43da84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x43da88: 0x90e50003  lbu         $a1, 0x3($a3)
    ctx->pc = 0x43da88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x43da8c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x43da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x43da90: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x43da90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x43da94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x43da94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x43da98: 0x30427c00  andi        $v0, $v0, 0x7C00
    ctx->pc = 0x43da98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31744);
    // 0x43da9c: 0x306303e0  andi        $v1, $v1, 0x3E0
    ctx->pc = 0x43da9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)992);
    // 0x43daa0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x43daa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x43daa4: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x43daa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x43daa8: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x43daa8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x43daac: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x43daacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x43dab0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x43DAB0u;
    {
        const bool branch_taken_0x43dab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DAB0u;
        // 0x43dab4: 0x30a58000  andi        $a1, $a1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43dab0) {
            ctx->pc = 0x43DAECu;
            goto label_43daec;
        }
    }
    ctx->pc = 0x43DAB8u;
label_43dab8:
    // 0x43dab8: 0x90e50003  lbu         $a1, 0x3($a3)
    ctx->pc = 0x43dab8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x43dabc: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x43dabcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x43dac0: 0x34638081  ori         $v1, $v1, 0x8081
    ctx->pc = 0x43dac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32897);
    // 0x43dac4: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x43dac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x43dac8: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x43dac8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x43dacc: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x43daccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x43dad0: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x43dad0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x43dad4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x43dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x43dad8: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x43dad8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x43dadc: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x43dadcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x43dae0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x43dae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x43dae4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x43dae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x43dae8: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x43dae8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_43daec:
    // 0x43daec: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x43daecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x43daf0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x43DAF0u;
    {
        const bool branch_taken_0x43daf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DAF0u;
        // 0x43daf4: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43daf0) {
            ctx->pc = 0x43DB20u;
            goto label_43db20;
        }
    }
    ctx->pc = 0x43DAF8u;
label_43daf8:
    // 0x43daf8: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x43daf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x43dafc: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x43dafcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x43db00: 0x90e40002  lbu         $a0, 0x2($a3)
    ctx->pc = 0x43db00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x43db04: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x43db04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x43db08: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x43db08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x43db0c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x43db0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x43db10: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x43db10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x43db14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x43db14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x43db18: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x43db18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x43db1c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x43db1cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_43db20:
    // 0x43db20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43db20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43db24:
    // 0x43db24: 0x3e00008  jr          $ra
    ctx->pc = 0x43DB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43DB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43DB2Cu;
    // 0x43db2c: 0x0  nop
    ctx->pc = 0x43db2cu;
    // NOP
    // 0x43db30: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x43db30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43db34: 0x30c60f00  andi        $a2, $a2, 0xF00
    ctx->pc = 0x43db34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3840);
    // 0x43db38: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x43db38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x43db3c: 0x10c2000e  beq         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x43DB3Cu;
    {
        const bool branch_taken_0x43db3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x43DB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DB3Cu;
        // 0x43db40: 0x8ca70000  lw          $a3, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43db3c) {
            ctx->pc = 0x43DB78u;
            goto label_43db78;
        }
    }
    ctx->pc = 0x43DB44u;
    // 0x43db44: 0x28c20101  slti        $v0, $a2, 0x101
    ctx->pc = 0x43db44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x43db48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43DB48u;
    {
        const bool branch_taken_0x43db48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43DB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DB48u;
        // 0x43db4c: 0x24020500  addiu       $v0, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43db48) {
            ctx->pc = 0x43DB60u;
            goto label_43db60;
        }
    }
    ctx->pc = 0x43DB50u;
    // 0x43db50: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x43DB50u;
    {
        const bool branch_taken_0x43db50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x43DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DB50u;
        // 0x43db54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43db50) {
            ctx->pc = 0x43DB78u;
            goto label_43db78;
        }
    }
    ctx->pc = 0x43DB58u;
    // 0x43db58: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x43DB58u;
    {
        const bool branch_taken_0x43db58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43db58) {
            ctx->pc = 0x43DC10u;
            goto label_43dc10;
        }
    }
    ctx->pc = 0x43DB60u;
label_43db60:
    // 0x43db60: 0x10c20014  beq         $a2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x43DB60u;
    {
        const bool branch_taken_0x43db60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x43DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DB60u;
        // 0x43db64: 0x24020600  addiu       $v0, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43db60) {
            ctx->pc = 0x43DBB4u;
            goto label_43dbb4;
        }
    }
    ctx->pc = 0x43DB68u;
    // 0x43db68: 0x10c20021  beq         $a2, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x43DB68u;
    {
        const bool branch_taken_0x43db68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x43DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DB68u;
        // 0x43db6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43db68) {
            ctx->pc = 0x43DBF0u;
            goto label_43dbf0;
        }
    }
    ctx->pc = 0x43DB70u;
    // 0x43db70: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x43DB70u;
    {
        const bool branch_taken_0x43db70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43db70) {
            ctx->pc = 0x43DC10u;
            goto label_43dc10;
        }
    }
    ctx->pc = 0x43DB78u;
label_43db78:
    // 0x43db78: 0x711c2  srl         $v0, $a3, 7
    ctx->pc = 0x43db78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 7));
    // 0x43db7c: 0x71882  srl         $v1, $a3, 2
    ctx->pc = 0x43db7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 2));
    // 0x43db80: 0x304200f8  andi        $v0, $v0, 0xF8
    ctx->pc = 0x43db80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)248);
    // 0x43db84: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x43db84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x43db88: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x43db88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x43db8c: 0xa1020002  sb          $v0, 0x2($t0)
    ctx->pc = 0x43db8cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x43db90: 0xa1030001  sb          $v1, 0x1($t0)
    ctx->pc = 0x43db90u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x43db94: 0x30e28000  andi        $v0, $a3, 0x8000
    ctx->pc = 0x43db94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x43db98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x43DB98u;
    {
        const bool branch_taken_0x43db98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43DB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DB98u;
        // 0x43db9c: 0xa1040000  sb          $a0, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43db98) {
            ctx->pc = 0x43DBACu;
            goto label_43dbac;
        }
    }
    ctx->pc = 0x43DBA0u;
    // 0x43dba0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x43dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x43dba4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x43DBA4u;
    {
        const bool branch_taken_0x43dba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43DBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DBA4u;
        // 0x43dba8: 0xa1020003  sb          $v0, 0x3($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43dba4) {
            ctx->pc = 0x43DC0Cu;
            goto label_43dc0c;
        }
    }
    ctx->pc = 0x43DBACu;
label_43dbac:
    // 0x43dbac: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x43DBACu;
    {
        const bool branch_taken_0x43dbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43DBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DBACu;
        // 0x43dbb0: 0xa1000003  sb          $zero, 0x3($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43dbac) {
            ctx->pc = 0x43DC0Cu;
            goto label_43dc0c;
        }
    }
    ctx->pc = 0x43DBB4u;
label_43dbb4:
    // 0x43dbb4: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x43dbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x43dbb8: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x43dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x43dbbc: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x43dbbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x43dbc0: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x43dbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x43dbc4: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x43dbc4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x43dbc8: 0x72402  srl         $a0, $a3, 16
    ctx->pc = 0x43dbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x43dbcc: 0x72a02  srl         $a1, $a3, 8
    ctx->pc = 0x43dbccu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x43dbd0: 0xa1040002  sb          $a0, 0x2($t0)
    ctx->pc = 0x43dbd0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x43dbd4: 0xa1050001  sb          $a1, 0x1($t0)
    ctx->pc = 0x43dbd4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x43dbd8: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x43dbd8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x43dbdc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x43DBDCu;
    {
        const bool branch_taken_0x43dbdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43dbdc) {
            ctx->pc = 0x43DBE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43DBDCu;
            // 0x43dbe0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x43DBE4u;
            goto label_43dbe4;
        }
    }
    ctx->pc = 0x43DBE4u;
label_43dbe4:
    // 0x43dbe4: 0x1812  mflo        $v1
    ctx->pc = 0x43dbe4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x43dbe8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x43DBE8u;
    {
        const bool branch_taken_0x43dbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43DBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DBE8u;
        // 0x43dbec: 0xa1030003  sb          $v1, 0x3($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43dbe8) {
            ctx->pc = 0x43DC0Cu;
            goto label_43dc0c;
        }
    }
    ctx->pc = 0x43DBF0u;
label_43dbf0:
    // 0x43dbf0: 0x71402  srl         $v0, $a3, 16
    ctx->pc = 0x43dbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x43dbf4: 0x71a02  srl         $v1, $a3, 8
    ctx->pc = 0x43dbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x43dbf8: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x43dbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x43dbfc: 0xa1030001  sb          $v1, 0x1($t0)
    ctx->pc = 0x43dbfcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x43dc00: 0xa1040003  sb          $a0, 0x3($t0)
    ctx->pc = 0x43dc00u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x43dc04: 0xa1020002  sb          $v0, 0x2($t0)
    ctx->pc = 0x43dc04u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x43dc08: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x43dc08u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
label_43dc0c:
    // 0x43dc0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43dc10:
    // 0x43dc10: 0x3e00008  jr          $ra
    ctx->pc = 0x43DC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43DC10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43DC18u;
    // 0x43dc18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x43dc18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x43dc1c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x43dc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x43dc20: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x43dc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x43dc24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43dc24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43dc28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x43dc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x43dc2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x43dc2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43dc30: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x43dc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x43dc34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43dc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x43dc38: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x43dc38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x43dc3c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x43dc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x43dc40: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x43dc40u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x43dc44: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x43DC44u;
    {
        const bool branch_taken_0x43dc44 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x43DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DC44u;
        // 0x43dc48: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43dc44) {
            ctx->pc = 0x43DC60u;
            goto label_43dc60;
        }
    }
    ctx->pc = 0x43DC4Cu;
    // 0x43dc4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x43dc4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43dc50: 0xc1075c0  jal         func_41D700
    ctx->pc = 0x43DC50u;
    SET_GPR_U32(ctx, 31, 0x43DC58u);
    ctx->pc = 0x43DC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43DC50u;
    // 0x43dc54: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D700u, 0x43DC50u, 0x43DC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43DC58u;
label_43dc58:
    // 0x43dc58: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x43DC58u;
    {
        const bool branch_taken_0x43dc58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DC58u;
        // 0x43dc5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43dc58) {
            ctx->pc = 0x43DD0Cu;
            goto label_43dd0c;
        }
    }
    ctx->pc = 0x43DC60u;
label_43dc60:
    // 0x43dc60: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x43dc60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x43dc64: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x43dc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x43dc68: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x43DC68u;
    {
        const bool branch_taken_0x43dc68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43dc68) {
            ctx->pc = 0x43DC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43DC68u;
            // 0x43dc6c: 0x92020023  lbu         $v0, 0x23($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43DCA0u;
            goto label_43dca0;
        }
    }
    ctx->pc = 0x43DC70u;
    // 0x43dc70: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x43dc70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x43dc74: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x43dc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x43dc78: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x43dc78u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x43dc7c: 0x56400008  bnel        $s2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x43DC7Cu;
    {
        const bool branch_taken_0x43dc7c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x43dc7c) {
            ctx->pc = 0x43DC80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43DC7Cu;
            // 0x43dc80: 0x92020023  lbu         $v0, 0x23($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43DCA0u;
            goto label_43dca0;
        }
    }
    ctx->pc = 0x43DC84u;
    // 0x43dc84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43dc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43dc88: 0xc1075e0  jal         func_41D780
    ctx->pc = 0x43DC88u;
    SET_GPR_U32(ctx, 31, 0x43DC90u);
    ctx->pc = 0x43DC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43DC88u;
    // 0x43dc8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D780u, 0x43DC88u, 0x43DC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43DC90u;
label_43dc90:
    // 0x43dc90: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x43DC90u;
    {
        const bool branch_taken_0x43dc90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43dc90) {
            ctx->pc = 0x43DC94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43DC90u;
            // 0x43dc94: 0x92020023  lbu         $v0, 0x23($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43DCA0u;
            goto label_43dca0;
        }
    }
    ctx->pc = 0x43DC98u;
    // 0x43dc98: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x43DC98u;
    {
        const bool branch_taken_0x43dc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43DC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DC98u;
        // 0x43dc9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43dc98) {
            ctx->pc = 0x43DD0Cu;
            goto label_43dd0c;
        }
    }
    ctx->pc = 0x43DCA0u;
label_43dca0:
    // 0x43dca0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x43dca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x43dca4: 0x30440060  andi        $a0, $v0, 0x60
    ctx->pc = 0x43dca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x43dca8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x43DCA8u;
    {
        const bool branch_taken_0x43dca8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x43DCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DCA8u;
        // 0x43dcac: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43dca8) {
            ctx->pc = 0x43DCB8u;
            goto label_43dcb8;
        }
    }
    ctx->pc = 0x43DCB0u;
    // 0x43dcb0: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x43DCB0u;
    {
        const bool branch_taken_0x43dcb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x43DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DCB0u;
        // 0x43dcb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43dcb0) {
            ctx->pc = 0x43DCCCu;
            goto label_43dccc;
        }
    }
    ctx->pc = 0x43DCB8u;
label_43dcb8:
    // 0x43dcb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x43dcb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43dcbc: 0xc10f3ea  jal         func_43CFA8
    ctx->pc = 0x43DCBCu;
    SET_GPR_U32(ctx, 31, 0x43DCC4u);
    ctx->pc = 0x43DCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43DCBCu;
    // 0x43dcc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43CFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CFA8u, 0x43DCBCu, 0x43DCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43DCC4u;
label_43dcc4:
    // 0x43dcc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x43DCC4u;
    {
        const bool branch_taken_0x43dcc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43DCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DCC4u;
        // 0x43dcc8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43dcc4) {
            ctx->pc = 0x43DCD8u;
            goto label_43dcd8;
        }
    }
    ctx->pc = 0x43DCCCu;
label_43dccc:
    // 0x43dccc: 0xc10f4d0  jal         func_43D340
    ctx->pc = 0x43DCCCu;
    SET_GPR_U32(ctx, 31, 0x43DCD4u);
    ctx->pc = 0x43DCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43DCCCu;
    // 0x43dcd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D340u;
    goto label_43d340;
    ctx->pc = 0x43DCD4u;
label_43dcd4:
    // 0x43dcd4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x43dcd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43dcd8:
    // 0x43dcd8: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x43dcd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x43dcdc: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x43dcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x43dce0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43DCE0u;
    {
        const bool branch_taken_0x43dce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43dce0) {
            ctx->pc = 0x43DCF8u;
            goto label_43dcf8;
        }
    }
    ctx->pc = 0x43DCE8u;
    // 0x43dce8: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x43DCE8u;
    {
        const bool branch_taken_0x43dce8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x43dce8) {
            ctx->pc = 0x43DCF8u;
            goto label_43dcf8;
        }
    }
    ctx->pc = 0x43DCF0u;
    // 0x43dcf0: 0xc1075ee  jal         func_41D7B8
    ctx->pc = 0x43DCF0u;
    SET_GPR_U32(ctx, 31, 0x43DCF8u);
    ctx->pc = 0x43DCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43DCF0u;
    // 0x43dcf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D7B8u, 0x43DCF0u, 0x43DCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43DCF8u;
label_43dcf8:
    // 0x43dcf8: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x43DCF8u;
    {
        const bool branch_taken_0x43dcf8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x43DCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DCF8u;
        // 0x43dcfc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43dcf8) {
            ctx->pc = 0x43DD0Cu;
            goto label_43dd0c;
        }
    }
    ctx->pc = 0x43DD00u;
    // 0x43dd00: 0xc1075d0  jal         func_41D740
    ctx->pc = 0x43DD00u;
    SET_GPR_U32(ctx, 31, 0x43DD08u);
    ctx->pc = 0x43DD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43DD00u;
    // 0x43dd04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D740u, 0x43DD00u, 0x43DD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43DD08u;
label_43dd08:
    // 0x43dd08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x43dd08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43dd0c:
    // 0x43dd0c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x43dd0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x43dd10: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x43dd10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x43dd14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x43dd14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43dd18: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x43dd18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43dd1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43dd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43dd20: 0x3e00008  jr          $ra
    ctx->pc = 0x43DD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DD20u;
        // 0x43dd24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43DD20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43DD28u;
    // 0x43dd28: 0x24c2000f  addiu       $v0, $a2, 0xF
    ctx->pc = 0x43dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x43dd2c: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x43dd2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x43dd30: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x43dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x43dd34: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43dd34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x43dd38: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x43dd38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x43dd3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43dd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x43dd40: 0x8f89aed4  lw          $t1, -0x512C($gp)
    ctx->pc = 0x43dd40u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946516)));
    // 0x43dd44: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x43dd44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43dd48: 0x24a50009  addiu       $a1, $a1, 0x9
    ctx->pc = 0x43dd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9));
    // 0x43dd4c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x43dd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x43dd50: 0x1314826  xor         $t1, $t1, $s1
    ctx->pc = 0x43dd50u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 17));
    // 0x43dd54: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x43dd54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43dd58: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x43dd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x43dd5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43dd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x43dd60: 0x2465000c  addiu       $a1, $v1, 0xC
    ctx->pc = 0x43dd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x43dd64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x43dd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43dd68: 0x2463000d  addiu       $v1, $v1, 0xD
    ctx->pc = 0x43dd68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13));
    // 0x43dd6c: 0xc10a322  jal         func_428C88
    ctx->pc = 0x43DD6Cu;
    SET_GPR_U32(ctx, 31, 0x43DD74u);
    ctx->pc = 0x43DD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43DD6Cu;
    // 0x43dd70: 0x69280b  movn        $a1, $v1, $t1 (Delay Slot)
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x43DD6Cu, 0x43DD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43DD74u;
label_43dd74:
    // 0x43dd74: 0x8f88be20  lw          $t0, -0x41E0($gp)
    ctx->pc = 0x43dd74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x43dd78: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x43dd78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
    // 0x43dd7c: 0x24e3d5b0  addiu       $v1, $a3, -0x2A50
    ctx->pc = 0x43dd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956464));
    // 0x43dd80: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x43dd80u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD5B0u));
    // 0x43dd84: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x43dd84u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x43dd88: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x43dd88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x43dd8c: 0xaf88be20  sw          $t0, -0x41E0($gp)
    ctx->pc = 0x43dd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 8));
    // 0x43dd90: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x43dd90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x43dd94: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x43dd94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x43dd98: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x43dd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x43dd9c: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x43dd9cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x43dda0: 0x7d040000  sq          $a0, 0x0($t0)
    ctx->pc = 0x43dda0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 4));
    // 0x43dda4: 0x25020010  addiu       $v0, $t0, 0x10
    ctx->pc = 0x43dda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x43dda8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x43dda8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x43ddac: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x43ddacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x43ddb0: 0x2463d740  addiu       $v1, $v1, -0x28C0
    ctx->pc = 0x43ddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956864));
    // 0x43ddb4: 0x25040020  addiu       $a0, $t0, 0x20
    ctx->pc = 0x43ddb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x43ddb8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x43ddb8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD740u));
    // 0x43ddbc: 0x7d020010  sq          $v0, 0x10($t0)
    ctx->pc = 0x43ddbcu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 2));
    // 0x43ddc0: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x43ddc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x43ddc4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x43ddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x43ddc8: 0x2463d760  addiu       $v1, $v1, -0x28A0
    ctx->pc = 0x43ddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956896));
    // 0x43ddcc: 0x25040030  addiu       $a0, $t0, 0x30
    ctx->pc = 0x43ddccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x43ddd0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x43ddd0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD760u));
    // 0x43ddd4: 0x7d020020  sq          $v0, 0x20($t0)
    ctx->pc = 0x43ddd4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 2));
    // 0x43ddd8: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x43ddd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x43dddc: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x43dddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x43dde0: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x43dde0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x43dde4: 0xdf86ae80  ld          $a2, -0x5180($gp)
    ctx->pc = 0x43dde4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x43dde8: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x43dde8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x43ddec: 0x8ca3d5d4  lw          $v1, -0x2A2C($a1)
    ctx->pc = 0x43ddecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294956500)));
    // 0x43ddf0: 0xd08025  or          $s0, $a2, $s0
    ctx->pc = 0x43ddf0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
    // 0x43ddf4: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x43ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x43ddf8: 0x321007ff  andi        $s0, $s0, 0x7FF
    ctx->pc = 0x43ddf8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2047);
    // 0x43ddfc: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x43ddfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x43de00: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x43de00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x43de04: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x43de04u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x43de08: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x43de08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x43de0c: 0x1083c0  sll         $s0, $s0, 15
    ctx->pc = 0x43de0cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 15));
    // 0x43de10: 0x24a4d5d4  addiu       $a0, $a1, -0x2A2C
    ctx->pc = 0x43de10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956500));
    // 0x43de14: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x43de14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x43de18: 0xaca3d5d4  sw          $v1, -0x2A2C($a1)
    ctx->pc = 0x43de18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294956500), GPR_U32(ctx, 3));
    // 0x43de1c: 0x7882fffc  lq          $v0, -0x4($a0)
    ctx->pc = 0x43de1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 4294967292)));
    // 0x43de20: 0x7d020030  sq          $v0, 0x30($t0)
    ctx->pc = 0x43de20u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), GPR_VEC(ctx, 2));
    // 0x43de24: 0x25030040  addiu       $v1, $t0, 0x40
    ctx->pc = 0x43de24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x43de28: 0x30c60010  andi        $a2, $a2, 0x10
    ctx->pc = 0x43de28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
    // 0x43de2c: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x43DE2Cu;
    {
        const bool branch_taken_0x43de2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x43DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DE2Cu;
        // 0x43de30: 0xaf83be20  sw          $v1, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43de2c) {
            ctx->pc = 0x43DE48u;
            goto label_43de48;
        }
    }
    ctx->pc = 0x43DE34u;
    // 0x43de34: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x43de34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x43de38: 0x25040050  addiu       $a0, $t0, 0x50
    ctx->pc = 0x43de38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
    // 0x43de3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x43DE3Cu;
    {
        const bool branch_taken_0x43de3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DE3Cu;
        // 0x43de40: 0x2442d730  addiu       $v0, $v0, -0x28D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43de3c) {
            ctx->pc = 0x43DE58u;
            goto label_43de58;
        }
    }
    ctx->pc = 0x43DE44u;
    // 0x43de44: 0x0  nop
    ctx->pc = 0x43de44u;
    // NOP
label_43de48:
    // 0x43de48: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x43de48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x43de4c: 0x25040050  addiu       $a0, $t0, 0x50
    ctx->pc = 0x43de4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
    // 0x43de50: 0x2442d720  addiu       $v0, $v0, -0x28E0
    ctx->pc = 0x43de50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956832));
    // 0x43de54: 0x0  nop
    ctx->pc = 0x43de54u;
    // NOP
label_43de58:
    // 0x43de58: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x43de58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x43de5c: 0x7d030040  sq          $v1, 0x40($t0)
    ctx->pc = 0x43de5cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 64), GPR_VEC(ctx, 3));
    // 0x43de60: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x43de60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x43de64: 0x24e3d5b0  addiu       $v1, $a3, -0x2A50
    ctx->pc = 0x43de64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956464));
    // 0x43de68: 0x8f85be20  lw          $a1, -0x41E0($gp)
    ctx->pc = 0x43de68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x43de6c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x43de6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x43de70: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x43de70u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x43de74: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x43de74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x43de78: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x43de78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
    // 0x43de7c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x43de7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x43de80: 0x2463d6f0  addiu       $v1, $v1, -0x2910
    ctx->pc = 0x43de80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956784));
    // 0x43de84: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x43de84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x43de88: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x43de88u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD6F0u));
    // 0x43de8c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x43de8cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x43de90: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x43de90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x43de94: 0x8f82aed4  lw          $v0, -0x512C($gp)
    ctx->pc = 0x43de94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946516)));
    // 0x43de98: 0x10510009  beq         $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x43DE98u;
    {
        const bool branch_taken_0x43de98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x43DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DE98u;
        // 0x43de9c: 0x11203c  dsll32      $a0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43de98) {
            ctx->pc = 0x43DEC0u;
            goto label_43dec0;
        }
    }
    ctx->pc = 0x43DEA0u;
    // 0x43dea0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x43dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x43dea4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x43dea4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x43dea8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x43dea8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43deac: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x43deacu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x43deb0: 0x7ca40010  sq          $a0, 0x10($a1)
    ctx->pc = 0x43deb0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 4));
    // 0x43deb4: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x43deb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x43deb8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x43deb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x43debc: 0xaf91aed4  sw          $s1, -0x512C($gp)
    ctx->pc = 0x43debcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946516), GPR_U32(ctx, 17));
label_43dec0:
    // 0x43dec0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x43dec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43dec4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43dec8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43dec8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43decc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43deccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43ded0: 0x3e00008  jr          $ra
    ctx->pc = 0x43DED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DED0u;
        // 0x43ded4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43DED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43DED8u;
    // 0x43ded8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x43ded8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x43dedc: 0x8f82aed4  lw          $v0, -0x512C($gp)
    ctx->pc = 0x43dedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946516)));
    // 0x43dee0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x43dee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x43dee4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x43dee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x43dee8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x43dee8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43deec: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x43deecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x43def0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x43def0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43def4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x43def4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x43def8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x43def8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43defc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x43defcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x43df00: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x43df00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43df04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43df04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x43df08: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x43df08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43df0c: 0x10520003  beq         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x43DF0Cu;
    {
        const bool branch_taken_0x43df0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x43DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DF0Cu;
        // 0x43df10: 0x26250014  addiu       $a1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43df0c) {
            ctx->pc = 0x43DF1Cu;
            goto label_43df1c;
        }
    }
    ctx->pc = 0x43DF14u;
    // 0x43df14: 0x16400002  bnez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x43DF14u;
    {
        const bool branch_taken_0x43df14 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x43df14) {
            ctx->pc = 0x43DF20u;
            goto label_43df20;
        }
    }
    ctx->pc = 0x43DF1Cu;
label_43df1c:
    // 0x43df1c: 0x26250013  addiu       $a1, $s1, 0x13
    ctx->pc = 0x43df1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 19));
label_43df20:
    // 0x43df20: 0xc10a322  jal         func_428C88
    ctx->pc = 0x43DF20u;
    SET_GPR_U32(ctx, 31, 0x43DF28u);
    ctx->pc = 0x43DF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43DF20u;
    // 0x43df24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x43DF20u, 0x43DF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43DF28u;
label_43df28:
    // 0x43df28: 0x8f88be20  lw          $t0, -0x41E0($gp)
    ctx->pc = 0x43df28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x43df2c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x43df2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
    // 0x43df30: 0x24e7d5b0  addiu       $a3, $a3, -0x2A50
    ctx->pc = 0x43df30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956464));
    // 0x43df34: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x43df34u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD5B0u));
    // 0x43df38: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x43df38u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x43df3c: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x43df3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x43df40: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x43df40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x43df44: 0x70421389  pcpyld      $v0, $v0, $v0
    ctx->pc = 0x43df44u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x43df48: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x43df48u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x43df4c: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x43df4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x43df50: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x43df50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x43df54: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x43df54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x43df58: 0x3c046c0d  lui         $a0, 0x6C0D
    ctx->pc = 0x43df58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27661 << 16));
    // 0x43df5c: 0x348403f0  ori         $a0, $a0, 0x3F0
    ctx->pc = 0x43df5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1008);
    // 0x43df60: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x43df60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x43df64: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x43df64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x43df68: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x43df68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x43df6c: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x43df6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x43df70: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x43df70u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x43df74: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x43df74u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x43df78: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x43df78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x43df7c: 0x9e050000  lwu         $a1, 0x0($s0)
    ctx->pc = 0x43df7cu;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x43df80: 0x9e040008  lwu         $a0, 0x8($s0)
    ctx->pc = 0x43df80u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x43df84: 0x9e020004  lwu         $v0, 0x4($s0)
    ctx->pc = 0x43df84u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x43df88: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x43df88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x43df8c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43df8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x43df90: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x43df90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x43df94: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x43df94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x43df98: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x43df98u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x43df9c: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x43df9cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x43dfa0: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x43dfa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x43dfa4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x43dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x43dfa8: 0x9c440008  lwu         $a0, 0x8($v0)
    ctx->pc = 0x43dfa8u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x43dfac: 0x9c420004  lwu         $v0, 0x4($v0)
    ctx->pc = 0x43dfacu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x43dfb0: 0x9e050010  lwu         $a1, 0x10($s0)
    ctx->pc = 0x43dfb0u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x43dfb4: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x43dfb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x43dfb8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43dfb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x43dfbc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x43dfbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x43dfc0: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x43dfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x43dfc4: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x43dfc4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x43dfc8: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x43dfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x43dfcc: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x43dfccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x43dfd0: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x43dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x43dfd4: 0x9c440008  lwu         $a0, 0x8($v0)
    ctx->pc = 0x43dfd4u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x43dfd8: 0x9c420004  lwu         $v0, 0x4($v0)
    ctx->pc = 0x43dfd8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x43dfdc: 0x9e050020  lwu         $a1, 0x20($s0)
    ctx->pc = 0x43dfdcu;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x43dfe0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x43dfe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x43dfe4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43dfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x43dfe8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x43dfe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x43dfec: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x43dfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x43dff0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x43dff0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x43dff4: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x43dff4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x43dff8: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x43dff8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x43dffc: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x43dffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x43e000: 0x9c440008  lwu         $a0, 0x8($v0)
    ctx->pc = 0x43e000u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x43e004: 0x9c420004  lwu         $v0, 0x4($v0)
    ctx->pc = 0x43e004u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x43e008: 0x9e050030  lwu         $a1, 0x30($s0)
    ctx->pc = 0x43e008u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x43e00c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x43e00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x43e010: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43e010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x43e014: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x43e014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x43e018: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x43e018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x43e01c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x43e01cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x43e020: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x43e020u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x43e024: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x43e024u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x43e028: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x43e028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x43e02c: 0x2463d690  addiu       $v1, $v1, -0x2970
    ctx->pc = 0x43e02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956688));
    // 0x43e030: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x43e030u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD690u));
    // 0x43e034: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x43e034u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x43e038: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x43e038u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x43e03c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x43e03cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x43e040: 0x2463d6a0  addiu       $v1, $v1, -0x2960
    ctx->pc = 0x43e040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956704));
    // 0x43e044: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x43e044u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD6A0u));
    // 0x43e048: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x43e048u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x43e04c: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x43e04cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x43e050: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x43e050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x43e054: 0x2463d6b0  addiu       $v1, $v1, -0x2950
    ctx->pc = 0x43e054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956720));
    // 0x43e058: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x43e058u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD6B0u));
    // 0x43e05c: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x43e05cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x43e060: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x43e060u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x43e064: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x43e064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x43e068: 0x2463d6c0  addiu       $v1, $v1, -0x2940
    ctx->pc = 0x43e068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956736));
    // 0x43e06c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x43e06cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD6C0u));
    // 0x43e070: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x43e070u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x43e074: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x43e074u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x43e078: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x43e078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x43e07c: 0x2463d6d0  addiu       $v1, $v1, -0x2930
    ctx->pc = 0x43e07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956752));
    // 0x43e080: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x43e080u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD6D0u));
    // 0x43e084: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x43e084u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x43e088: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x43e088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x43e08c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x43e08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x43e090: 0x2463d6e0  addiu       $v1, $v1, -0x2920
    ctx->pc = 0x43e090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956768));
    // 0x43e094: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x43e094u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD6E0u));
    // 0x43e098: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x43e098u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x43e09c: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x43e09cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x43e0a0: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x43e0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x43e0a4: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x43e0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x43e0a8: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x43e0a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x43e0ac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x43e0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x43e0b0: 0x8cc5d5d4  lw          $a1, -0x2A2C($a2)
    ctx->pc = 0x43e0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294956500)));
    // 0x43e0b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x43e0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x43e0b8: 0x3c04fc00  lui         $a0, 0xFC00
    ctx->pc = 0x43e0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64512 << 16));
    // 0x43e0bc: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x43e0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x43e0c0: 0x34847fff  ori         $a0, $a0, 0x7FFF
    ctx->pc = 0x43e0c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32767);
    // 0x43e0c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43e0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x43e0c8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x43e0c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x43e0cc: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x43e0ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x43e0d0: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x43e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x43e0d4: 0x24c4d5d4  addiu       $a0, $a2, -0x2A2C
    ctx->pc = 0x43e0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956500));
    // 0x43e0d8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x43e0d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x43e0dc: 0xacc5d5d4  sw          $a1, -0x2A2C($a2)
    ctx->pc = 0x43e0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294956500), GPR_U32(ctx, 5));
    // 0x43e0e0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x43e0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x43e0e4: 0x7882fffc  lq          $v0, -0x4($a0)
    ctx->pc = 0x43e0e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 4294967292)));
    // 0x43e0e8: 0x2463d5e0  addiu       $v1, $v1, -0x2A20
    ctx->pc = 0x43e0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956512));
    // 0x43e0ec: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x43e0ecu;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5DD5E0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5DD5E0u, _value); } while (0);
    // 0x43e0f0: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x43e0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x43e0f4: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x43e0f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x43e0f8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x43e0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x43e0fc: 0x2463d640  addiu       $v1, $v1, -0x29C0
    ctx->pc = 0x43e0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956608));
    // 0x43e100: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x43e100u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD640u));
    // 0x43e104: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x43e104u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x43e108: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x43e108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x43e10c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x43e10cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD640u));
    // 0x43e110: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x43e110u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x43e114: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x43e114u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x43e118: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x43e118u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x43e11c: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x43e11cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x43e120: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x43e120u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x43e124: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x43e124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x43e128: 0x2463d6f0  addiu       $v1, $v1, -0x2910
    ctx->pc = 0x43e128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956784));
    // 0x43e12c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x43e12cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD6F0u));
    // 0x43e130: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x43e130u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x43e134: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x43e134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x43e138: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x43e138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x43e13c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x43e13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x43e140: 0x12220031  beq         $s1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x43E140u;
    {
        const bool branch_taken_0x43e140 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x43E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E140u;
        // 0x43e144: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e140) {
            ctx->pc = 0x43E208u;
            goto label_43e208;
        }
    }
    ctx->pc = 0x43E148u;
    // 0x43e148: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x43e148u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x43e14c: 0x111027  nor         $v0, $zero, $s1
    ctx->pc = 0x43e14cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 17)));
    // 0x43e150: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x43e150u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x43e154: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x43e154u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x43e158: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x43e158u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e15c: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x43E15Cu;
    {
        const bool branch_taken_0x43e15c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x43E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E15Cu;
        // 0x43e160: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e15c) {
            ctx->pc = 0x43E1C8u;
            goto label_43e1c8;
        }
    }
    ctx->pc = 0x43E164u;
    // 0x43e164: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x43e164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x43e168: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x43E168u;
    {
        const bool branch_taken_0x43e168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E168u;
        // 0x43e16c: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e168) {
            ctx->pc = 0x43E1A8u;
            goto label_43e1a8;
        }
    }
    ctx->pc = 0x43E170u;
    // 0x43e170: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x43E170u;
    {
        const bool branch_taken_0x43e170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43E174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E170u;
        // 0x43e174: 0x25020010  addiu       $v0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e170) {
            ctx->pc = 0x43E190u;
            goto label_43e190;
        }
    }
    ctx->pc = 0x43E178u;
    // 0x43e178: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x43e178u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x43e17c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x43e17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e180: 0x7d030000  sq          $v1, 0x0($t0)
    ctx->pc = 0x43e180u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
    // 0x43e184: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x43e184u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e188: 0x26630010  addiu       $v1, $s3, 0x10
    ctx->pc = 0x43e188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x43e18c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x43e18cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_43e190:
    // 0x43e190: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x43e190u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x43e194: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x43e194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x43e198: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x43e198u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x43e19c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x43e19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x43e1a0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x43e1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x43e1a4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x43e1a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_43e1a8:
    // 0x43e1a8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x43e1a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x43e1ac: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x43e1acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x43e1b0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x43e1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x43e1b4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x43e1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x43e1b8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x43e1b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x43e1bc: 0x12260012  beq         $s1, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x43E1BCu;
    {
        const bool branch_taken_0x43e1bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 6));
        ctx->pc = 0x43E1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E1BCu;
        // 0x43e1c0: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e1bc) {
            ctx->pc = 0x43E208u;
            goto label_43e208;
        }
    }
    ctx->pc = 0x43E1C4u;
    // 0x43e1c4: 0x0  nop
    ctx->pc = 0x43e1c4u;
    // NOP
label_43e1c8:
    // 0x43e1c8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x43e1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e1cc: 0x0  nop
    ctx->pc = 0x43e1ccu;
    // NOP
label_43e1d0:
    // 0x43e1d0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x43e1d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x43e1d4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x43e1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x43e1d8: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x43e1d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x43e1dc: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x43e1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x43e1e0: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x43e1e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x43e1e4: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x43e1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x43e1e8: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x43e1e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x43e1ec: 0x7c830030  sq          $v1, 0x30($a0)
    ctx->pc = 0x43e1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
    // 0x43e1f0: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x43e1f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x43e1f4: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x43e1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x43e1f8: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x43e1f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x43e1fc: 0x1626fff4  bne         $s1, $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x43E1FCu;
    {
        const bool branch_taken_0x43e1fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 6));
        ctx->pc = 0x43E200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E1FCu;
        // 0x43e200: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e1fc) {
            ctx->pc = 0x43E1D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43e1d0;
        }
    }
    ctx->pc = 0x43E204u;
    // 0x43e204: 0x0  nop
    ctx->pc = 0x43e204u;
    // NOP
label_43e208:
    // 0x43e208: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x43E208u;
    {
        const bool branch_taken_0x43e208 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x43E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E208u;
        // 0x43e20c: 0x8f82aed4  lw          $v0, -0x512C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e208) {
            ctx->pc = 0x43E238u;
            goto label_43e238;
        }
    }
    ctx->pc = 0x43E210u;
    // 0x43e210: 0x10520009  beq         $v0, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x43E210u;
    {
        const bool branch_taken_0x43e210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x43E214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E210u;
        // 0x43e214: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e210) {
            ctx->pc = 0x43E238u;
            goto label_43e238;
        }
    }
    ctx->pc = 0x43E218u;
    // 0x43e218: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x43e218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x43e21c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x43e21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x43e220: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x43e220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e224: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x43e224u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x43e228: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x43e228u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x43e22c: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x43e22cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x43e230: 0xaf92aed4  sw          $s2, -0x512C($gp)
    ctx->pc = 0x43e230u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946516), GPR_U32(ctx, 18));
    // 0x43e234: 0x0  nop
    ctx->pc = 0x43e234u;
    // NOP
label_43e238:
    // 0x43e238: 0xaf88be20  sw          $t0, -0x41E0($gp)
    ctx->pc = 0x43e238u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 8));
    // 0x43e23c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43e23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43e240: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x43e240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x43e244: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x43e244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x43e248: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x43e248u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x43e24c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x43e24cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43e250: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x43e250u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43e254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43e254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43e258: 0x3e00008  jr          $ra
    ctx->pc = 0x43E258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43E25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E258u;
        // 0x43e25c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43E258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43E260u;
}
