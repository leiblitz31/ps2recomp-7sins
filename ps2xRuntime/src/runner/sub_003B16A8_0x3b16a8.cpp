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

// Function: sub_003B16A8
// Address: 0x3b16a8 - 0x3b1810
void sub_003B16A8_0x3b16a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B16A8_0x3b16a8");
#endif

    switch (ctx->pc) {
        case 0x3b16ecu: goto label_3b16ec;
        case 0x3b1710u: goto label_3b1710;
        case 0x3b17c4u: goto label_3b17c4;
        default: break;
    }

    ctx->pc = 0x3b16a8u;

    // 0x3b16a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3b16a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3b16ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b16acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b16b0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3b16b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3b16b4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3b16b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3b16b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3b16b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b16bc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3b16bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3b16c0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3b16c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b16c4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3b16c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3b16c8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3b16c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3b16cc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3b16ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3b16d0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3b16d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x3b16d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b16d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b16d8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3b16d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3b16dc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B16DCu;
    {
        const bool branch_taken_0x3b16dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B16E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B16DCu;
        // 0x3b16e0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b16dc) {
            ctx->pc = 0x3B16F4u;
            goto label_3b16f4;
        }
    }
    ctx->pc = 0x3B16E4u;
    // 0x3b16e4: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3B16E4u;
    SET_GPR_U32(ctx, 31, 0x3B16ECu);
    ctx->pc = 0x3B16E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B16E4u;
    // 0x3b16e8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B16E4u, 0x3B16ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B16ECu;
label_3b16ec:
    // 0x3b16ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B16ECu;
    {
        const bool branch_taken_0x3b16ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B16F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B16ECu;
        // 0x3b16f0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b16ec) {
            ctx->pc = 0x3B16FCu;
            goto label_3b16fc;
        }
    }
    ctx->pc = 0x3B16F4u;
label_3b16f4:
    // 0x3b16f4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3b16f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3b16f8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3b16f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3b16fc:
    // 0x3b16fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3b16fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1700: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b1700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1704: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3b1704u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b1708: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x3B1708u;
    {
        const bool branch_taken_0x3b1708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1708u;
        // 0x3b170c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1708) {
            ctx->pc = 0x3B17B0u;
            goto label_3b17b0;
        }
    }
    ctx->pc = 0x3B1710u;
label_3b1710:
    // 0x3b1710: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x3b1710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b1714: 0xc6250004  lwc1        $f5, 0x4($s1)
    ctx->pc = 0x3b1714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3b1718: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x3b1718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b171c: 0x46051029  min.s       $f0, $f2, $f5
    ctx->pc = 0x3b171cu;
    ctx->f[0] = std::min(ctx->f[2], ctx->f[5]);
    // 0x3b1720: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b1720u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b1724: 0x0  nop
    ctx->pc = 0x3b1724u;
    // NOP
    // 0x3b1728: 0x45020020  bc1fl       . + 4 + (0x20 << 2)
    ctx->pc = 0x3B1728u;
    {
        const bool branch_taken_0x3b1728 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b1728) {
            ctx->pc = 0x3B172Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1728u;
            // 0x3b172c: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B17ACu;
            goto label_3b17ac;
        }
    }
    ctx->pc = 0x3B1730u;
    // 0x3b1730: 0x46051028  max.s       $f0, $f2, $f5
    ctx->pc = 0x3b1730u;
    ctx->f[0] = std::max(ctx->f[2], ctx->f[5]);
    // 0x3b1734: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3b1734u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b1738: 0x0  nop
    ctx->pc = 0x3b1738u;
    // NOP
    // 0x3b173c: 0x4502001b  bc1fl       . + 4 + (0x1B << 2)
    ctx->pc = 0x3B173Cu;
    {
        const bool branch_taken_0x3b173c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b173c) {
            ctx->pc = 0x3B1740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B173Cu;
            // 0x3b1740: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B17ACu;
            goto label_3b17ac;
        }
    }
    ctx->pc = 0x3B1744u;
    // 0x3b1744: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x3b1744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3b1748: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x3b1748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3b174c: 0xc6860000  lwc1        $f6, 0x0($s4)
    ctx->pc = 0x3b174cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3b1750: 0x46032028  max.s       $f0, $f4, $f3
    ctx->pc = 0x3b1750u;
    ctx->f[0] = std::max(ctx->f[4], ctx->f[3]);
    // 0x3b1754: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x3b1754u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b1758: 0x0  nop
    ctx->pc = 0x3b1758u;
    // NOP
    // 0x3b175c: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
    ctx->pc = 0x3B175Cu;
    {
        const bool branch_taken_0x3b175c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b175c) {
            ctx->pc = 0x3B1760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B175Cu;
            // 0x3b1760: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B17ACu;
            goto label_3b17ac;
        }
    }
    ctx->pc = 0x3B1764u;
    // 0x3b1764: 0x46051032  c.eq.s      $f2, $f5
    ctx->pc = 0x3b1764u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b1768: 0x0  nop
    ctx->pc = 0x3b1768u;
    // NOP
    // 0x3b176c: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x3B176Cu;
    {
        const bool branch_taken_0x3b176c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b176c) {
            ctx->pc = 0x3B1770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B176Cu;
            // 0x3b1770: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B17ACu;
            goto label_3b17ac;
        }
    }
    ctx->pc = 0x3B1774u;
    // 0x3b1774: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x3b1774u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3b1778: 0x46041841  sub.s       $f1, $f3, $f4
    ctx->pc = 0x3b1778u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x3b177c: 0x46022881  sub.s       $f2, $f5, $f2
    ctx->pc = 0x3b177cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x3b1780: 0x46032032  c.eq.s      $f4, $f3
    ctx->pc = 0x3b1780u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b1784: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3b1784u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3b1788: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x3b1788u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x3b178c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3B178Cu;
    {
        const bool branch_taken_0x3b178c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B1790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B178Cu;
        // 0x3b1790: 0x46040000  add.s       $f0, $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b178c) {
            ctx->pc = 0x3B17A4u;
            goto label_3b17a4;
        }
    }
    ctx->pc = 0x3B1794u;
    // 0x3b1794: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x3b1794u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b1798: 0x0  nop
    ctx->pc = 0x3b1798u;
    // NOP
    // 0x3b179c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B179Cu;
    {
        const bool branch_taken_0x3b179c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b179c) {
            ctx->pc = 0x3B17A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B179Cu;
            // 0x3b17a0: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B17ACu;
            goto label_3b17ac;
        }
    }
    ctx->pc = 0x3B17A4u;
label_3b17a4:
    // 0x3b17a4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3b17a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3b17a8: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x3b17a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_3b17ac:
    // 0x3b17ac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3b17acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3b17b0:
    // 0x3b17b0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3b17b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3b17b4: 0x14560004  bne         $v0, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B17B4u;
    {
        const bool branch_taken_0x3b17b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x3B17B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B17B4u;
        // 0x3b17b8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b17b4) {
            ctx->pc = 0x3B17C8u;
            goto label_3b17c8;
        }
    }
    ctx->pc = 0x3B17BCu;
    // 0x3b17bc: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3B17BCu;
    SET_GPR_U32(ctx, 31, 0x3B17C4u);
    ctx->pc = 0x3B17C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B17BCu;
    // 0x3b17c0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B17BCu, 0x3B17C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B17C4u;
label_3b17c4:
    // 0x3b17c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3b17c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3b17c8:
    // 0x3b17c8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x3b17c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b17cc: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x3B17CCu;
    {
        const bool branch_taken_0x3b17cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B17D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B17CCu;
        // 0x3b17d0: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b17cc) {
            ctx->pc = 0x3B1710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1710;
        }
    }
    ctx->pc = 0x3B17D4u;
    // 0x3b17d4: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x3b17d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x3b17d8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3b17d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b17dc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3b17dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b17e0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3b17e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b17e4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3b17e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b17e8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3b17e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b17ec: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3b17ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b17f0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3b17f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b17f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b17f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b17f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B17F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B17FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B17F8u;
        // 0x3b17fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B17F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1800u;
    // 0x3b1800: 0xaf84ab24  sw          $a0, -0x54DC($gp)
    ctx->pc = 0x3b1800u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945572), GPR_U32(ctx, 4));
    // 0x3b1804: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1804u;
        // 0x3b1808: 0xaf85ab28  sw          $a1, -0x54D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945576), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B180Cu;
    // 0x3b180c: 0x0  nop
    ctx->pc = 0x3b180cu;
    // NOP
    ctx->pc = 0x3b1810u;
}
