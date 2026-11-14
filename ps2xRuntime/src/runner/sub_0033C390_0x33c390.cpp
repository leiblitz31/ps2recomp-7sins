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

// Function: sub_0033C390
// Address: 0x33c390 - 0x33c530
void sub_0033C390_0x33c390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C390_0x33c390");
#endif

    switch (ctx->pc) {
        case 0x33c3a8u: goto label_33c3a8;
        case 0x33c450u: goto label_33c450;
        default: break;
    }

    ctx->pc = 0x33c390u;

    // 0x33c390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33c390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33c394: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x33c394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x33c398: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33c398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c39c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33c39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33c3a0: 0xc0cead0  jal         func_33AB40
    ctx->pc = 0x33C3A0u;
    SET_GPR_U32(ctx, 31, 0x33C3A8u);
    ctx->pc = 0x33C3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C3A0u;
    // 0x33c3a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AB40u, 0x33C3A0u, 0x33C3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C3A8u;
label_33c3a8:
    // 0x33c3a8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x33c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x33c3ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x33c3acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c3b0: 0x244cc210  addiu       $t4, $v0, -0x3DF0
    ctx->pc = 0x33c3b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951440));
    // 0x33c3b4: 0x8e080020  lw          $t0, 0x20($s0)
    ctx->pc = 0x33c3b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x33c3b8: 0x8d830030  lw          $v1, 0x30($t4)
    ctx->pc = 0x33c3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C240u));
    // 0x33c3bc: 0x8d820014  lw          $v0, 0x14($t4)
    ctx->pc = 0x33c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C224u));
    // 0x33c3c0: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x33c3c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x33c3c4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x33c3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x33c3c8: 0x2026821  addu        $t5, $s0, $v0
    ctx->pc = 0x33c3c8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x33c3cc: 0x64480a  movz        $t1, $v1, $a0
    ctx->pc = 0x33c3ccu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
    // 0x33c3d0: 0x11000051  beqz        $t0, . + 4 + (0x51 << 2)
    ctx->pc = 0x33C3D0u;
    {
        const bool branch_taken_0x33c3d0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C3D0u;
        // 0x33c3d4: 0x8da50000  lw          $a1, 0x0($t5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c3d0) {
            ctx->pc = 0x33C518u;
            goto label_33c518;
        }
    }
    ctx->pc = 0x33C3D8u;
    // 0x33c3d8: 0x8d060010  lw          $a2, 0x10($t0)
    ctx->pc = 0x33c3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x33c3dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33c3e0: 0x10c2004e  beq         $a2, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x33C3E0u;
    {
        const bool branch_taken_0x33c3e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x33C3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C3E0u;
        // 0x33c3e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c3e0) {
            ctx->pc = 0x33C51Cu;
            goto label_33c51c;
        }
    }
    ctx->pc = 0x33C3E8u;
    // 0x33c3e8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x33c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33c3ec: 0x4c0004a  bltz        $a2, . + 4 + (0x4A << 2)
    ctx->pc = 0x33C3ECu;
    {
        const bool branch_taken_0x33c3ec = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x33C3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C3ECu;
        // 0x33c3f0: 0x8c4b000c  lw          $t3, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c3ec) {
            ctx->pc = 0x33C518u;
            goto label_33c518;
        }
    }
    ctx->pc = 0x33C3F4u;
    // 0x33c3f4: 0xcb2018  mult        $a0, $a2, $t3
    ctx->pc = 0x33c3f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x33c3f8: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x33c3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x33c3fc: 0x8d030014  lw          $v1, 0x14($t0)
    ctx->pc = 0x33c3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x33c400: 0x463823  subu        $a3, $v0, $a2
    ctx->pc = 0x33c400u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x33c404: 0x1033021  addu        $a2, $t0, $v1
    ctx->pc = 0x33c404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x33c408: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x33c408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c40c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x33c40cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x33c410: 0x18400040  blez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x33C410u;
    {
        const bool branch_taken_0x33c410 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x33C414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C410u;
        // 0x33c414: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c410) {
            ctx->pc = 0x33C514u;
            goto label_33c514;
        }
    }
    ctx->pc = 0x33C418u;
    // 0x33c418: 0x8d840068  lw          $a0, 0x68($t4)
    ctx->pc = 0x33c418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 104)));
    // 0x33c41c: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x33c41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x33c420: 0x8d83004c  lw          $v1, 0x4C($t4)
    ctx->pc = 0x33c420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 76)));
    // 0x33c424: 0x3c0a0bb3  lui         $t2, 0xBB3
    ctx->pc = 0x33c424u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)2995 << 16));
    // 0x33c428: 0x3c0c3619  lui         $t4, 0x3619
    ctx->pc = 0x33c428u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)13849 << 16));
    // 0x33c42c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x33c42cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x33c430: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x33c430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x33c434: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x33c434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x33c438: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x33c438u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33c43c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33c43cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33c440: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x33c440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x33c444: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x33c444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c448: 0x354a8435  ori         $t2, $t2, 0x8435
    ctx->pc = 0x33c448u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)33845);
    // 0x33c44c: 0x358c636b  ori         $t4, $t4, 0x636B
    ctx->pc = 0x33c44cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)25451);
label_33c450:
    // 0x33c450: 0xaa1018  mult        $v0, $a1, $t2
    ctx->pc = 0x33c450u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33c454: 0x4c2821  addu        $a1, $v0, $t4
    ctx->pc = 0x33c454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x33c458: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x33C458u;
    {
        const bool branch_taken_0x33c458 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x33C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C458u;
        // 0x33c45c: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c458) {
            ctx->pc = 0x33C470u;
            goto label_33c470;
        }
    }
    ctx->pc = 0x33C460u;
    // 0x33c460: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x33c460u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33c464: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x33c464u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33c468: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x33C468u;
    {
        const bool branch_taken_0x33c468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C468u;
        // 0x33c46c: 0x46050842  mul.s       $f1, $f1, $f5 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c468) {
            ctx->pc = 0x33C488u;
            goto label_33c488;
        }
    }
    ctx->pc = 0x33C470u;
label_33c470:
    // 0x33c470: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x33c470u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x33c474: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33c474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33c478: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33c478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33c47c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x33c47cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33c480: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x33c480u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x33c484: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x33c484u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_33c488:
    // 0x33c488: 0xc5230000  lwc1        $f3, 0x0($t1)
    ctx->pc = 0x33c488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33c48c: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x33c48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33c490: 0xaa1018  mult        $v0, $a1, $t2
    ctx->pc = 0x33c490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33c494: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x33c494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c498: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x33c498u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x33c49c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x33c49cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x33c4a0: 0x4c2821  addu        $a1, $v0, $t4
    ctx->pc = 0x33c4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x33c4a4: 0x460408c1  sub.s       $f3, $f1, $f4
    ctx->pc = 0x33c4a4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x33c4a8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x33c4a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x33c4ac: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x33c4acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x33c4b0: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x33C4B0u;
    {
        const bool branch_taken_0x33c4b0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x33C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C4B0u;
        // 0x33c4b4: 0xe4c20000  swc1        $f2, 0x0($a2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c4b0) {
            ctx->pc = 0x33C4C8u;
            goto label_33c4c8;
        }
    }
    ctx->pc = 0x33C4B8u;
    // 0x33c4b8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x33c4b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c4bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33c4bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33c4c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33C4C0u;
    {
        const bool branch_taken_0x33c4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C4C0u;
        // 0x33c4c4: 0x46050002  mul.s       $f0, $f0, $f5 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c4c0) {
            ctx->pc = 0x33C4E4u;
            goto label_33c4e4;
        }
    }
    ctx->pc = 0x33C4C8u;
label_33c4c8:
    // 0x33c4c8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x33c4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x33c4cc: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x33c4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x33c4d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33c4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33c4d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33c4d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c4d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33c4d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33c4dc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33c4dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33c4e0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x33c4e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_33c4e4:
    // 0x33c4e4: 0xc521000c  lwc1        $f1, 0xC($t1)
    ctx->pc = 0x33c4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c4e8: 0xc5220008  lwc1        $f2, 0x8($t1)
    ctx->pc = 0x33c4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33c4ec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x33c4ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c4f0: 0x10b4021  addu        $t0, $t0, $t3
    ctx->pc = 0x33c4f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x33c4f4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x33c4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x33c4f8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33c4f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33c4fc: 0x460400c1  sub.s       $f3, $f0, $f4
    ctx->pc = 0x33c4fcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x33c500: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x33c500u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x33c504: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x33c504u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x33c508: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x33c508u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x33c50c: 0x1c40ffd0  bgtz        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x33C50Cu;
    {
        const bool branch_taken_0x33c50c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x33C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C50Cu;
        // 0x33c510: 0xcb3021  addu        $a2, $a2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c50c) {
            ctx->pc = 0x33C450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c450;
        }
    }
    ctx->pc = 0x33C514u;
label_33c514:
    // 0x33c514: 0xada50000  sw          $a1, 0x0($t5)
    ctx->pc = 0x33c514u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 5));
label_33c518:
    // 0x33c518: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33c518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c51c:
    // 0x33c51c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33c51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c520: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x33c520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33c524: 0x3e00008  jr          $ra
    ctx->pc = 0x33C524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C524u;
        // 0x33c528: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C52Cu;
    // 0x33c52c: 0x0  nop
    ctx->pc = 0x33c52cu;
    // NOP
    ctx->pc = 0x33c530u;
}
