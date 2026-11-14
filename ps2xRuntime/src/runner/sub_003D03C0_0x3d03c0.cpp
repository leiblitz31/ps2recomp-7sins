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

// Function: sub_003D03C0
// Address: 0x3d03c0 - 0x3d0f08
void sub_003D03C0_0x3d03c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D03C0_0x3d03c0");
#endif

    switch (ctx->pc) {
        case 0x3d0400u: goto label_3d0400;
        case 0x3d0458u: goto label_3d0458;
        case 0x3d0468u: goto label_3d0468;
        case 0x3d0488u: goto label_3d0488;
        case 0x3d04a0u: goto label_3d04a0;
        case 0x3d04f8u: goto label_3d04f8;
        case 0x3d0568u: goto label_3d0568;
        case 0x3d058cu: goto label_3d058c;
        case 0x3d05b8u: goto label_3d05b8;
        case 0x3d0610u: goto label_3d0610;
        case 0x3d06b8u: goto label_3d06b8;
        case 0x3d06f0u: goto label_3d06f0;
        case 0x3d0700u: goto label_3d0700;
        case 0x3d0714u: goto label_3d0714;
        case 0x3d0764u: goto label_3d0764;
        case 0x3d076cu: goto label_3d076c;
        case 0x3d077cu: goto label_3d077c;
        case 0x3d07f8u: goto label_3d07f8;
        case 0x3d0810u: goto label_3d0810;
        case 0x3d0844u: goto label_3d0844;
        case 0x3d084cu: goto label_3d084c;
        case 0x3d085cu: goto label_3d085c;
        case 0x3d0868u: goto label_3d0868;
        case 0x3d0888u: goto label_3d0888;
        case 0x3d08b0u: goto label_3d08b0;
        case 0x3d08c8u: goto label_3d08c8;
        case 0x3d0920u: goto label_3d0920;
        case 0x3d0998u: goto label_3d0998;
        case 0x3d09b4u: goto label_3d09b4;
        case 0x3d09e0u: goto label_3d09e0;
        case 0x3d0a38u: goto label_3d0a38;
        case 0x3d0ac8u: goto label_3d0ac8;
        case 0x3d0ba0u: goto label_3d0ba0;
        case 0x3d0c64u: goto label_3d0c64;
        case 0x3d0c88u: goto label_3d0c88;
        case 0x3d0ca0u: goto label_3d0ca0;
        case 0x3d0cf8u: goto label_3d0cf8;
        case 0x3d0d68u: goto label_3d0d68;
        case 0x3d0d94u: goto label_3d0d94;
        case 0x3d0dc8u: goto label_3d0dc8;
        case 0x3d0e20u: goto label_3d0e20;
        case 0x3d0eb4u: goto label_3d0eb4;
        case 0x3d0ebcu: goto label_3d0ebc;
        case 0x3d0ed0u: goto label_3d0ed0;
        default: break;
    }

    ctx->pc = 0x3d03c0u;

    // 0x3d03c0: 0x27bdf8d0  addiu       $sp, $sp, -0x730
    ctx->pc = 0x3d03c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965456));
    // 0x3d03c4: 0x7fb406e0  sq          $s4, 0x6E0($sp)
    ctx->pc = 0x3d03c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1760), GPR_VEC(ctx, 20));
    // 0x3d03c8: 0xafa70638  sw          $a3, 0x638($sp)
    ctx->pc = 0x3d03c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1592), GPR_U32(ctx, 7));
    // 0x3d03cc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3d03ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d03d0: 0x7fb00720  sq          $s0, 0x720($sp)
    ctx->pc = 0x3d03d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1824), GPR_VEC(ctx, 16));
    // 0x3d03d4: 0x7fb10710  sq          $s1, 0x710($sp)
    ctx->pc = 0x3d03d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1808), GPR_VEC(ctx, 17));
    // 0x3d03d8: 0x7fb20700  sq          $s2, 0x700($sp)
    ctx->pc = 0x3d03d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1792), GPR_VEC(ctx, 18));
    // 0x3d03dc: 0x7fb306f0  sq          $s3, 0x6F0($sp)
    ctx->pc = 0x3d03dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1776), GPR_VEC(ctx, 19));
    // 0x3d03e0: 0x7fb506d0  sq          $s5, 0x6D0($sp)
    ctx->pc = 0x3d03e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1744), GPR_VEC(ctx, 21));
    // 0x3d03e4: 0x7fb606c0  sq          $s6, 0x6C0($sp)
    ctx->pc = 0x3d03e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1728), GPR_VEC(ctx, 22));
    // 0x3d03e8: 0x7fb706b0  sq          $s7, 0x6B0($sp)
    ctx->pc = 0x3d03e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1712), GPR_VEC(ctx, 23));
    // 0x3d03ec: 0x7fbe06a0  sq          $fp, 0x6A0($sp)
    ctx->pc = 0x3d03ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1696), GPR_VEC(ctx, 30));
    // 0x3d03f0: 0xffbf0690  sd          $ra, 0x690($sp)
    ctx->pc = 0x3d03f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1680), GPR_U64(ctx, 31));
    // 0x3d03f4: 0xafa40630  sw          $a0, 0x630($sp)
    ctx->pc = 0x3d03f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1584), GPR_U32(ctx, 4));
    // 0x3d03f8: 0xc0c8ef0  jal         func_323BC0
    ctx->pc = 0x3D03F8u;
    SET_GPR_U32(ctx, 31, 0x3D0400u);
    ctx->pc = 0x3D03FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D03F8u;
    // 0x3d03fc: 0xafa50634  sw          $a1, 0x634($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1588), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323BC0u, 0x3D03F8u, 0x3D0400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0400u;
label_3d0400:
    // 0x3d0400: 0xafa0063c  sw          $zero, 0x63C($sp)
    ctx->pc = 0x3d0400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1596), GPR_U32(ctx, 0));
    // 0x3d0404: 0x8fa30638  lw          $v1, 0x638($sp)
    ctx->pc = 0x3d0404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1592)));
    // 0x3d0408: 0xafa20640  sw          $v0, 0x640($sp)
    ctx->pc = 0x3d0408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1600), GPR_U32(ctx, 2));
    // 0x3d040c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3d040cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x3d0410: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D0410u;
    {
        const bool branch_taken_0x3d0410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0410) {
            ctx->pc = 0x3D0428u;
            goto label_3d0428;
        }
    }
    ctx->pc = 0x3D0418u;
    // 0x3d0418: 0x8442000e  lh          $v0, 0xE($v0)
    ctx->pc = 0x3d0418u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x3d041c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3d041cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3d0420: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3d0420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3d0424: 0xafa2063c  sw          $v0, 0x63C($sp)
    ctx->pc = 0x3d0424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1596), GPR_U32(ctx, 2));
label_3d0428:
    // 0x3d0428: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3d0428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3d042c: 0x8fa60640  lw          $a2, 0x640($sp)
    ctx->pc = 0x3d042cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
    // 0x3d0430: 0xafa40644  sw          $a0, 0x644($sp)
    ctx->pc = 0x3d0430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1604), GPR_U32(ctx, 4));
    // 0x3d0434: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3d0434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0438: 0x34a500ff  ori         $a1, $a1, 0xFF
    ctx->pc = 0x3d0438u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)255);
    // 0x3d043c: 0x3484ff00  ori         $a0, $a0, 0xFF00
    ctx->pc = 0x3d043cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65280);
    // 0x3d0440: 0x30c68000  andi        $a2, $a2, 0x8000
    ctx->pc = 0x3d0440u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x3d0444: 0xafa50644  sw          $a1, 0x644($sp)
    ctx->pc = 0x3d0444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1604), GPR_U32(ctx, 5));
    // 0x3d0448: 0xafa40648  sw          $a0, 0x648($sp)
    ctx->pc = 0x3d0448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1608), GPR_U32(ctx, 4));
    // 0x3d044c: 0xafa6064c  sw          $a2, 0x64C($sp)
    ctx->pc = 0x3d044cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1612), GPR_U32(ctx, 6));
    // 0x3d0450: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x3d0450u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
    // 0x3d0454: 0x0  nop
    ctx->pc = 0x3d0454u;
    // NOP
label_3d0458:
    // 0x3d0458: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3d0458u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d045c: 0x24e7b298  addiu       $a3, $a3, -0x4D68
    ctx->pc = 0x3d045cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947480));
    // 0x3d0460: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3D0460u;
    SET_GPR_U32(ctx, 31, 0x3D0468u);
    ctx->pc = 0x3D0464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0460u;
    // 0x3d0464: 0x8ce4009c  lw          $a0, 0x9C($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3D0460u, 0x3D0468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0468u;
label_3d0468:
    // 0x3d0468: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x3d0468u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d046c: 0x13c00085  beqz        $fp, . + 4 + (0x85 << 2)
    ctx->pc = 0x3D046Cu;
    {
        const bool branch_taken_0x3d046c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D046Cu;
        // 0x3d0470: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d046c) {
            ctx->pc = 0x3D0684u;
            goto label_3d0684;
        }
    }
    ctx->pc = 0x3D0474u;
    // 0x3d0474: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d0474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d0478: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3d0478u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d047c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3d047cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0480: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3d0480u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0484: 0x0  nop
    ctx->pc = 0x3d0484u;
    // NOP
label_3d0488:
    // 0x3d0488: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x3d0488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3d048c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x3d048cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x3d0490: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x3d0490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3d0494: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3D0494u;
    {
        const bool branch_taken_0x3d0494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0494u;
        // 0x3d0498: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0494) {
            ctx->pc = 0x3D04F4u;
            goto label_3d04f4;
        }
    }
    ctx->pc = 0x3D049Cu;
    // 0x3d049c: 0x24620200  addiu       $v0, $v1, 0x200
    ctx->pc = 0x3d049cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
label_3d04a0:
    // 0x3d04a0: 0x68680007  ldl         $t0, 0x7($v1)
    ctx->pc = 0x3d04a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x3d04a4: 0x6c680000  ldr         $t0, 0x0($v1)
    ctx->pc = 0x3d04a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x3d04a8: 0x6869000f  ldl         $t1, 0xF($v1)
    ctx->pc = 0x3d04a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x3d04ac: 0x6c690008  ldr         $t1, 0x8($v1)
    ctx->pc = 0x3d04acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x3d04b0: 0x686a0017  ldl         $t2, 0x17($v1)
    ctx->pc = 0x3d04b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x3d04b4: 0x6c6a0010  ldr         $t2, 0x10($v1)
    ctx->pc = 0x3d04b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x3d04b8: 0x686b001f  ldl         $t3, 0x1F($v1)
    ctx->pc = 0x3d04b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x3d04bc: 0x6c6b0018  ldr         $t3, 0x18($v1)
    ctx->pc = 0x3d04bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x3d04c0: 0xb0880007  sdl         $t0, 0x7($a0)
    ctx->pc = 0x3d04c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d04c4: 0xb4880000  sdr         $t0, 0x0($a0)
    ctx->pc = 0x3d04c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d04c8: 0xb089000f  sdl         $t1, 0xF($a0)
    ctx->pc = 0x3d04c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d04cc: 0xb4890008  sdr         $t1, 0x8($a0)
    ctx->pc = 0x3d04ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d04d0: 0xb08a0017  sdl         $t2, 0x17($a0)
    ctx->pc = 0x3d04d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d04d4: 0xb48a0010  sdr         $t2, 0x10($a0)
    ctx->pc = 0x3d04d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d04d8: 0xb08b001f  sdl         $t3, 0x1F($a0)
    ctx->pc = 0x3d04d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d04dc: 0xb48b0018  sdr         $t3, 0x18($a0)
    ctx->pc = 0x3d04dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d04e0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3d04e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3d04e4: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3D04E4u;
    {
        const bool branch_taken_0x3d04e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D04E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D04E4u;
        // 0x3d04e8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d04e4) {
            ctx->pc = 0x3D04A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d04a0;
        }
    }
    ctx->pc = 0x3D04ECu;
    // 0x3d04ec: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3D04ECu;
    {
        const bool branch_taken_0x3d04ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d04ec) {
            ctx->pc = 0x3D0524u;
            goto label_3d0524;
        }
    }
    ctx->pc = 0x3D04F4u;
label_3d04f4:
    // 0x3d04f4: 0x24620200  addiu       $v0, $v1, 0x200
    ctx->pc = 0x3d04f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
label_3d04f8:
    // 0x3d04f8: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x3d04f8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d04fc: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x3d04fcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3d0500: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x3d0500u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3d0504: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x3d0504u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x3d0508: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x3d0508u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x3d050c: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x3d050cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x3d0510: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x3d0510u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x3d0514: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x3d0514u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x3d0518: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3d0518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3d051c: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3D051Cu;
    {
        const bool branch_taken_0x3d051c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D0520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D051Cu;
        // 0x3d0520: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d051c) {
            ctx->pc = 0x3D04F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d04f8;
        }
    }
    ctx->pc = 0x3D0524u;
label_3d0524:
    // 0x3d0524: 0x686a0007  ldl         $t2, 0x7($v1)
    ctx->pc = 0x3d0524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x3d0528: 0x6c6a0000  ldr         $t2, 0x0($v1)
    ctx->pc = 0x3d0528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x3d052c: 0x686b000f  ldl         $t3, 0xF($v1)
    ctx->pc = 0x3d052cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x3d0530: 0x6c6b0008  ldr         $t3, 0x8($v1)
    ctx->pc = 0x3d0530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x3d0534: 0xb08a0007  sdl         $t2, 0x7($a0)
    ctx->pc = 0x3d0534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0538: 0xb48a0000  sdr         $t2, 0x0($a0)
    ctx->pc = 0x3d0538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d053c: 0xb08b000f  sdl         $t3, 0xF($a0)
    ctx->pc = 0x3d053cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0540: 0xb48b0008  sdr         $t3, 0x8($a0)
    ctx->pc = 0x3d0540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0544: 0x8fa7063c  lw          $a3, 0x63C($sp)
    ctx->pc = 0x3d0544u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1596)));
    // 0x3d0548: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D0548u;
    {
        const bool branch_taken_0x3d0548 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0548u;
        // 0x3d054c: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0548) {
            ctx->pc = 0x3D0558u;
            goto label_3d0558;
        }
    }
    ctx->pc = 0x3D0550u;
    // 0x3d0550: 0x54460046  bnel        $v0, $a2, . + 4 + (0x46 << 2)
    ctx->pc = 0x3D0550u;
    {
        const bool branch_taken_0x3d0550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x3d0550) {
            ctx->pc = 0x3D0554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D0550u;
            // 0x3d0554: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D066Cu;
            goto label_3d066c;
        }
    }
    ctx->pc = 0x3D0558u;
label_3d0558:
    // 0x3d0558: 0x8fb00630  lw          $s0, 0x630($sp)
    ctx->pc = 0x3d0558u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1584)));
    // 0x3d055c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3d055cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d0560: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D0560u;
    {
        const bool branch_taken_0x3d0560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0560u;
        // 0x3d0564: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0560) {
            ctx->pc = 0x3D0570u;
            goto label_3d0570;
        }
    }
    ctx->pc = 0x3D0568u;
label_3d0568:
    // 0x3d0568: 0x2610002c  addiu       $s0, $s0, 0x2C
    ctx->pc = 0x3d0568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x3d056c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3d056cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3d0570:
    // 0x3d0570: 0x8fa80634  lw          $t0, 0x634($sp)
    ctx->pc = 0x3d0570u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1588)));
    // 0x3d0574: 0x228102b  sltu        $v0, $s1, $t0
    ctx->pc = 0x3d0574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3d0578: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D0578u;
    {
        const bool branch_taken_0x3d0578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0578u;
        // 0x3d057c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0578) {
            ctx->pc = 0x3D0598u;
            goto label_3d0598;
        }
    }
    ctx->pc = 0x3D0580u;
    // 0x3d0580: 0x7fa60660  sq          $a2, 0x660($sp)
    ctx->pc = 0x3d0580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1632), GPR_VEC(ctx, 6));
    // 0x3d0584: 0xc0f3a4c  jal         func_3CE930
    ctx->pc = 0x3D0584u;
    SET_GPR_U32(ctx, 31, 0x3D058Cu);
    ctx->pc = 0x3D0588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0584u;
    // 0x3d0588: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE930u, 0x3D0584u, 0x3D058Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D058Cu;
label_3d058c:
    // 0x3d058c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3D058Cu;
    {
        const bool branch_taken_0x3d058c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D0590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D058Cu;
        // 0x3d0590: 0x7ba60660  lq          $a2, 0x660($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 1632)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d058c) {
            ctx->pc = 0x3D0568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d0568;
        }
    }
    ctx->pc = 0x3D0594u;
    // 0x3d0594: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3d0594u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d0598:
    // 0x3d0598: 0x52400034  beql        $s2, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x3D0598u;
    {
        const bool branch_taken_0x3d0598 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0598) {
            ctx->pc = 0x3D059Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D0598u;
            // 0x3d059c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D066Cu;
            goto label_3d066c;
        }
    }
    ctx->pc = 0x3D05A0u;
    // 0x3d05a0: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x3d05a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3d05a4: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x3d05a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x3d05a8: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x3d05a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3d05ac: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3D05ACu;
    {
        const bool branch_taken_0x3d05ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D05B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D05ACu;
        // 0x3d05b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d05ac) {
            ctx->pc = 0x3D060Cu;
            goto label_3d060c;
        }
    }
    ctx->pc = 0x3D05B4u;
    // 0x3d05b4: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x3d05b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_3d05b8:
    // 0x3d05b8: 0x68890007  ldl         $t1, 0x7($a0)
    ctx->pc = 0x3d05b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x3d05bc: 0x6c890000  ldr         $t1, 0x0($a0)
    ctx->pc = 0x3d05bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x3d05c0: 0x688a000f  ldl         $t2, 0xF($a0)
    ctx->pc = 0x3d05c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x3d05c4: 0x6c8a0008  ldr         $t2, 0x8($a0)
    ctx->pc = 0x3d05c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x3d05c8: 0x688b0017  ldl         $t3, 0x17($a0)
    ctx->pc = 0x3d05c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x3d05cc: 0x6c8b0010  ldr         $t3, 0x10($a0)
    ctx->pc = 0x3d05ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x3d05d0: 0x6885001f  ldl         $a1, 0x1F($a0)
    ctx->pc = 0x3d05d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3d05d4: 0x6c850018  ldr         $a1, 0x18($a0)
    ctx->pc = 0x3d05d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3d05d8: 0xb0690007  sdl         $t1, 0x7($v1)
    ctx->pc = 0x3d05d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d05dc: 0xb4690000  sdr         $t1, 0x0($v1)
    ctx->pc = 0x3d05dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d05e0: 0xb06a000f  sdl         $t2, 0xF($v1)
    ctx->pc = 0x3d05e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d05e4: 0xb46a0008  sdr         $t2, 0x8($v1)
    ctx->pc = 0x3d05e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d05e8: 0xb06b0017  sdl         $t3, 0x17($v1)
    ctx->pc = 0x3d05e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d05ec: 0xb46b0010  sdr         $t3, 0x10($v1)
    ctx->pc = 0x3d05ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d05f0: 0xb065001f  sdl         $a1, 0x1F($v1)
    ctx->pc = 0x3d05f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d05f4: 0xb4650018  sdr         $a1, 0x18($v1)
    ctx->pc = 0x3d05f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d05f8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3d05f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3d05fc: 0x1482ffee  bne         $a0, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3D05FCu;
    {
        const bool branch_taken_0x3d05fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D0600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D05FCu;
        // 0x3d0600: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d05fc) {
            ctx->pc = 0x3D05B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d05b8;
        }
    }
    ctx->pc = 0x3D0604u;
    // 0x3d0604: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3D0604u;
    {
        const bool branch_taken_0x3d0604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0604) {
            ctx->pc = 0x3D063Cu;
            goto label_3d063c;
        }
    }
    ctx->pc = 0x3D060Cu;
label_3d060c:
    // 0x3d060c: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x3d060cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_3d0610:
    // 0x3d0610: 0xdc870000  ld          $a3, 0x0($a0)
    ctx->pc = 0x3d0610u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d0614: 0xdc880008  ld          $t0, 0x8($a0)
    ctx->pc = 0x3d0614u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3d0618: 0xdc890010  ld          $t1, 0x10($a0)
    ctx->pc = 0x3d0618u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3d061c: 0xdc8a0018  ld          $t2, 0x18($a0)
    ctx->pc = 0x3d061cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3d0620: 0xfc670000  sd          $a3, 0x0($v1)
    ctx->pc = 0x3d0620u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
    // 0x3d0624: 0xfc680008  sd          $t0, 0x8($v1)
    ctx->pc = 0x3d0624u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 8));
    // 0x3d0628: 0xfc690010  sd          $t1, 0x10($v1)
    ctx->pc = 0x3d0628u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 9));
    // 0x3d062c: 0xfc6a0018  sd          $t2, 0x18($v1)
    ctx->pc = 0x3d062cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 10));
    // 0x3d0630: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3d0630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3d0634: 0x1482fff6  bne         $a0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3D0634u;
    {
        const bool branch_taken_0x3d0634 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D0638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0634u;
        // 0x3d0638: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0634) {
            ctx->pc = 0x3D0610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d0610;
        }
    }
    ctx->pc = 0x3D063Cu;
label_3d063c:
    // 0x3d063c: 0x688b0007  ldl         $t3, 0x7($a0)
    ctx->pc = 0x3d063cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x3d0640: 0x6c8b0000  ldr         $t3, 0x0($a0)
    ctx->pc = 0x3d0640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x3d0644: 0x6882000f  ldl         $v0, 0xF($a0)
    ctx->pc = 0x3d0644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3d0648: 0x6c820008  ldr         $v0, 0x8($a0)
    ctx->pc = 0x3d0648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3d064c: 0xb06b0007  sdl         $t3, 0x7($v1)
    ctx->pc = 0x3d064cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0650: 0xb46b0000  sdr         $t3, 0x0($v1)
    ctx->pc = 0x3d0650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0654: 0xb062000f  sdl         $v0, 0xF($v1)
    ctx->pc = 0x3d0654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0658: 0xb4620008  sdr         $v0, 0x8($v1)
    ctx->pc = 0x3d0658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d065c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x3d065cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3d0660: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D0660u;
    {
        const bool branch_taken_0x3d0660 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D0664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0660u;
        // 0x3d0664: 0x568021  addu        $s0, $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0660) {
            ctx->pc = 0x3D0684u;
            goto label_3d0684;
        }
    }
    ctx->pc = 0x3D0668u;
    // 0x3d0668: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x3d0668u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_3d066c:
    // 0x3d066c: 0x26d60210  addiu       $s6, $s6, 0x210
    ctx->pc = 0x3d066cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 528));
    // 0x3d0670: 0x26b50210  addiu       $s5, $s5, 0x210
    ctx->pc = 0x3d0670u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 528));
    // 0x3d0674: 0x2fe102b  sltu        $v0, $s7, $fp
    ctx->pc = 0x3d0674u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x3d0678: 0x1440ff83  bnez        $v0, . + 4 + (-0x7D << 2)
    ctx->pc = 0x3D0678u;
    {
        const bool branch_taken_0x3d0678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0678u;
        // 0x3d067c: 0x26730210  addiu       $s3, $s3, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0678) {
            ctx->pc = 0x3D0488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d0488;
        }
    }
    ctx->pc = 0x3D0680u;
    // 0x3d0680: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3d0680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d0684:
    // 0x3d0684: 0x16000213  bnez        $s0, . + 4 + (0x213 << 2)
    ctx->pc = 0x3D0684u;
    {
        const bool branch_taken_0x3d0684 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D0688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0684u;
        // 0x3d0688: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0684) {
            ctx->pc = 0x3D0ED4u;
            goto label_3d0ed4;
        }
    }
    ctx->pc = 0x3D068Cu;
    // 0x3d068c: 0x8fa8063c  lw          $t0, 0x63C($sp)
    ctx->pc = 0x3d068cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1596)));
    // 0x3d0690: 0x11000024  beqz        $t0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3D0690u;
    {
        const bool branch_taken_0x3d0690 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0690u;
        // 0x3d0694: 0x8fa40638  lw          $a0, 0x638($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0690) {
            ctx->pc = 0x3D0724u;
            goto label_3d0724;
        }
    }
    ctx->pc = 0x3D0698u;
    // 0x3d0698: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x3d0698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3d069c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D069Cu;
    {
        const bool branch_taken_0x3d069c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D06A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D069Cu;
        // 0x3d06a0: 0x3c09005e  lui         $t1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d069c) {
            ctx->pc = 0x3D06ACu;
            goto label_3d06ac;
        }
    }
    ctx->pc = 0x3D06A4u;
    // 0x3d06a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D06A4u;
    {
        const bool branch_taken_0x3d06a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D06A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D06A4u;
        // 0x3d06a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d06a4) {
            ctx->pc = 0x3D06B8u;
            goto label_3d06b8;
        }
    }
    ctx->pc = 0x3D06ACu;
label_3d06ac:
    // 0x3d06ac: 0x2529b298  addiu       $t1, $t1, -0x4D68
    ctx->pc = 0x3d06acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294947480));
    // 0x3d06b0: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3D06B0u;
    SET_GPR_U32(ctx, 31, 0x3D06B8u);
    ctx->pc = 0x3D06B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D06B0u;
    // 0x3d06b4: 0x8d24009c  lw          $a0, 0x9C($t1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3D06B0u, 0x3D06B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D06B8u;
label_3d06b8:
    // 0x3d06b8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3D06B8u;
    {
        const bool branch_taken_0x3d06b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D06BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D06B8u;
        // 0x3d06bc: 0x240a0210  addiu       $t2, $zero, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d06b8) {
            ctx->pc = 0x3D071Cu;
            goto label_3d071c;
        }
    }
    ctx->pc = 0x3D06C0u;
    // 0x3d06c0: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x3d06c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d06c4: 0x4a8018  mult        $s0, $v0, $t2
    ctx->pc = 0x3d06c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x3d06c8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x3d06c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3d06cc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3d06ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3d06d0: 0x2444fdf0  addiu       $a0, $v0, -0x210
    ctx->pc = 0x3d06d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966768));
    // 0x3d06d4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3d06d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3d06d8: 0x146b001d  bne         $v1, $t3, . + 4 + (0x1D << 2)
    ctx->pc = 0x3D06D8u;
    {
        const bool branch_taken_0x3d06d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 11));
        ctx->pc = 0x3D06DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D06D8u;
        // 0x3d06dc: 0x24110010  addiu       $s1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d06d8) {
            ctx->pc = 0x3D0750u;
            goto label_3d0750;
        }
    }
    ctx->pc = 0x3D06E0u;
    // 0x3d06e0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3d06e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3d06e4: 0x8c84020c  lw          $a0, 0x20C($a0)
    ctx->pc = 0x3d06e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x3d06e8: 0xc0c8e22  jal         func_323888
    ctx->pc = 0x3D06E8u;
    SET_GPR_U32(ctx, 31, 0x3D06F0u);
    ctx->pc = 0x3D06ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D06E8u;
    // 0x3d06ec: 0x28840  sll         $s1, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323888u, 0x3D06E8u, 0x3D06F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D06F0u;
label_3d06f0:
    // 0x3d06f0: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x3d06f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3d06f4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x3d06f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3d06f8: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x3D06F8u;
    SET_GPR_U32(ctx, 31, 0x3D0700u);
    ctx->pc = 0x3D06FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D06F8u;
    // 0x3d06fc: 0x8c64fdf0  lw          $a0, -0x210($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966768)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x3D06F8u, 0x3D0700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0700u;
label_3d0700:
    // 0x3d0700: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3d0700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x3d0704: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3d0704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d0708: 0x2442b298  addiu       $v0, $v0, -0x4D68
    ctx->pc = 0x3d0708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947480));
    // 0x3d070c: 0xc1036a8  jal         func_40DAA0
    ctx->pc = 0x3D070Cu;
    SET_GPR_U32(ctx, 31, 0x3D0714u);
    ctx->pc = 0x3D0710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D070Cu;
    // 0x3d0710: 0x8c44009c  lw          $a0, 0x9C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DAA0u, 0x3D070Cu, 0x3D0714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0714u;
label_3d0714:
    // 0x3d0714: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3D0714u;
    {
        const bool branch_taken_0x3d0714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0714u;
        // 0x3d0718: 0x8fa70640  lw          $a3, 0x640($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0714) {
            ctx->pc = 0x3D0754u;
            goto label_3d0754;
        }
    }
    ctx->pc = 0x3D071Cu;
label_3d071c:
    // 0x3d071c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3D071Cu;
    {
        const bool branch_taken_0x3d071c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D071Cu;
        // 0x3d0720: 0x24110010  addiu       $s1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d071c) {
            ctx->pc = 0x3D0750u;
            goto label_3d0750;
        }
    }
    ctx->pc = 0x3D0724u;
label_3d0724:
    // 0x3d0724: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d0724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d0728: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3d0728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3d072c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D072Cu;
    {
        const bool branch_taken_0x3d072c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D0730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D072Cu;
        // 0x3d0730: 0x8fa60638  lw          $a2, 0x638($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d072c) {
            ctx->pc = 0x3D0748u;
            goto label_3d0748;
        }
    }
    ctx->pc = 0x3D0734u;
    // 0x3d0734: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x3d0734u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x3d0738: 0x24a5b1e0  addiu       $a1, $a1, -0x4E20
    ctx->pc = 0x3d0738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947296));
    // 0x3d073c: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x3d073cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61B204u));
    // 0x3d0740: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3d0740u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3d0744: 0x8fa60638  lw          $a2, 0x638($sp)
    ctx->pc = 0x3d0744u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1592)));
label_3d0748:
    // 0x3d0748: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3d0748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d074c: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x3d074cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3d0750:
    // 0x3d0750: 0x8fa70640  lw          $a3, 0x640($sp)
    ctx->pc = 0x3d0750u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
label_3d0754:
    // 0x3d0754: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d0754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0758: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d0758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d075c: 0xc10746c  jal         func_41D1B0
    ctx->pc = 0x3D075Cu;
    SET_GPR_U32(ctx, 31, 0x3D0764u);
    ctx->pc = 0x3D0760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D075Cu;
    // 0x3d0760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D1B0u, 0x3D075Cu, 0x3D0764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0764u;
label_3d0764:
    // 0x3d0764: 0xc10820a  jal         func_420828
    ctx->pc = 0x3D0764u;
    SET_GPR_U32(ctx, 31, 0x3D076Cu);
    ctx->pc = 0x3D0768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0764u;
    // 0x3d0768: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420828u, 0x3D0764u, 0x3D076Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D076Cu;
label_3d076c:
    // 0x3d076c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d076cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0770: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d0770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0774: 0xc0c8e04  jal         func_323810
    ctx->pc = 0x3D0774u;
    SET_GPR_U32(ctx, 31, 0x3D077Cu);
    ctx->pc = 0x3D0778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0774u;
    // 0x3d0778: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323810u, 0x3D0774u, 0x3D077Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D077Cu;
label_3d077c:
    // 0x3d077c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d077cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0780: 0x8fa70644  lw          $a3, 0x644($sp)
    ctx->pc = 0x3d0780u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
    // 0x3d0784: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x3d0784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x3d0788: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x3d0788u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x3d078c: 0x2508b1e0  addiu       $t0, $t0, -0x4E20
    ctx->pc = 0x3d078cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294947296));
    // 0x3d0790: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x3d0790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x3d0794: 0x34431100  ori         $v1, $v0, 0x1100
    ctx->pc = 0x3d0794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4352);
    // 0x3d0798: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x3d0798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x3d079c: 0x8d020028  lw          $v0, 0x28($t0)
    ctx->pc = 0x3d079cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x3d07a0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3d07a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3d07a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D07A4u;
    {
        const bool branch_taken_0x3d07a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D07A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D07A4u;
        // 0x3d07a8: 0x8fa90648  lw          $t1, 0x648($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d07a4) {
            ctx->pc = 0x3D07B8u;
            goto label_3d07b8;
        }
    }
    ctx->pc = 0x3D07ACu;
    // 0x3d07ac: 0x691024  and         $v0, $v1, $t1
    ctx->pc = 0x3d07acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x3d07b0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3D07B0u;
    {
        const bool branch_taken_0x3d07b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D07B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D07B0u;
        // 0x3d07b4: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d07b0) {
            ctx->pc = 0x3D07DCu;
            goto label_3d07dc;
        }
    }
    ctx->pc = 0x3D07B8u;
label_3d07b8:
    // 0x3d07b8: 0x8faa064c  lw          $t2, 0x64C($sp)
    ctx->pc = 0x3d07b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1612)));
    // 0x3d07bc: 0x11400004  beqz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D07BCu;
    {
        const bool branch_taken_0x3d07bc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D07C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D07BCu;
        // 0x3d07c0: 0x8fab0648  lw          $t3, 0x648($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d07bc) {
            ctx->pc = 0x3D07D0u;
            goto label_3d07d0;
        }
    }
    ctx->pc = 0x3D07C4u;
    // 0x3d07c4: 0x6b1024  and         $v0, $v1, $t3
    ctx->pc = 0x3d07c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 11));
    // 0x3d07c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D07C8u;
    {
        const bool branch_taken_0x3d07c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D07CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D07C8u;
        // 0x3d07cc: 0x34420006  ori         $v0, $v0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d07c8) {
            ctx->pc = 0x3D07DCu;
            goto label_3d07dc;
        }
    }
    ctx->pc = 0x3D07D0u;
label_3d07d0:
    // 0x3d07d0: 0x8fa40648  lw          $a0, 0x648($sp)
    ctx->pc = 0x3d07d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
    // 0x3d07d4: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x3d07d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3d07d8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3d07d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_3d07dc:
    // 0x3d07dc: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x3d07dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x3d07e0: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x3d07e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x3d07e4: 0x24a5b298  addiu       $a1, $a1, -0x4D68
    ctx->pc = 0x3d07e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947480));
    // 0x3d07e8: 0x8ca4009c  lw          $a0, 0x9C($a1)
    ctx->pc = 0x3d07e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5DB334u));
    // 0x3d07ec: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3d07ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x3d07f0: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3D07F0u;
    SET_GPR_U32(ctx, 31, 0x3D07F8u);
    ctx->pc = 0x3D07F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D07F0u;
    // 0x3d07f4: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3D07F0u, 0x3D07F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D07F8u;
label_3d07f8:
    // 0x3d07f8: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x3d07f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x3d07fc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3d07fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0800: 0x24c6b298  addiu       $a2, $a2, -0x4D68
    ctx->pc = 0x3d0800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947480));
    // 0x3d0804: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d0804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0808: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3D0808u;
    SET_GPR_U32(ctx, 31, 0x3D0810u);
    ctx->pc = 0x3D080Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0808u;
    // 0x3d080c: 0x8cc4009c  lw          $a0, 0x9C($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3D0808u, 0x3D0810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0810u;
label_3d0810:
    // 0x3d0810: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3d0810u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d0814: 0xaeb10004  sw          $s1, 0x4($s5)
    ctx->pc = 0x3d0814u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 17));
    // 0x3d0818: 0xaea70008  sw          $a3, 0x8($s5)
    ctx->pc = 0x3d0818u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 7));
    // 0x3d081c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x3d081cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3d0820: 0xaeb2020c  sw          $s2, 0x20C($s5)
    ctx->pc = 0x3d0820u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 524), GPR_U32(ctx, 18));
    // 0x3d0824: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d0824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0828: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x3d0828u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
    // 0x3d082c: 0xaea00010  sw          $zero, 0x10($s5)
    ctx->pc = 0x3d082cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
    // 0x3d0830: 0xaeb10014  sw          $s1, 0x14($s5)
    ctx->pc = 0x3d0830u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 17));
    // 0x3d0834: 0xaeb10018  sw          $s1, 0x18($s5)
    ctx->pc = 0x3d0834u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 17));
    // 0x3d0838: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x3d0838u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
    // 0x3d083c: 0xc0f4e74  jal         func_3D39D0
    ctx->pc = 0x3D083Cu;
    SET_GPR_U32(ctx, 31, 0x3D0844u);
    ctx->pc = 0x3D0840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D083Cu;
    // 0x3d0840: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D39D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D39D0u, 0x3D083Cu, 0x3D0844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0844u;
label_3d0844:
    // 0x3d0844: 0xc1082ca  jal         func_420B28
    ctx->pc = 0x3D0844u;
    SET_GPR_U32(ctx, 31, 0x3D084Cu);
    ctx->pc = 0x420B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B28u, 0x3D0844u, 0x3D084Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D084Cu;
label_3d084c:
    // 0x3d084c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D084Cu;
    {
        const bool branch_taken_0x3d084c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D084Cu;
        // 0x3d0850: 0x8fa8063c  lw          $t0, 0x63C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d084c) {
            ctx->pc = 0x3D086Cu;
            goto label_3d086c;
        }
    }
    ctx->pc = 0x3D0854u;
    // 0x3d0854: 0xc1082ca  jal         func_420B28
    ctx->pc = 0x3D0854u;
    SET_GPR_U32(ctx, 31, 0x3D085Cu);
    ctx->pc = 0x420B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B28u, 0x3D0854u, 0x3D085Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D085Cu;
label_3d085c:
    // 0x3d085c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d085cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0860: 0xc10826c  jal         func_4209B0
    ctx->pc = 0x3D0860u;
    SET_GPR_U32(ctx, 31, 0x3D0868u);
    ctx->pc = 0x3D0864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0860u;
    // 0x3d0864: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4209B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4209B0u, 0x3D0860u, 0x3D0868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0868u;
label_3d0868:
    // 0x3d0868: 0x8fa8063c  lw          $t0, 0x63C($sp)
    ctx->pc = 0x3d0868u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1596)));
label_3d086c:
    // 0x3d086c: 0x1500fefa  bnez        $t0, . + 4 + (-0x106 << 2)
    ctx->pc = 0x3D086Cu;
    {
        const bool branch_taken_0x3d086c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D0870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D086Cu;
        // 0x3d0870: 0x3c07005e  lui         $a3, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d086c) {
            ctx->pc = 0x3D0458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d0458;
        }
    }
    ctx->pc = 0x3D0874u;
    // 0x3d0874: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x3d0874u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
    // 0x3d0878: 0xafa00650  sw          $zero, 0x650($sp)
    ctx->pc = 0x3d0878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1616), GPR_U32(ctx, 0));
    // 0x3d087c: 0x2522b298  addiu       $v0, $t1, -0x4D68
    ctx->pc = 0x3d087cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294947480));
    // 0x3d0880: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3D0880u;
    SET_GPR_U32(ctx, 31, 0x3D0888u);
    ctx->pc = 0x3D0884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0880u;
    // 0x3d0884: 0x8c44009c  lw          $a0, 0x9C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3D0880u, 0x3D0888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0888u;
label_3d0888:
    // 0x3d0888: 0x8faa063c  lw          $t2, 0x63C($sp)
    ctx->pc = 0x3d0888u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1596)));
    // 0x3d088c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d088cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0890: 0x153102b  sltu        $v0, $t2, $s3
    ctx->pc = 0x3d0890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3d0894: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x3D0894u;
    {
        const bool branch_taken_0x3d0894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0894u;
        // 0x3d0898: 0x27ab0210  addiu       $t3, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0894) {
            ctx->pc = 0x3D0AB8u;
            goto label_3d0ab8;
        }
    }
    ctx->pc = 0x3D089Cu;
    // 0x3d089c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x3d089cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d08a0: 0xafab0654  sw          $t3, 0x654($sp)
    ctx->pc = 0x3d08a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1620), GPR_U32(ctx, 11));
    // 0x3d08a4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3d08a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d08a8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3d08a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d08ac: 0x0  nop
    ctx->pc = 0x3d08acu;
    // NOP
label_3d08b0:
    // 0x3d08b0: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x3d08b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3d08b4: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x3d08b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x3d08b8: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x3d08b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3d08bc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3D08BCu;
    {
        const bool branch_taken_0x3d08bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D08C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D08BCu;
        // 0x3d08c0: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d08bc) {
            ctx->pc = 0x3D091Cu;
            goto label_3d091c;
        }
    }
    ctx->pc = 0x3D08C4u;
    // 0x3d08c4: 0x24620200  addiu       $v0, $v1, 0x200
    ctx->pc = 0x3d08c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
label_3d08c8:
    // 0x3d08c8: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x3d08c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3d08cc: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x3d08ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3d08d0: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x3d08d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3d08d4: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x3d08d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3d08d8: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x3d08d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x3d08dc: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x3d08dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x3d08e0: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x3d08e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x3d08e4: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x3d08e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x3d08e8: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x3d08e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d08ec: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x3d08ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d08f0: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x3d08f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d08f4: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x3d08f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d08f8: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x3d08f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d08fc: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x3d08fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0900: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x3d0900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0904: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x3d0904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0908: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3d0908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3d090c: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3D090Cu;
    {
        const bool branch_taken_0x3d090c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D0910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D090Cu;
        // 0x3d0910: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d090c) {
            ctx->pc = 0x3D08C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d08c8;
        }
    }
    ctx->pc = 0x3D0914u;
    // 0x3d0914: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3D0914u;
    {
        const bool branch_taken_0x3d0914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0914) {
            ctx->pc = 0x3D094Cu;
            goto label_3d094c;
        }
    }
    ctx->pc = 0x3D091Cu;
label_3d091c:
    // 0x3d091c: 0x24620200  addiu       $v0, $v1, 0x200
    ctx->pc = 0x3d091cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
label_3d0920:
    // 0x3d0920: 0xdc690000  ld          $t1, 0x0($v1)
    ctx->pc = 0x3d0920u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d0924: 0xdc6a0008  ld          $t2, 0x8($v1)
    ctx->pc = 0x3d0924u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3d0928: 0xdc6b0010  ld          $t3, 0x10($v1)
    ctx->pc = 0x3d0928u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3d092c: 0xdc650018  ld          $a1, 0x18($v1)
    ctx->pc = 0x3d092cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x3d0930: 0xfc890000  sd          $t1, 0x0($a0)
    ctx->pc = 0x3d0930u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 9));
    // 0x3d0934: 0xfc8a0008  sd          $t2, 0x8($a0)
    ctx->pc = 0x3d0934u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 10));
    // 0x3d0938: 0xfc8b0010  sd          $t3, 0x10($a0)
    ctx->pc = 0x3d0938u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 11));
    // 0x3d093c: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x3d093cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
    // 0x3d0940: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3d0940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3d0944: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3D0944u;
    {
        const bool branch_taken_0x3d0944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D0948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0944u;
        // 0x3d0948: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0944) {
            ctx->pc = 0x3D0920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d0920;
        }
    }
    ctx->pc = 0x3D094Cu;
label_3d094c:
    // 0x3d094c: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x3d094cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3d0950: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x3d0950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3d0954: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x3d0954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x3d0958: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x3d0958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x3d095c: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x3d095cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0960: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x3d0960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0964: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x3d0964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0968: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x3d0968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d096c: 0x8faa063c  lw          $t2, 0x63C($sp)
    ctx->pc = 0x3d096cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1596)));
    // 0x3d0970: 0x11400004  beqz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D0970u;
    {
        const bool branch_taken_0x3d0970 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0970u;
        // 0x3d0974: 0x8fa20218  lw          $v0, 0x218($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0970) {
            ctx->pc = 0x3D0984u;
            goto label_3d0984;
        }
    }
    ctx->pc = 0x3D0978u;
    // 0x3d0978: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x3d0978u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d097c: 0x144b0047  bne         $v0, $t3, . + 4 + (0x47 << 2)
    ctx->pc = 0x3D097Cu;
    {
        const bool branch_taken_0x3d097c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        ctx->pc = 0x3D0980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D097Cu;
        // 0x3d0980: 0x8faa0650  lw          $t2, 0x650($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d097c) {
            ctx->pc = 0x3D0A9Cu;
            goto label_3d0a9c;
        }
    }
    ctx->pc = 0x3D0984u;
label_3d0984:
    // 0x3d0984: 0x8fb00630  lw          $s0, 0x630($sp)
    ctx->pc = 0x3d0984u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1584)));
    // 0x3d0988: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3d0988u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d098c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D098Cu;
    {
        const bool branch_taken_0x3d098c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D098Cu;
        // 0x3d0990: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d098c) {
            ctx->pc = 0x3D099Cu;
            goto label_3d099c;
        }
    }
    ctx->pc = 0x3D0994u;
    // 0x3d0994: 0x0  nop
    ctx->pc = 0x3d0994u;
    // NOP
label_3d0998:
    // 0x3d0998: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3d0998u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3d099c:
    // 0x3d099c: 0x8fa30634  lw          $v1, 0x634($sp)
    ctx->pc = 0x3d099cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1588)));
    // 0x3d09a0: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x3d09a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3d09a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D09A4u;
    {
        const bool branch_taken_0x3d09a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D09A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D09A4u;
        // 0x3d09a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d09a4) {
            ctx->pc = 0x3D09C0u;
            goto label_3d09c0;
        }
    }
    ctx->pc = 0x3D09ACu;
    // 0x3d09ac: 0xc0f3a4c  jal         func_3CE930
    ctx->pc = 0x3D09ACu;
    SET_GPR_U32(ctx, 31, 0x3D09B4u);
    ctx->pc = 0x3D09B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D09ACu;
    // 0x3d09b0: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE930u, 0x3D09ACu, 0x3D09B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D09B4u;
label_3d09b4:
    // 0x3d09b4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3D09B4u;
    {
        const bool branch_taken_0x3d09b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d09b4) {
            ctx->pc = 0x3D09B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D09B4u;
            // 0x3d09b8: 0x2610002c  addiu       $s0, $s0, 0x2C (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D0998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d0998;
        }
    }
    ctx->pc = 0x3D09BCu;
    // 0x3d09bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3d09bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d09c0:
    // 0x3d09c0: 0x12400036  beqz        $s2, . + 4 + (0x36 << 2)
    ctx->pc = 0x3D09C0u;
    {
        const bool branch_taken_0x3d09c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D09C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D09C0u;
        // 0x3d09c4: 0x8faa0650  lw          $t2, 0x650($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d09c0) {
            ctx->pc = 0x3D0A9Cu;
            goto label_3d0a9c;
        }
    }
    ctx->pc = 0x3D09C8u;
    // 0x3d09c8: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x3d09c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3d09cc: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x3d09ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x3d09d0: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x3d09d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3d09d4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3D09D4u;
    {
        const bool branch_taken_0x3d09d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D09D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D09D4u;
        // 0x3d09d8: 0x8fa40654  lw          $a0, 0x654($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d09d4) {
            ctx->pc = 0x3D0A34u;
            goto label_3d0a34;
        }
    }
    ctx->pc = 0x3D09DCu;
    // 0x3d09dc: 0x27a20410  addiu       $v0, $sp, 0x410
    ctx->pc = 0x3d09dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3d09e0:
    // 0x3d09e0: 0x68850007  ldl         $a1, 0x7($a0)
    ctx->pc = 0x3d09e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3d09e4: 0x6c850000  ldr         $a1, 0x0($a0)
    ctx->pc = 0x3d09e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3d09e8: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x3d09e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3d09ec: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x3d09ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3d09f0: 0x68870017  ldl         $a3, 0x17($a0)
    ctx->pc = 0x3d09f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x3d09f4: 0x6c870010  ldr         $a3, 0x10($a0)
    ctx->pc = 0x3d09f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x3d09f8: 0x6888001f  ldl         $t0, 0x1F($a0)
    ctx->pc = 0x3d09f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x3d09fc: 0x6c880018  ldr         $t0, 0x18($a0)
    ctx->pc = 0x3d09fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x3d0a00: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x3d0a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0a04: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x3d0a04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0a08: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x3d0a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0a0c: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x3d0a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0a10: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x3d0a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0a14: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x3d0a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0a18: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x3d0a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0a1c: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x3d0a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0a20: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3d0a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3d0a24: 0x1482ffee  bne         $a0, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3D0A24u;
    {
        const bool branch_taken_0x3d0a24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D0A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0A24u;
        // 0x3d0a28: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0a24) {
            ctx->pc = 0x3D09E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d09e0;
        }
    }
    ctx->pc = 0x3D0A2Cu;
    // 0x3d0a2c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3D0A2Cu;
    {
        const bool branch_taken_0x3d0a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0a2c) {
            ctx->pc = 0x3D0A64u;
            goto label_3d0a64;
        }
    }
    ctx->pc = 0x3D0A34u;
label_3d0a34:
    // 0x3d0a34: 0x27a20410  addiu       $v0, $sp, 0x410
    ctx->pc = 0x3d0a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3d0a38:
    // 0x3d0a38: 0xdc890000  ld          $t1, 0x0($a0)
    ctx->pc = 0x3d0a38u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d0a3c: 0xdc8a0008  ld          $t2, 0x8($a0)
    ctx->pc = 0x3d0a3cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3d0a40: 0xdc8b0010  ld          $t3, 0x10($a0)
    ctx->pc = 0x3d0a40u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3d0a44: 0xdc850018  ld          $a1, 0x18($a0)
    ctx->pc = 0x3d0a44u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3d0a48: 0xfc690000  sd          $t1, 0x0($v1)
    ctx->pc = 0x3d0a48u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 9));
    // 0x3d0a4c: 0xfc6a0008  sd          $t2, 0x8($v1)
    ctx->pc = 0x3d0a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 10));
    // 0x3d0a50: 0xfc6b0010  sd          $t3, 0x10($v1)
    ctx->pc = 0x3d0a50u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 11));
    // 0x3d0a54: 0xfc650018  sd          $a1, 0x18($v1)
    ctx->pc = 0x3d0a54u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 5));
    // 0x3d0a58: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3d0a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3d0a5c: 0x1482fff6  bne         $a0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3D0A5Cu;
    {
        const bool branch_taken_0x3d0a5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D0A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0A5Cu;
        // 0x3d0a60: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0a5c) {
            ctx->pc = 0x3D0A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d0a38;
        }
    }
    ctx->pc = 0x3D0A64u;
label_3d0a64:
    // 0x3d0a64: 0x68860007  ldl         $a2, 0x7($a0)
    ctx->pc = 0x3d0a64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3d0a68: 0x6c860000  ldr         $a2, 0x0($a0)
    ctx->pc = 0x3d0a68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3d0a6c: 0x6887000f  ldl         $a3, 0xF($a0)
    ctx->pc = 0x3d0a6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x3d0a70: 0x6c870008  ldr         $a3, 0x8($a0)
    ctx->pc = 0x3d0a70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x3d0a74: 0xb0660007  sdl         $a2, 0x7($v1)
    ctx->pc = 0x3d0a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0a78: 0xb4660000  sdr         $a2, 0x0($v1)
    ctx->pc = 0x3d0a78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0a7c: 0xb067000f  sdl         $a3, 0xF($v1)
    ctx->pc = 0x3d0a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0a80: 0xb4670008  sdr         $a3, 0x8($v1)
    ctx->pc = 0x3d0a80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0a84: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x3d0a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3d0a88: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D0A88u;
    {
        const bool branch_taken_0x3d0a88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0A88u;
        // 0x3d0a8c: 0x5e1021  addu        $v0, $v0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0a88) {
            ctx->pc = 0x3D0A98u;
            goto label_3d0a98;
        }
    }
    ctx->pc = 0x3D0A90u;
    // 0x3d0a90: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3D0A90u;
    {
        const bool branch_taken_0x3d0a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0A90u;
        // 0x3d0a94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0a90) {
            ctx->pc = 0x3D0ABCu;
            goto label_3d0abc;
        }
    }
    ctx->pc = 0x3D0A98u;
label_3d0a98:
    // 0x3d0a98: 0x8faa0650  lw          $t2, 0x650($sp)
    ctx->pc = 0x3d0a98u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
label_3d0a9c:
    // 0x3d0a9c: 0x27de0210  addiu       $fp, $fp, 0x210
    ctx->pc = 0x3d0a9cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 528));
    // 0x3d0aa0: 0x26f70210  addiu       $s7, $s7, 0x210
    ctx->pc = 0x3d0aa0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 528));
    // 0x3d0aa4: 0x26d60210  addiu       $s6, $s6, 0x210
    ctx->pc = 0x3d0aa4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 528));
    // 0x3d0aa8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3d0aa8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3d0aac: 0x153102b  sltu        $v0, $t2, $s3
    ctx->pc = 0x3d0aacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3d0ab0: 0x1440ff7f  bnez        $v0, . + 4 + (-0x81 << 2)
    ctx->pc = 0x3D0AB0u;
    {
        const bool branch_taken_0x3d0ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D0AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0AB0u;
        // 0x3d0ab4: 0xafaa0650  sw          $t2, 0x650($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1616), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0ab0) {
            ctx->pc = 0x3D08B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d08b0;
        }
    }
    ctx->pc = 0x3D0AB8u;
label_3d0ab8:
    // 0x3d0ab8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3d0ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d0abc:
    // 0x3d0abc: 0x160000f9  bnez        $s0, . + 4 + (0xF9 << 2)
    ctx->pc = 0x3D0ABCu;
    {
        const bool branch_taken_0x3d0abc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D0AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0ABCu;
        // 0x3d0ac0: 0x8fab0634  lw          $t3, 0x634($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0abc) {
            ctx->pc = 0x3D0EA4u;
            goto label_3d0ea4;
        }
    }
    ctx->pc = 0x3D0AC4u;
    // 0x3d0ac4: 0x0  nop
    ctx->pc = 0x3d0ac4u;
    // NOP
label_3d0ac8:
    // 0x3d0ac8: 0x19600061  blez        $t3, . + 4 + (0x61 << 2)
    ctx->pc = 0x3D0AC8u;
    {
        const bool branch_taken_0x3d0ac8 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x3D0ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0AC8u;
        // 0x3d0acc: 0xb1023  negu        $v0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0ac8) {
            ctx->pc = 0x3D0C50u;
            goto label_3d0c50;
        }
    }
    ctx->pc = 0x3D0AD0u;
    // 0x3d0ad0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3d0ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3d0ad4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3d0ad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3d0ad8: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x3d0ad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3d0adc: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x3d0adcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0ae0: 0x8fa20630  lw          $v0, 0x630($sp)
    ctx->pc = 0x3d0ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1584)));
    // 0x3d0ae4: 0x1080002a  beqz        $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3D0AE4u;
    {
        const bool branch_taken_0x3d0ae4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0AE4u;
        // 0x3d0ae8: 0x24430020  addiu       $v1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0ae4) {
            ctx->pc = 0x3D0B90u;
            goto label_3d0b90;
        }
    }
    ctx->pc = 0x3D0AECu;
    // 0x3d0aec: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x3d0aecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3d0af0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3D0AF0u;
    {
        const bool branch_taken_0x3d0af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0AF0u;
        // 0x3d0af4: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0af0) {
            ctx->pc = 0x3D0B60u;
            goto label_3d0b60;
        }
    }
    ctx->pc = 0x3D0AF8u;
    // 0x3d0af8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3D0AF8u;
    {
        const bool branch_taken_0x3d0af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0AF8u;
        // 0x3d0afc: 0xc460fff0  lwc1        $f0, -0x10($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0af8) {
            ctx->pc = 0x3D0B38u;
            goto label_3d0b38;
        }
    }
    ctx->pc = 0x3D0B00u;
    // 0x3d0b00: 0xc461fff4  lwc1        $f1, -0xC($v1)
    ctx->pc = 0x3d0b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d0b04: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3d0b04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3d0b08: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d0b08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3d0b0c: 0xe460fff0  swc1        $f0, -0x10($v1)
    ctx->pc = 0x3d0b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967280), bits); }
    // 0x3d0b10: 0xe461fff4  swc1        $f1, -0xC($v1)
    ctx->pc = 0x3d0b10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), bits); }
    // 0x3d0b14: 0x8fa30630  lw          $v1, 0x630($sp)
    ctx->pc = 0x3d0b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1584)));
    // 0x3d0b18: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x3d0b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d0b1c: 0x8fa40630  lw          $a0, 0x630($sp)
    ctx->pc = 0x3d0b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1584)));
    // 0x3d0b20: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3d0b20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3d0b24: 0x2463004c  addiu       $v1, $v1, 0x4C
    ctx->pc = 0x3d0b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
    // 0x3d0b28: 0x2567ffff  addiu       $a3, $t3, -0x1
    ctx->pc = 0x3d0b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3d0b2c: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x3d0b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x3d0b30: 0xc460fff0  lwc1        $f0, -0x10($v1)
    ctx->pc = 0x3d0b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d0b34: 0x0  nop
    ctx->pc = 0x3d0b34u;
    // NOP
label_3d0b38:
    // 0x3d0b38: 0xc461fff4  lwc1        $f1, -0xC($v1)
    ctx->pc = 0x3d0b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d0b3c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3d0b3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3d0b40: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d0b40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3d0b44: 0xe460fff0  swc1        $f0, -0x10($v1)
    ctx->pc = 0x3d0b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967280), bits); }
    // 0x3d0b48: 0xe461fff4  swc1        $f1, -0xC($v1)
    ctx->pc = 0x3d0b48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), bits); }
    // 0x3d0b4c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3d0b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d0b50: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3d0b50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3d0b54: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3d0b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3d0b58: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3d0b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3d0b5c: 0x2463002c  addiu       $v1, $v1, 0x2C
    ctx->pc = 0x3d0b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
label_3d0b60:
    // 0x3d0b60: 0xc460fff0  lwc1        $f0, -0x10($v1)
    ctx->pc = 0x3d0b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d0b64: 0xc461fff4  lwc1        $f1, -0xC($v1)
    ctx->pc = 0x3d0b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d0b68: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3d0b68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3d0b6c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d0b6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3d0b70: 0xe460fff0  swc1        $f0, -0x10($v1)
    ctx->pc = 0x3d0b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967280), bits); }
    // 0x3d0b74: 0xe461fff4  swc1        $f1, -0xC($v1)
    ctx->pc = 0x3d0b74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), bits); }
    // 0x3d0b78: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3d0b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d0b7c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3d0b7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3d0b80: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3d0b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3d0b84: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3d0b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3d0b88: 0x10e00031  beqz        $a3, . + 4 + (0x31 << 2)
    ctx->pc = 0x3D0B88u;
    {
        const bool branch_taken_0x3d0b88 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0B88u;
        // 0x3d0b8c: 0x2463002c  addiu       $v1, $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0b88) {
            ctx->pc = 0x3D0C50u;
            goto label_3d0c50;
        }
    }
    ctx->pc = 0x3D0B90u;
label_3d0b90:
    // 0x3d0b90: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3d0b90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0b94: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3d0b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0b98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3d0b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0b9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d0b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d0ba0:
    // 0x3d0ba0: 0xc460fff0  lwc1        $f0, -0x10($v1)
    ctx->pc = 0x3d0ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d0ba4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3d0ba4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3d0ba8: 0xe480fff0  swc1        $f0, -0x10($a0)
    ctx->pc = 0x3d0ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294967280), bits); }
    // 0x3d0bac: 0xc4a1fff4  lwc1        $f1, -0xC($a1)
    ctx->pc = 0x3d0bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d0bb0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d0bb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3d0bb4: 0xe4c1fff4  swc1        $f1, -0xC($a2)
    ctx->pc = 0x3d0bb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967284), bits); }
    // 0x3d0bb8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3d0bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d0bbc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3d0bbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3d0bc0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3d0bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3d0bc4: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x3d0bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d0bc8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3d0bc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3d0bcc: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x3d0bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x3d0bd0: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x3d0bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d0bd4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d0bd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3d0bd8: 0xe4c10020  swc1        $f1, 0x20($a2)
    ctx->pc = 0x3d0bd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x3d0bdc: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x3d0bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d0be0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3d0be0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3d0be4: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x3d0be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x3d0be8: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x3d0be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d0bec: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3d0becu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3d0bf0: 0xe4800048  swc1        $f0, 0x48($a0)
    ctx->pc = 0x3d0bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x3d0bf4: 0xc4a1004c  lwc1        $f1, 0x4C($a1)
    ctx->pc = 0x3d0bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d0bf8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d0bf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3d0bfc: 0xe4c1004c  swc1        $f1, 0x4C($a2)
    ctx->pc = 0x3d0bfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 76), bits); }
    // 0x3d0c00: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x3d0c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d0c04: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3d0c04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3d0c08: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x3d0c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x3d0c0c: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x3d0c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d0c10: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3d0c10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3d0c14: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x3d0c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x3d0c18: 0xc4a10078  lwc1        $f1, 0x78($a1)
    ctx->pc = 0x3d0c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d0c1c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d0c1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3d0c20: 0xe4c10078  swc1        $f1, 0x78($a2)
    ctx->pc = 0x3d0c20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 120), bits); }
    // 0x3d0c24: 0xc4400084  lwc1        $f0, 0x84($v0)
    ctx->pc = 0x3d0c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d0c28: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3d0c28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3d0c2c: 0x24c600b0  addiu       $a2, $a2, 0xB0
    ctx->pc = 0x3d0c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 176));
    // 0x3d0c30: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x3d0c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x3d0c34: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x3d0c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x3d0c38: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x3d0c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x3d0c3c: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x3d0c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x3d0c40: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x3d0c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x3d0c44: 0x14e0ffd6  bnez        $a3, . + 4 + (-0x2A << 2)
    ctx->pc = 0x3D0C44u;
    {
        const bool branch_taken_0x3d0c44 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D0C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0C44u;
        // 0x3d0c48: 0x244200b0  addiu       $v0, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0c44) {
            ctx->pc = 0x3D0BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d0ba0;
        }
    }
    ctx->pc = 0x3D0C4Cu;
    // 0x3d0c4c: 0x0  nop
    ctx->pc = 0x3d0c4cu;
    // NOP
label_3d0c50:
    // 0x3d0c50: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x3d0c50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x3d0c54: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3d0c54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0c58: 0x24a5b298  addiu       $a1, $a1, -0x4D68
    ctx->pc = 0x3d0c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947480));
    // 0x3d0c5c: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3D0C5Cu;
    SET_GPR_U32(ctx, 31, 0x3D0C64u);
    ctx->pc = 0x3D0C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0C5Cu;
    // 0x3d0c60: 0x8ca4009c  lw          $a0, 0x9C($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3D0C5Cu, 0x3D0C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0C64u;
label_3d0c64:
    // 0x3d0c64: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3d0c64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0c68: 0x50c0008c  beql        $a2, $zero, . + 4 + (0x8C << 2)
    ctx->pc = 0x3D0C68u;
    {
        const bool branch_taken_0x3d0c68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0c68) {
            ctx->pc = 0x3D0C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D0C68u;
            // 0x3d0c6c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D0E9Cu;
            goto label_3d0e9c;
        }
    }
    ctx->pc = 0x3D0C70u;
    // 0x3d0c70: 0x27a70420  addiu       $a3, $sp, 0x420
    ctx->pc = 0x3d0c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    // 0x3d0c74: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3d0c74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d0c78: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x3d0c78u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0c7c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3d0c7cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0c80: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3d0c80u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0c84: 0x0  nop
    ctx->pc = 0x3d0c84u;
    // NOP
label_3d0c88:
    // 0x3d0c88: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x3d0c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3d0c8c: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x3d0c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x3d0c90: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x3d0c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3d0c94: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3D0C94u;
    {
        const bool branch_taken_0x3d0c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0C94u;
        // 0x3d0c98: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0c94) {
            ctx->pc = 0x3D0CF4u;
            goto label_3d0cf4;
        }
    }
    ctx->pc = 0x3D0C9Cu;
    // 0x3d0c9c: 0x24620200  addiu       $v0, $v1, 0x200
    ctx->pc = 0x3d0c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
label_3d0ca0:
    // 0x3d0ca0: 0x68690007  ldl         $t1, 0x7($v1)
    ctx->pc = 0x3d0ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x3d0ca4: 0x6c690000  ldr         $t1, 0x0($v1)
    ctx->pc = 0x3d0ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x3d0ca8: 0x686a000f  ldl         $t2, 0xF($v1)
    ctx->pc = 0x3d0ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x3d0cac: 0x6c6a0008  ldr         $t2, 0x8($v1)
    ctx->pc = 0x3d0cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x3d0cb0: 0x686b0017  ldl         $t3, 0x17($v1)
    ctx->pc = 0x3d0cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x3d0cb4: 0x6c6b0010  ldr         $t3, 0x10($v1)
    ctx->pc = 0x3d0cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x3d0cb8: 0x6865001f  ldl         $a1, 0x1F($v1)
    ctx->pc = 0x3d0cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3d0cbc: 0x6c650018  ldr         $a1, 0x18($v1)
    ctx->pc = 0x3d0cbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3d0cc0: 0xb0890007  sdl         $t1, 0x7($a0)
    ctx->pc = 0x3d0cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0cc4: 0xb4890000  sdr         $t1, 0x0($a0)
    ctx->pc = 0x3d0cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0cc8: 0xb08a000f  sdl         $t2, 0xF($a0)
    ctx->pc = 0x3d0cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0ccc: 0xb48a0008  sdr         $t2, 0x8($a0)
    ctx->pc = 0x3d0cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0cd0: 0xb08b0017  sdl         $t3, 0x17($a0)
    ctx->pc = 0x3d0cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0cd4: 0xb48b0010  sdr         $t3, 0x10($a0)
    ctx->pc = 0x3d0cd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0cd8: 0xb085001f  sdl         $a1, 0x1F($a0)
    ctx->pc = 0x3d0cd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0cdc: 0xb4850018  sdr         $a1, 0x18($a0)
    ctx->pc = 0x3d0cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0ce0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3d0ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3d0ce4: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3D0CE4u;
    {
        const bool branch_taken_0x3d0ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D0CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0CE4u;
        // 0x3d0ce8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0ce4) {
            ctx->pc = 0x3D0CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d0ca0;
        }
    }
    ctx->pc = 0x3D0CECu;
    // 0x3d0cec: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3D0CECu;
    {
        const bool branch_taken_0x3d0cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0cec) {
            ctx->pc = 0x3D0D24u;
            goto label_3d0d24;
        }
    }
    ctx->pc = 0x3D0CF4u;
label_3d0cf4:
    // 0x3d0cf4: 0x24620200  addiu       $v0, $v1, 0x200
    ctx->pc = 0x3d0cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
label_3d0cf8:
    // 0x3d0cf8: 0xdc690000  ld          $t1, 0x0($v1)
    ctx->pc = 0x3d0cf8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d0cfc: 0xdc6a0008  ld          $t2, 0x8($v1)
    ctx->pc = 0x3d0cfcu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3d0d00: 0xdc6b0010  ld          $t3, 0x10($v1)
    ctx->pc = 0x3d0d00u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3d0d04: 0xdc650018  ld          $a1, 0x18($v1)
    ctx->pc = 0x3d0d04u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x3d0d08: 0xfc890000  sd          $t1, 0x0($a0)
    ctx->pc = 0x3d0d08u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 9));
    // 0x3d0d0c: 0xfc8a0008  sd          $t2, 0x8($a0)
    ctx->pc = 0x3d0d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 10));
    // 0x3d0d10: 0xfc8b0010  sd          $t3, 0x10($a0)
    ctx->pc = 0x3d0d10u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 11));
    // 0x3d0d14: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x3d0d14u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
    // 0x3d0d18: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3d0d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3d0d1c: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3D0D1Cu;
    {
        const bool branch_taken_0x3d0d1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D0D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0D1Cu;
        // 0x3d0d20: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0d1c) {
            ctx->pc = 0x3D0CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d0cf8;
        }
    }
    ctx->pc = 0x3D0D24u;
label_3d0d24:
    // 0x3d0d24: 0x68690007  ldl         $t1, 0x7($v1)
    ctx->pc = 0x3d0d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x3d0d28: 0x6c690000  ldr         $t1, 0x0($v1)
    ctx->pc = 0x3d0d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x3d0d2c: 0x686a000f  ldl         $t2, 0xF($v1)
    ctx->pc = 0x3d0d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x3d0d30: 0x6c6a0008  ldr         $t2, 0x8($v1)
    ctx->pc = 0x3d0d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x3d0d34: 0xb0890007  sdl         $t1, 0x7($a0)
    ctx->pc = 0x3d0d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0d38: 0xb4890000  sdr         $t1, 0x0($a0)
    ctx->pc = 0x3d0d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0d3c: 0xb08a000f  sdl         $t2, 0xF($a0)
    ctx->pc = 0x3d0d3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0d40: 0xb48a0008  sdr         $t2, 0x8($a0)
    ctx->pc = 0x3d0d40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0d44: 0x8fa3063c  lw          $v1, 0x63C($sp)
    ctx->pc = 0x3d0d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1596)));
    // 0x3d0d48: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D0D48u;
    {
        const bool branch_taken_0x3d0d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0D48u;
        // 0x3d0d4c: 0x8fa20428  lw          $v0, 0x428($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0d48) {
            ctx->pc = 0x3D0D58u;
            goto label_3d0d58;
        }
    }
    ctx->pc = 0x3D0D50u;
    // 0x3d0d50: 0x5448004c  bnel        $v0, $t0, . + 4 + (0x4C << 2)
    ctx->pc = 0x3D0D50u;
    {
        const bool branch_taken_0x3d0d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x3d0d50) {
            ctx->pc = 0x3D0D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D0D50u;
            // 0x3d0d54: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D0E84u;
            goto label_3d0e84;
        }
    }
    ctx->pc = 0x3D0D58u;
label_3d0d58:
    // 0x3d0d58: 0x8fb00630  lw          $s0, 0x630($sp)
    ctx->pc = 0x3d0d58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1584)));
    // 0x3d0d5c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3d0d5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d0d60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D0D60u;
    {
        const bool branch_taken_0x3d0d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0D60u;
        // 0x3d0d64: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0d60) {
            ctx->pc = 0x3D0D70u;
            goto label_3d0d70;
        }
    }
    ctx->pc = 0x3D0D68u;
label_3d0d68:
    // 0x3d0d68: 0x2610002c  addiu       $s0, $s0, 0x2C
    ctx->pc = 0x3d0d68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x3d0d6c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3d0d6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3d0d70:
    // 0x3d0d70: 0x8fa40634  lw          $a0, 0x634($sp)
    ctx->pc = 0x3d0d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1588)));
    // 0x3d0d74: 0x224102b  sltu        $v0, $s1, $a0
    ctx->pc = 0x3d0d74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3d0d78: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3D0D78u;
    {
        const bool branch_taken_0x3d0d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0D78u;
        // 0x3d0d7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0d78) {
            ctx->pc = 0x3D0DA8u;
            goto label_3d0da8;
        }
    }
    ctx->pc = 0x3D0D80u;
    // 0x3d0d80: 0x7fa60660  sq          $a2, 0x660($sp)
    ctx->pc = 0x3d0d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1632), GPR_VEC(ctx, 6));
    // 0x3d0d84: 0x7fa70670  sq          $a3, 0x670($sp)
    ctx->pc = 0x3d0d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1648), GPR_VEC(ctx, 7));
    // 0x3d0d88: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x3d0d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    // 0x3d0d8c: 0xc0f3a4c  jal         func_3CE930
    ctx->pc = 0x3D0D8Cu;
    SET_GPR_U32(ctx, 31, 0x3D0D94u);
    ctx->pc = 0x3D0D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0D8Cu;
    // 0x3d0d90: 0x7fa80680  sq          $t0, 0x680($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1664), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE930u, 0x3D0D8Cu, 0x3D0D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0D94u;
label_3d0d94:
    // 0x3d0d94: 0x7ba60660  lq          $a2, 0x660($sp)
    ctx->pc = 0x3d0d94u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 1632)));
    // 0x3d0d98: 0x7ba70670  lq          $a3, 0x670($sp)
    ctx->pc = 0x3d0d98u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 1648)));
    // 0x3d0d9c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3D0D9Cu;
    {
        const bool branch_taken_0x3d0d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D0DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0D9Cu;
        // 0x3d0da0: 0x7ba80680  lq          $t0, 0x680($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 1664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0d9c) {
            ctx->pc = 0x3D0D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d0d68;
        }
    }
    ctx->pc = 0x3D0DA4u;
    // 0x3d0da4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3d0da4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d0da8:
    // 0x3d0da8: 0x52400036  beql        $s2, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x3D0DA8u;
    {
        const bool branch_taken_0x3d0da8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0da8) {
            ctx->pc = 0x3D0DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D0DA8u;
            // 0x3d0dac: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D0E84u;
            goto label_3d0e84;
        }
    }
    ctx->pc = 0x3D0DB0u;
    // 0x3d0db0: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x3d0db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3d0db4: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x3d0db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x3d0db8: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x3d0db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3d0dbc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3D0DBCu;
    {
        const bool branch_taken_0x3d0dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0DBCu;
        // 0x3d0dc0: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0dbc) {
            ctx->pc = 0x3D0E1Cu;
            goto label_3d0e1c;
        }
    }
    ctx->pc = 0x3D0DC4u;
    // 0x3d0dc4: 0x27a20620  addiu       $v0, $sp, 0x620
    ctx->pc = 0x3d0dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
label_3d0dc8:
    // 0x3d0dc8: 0x68850007  ldl         $a1, 0x7($a0)
    ctx->pc = 0x3d0dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3d0dcc: 0x6c850000  ldr         $a1, 0x0($a0)
    ctx->pc = 0x3d0dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3d0dd0: 0x6889000f  ldl         $t1, 0xF($a0)
    ctx->pc = 0x3d0dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x3d0dd4: 0x6c890008  ldr         $t1, 0x8($a0)
    ctx->pc = 0x3d0dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x3d0dd8: 0x688a0017  ldl         $t2, 0x17($a0)
    ctx->pc = 0x3d0dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x3d0ddc: 0x6c8a0010  ldr         $t2, 0x10($a0)
    ctx->pc = 0x3d0ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x3d0de0: 0x688b001f  ldl         $t3, 0x1F($a0)
    ctx->pc = 0x3d0de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x3d0de4: 0x6c8b0018  ldr         $t3, 0x18($a0)
    ctx->pc = 0x3d0de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x3d0de8: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x3d0de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0dec: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x3d0decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0df0: 0xb069000f  sdl         $t1, 0xF($v1)
    ctx->pc = 0x3d0df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0df4: 0xb4690008  sdr         $t1, 0x8($v1)
    ctx->pc = 0x3d0df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0df8: 0xb06a0017  sdl         $t2, 0x17($v1)
    ctx->pc = 0x3d0df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0dfc: 0xb46a0010  sdr         $t2, 0x10($v1)
    ctx->pc = 0x3d0dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0e00: 0xb06b001f  sdl         $t3, 0x1F($v1)
    ctx->pc = 0x3d0e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0e04: 0xb46b0018  sdr         $t3, 0x18($v1)
    ctx->pc = 0x3d0e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0e08: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3d0e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3d0e0c: 0x1482ffee  bne         $a0, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3D0E0Cu;
    {
        const bool branch_taken_0x3d0e0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D0E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0E0Cu;
        // 0x3d0e10: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0e0c) {
            ctx->pc = 0x3D0DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d0dc8;
        }
    }
    ctx->pc = 0x3D0E14u;
    // 0x3d0e14: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3D0E14u;
    {
        const bool branch_taken_0x3d0e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0e14) {
            ctx->pc = 0x3D0E4Cu;
            goto label_3d0e4c;
        }
    }
    ctx->pc = 0x3D0E1Cu;
label_3d0e1c:
    // 0x3d0e1c: 0x27a20620  addiu       $v0, $sp, 0x620
    ctx->pc = 0x3d0e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
label_3d0e20:
    // 0x3d0e20: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x3d0e20u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d0e24: 0xdc890008  ld          $t1, 0x8($a0)
    ctx->pc = 0x3d0e24u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3d0e28: 0xdc8a0010  ld          $t2, 0x10($a0)
    ctx->pc = 0x3d0e28u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3d0e2c: 0xdc8b0018  ld          $t3, 0x18($a0)
    ctx->pc = 0x3d0e2cu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3d0e30: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x3d0e30u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x3d0e34: 0xfc690008  sd          $t1, 0x8($v1)
    ctx->pc = 0x3d0e34u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 9));
    // 0x3d0e38: 0xfc6a0010  sd          $t2, 0x10($v1)
    ctx->pc = 0x3d0e38u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 10));
    // 0x3d0e3c: 0xfc6b0018  sd          $t3, 0x18($v1)
    ctx->pc = 0x3d0e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 11));
    // 0x3d0e40: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3d0e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3d0e44: 0x1482fff6  bne         $a0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3D0E44u;
    {
        const bool branch_taken_0x3d0e44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D0E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0E44u;
        // 0x3d0e48: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0e44) {
            ctx->pc = 0x3D0E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d0e20;
        }
    }
    ctx->pc = 0x3D0E4Cu;
label_3d0e4c:
    // 0x3d0e4c: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x3d0e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3d0e50: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x3d0e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3d0e54: 0x6885000f  ldl         $a1, 0xF($a0)
    ctx->pc = 0x3d0e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3d0e58: 0x6c850008  ldr         $a1, 0x8($a0)
    ctx->pc = 0x3d0e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3d0e5c: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x3d0e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0e60: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x3d0e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0e64: 0xb065000f  sdl         $a1, 0xF($v1)
    ctx->pc = 0x3d0e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0e68: 0xb4650008  sdr         $a1, 0x8($v1)
    ctx->pc = 0x3d0e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d0e6c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x3d0e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3d0e70: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D0E70u;
    {
        const bool branch_taken_0x3d0e70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0E70u;
        // 0x3d0e74: 0x5e1021  addu        $v0, $v0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0e70) {
            ctx->pc = 0x3D0E80u;
            goto label_3d0e80;
        }
    }
    ctx->pc = 0x3D0E78u;
    // 0x3d0e78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D0E78u;
    {
        const bool branch_taken_0x3d0e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0E78u;
        // 0x3d0e7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0e78) {
            ctx->pc = 0x3D0E9Cu;
            goto label_3d0e9c;
        }
    }
    ctx->pc = 0x3D0E80u;
label_3d0e80:
    // 0x3d0e80: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3d0e80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3d0e84:
    // 0x3d0e84: 0x27de0210  addiu       $fp, $fp, 0x210
    ctx->pc = 0x3d0e84u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 528));
    // 0x3d0e88: 0x26f70210  addiu       $s7, $s7, 0x210
    ctx->pc = 0x3d0e88u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 528));
    // 0x3d0e8c: 0x266102b  sltu        $v0, $s3, $a2
    ctx->pc = 0x3d0e8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d0e90: 0x1440ff7d  bnez        $v0, . + 4 + (-0x83 << 2)
    ctx->pc = 0x3D0E90u;
    {
        const bool branch_taken_0x3d0e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D0E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0E90u;
        // 0x3d0e94: 0x26d60210  addiu       $s6, $s6, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0e90) {
            ctx->pc = 0x3D0C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d0c88;
        }
    }
    ctx->pc = 0x3D0E98u;
    // 0x3d0e98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3d0e98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d0e9c:
    // 0x3d0e9c: 0x1200ff0a  beqz        $s0, . + 4 + (-0xF6 << 2)
    ctx->pc = 0x3D0E9Cu;
    {
        const bool branch_taken_0x3d0e9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0E9Cu;
        // 0x3d0ea0: 0x8fab0634  lw          $t3, 0x634($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0e9c) {
            ctx->pc = 0x3D0AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d0ac8;
        }
    }
    ctx->pc = 0x3D0EA4u;
label_3d0ea4:
    // 0x3d0ea4: 0x1215000b  beq         $s0, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x3D0EA4u;
    {
        const bool branch_taken_0x3d0ea4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        ctx->pc = 0x3D0EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0EA4u;
        // 0x3d0ea8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0ea4) {
            ctx->pc = 0x3D0ED4u;
            goto label_3d0ed4;
        }
    }
    ctx->pc = 0x3D0EACu;
    // 0x3d0eac: 0xc0c8e22  jal         func_323888
    ctx->pc = 0x3D0EACu;
    SET_GPR_U32(ctx, 31, 0x3D0EB4u);
    ctx->pc = 0x3D0EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0EACu;
    // 0x3d0eb0: 0x8ea4020c  lw          $a0, 0x20C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323888u, 0x3D0EACu, 0x3D0EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0EB4u;
label_3d0eb4:
    // 0x3d0eb4: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x3D0EB4u;
    SET_GPR_U32(ctx, 31, 0x3D0EBCu);
    ctx->pc = 0x3D0EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0EB4u;
    // 0x3d0eb8: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x3D0EB4u, 0x3D0EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0EBCu;
label_3d0ebc:
    // 0x3d0ebc: 0x3c0b005e  lui         $t3, 0x5E
    ctx->pc = 0x3d0ebcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)94 << 16));
    // 0x3d0ec0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3d0ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d0ec4: 0x2563b298  addiu       $v1, $t3, -0x4D68
    ctx->pc = 0x3d0ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4294947480));
    // 0x3d0ec8: 0xc1036a8  jal         func_40DAA0
    ctx->pc = 0x3D0EC8u;
    SET_GPR_U32(ctx, 31, 0x3D0ED0u);
    ctx->pc = 0x3D0ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0EC8u;
    // 0x3d0ecc: 0x8c64009c  lw          $a0, 0x9C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DAA0u, 0x3D0EC8u, 0x3D0ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0ED0u;
label_3d0ed0:
    // 0x3d0ed0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d0ed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d0ed4:
    // 0x3d0ed4: 0x7bb00720  lq          $s0, 0x720($sp)
    ctx->pc = 0x3d0ed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1824)));
    // 0x3d0ed8: 0x7bb10710  lq          $s1, 0x710($sp)
    ctx->pc = 0x3d0ed8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1808)));
    // 0x3d0edc: 0x7bb20700  lq          $s2, 0x700($sp)
    ctx->pc = 0x3d0edcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1792)));
    // 0x3d0ee0: 0x7bb306f0  lq          $s3, 0x6F0($sp)
    ctx->pc = 0x3d0ee0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1776)));
    // 0x3d0ee4: 0x7bb406e0  lq          $s4, 0x6E0($sp)
    ctx->pc = 0x3d0ee4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1760)));
    // 0x3d0ee8: 0x7bb506d0  lq          $s5, 0x6D0($sp)
    ctx->pc = 0x3d0ee8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1744)));
    // 0x3d0eec: 0x7bb606c0  lq          $s6, 0x6C0($sp)
    ctx->pc = 0x3d0eecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1728)));
    // 0x3d0ef0: 0x7bb706b0  lq          $s7, 0x6B0($sp)
    ctx->pc = 0x3d0ef0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1712)));
    // 0x3d0ef4: 0x7bbe06a0  lq          $fp, 0x6A0($sp)
    ctx->pc = 0x3d0ef4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1696)));
    // 0x3d0ef8: 0xdfbf0690  ld          $ra, 0x690($sp)
    ctx->pc = 0x3d0ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1680)));
    // 0x3d0efc: 0x3e00008  jr          $ra
    ctx->pc = 0x3D0EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D0F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0EFCu;
        // 0x3d0f00: 0x27bd0730  addiu       $sp, $sp, 0x730 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1840));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D0EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D0F04u;
    // 0x3d0f04: 0x0  nop
    ctx->pc = 0x3d0f04u;
    // NOP
    ctx->pc = 0x3d0f08u;
}
