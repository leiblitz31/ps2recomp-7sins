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

// Function: sub_003B1468
// Address: 0x3b1468 - 0x3b16a8
void sub_003B1468_0x3b1468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1468_0x3b1468");
#endif

    switch (ctx->pc) {
        case 0x3b14b0u: goto label_3b14b0;
        case 0x3b14c4u: goto label_3b14c4;
        case 0x3b14d8u: goto label_3b14d8;
        case 0x3b14f4u: goto label_3b14f4;
        case 0x3b1510u: goto label_3b1510;
        case 0x3b152cu: goto label_3b152c;
        case 0x3b157cu: goto label_3b157c;
        case 0x3b1590u: goto label_3b1590;
        case 0x3b1670u: goto label_3b1670;
        default: break;
    }

    ctx->pc = 0x3b1468u;

label_3b1468:
    // 0x3b1468: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3b1468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3b146c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3b146cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3b1470: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3b1470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3b1474: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x3b1474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b1478: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3b1478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3b147c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3b147cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1480: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3b1480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3b1484: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3b1484u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1488: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x3b1488u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3b148c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3b148cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1490: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3b1490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3b1494: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3b1494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3b1498: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b1498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b149c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x3b149cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x3b14a0: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B14A0u;
    {
        const bool branch_taken_0x3b14a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3B14A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B14A0u;
        // 0x3b14a4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b14a0) {
            ctx->pc = 0x3B14B0u;
            goto label_3b14b0;
        }
    }
    ctx->pc = 0x3B14A8u;
    // 0x3b14a8: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3B14A8u;
    SET_GPR_U32(ctx, 31, 0x3B14B0u);
    ctx->pc = 0x3B14ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B14A8u;
    // 0x3b14ac: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B14A8u, 0x3B14B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B14B0u;
label_3b14b0:
    // 0x3b14b0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x3b14b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3b14b4: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B14B4u;
    {
        const bool branch_taken_0x3b14b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x3b14b4) {
            ctx->pc = 0x3B14B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B14B4u;
            // 0x3b14b8: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B14C8u;
            goto label_3b14c8;
        }
    }
    ctx->pc = 0x3B14BCu;
    // 0x3b14bc: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3B14BCu;
    SET_GPR_U32(ctx, 31, 0x3B14C4u);
    ctx->pc = 0x3B14C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B14BCu;
    // 0x3b14c0: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B14BCu, 0x3B14C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B14C4u;
label_3b14c4:
    // 0x3b14c4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3b14c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3b14c8:
    // 0x3b14c8: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B14C8u;
    {
        const bool branch_taken_0x3b14c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3B14CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B14C8u;
        // 0x3b14cc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b14c8) {
            ctx->pc = 0x3B14DCu;
            goto label_3b14dc;
        }
    }
    ctx->pc = 0x3B14D0u;
    // 0x3b14d0: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3B14D0u;
    SET_GPR_U32(ctx, 31, 0x3B14D8u);
    ctx->pc = 0x3B14D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B14D0u;
    // 0x3b14d4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B14D0u, 0x3B14D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B14D8u;
label_3b14d8:
    // 0x3b14d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3b14d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b14dc:
    // 0x3b14dc: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x3b14dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x3b14e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b14e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b14e4: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B14E4u;
    {
        const bool branch_taken_0x3b14e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b14e4) {
            ctx->pc = 0x3B14E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B14E4u;
            // 0x3b14e8: 0x8eb10000  lw          $s1, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B14F8u;
            goto label_3b14f8;
        }
    }
    ctx->pc = 0x3B14ECu;
    // 0x3b14ec: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3B14ECu;
    SET_GPR_U32(ctx, 31, 0x3B14F4u);
    ctx->pc = 0x3B14F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B14ECu;
    // 0x3b14f0: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B14ECu, 0x3B14F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B14F4u;
label_3b14f4:
    // 0x3b14f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b14f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b14f8:
    // 0x3b14f8: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x3b14f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3b14fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b14fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b1500: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B1500u;
    {
        const bool branch_taken_0x3b1500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b1500) {
            ctx->pc = 0x3B1504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1500u;
            // 0x3b1504: 0x8e900000  lw          $s0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B1514u;
            goto label_3b1514;
        }
    }
    ctx->pc = 0x3B1508u;
    // 0x3b1508: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3B1508u;
    SET_GPR_U32(ctx, 31, 0x3B1510u);
    ctx->pc = 0x3B150Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1508u;
    // 0x3b150c: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B1508u, 0x3B1510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1510u;
label_3b1510:
    // 0x3b1510: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b1510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b1514:
    // 0x3b1514: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x3b1514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3b1518: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b1518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b151c: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B151Cu;
    {
        const bool branch_taken_0x3b151c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b151c) {
            ctx->pc = 0x3B1520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B151Cu;
            // 0x3b1520: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B152Cu;
            goto label_3b152c;
        }
    }
    ctx->pc = 0x3B1524u;
    // 0x3b1524: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3B1524u;
    SET_GPR_U32(ctx, 31, 0x3B152Cu);
    ctx->pc = 0x3B1528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1524u;
    // 0x3b1528: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B1524u, 0x3B152Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B152Cu;
label_3b152c:
    // 0x3b152c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3b152cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3b1530: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b1530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1534: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x3b1534u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b1538: 0x0  nop
    ctx->pc = 0x3b1538u;
    // NOP
    // 0x3b153c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3B153Cu;
    {
        const bool branch_taken_0x3b153c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B1540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B153Cu;
        // 0x3b1540: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b153c) {
            ctx->pc = 0x3B1554u;
            goto label_3b1554;
        }
    }
    ctx->pc = 0x3B1544u;
    // 0x3b1544: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b1544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1548: 0x2460018  mult        $zero, $s2, $a2
    ctx->pc = 0x3b1548u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3b154c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B154Cu;
    {
        const bool branch_taken_0x3b154c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B154Cu;
        // 0x3b1550: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b154c) {
            ctx->pc = 0x3B1570u;
            goto label_3b1570;
        }
    }
    ctx->pc = 0x3B1554u;
label_3b1554:
    // 0x3b1554: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b1554u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1558: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x3b1558u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b155c: 0x0  nop
    ctx->pc = 0x3b155cu;
    // NOP
    // 0x3b1560: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x3B1560u;
    {
        const bool branch_taken_0x3b1560 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B1564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1560u;
        // 0x3b1564: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1560) {
            ctx->pc = 0x3B1584u;
            goto label_3b1584;
        }
    }
    ctx->pc = 0x3B1568u;
    // 0x3b1568: 0x2460018  mult        $zero, $s2, $a2
    ctx->pc = 0x3b1568u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3b156c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b156cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b1570:
    // 0x3b1570: 0x3012  mflo        $a2
    ctx->pc = 0x3b1570u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3b1574: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3B1574u;
    SET_GPR_U32(ctx, 31, 0x3B157Cu);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3B1574u, 0x3B157Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B157Cu;
label_3b157c:
    // 0x3b157c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x3B157Cu;
    {
        const bool branch_taken_0x3b157c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B157Cu;
        // 0x3b1580: 0x8e640014  lw          $a0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b157c) {
            ctx->pc = 0x3B165Cu;
            goto label_3b165c;
        }
    }
    ctx->pc = 0x3B1584u;
label_3b1584:
    // 0x3b1584: 0x1a400034  blez        $s2, . + 4 + (0x34 << 2)
    ctx->pc = 0x3B1584u;
    {
        const bool branch_taken_0x3b1584 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x3B1588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1584u;
        // 0x3b1588: 0x24440014  addiu       $a0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1584) {
            ctx->pc = 0x3B1658u;
            goto label_3b1658;
        }
    }
    ctx->pc = 0x3B158Cu;
    // 0x3b158c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b158cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b1590:
    // 0x3b1590: 0x26230014  addiu       $v1, $s1, 0x14
    ctx->pc = 0x3b1590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x3b1594: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x3b1594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x3b1598: 0xc440fff0  lwc1        $f0, -0x10($v0)
    ctx->pc = 0x3b1598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b159c: 0xc462fff0  lwc1        $f2, -0x10($v1)
    ctx->pc = 0x3b159cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b15a0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3b15a0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3b15a4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x3b15a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b15a8: 0xc461fff4  lwc1        $f1, -0xC($v1)
    ctx->pc = 0x3b15a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b15ac: 0xc440fff4  lwc1        $f0, -0xC($v0)
    ctx->pc = 0x3b15acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b15b0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3b15b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b15b4: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x3b15b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x3b15b8: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3b15b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x3b15bc: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x3b15bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b15c0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x3b15c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3b15c4: 0xc440fff0  lwc1        $f0, -0x10($v0)
    ctx->pc = 0x3b15c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b15c8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3b15c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3b15cc: 0xe480fff0  swc1        $f0, -0x10($a0)
    ctx->pc = 0x3b15ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294967280), bits); }
    // 0x3b15d0: 0xc441fff4  lwc1        $f1, -0xC($v0)
    ctx->pc = 0x3b15d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b15d4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3b15d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b15d8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3b15d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3b15dc: 0xe481fff4  swc1        $f1, -0xC($a0)
    ctx->pc = 0x3b15dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294967284), bits); }
    // 0x3b15e0: 0xc462fff8  lwc1        $f2, -0x8($v1)
    ctx->pc = 0x3b15e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b15e4: 0xc440fff8  lwc1        $f0, -0x8($v0)
    ctx->pc = 0x3b15e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b15e8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3b15e8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3b15ec: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x3b15ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b15f0: 0xc461fffc  lwc1        $f1, -0x4($v1)
    ctx->pc = 0x3b15f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b15f4: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x3b15f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b15f8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3b15f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b15fc: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x3b15fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x3b1600: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3b1600u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x3b1604: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x3b1604u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b1608: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x3b1608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3b160c: 0xc440fff8  lwc1        $f0, -0x8($v0)
    ctx->pc = 0x3b160cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b1610: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3b1610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3b1614: 0xe480fff8  swc1        $f0, -0x8($a0)
    ctx->pc = 0x3b1614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294967288), bits); }
    // 0x3b1618: 0xc441fffc  lwc1        $f1, -0x4($v0)
    ctx->pc = 0x3b1618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b161c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3b161cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b1620: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3b1620u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3b1624: 0xe481fffc  swc1        $f1, -0x4($a0)
    ctx->pc = 0x3b1624u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), bits); }
    // 0x3b1628: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x3b1628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b162c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x3b162cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b1630: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x3b1630u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x3b1634: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x3b1634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x3b1638: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3b1638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3b163c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3b163cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3b1640: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3b1640u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3b1644: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3b1644u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3b1648: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x3b1648u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3b164c: 0x14c0ffd0  bnez        $a2, . + 4 + (-0x30 << 2)
    ctx->pc = 0x3B164Cu;
    {
        const bool branch_taken_0x3b164c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B164Cu;
        // 0x3b1650: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b164c) {
            ctx->pc = 0x3B1590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1590;
        }
    }
    ctx->pc = 0x3B1654u;
    // 0x3b1654: 0x0  nop
    ctx->pc = 0x3b1654u;
    // NOP
label_3b1658:
    // 0x3b1658: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x3b1658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3b165c:
    // 0x3b165c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B165Cu;
    {
        const bool branch_taken_0x3b165c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B165Cu;
        // 0x3b1660: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b165c) {
            ctx->pc = 0x3B167Cu;
            goto label_3b167c;
        }
    }
    ctx->pc = 0x3B1664u;
    // 0x3b1664: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x3b1664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x3b1668: 0xc0ec51a  jal         func_3B1468
    ctx->pc = 0x3B1668u;
    SET_GPR_U32(ctx, 31, 0x3B1670u);
    ctx->pc = 0x3B166Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1668u;
    // 0x3b166c: 0x8ea60014  lw          $a2, 0x14($s5) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1468u;
    goto label_3b1468;
    ctx->pc = 0x3B1670u;
label_3b1670:
    // 0x3b1670: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3b1670u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1674: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B1674u;
    {
        const bool branch_taken_0x3b1674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1674u;
        // 0x3b1678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1674) {
            ctx->pc = 0x3B1680u;
            goto label_3b1680;
        }
    }
    ctx->pc = 0x3B167Cu;
label_3b167c:
    // 0x3b167c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3b167cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b1680:
    // 0x3b1680: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3b1680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b1684: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3b1684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b1688: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3b1688u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b168c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3b168cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b1690: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3b1690u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b1694: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3b1694u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b1698: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b1698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b169c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x3b169cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3b16a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B16A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B16A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B16A0u;
        // 0x3b16a4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B16A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B16A8u;
}
