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

// Function: sub_0034CC70
// Address: 0x34cc70 - 0x34fc00
void sub_0034CC70_0x34cc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034CC70_0x34cc70");
#endif

    switch (ctx->pc) {
        case 0x34ccbcu: goto label_34ccbc;
        case 0x34cfb4u: goto label_34cfb4;
        case 0x34d184u: goto label_34d184;
        case 0x34d474u: goto label_34d474;
        case 0x34d498u: goto label_34d498;
        case 0x34d4e0u: goto label_34d4e0;
        case 0x34d508u: goto label_34d508;
        case 0x34d574u: goto label_34d574;
        case 0x34d598u: goto label_34d598;
        case 0x34d630u: goto label_34d630;
        case 0x34d658u: goto label_34d658;
        case 0x34d730u: goto label_34d730;
        case 0x34d758u: goto label_34d758;
        case 0x34d830u: goto label_34d830;
        case 0x34d858u: goto label_34d858;
        case 0x34d954u: goto label_34d954;
        case 0x34d978u: goto label_34d978;
        case 0x34d9e8u: goto label_34d9e8;
        case 0x34db78u: goto label_34db78;
        case 0x34dd8cu: goto label_34dd8c;
        case 0x34dda0u: goto label_34dda0;
        case 0x34e038u: goto label_34e038;
        case 0x34f0c8u: goto label_34f0c8;
        case 0x34f254u: goto label_34f254;
        case 0x34f4c4u: goto label_34f4c4;
        case 0x34f590u: goto label_34f590;
        case 0x34f63cu: goto label_34f63c;
        case 0x34f708u: goto label_34f708;
        case 0x34f7e0u: goto label_34f7e0;
        case 0x34f8d0u: goto label_34f8d0;
        case 0x34fa6cu: goto label_34fa6c;
        default: break;
    }

    ctx->pc = 0x34cc70u;

    // 0x34cc70: 0x27bdfb80  addiu       $sp, $sp, -0x480
    ctx->pc = 0x34cc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966144));
    // 0x34cc74: 0x7fb30420  sq          $s3, 0x420($sp)
    ctx->pc = 0x34cc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 19));
    // 0x34cc78: 0xafa50370  sw          $a1, 0x370($sp)
    ctx->pc = 0x34cc78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 880), GPR_U32(ctx, 5));
    // 0x34cc7c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x34cc7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cc80: 0x7fb00450  sq          $s0, 0x450($sp)
    ctx->pc = 0x34cc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 16));
    // 0x34cc84: 0x7fb20430  sq          $s2, 0x430($sp)
    ctx->pc = 0x34cc84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 18));
    // 0x34cc88: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x34cc88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cc8c: 0x7fb10440  sq          $s1, 0x440($sp)
    ctx->pc = 0x34cc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 17));
    // 0x34cc90: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x34cc90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cc94: 0x7fb40410  sq          $s4, 0x410($sp)
    ctx->pc = 0x34cc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 20));
    // 0x34cc98: 0x7fb50400  sq          $s5, 0x400($sp)
    ctx->pc = 0x34cc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), GPR_VEC(ctx, 21));
    // 0x34cc9c: 0x7fb603f0  sq          $s6, 0x3F0($sp)
    ctx->pc = 0x34cc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), GPR_VEC(ctx, 22));
    // 0x34cca0: 0x7fb703e0  sq          $s7, 0x3E0($sp)
    ctx->pc = 0x34cca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), GPR_VEC(ctx, 23));
    // 0x34cca4: 0x7fbe03d0  sq          $fp, 0x3D0($sp)
    ctx->pc = 0x34cca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 976), GPR_VEC(ctx, 30));
    // 0x34cca8: 0xffbf03c0  sd          $ra, 0x3C0($sp)
    ctx->pc = 0x34cca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 960), GPR_U64(ctx, 31));
    // 0x34ccac: 0xe7b60470  swc1        $f22, 0x470($sp)
    ctx->pc = 0x34ccacu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
    // 0x34ccb0: 0xe7b50468  swc1        $f21, 0x468($sp)
    ctx->pc = 0x34ccb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1128), bits); }
    // 0x34ccb4: 0xc10a450  jal         func_429140
    ctx->pc = 0x34CCB4u;
    SET_GPR_U32(ctx, 31, 0x34CCBCu);
    ctx->pc = 0x34CCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CCB4u;
    // 0x34ccb8: 0xe7b40460  swc1        $f20, 0x460($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x429140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429140u, 0x34CCB4u, 0x34CCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CCBCu;
label_34ccbc:
    // 0x34ccbc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x34ccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x34ccc0: 0x2442c2c8  addiu       $v0, $v0, -0x3D38
    ctx->pc = 0x34ccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951624));
    // 0x34ccc4: 0x8c4300a8  lw          $v1, 0xA8($v0)
    ctx->pc = 0x34ccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C370u));
    // 0x34ccc8: 0x8c440098  lw          $a0, 0x98($v0)
    ctx->pc = 0x34ccc8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61C360u));
    // 0x34cccc: 0x8fa20370  lw          $v0, 0x370($sp)
    ctx->pc = 0x34ccccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x34ccd0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x34ccd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x34ccd4: 0xafa40374  sw          $a0, 0x374($sp)
    ctx->pc = 0x34ccd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 884), GPR_U32(ctx, 4));
    // 0x34ccd8: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x34ccd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x34ccdc: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x34ccdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34cce0: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x34cce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34cce4: 0x8fa40370  lw          $a0, 0x370($sp)
    ctx->pc = 0x34cce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x34cce8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x34cce8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ccec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x34ccecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x34ccf0: 0x45000b48  bc1f        . + 4 + (0xB48 << 2)
    ctx->pc = 0x34CCF0u;
    {
        const bool branch_taken_0x34ccf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CCF0u;
        // 0x34ccf4: 0x62900a  movz        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ccf0) {
            ctx->pc = 0x34FA14u;
            goto label_34fa14;
        }
    }
    ctx->pc = 0x34CCF8u;
    // 0x34ccf8: 0x8fa50374  lw          $a1, 0x374($sp)
    ctx->pc = 0x34ccf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 884)));
    // 0x34ccfc: 0x3c020bb3  lui         $v0, 0xBB3
    ctx->pc = 0x34ccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2995 << 16));
    // 0x34cd00: 0x34428435  ori         $v0, $v0, 0x8435
    ctx->pc = 0x34cd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33845);
    // 0x34cd04: 0x3c033619  lui         $v1, 0x3619
    ctx->pc = 0x34cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13849 << 16));
    // 0x34cd08: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x34cd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34cd0c: 0x3463636b  ori         $v1, $v1, 0x636B
    ctx->pc = 0x34cd0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)25451);
    // 0x34cd10: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x34cd10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x34cd14: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x34cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x34cd18: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34CD18u;
    {
        const bool branch_taken_0x34cd18 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34CD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CD18u;
        // 0x34cd1c: 0xafa201a0  sw          $v0, 0x1A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cd18) {
            ctx->pc = 0x34CD30u;
            goto label_34cd30;
        }
    }
    ctx->pc = 0x34CD20u;
    // 0x34cd20: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x34cd20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x34cd24: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x34cd24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x34cd28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34CD28u;
    {
        const bool branch_taken_0x34cd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cd28) {
            ctx->pc = 0x34CD48u;
            goto label_34cd48;
        }
    }
    ctx->pc = 0x34CD30u;
label_34cd30:
    // 0x34cd30: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x34cd30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x34cd34: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34cd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34cd38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34cd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34cd3c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x34cd3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x34cd40: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x34cd40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x34cd44: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x34cd44u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_34cd48:
    // 0x34cd48: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x34cd48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x34cd4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34cd4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cd50: 0x8fa60374  lw          $a2, 0x374($sp)
    ctx->pc = 0x34cd50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 884)));
    // 0x34cd54: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x34cd54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x34cd58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34cd58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34cd5c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34cd5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34cd60: 0xc4c10048  lwc1        $f1, 0x48($a2)
    ctx->pc = 0x34cd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34cd64: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34cd64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34cd68: 0x8cc30044  lw          $v1, 0x44($a2)
    ctx->pc = 0x34cd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x34cd6c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34cd6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34cd70: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x34cd70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x34cd74: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x34cd74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34cd78: 0xe7a001a4  swc1        $f0, 0x1A4($sp)
    ctx->pc = 0x34cd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x34cd7c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34cd7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x34cd80: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x34cd80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x34cd84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x34cd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34cd88: 0x12400079  beqz        $s2, . + 4 + (0x79 << 2)
    ctx->pc = 0x34CD88u;
    {
        const bool branch_taken_0x34cd88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CD88u;
        // 0x34cd8c: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cd88) {
            ctx->pc = 0x34CF70u;
            goto label_34cf70;
        }
    }
    ctx->pc = 0x34CD90u;
    // 0x34cd90: 0x8fa20370  lw          $v0, 0x370($sp)
    ctx->pc = 0x34cd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x34cd94: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x34cd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x34cd98: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x34cd98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x34cd9c: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x34cd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x34cda0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x34cda0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x34cda4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x34CDA4u;
    {
        const bool branch_taken_0x34cda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CDA4u;
        // 0x34cda8: 0x851023  subu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cda4) {
            ctx->pc = 0x34CDB0u;
            goto label_34cdb0;
        }
    }
    ctx->pc = 0x34CDACu;
    // 0x34cdac: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x34cdacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_34cdb0:
    // 0x34cdb0: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x34cdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x34cdb4: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x34cdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x34cdb8: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x34cdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x34cdbc: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x34cdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x34cdc0: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x34cdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x34cdc4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x34cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34cdc8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34cdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34cdcc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x34CDCCu;
    {
        const bool branch_taken_0x34cdcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CDCCu;
        // 0x34cdd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cdcc) {
            ctx->pc = 0x34CDFCu;
            goto label_34cdfc;
        }
    }
    ctx->pc = 0x34CDD4u;
    // 0x34cdd4: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x34cdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x34cdd8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x34cdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x34cddc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34cddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34cde0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x34cde0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x34cde4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34CDE4u;
    {
        const bool branch_taken_0x34cde4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CDE4u;
        // 0x34cde8: 0xafa400e4  sw          $a0, 0xE4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cde4) {
            ctx->pc = 0x34CDF8u;
            goto label_34cdf8;
        }
    }
    ctx->pc = 0x34CDECu;
    // 0x34cdec: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x34cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x34cdf0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x34cdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34cdf4: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x34cdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
label_34cdf8:
    // 0x34cdf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34cdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34cdfc:
    // 0x34cdfc: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x34cdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x34ce00: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x34ce00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
    // 0x34ce04: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x34ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34ce08: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x34ce08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x34ce0c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x34CE0Cu;
    {
        const bool branch_taken_0x34ce0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CE0Cu;
        // 0x34ce10: 0x53080  sll         $a2, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ce0c) {
            ctx->pc = 0x34CE4Cu;
            goto label_34ce4c;
        }
    }
    ctx->pc = 0x34CE14u;
    // 0x34ce14: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x34ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x34ce18: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x34ce18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x34ce1c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x34ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x34ce20: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34ce20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34ce24: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x34ce24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x34ce28: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x34CE28u;
    {
        const bool branch_taken_0x34ce28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CE28u;
        // 0x34ce2c: 0xafa400ec  sw          $a0, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ce28) {
            ctx->pc = 0x34CE48u;
            goto label_34ce48;
        }
    }
    ctx->pc = 0x34CE30u;
    // 0x34ce30: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x34ce30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x34ce34: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x34ce34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x34ce38: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x34ce38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x34ce3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x34ce3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34ce40: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x34ce40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x34ce44: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x34ce44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
label_34ce48:
    // 0x34ce48: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x34ce48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_34ce4c:
    // 0x34ce4c: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x34ce4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x34ce50: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x34ce50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
    // 0x34ce54: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x34ce54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34ce58: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x34ce58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x34ce5c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x34CE5Cu;
    {
        const bool branch_taken_0x34ce5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CE5Cu;
        // 0x34ce60: 0x53080  sll         $a2, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ce5c) {
            ctx->pc = 0x34CE9Cu;
            goto label_34ce9c;
        }
    }
    ctx->pc = 0x34CE64u;
    // 0x34ce64: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x34ce64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x34ce68: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x34ce68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x34ce6c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x34ce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x34ce70: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34ce70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34ce74: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x34ce74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x34ce78: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x34CE78u;
    {
        const bool branch_taken_0x34ce78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CE78u;
        // 0x34ce7c: 0xafa400fc  sw          $a0, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ce78) {
            ctx->pc = 0x34CE98u;
            goto label_34ce98;
        }
    }
    ctx->pc = 0x34CE80u;
    // 0x34ce80: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x34ce80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x34ce84: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x34ce84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x34ce88: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x34ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x34ce8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x34ce8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34ce90: 0xafa40074  sw          $a0, 0x74($sp)
    ctx->pc = 0x34ce90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 4));
    // 0x34ce94: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x34ce94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_34ce98:
    // 0x34ce98: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x34ce98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_34ce9c:
    // 0x34ce9c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x34ce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34cea0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x34cea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x34cea4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x34CEA4u;
    {
        const bool branch_taken_0x34cea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CEA4u;
        // 0x34cea8: 0x53080  sll         $a2, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cea4) {
            ctx->pc = 0x34CEDCu;
            goto label_34cedc;
        }
    }
    ctx->pc = 0x34CEACu;
    // 0x34ceac: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x34ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x34ceb0: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x34ceb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x34ceb4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x34ceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x34ceb8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34ceb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34cebc: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x34cebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x34cec0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x34CEC0u;
    {
        const bool branch_taken_0x34cec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CEC0u;
        // 0x34cec4: 0xafa400e4  sw          $a0, 0xE4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cec0) {
            ctx->pc = 0x34CED8u;
            goto label_34ced8;
        }
    }
    ctx->pc = 0x34CEC8u;
    // 0x34cec8: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x34cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x34cecc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x34ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x34ced0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x34ced0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34ced4: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x34ced4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
label_34ced8:
    // 0x34ced8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x34ced8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_34cedc:
    // 0x34cedc: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x34cedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x34cee0: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x34cee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
    // 0x34cee4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x34cee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34cee8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x34cee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x34ceec: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x34CEECu;
    {
        const bool branch_taken_0x34ceec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CEECu;
        // 0x34cef0: 0x53080  sll         $a2, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ceec) {
            ctx->pc = 0x34CF2Cu;
            goto label_34cf2c;
        }
    }
    ctx->pc = 0x34CEF4u;
    // 0x34cef4: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x34cef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x34cef8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x34cef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x34cefc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x34cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x34cf00: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34cf00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34cf04: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x34cf04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x34cf08: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x34CF08u;
    {
        const bool branch_taken_0x34cf08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CF08u;
        // 0x34cf0c: 0xafa40104  sw          $a0, 0x104($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cf08) {
            ctx->pc = 0x34CF28u;
            goto label_34cf28;
        }
    }
    ctx->pc = 0x34CF10u;
    // 0x34cf10: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x34cf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x34cf14: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x34cf14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x34cf18: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x34cf18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x34cf1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x34cf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34cf20: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x34cf20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x34cf24: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x34cf24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
label_34cf28:
    // 0x34cf28: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x34cf28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_34cf2c:
    // 0x34cf2c: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x34cf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x34cf30: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x34cf30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    // 0x34cf34: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x34cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34cf38: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x34cf38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x34cf3c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x34CF3Cu;
    {
        const bool branch_taken_0x34cf3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CF3Cu;
        // 0x34cf40: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cf3c) {
            ctx->pc = 0x34CF70u;
            goto label_34cf70;
        }
    }
    ctx->pc = 0x34CF44u;
    // 0x34cf44: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x34cf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x34cf48: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x34cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x34cf4c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x34cf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x34cf50: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34cf50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34cf54: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x34cf54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x34cf58: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x34CF58u;
    {
        const bool branch_taken_0x34cf58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CF58u;
        // 0x34cf5c: 0xafa400f4  sw          $a0, 0xF4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cf58) {
            ctx->pc = 0x34CF70u;
            goto label_34cf70;
        }
    }
    ctx->pc = 0x34CF60u;
    // 0x34cf60: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x34cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x34cf64: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x34cf64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x34cf68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x34cf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34cf6c: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x34cf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
label_34cf70:
    // 0x34cf70: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x34cf70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34cf74: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x34CF74u;
    {
        const bool branch_taken_0x34cf74 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x34CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CF74u;
        // 0x34cf78: 0x8fa30370  lw          $v1, 0x370($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cf74) {
            ctx->pc = 0x34CF84u;
            goto label_34cf84;
        }
    }
    ctx->pc = 0x34CF7Cu;
    // 0x34cf7c: 0x10000aa7  b           . + 4 + (0xAA7 << 2)
    ctx->pc = 0x34CF7Cu;
    {
        const bool branch_taken_0x34cf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CF7Cu;
        // 0x34cf80: 0x8fa20370  lw          $v0, 0x370($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cf7c) {
            ctx->pc = 0x34FA1Cu;
            goto label_34fa1c;
        }
    }
    ctx->pc = 0x34CF84u;
label_34cf84:
    // 0x34cf84: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x34cf84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x34cf88: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34CF88u;
    {
        const bool branch_taken_0x34cf88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CF88u;
        // 0x34cf8c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cf88) {
            ctx->pc = 0x34CFA4u;
            goto label_34cfa4;
        }
    }
    ctx->pc = 0x34CF90u;
    // 0x34cf90: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x34cf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x34cf94: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34cf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34cf98: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x34cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x34cf9c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x34cf9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x34cfa0: 0x83400a  movz        $t0, $a0, $v1
    ctx->pc = 0x34cfa0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
label_34cfa4:
    // 0x34cfa4: 0x1500000f  bnez        $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x34CFA4u;
    {
        const bool branch_taken_0x34cfa4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x34CFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CFA4u;
        // 0x34cfa8: 0x8fa50370  lw          $a1, 0x370($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cfa4) {
            ctx->pc = 0x34CFE4u;
            goto label_34cfe4;
        }
    }
    ctx->pc = 0x34CFACu;
    // 0x34cfac: 0xc0d062a  jal         func_3418A8
    ctx->pc = 0x34CFACu;
    SET_GPR_U32(ctx, 31, 0x34CFB4u);
    ctx->pc = 0x34CFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CFACu;
    // 0x34cfb0: 0x8fa40370  lw          $a0, 0x370($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3418A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3418A8u, 0x34CFACu, 0x34CFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CFB4u;
label_34cfb4:
    // 0x34cfb4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x34cfb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cfb8: 0x11000a98  beqz        $t0, . + 4 + (0xA98 << 2)
    ctx->pc = 0x34CFB8u;
    {
        const bool branch_taken_0x34cfb8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CFB8u;
        // 0x34cfbc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cfb8) {
            ctx->pc = 0x34FA1Cu;
            goto label_34fa1c;
        }
    }
    ctx->pc = 0x34CFC0u;
    // 0x34cfc0: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x34cfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
    // 0x34cfc4: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x34cfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x34cfc8: 0x8fa40370  lw          $a0, 0x370($sp)
    ctx->pc = 0x34cfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x34cfcc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x34cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34cfd0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x34cfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x34cfd4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x34cfd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x34cfd8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x34CFD8u;
    {
        const bool branch_taken_0x34cfd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34cfd8) {
            ctx->pc = 0x34CFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34CFD8u;
            // 0x34cfdc: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34CFE0u;
            goto label_34cfe0;
        }
    }
    ctx->pc = 0x34CFE0u;
label_34cfe0:
    // 0x34cfe0: 0x8fa50370  lw          $a1, 0x370($sp)
    ctx->pc = 0x34cfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
label_34cfe4:
    // 0x34cfe4: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x34cfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x34cfe8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x34cfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34cfec: 0x24c4c2c8  addiu       $a0, $a2, -0x3D38
    ctx->pc = 0x34cfecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951624));
    // 0x34cff0: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x34cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x34cff4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34cff8: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x34cff8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x34cffc: 0x8c82009c  lw          $v0, 0x9C($a0)
    ctx->pc = 0x34cffcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C364u));
    // 0x34d000: 0x4400021  bltz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x34D000u;
    {
        const bool branch_taken_0x34d000 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34D004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D000u;
        // 0x34d004: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d000) {
            ctx->pc = 0x34D088u;
            goto label_34d088;
        }
    }
    ctx->pc = 0x34D008u;
    // 0x34d008: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x34d008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x34d00c: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x34d00cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x34d010: 0x6849000f  ldl         $t1, 0xF($v0)
    ctx->pc = 0x34d010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x34d014: 0x6c490008  ldr         $t1, 0x8($v0)
    ctx->pc = 0x34d014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x34d018: 0x684a0017  ldl         $t2, 0x17($v0)
    ctx->pc = 0x34d018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x34d01c: 0x6c4a0010  ldr         $t2, 0x10($v0)
    ctx->pc = 0x34d01cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x34d020: 0x6843001f  ldl         $v1, 0x1F($v0)
    ctx->pc = 0x34d020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x34d024: 0x6c430018  ldr         $v1, 0x18($v0)
    ctx->pc = 0x34d024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x34d028: 0xb3a70237  sdl         $a3, 0x237($sp)
    ctx->pc = 0x34d028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 567); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d02c: 0xb7a70230  sdr         $a3, 0x230($sp)
    ctx->pc = 0x34d02cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d030: 0xb3a9023f  sdl         $t1, 0x23F($sp)
    ctx->pc = 0x34d030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 575); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d034: 0xb7a90238  sdr         $t1, 0x238($sp)
    ctx->pc = 0x34d034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 568); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d038: 0xb3aa0247  sdl         $t2, 0x247($sp)
    ctx->pc = 0x34d038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 583); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d03c: 0xb7aa0240  sdr         $t2, 0x240($sp)
    ctx->pc = 0x34d03cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 576); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d040: 0xb3a3024f  sdl         $v1, 0x24F($sp)
    ctx->pc = 0x34d040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 591); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d044: 0xb7a30248  sdr         $v1, 0x248($sp)
    ctx->pc = 0x34d044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 584); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d048: 0x68470027  ldl         $a3, 0x27($v0)
    ctx->pc = 0x34d048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x34d04c: 0x6c470020  ldr         $a3, 0x20($v0)
    ctx->pc = 0x34d04cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x34d050: 0x6849002f  ldl         $t1, 0x2F($v0)
    ctx->pc = 0x34d050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x34d054: 0x6c490028  ldr         $t1, 0x28($v0)
    ctx->pc = 0x34d054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x34d058: 0x684a0037  ldl         $t2, 0x37($v0)
    ctx->pc = 0x34d058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x34d05c: 0x6c4a0030  ldr         $t2, 0x30($v0)
    ctx->pc = 0x34d05cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x34d060: 0x6843003f  ldl         $v1, 0x3F($v0)
    ctx->pc = 0x34d060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x34d064: 0x6c430038  ldr         $v1, 0x38($v0)
    ctx->pc = 0x34d064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x34d068: 0xb3a70257  sdl         $a3, 0x257($sp)
    ctx->pc = 0x34d068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 599); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d06c: 0xb7a70250  sdr         $a3, 0x250($sp)
    ctx->pc = 0x34d06cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 592); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d070: 0xb3a9025f  sdl         $t1, 0x25F($sp)
    ctx->pc = 0x34d070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 607); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d074: 0xb7a90258  sdr         $t1, 0x258($sp)
    ctx->pc = 0x34d074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 600); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d078: 0xb3aa0267  sdl         $t2, 0x267($sp)
    ctx->pc = 0x34d078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 615); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d07c: 0xb7aa0260  sdr         $t2, 0x260($sp)
    ctx->pc = 0x34d07cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 608); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d080: 0xb3a3026f  sdl         $v1, 0x26F($sp)
    ctx->pc = 0x34d080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 623); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d084: 0xb7a30268  sdr         $v1, 0x268($sp)
    ctx->pc = 0x34d084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 616); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_34d088:
    // 0x34d088: 0x8c8200a0  lw          $v0, 0xA0($a0)
    ctx->pc = 0x34d088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x34d08c: 0x4400022  bltz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x34D08Cu;
    {
        const bool branch_taken_0x34d08c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D08Cu;
        // 0x34d090: 0x8fa50370  lw          $a1, 0x370($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d08c) {
            ctx->pc = 0x34D118u;
            goto label_34d118;
        }
    }
    ctx->pc = 0x34D094u;
    // 0x34d094: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x34d094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x34d098: 0x68460007  ldl         $a2, 0x7($v0)
    ctx->pc = 0x34d098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x34d09c: 0x6c460000  ldr         $a2, 0x0($v0)
    ctx->pc = 0x34d09cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x34d0a0: 0x6847000f  ldl         $a3, 0xF($v0)
    ctx->pc = 0x34d0a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x34d0a4: 0x6c470008  ldr         $a3, 0x8($v0)
    ctx->pc = 0x34d0a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x34d0a8: 0x68490017  ldl         $t1, 0x17($v0)
    ctx->pc = 0x34d0a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x34d0ac: 0x6c490010  ldr         $t1, 0x10($v0)
    ctx->pc = 0x34d0acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x34d0b0: 0x684a001f  ldl         $t2, 0x1F($v0)
    ctx->pc = 0x34d0b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x34d0b4: 0x6c4a0018  ldr         $t2, 0x18($v0)
    ctx->pc = 0x34d0b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x34d0b8: 0xb3a60277  sdl         $a2, 0x277($sp)
    ctx->pc = 0x34d0b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 631); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d0bc: 0xb7a60270  sdr         $a2, 0x270($sp)
    ctx->pc = 0x34d0bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 624); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d0c0: 0xb3a7027f  sdl         $a3, 0x27F($sp)
    ctx->pc = 0x34d0c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 639); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d0c4: 0xb7a70278  sdr         $a3, 0x278($sp)
    ctx->pc = 0x34d0c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 632); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d0c8: 0xb3a90287  sdl         $t1, 0x287($sp)
    ctx->pc = 0x34d0c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 647); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d0cc: 0xb7a90280  sdr         $t1, 0x280($sp)
    ctx->pc = 0x34d0ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 640); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d0d0: 0xb3aa028f  sdl         $t2, 0x28F($sp)
    ctx->pc = 0x34d0d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 655); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d0d4: 0xb7aa0288  sdr         $t2, 0x288($sp)
    ctx->pc = 0x34d0d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 648); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d0d8: 0x68460027  ldl         $a2, 0x27($v0)
    ctx->pc = 0x34d0d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x34d0dc: 0x6c460020  ldr         $a2, 0x20($v0)
    ctx->pc = 0x34d0dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x34d0e0: 0x6847002f  ldl         $a3, 0x2F($v0)
    ctx->pc = 0x34d0e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x34d0e4: 0x6c470028  ldr         $a3, 0x28($v0)
    ctx->pc = 0x34d0e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x34d0e8: 0x68490037  ldl         $t1, 0x37($v0)
    ctx->pc = 0x34d0e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x34d0ec: 0x6c490030  ldr         $t1, 0x30($v0)
    ctx->pc = 0x34d0ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x34d0f0: 0x684a003f  ldl         $t2, 0x3F($v0)
    ctx->pc = 0x34d0f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x34d0f4: 0x6c4a0038  ldr         $t2, 0x38($v0)
    ctx->pc = 0x34d0f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x34d0f8: 0xb3a60297  sdl         $a2, 0x297($sp)
    ctx->pc = 0x34d0f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 663); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d0fc: 0xb7a60290  sdr         $a2, 0x290($sp)
    ctx->pc = 0x34d0fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 656); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d100: 0xb3a7029f  sdl         $a3, 0x29F($sp)
    ctx->pc = 0x34d100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 671); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d104: 0xb7a70298  sdr         $a3, 0x298($sp)
    ctx->pc = 0x34d104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 664); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d108: 0xb3a902a7  sdl         $t1, 0x2A7($sp)
    ctx->pc = 0x34d108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 679); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d10c: 0xb7a902a0  sdr         $t1, 0x2A0($sp)
    ctx->pc = 0x34d10cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 672); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d110: 0xb3aa02af  sdl         $t2, 0x2AF($sp)
    ctx->pc = 0x34d110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 687); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d114: 0xb7aa02a8  sdr         $t2, 0x2A8($sp)
    ctx->pc = 0x34d114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 680); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_34d118:
    // 0x34d118: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x34d118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x34d11c: 0x4400012  bltz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x34D11Cu;
    {
        const bool branch_taken_0x34d11c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34D120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D11Cu;
        // 0x34d120: 0x8fa30370  lw          $v1, 0x370($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d11c) {
            ctx->pc = 0x34D168u;
            goto label_34d168;
        }
    }
    ctx->pc = 0x34D124u;
    // 0x34d124: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34d124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34d128: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x34d128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x34d12c: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x34d12cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x34d130: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x34d130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x34d134: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x34d134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x34d138: 0x68470017  ldl         $a3, 0x17($v0)
    ctx->pc = 0x34d138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x34d13c: 0x6c470010  ldr         $a3, 0x10($v0)
    ctx->pc = 0x34d13cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x34d140: 0x6849001f  ldl         $t1, 0x1F($v0)
    ctx->pc = 0x34d140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x34d144: 0x6c490018  ldr         $t1, 0x18($v0)
    ctx->pc = 0x34d144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x34d148: 0xb3a502b7  sdl         $a1, 0x2B7($sp)
    ctx->pc = 0x34d148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 695); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d14c: 0xb7a502b0  sdr         $a1, 0x2B0($sp)
    ctx->pc = 0x34d14cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 688); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d150: 0xb3a602bf  sdl         $a2, 0x2BF($sp)
    ctx->pc = 0x34d150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 703); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d154: 0xb7a602b8  sdr         $a2, 0x2B8($sp)
    ctx->pc = 0x34d154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 696); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d158: 0xb3a702c7  sdl         $a3, 0x2C7($sp)
    ctx->pc = 0x34d158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 711); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d15c: 0xb7a702c0  sdr         $a3, 0x2C0($sp)
    ctx->pc = 0x34d15cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 704); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d160: 0xb3a902cf  sdl         $t1, 0x2CF($sp)
    ctx->pc = 0x34d160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 719); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d164: 0xb7a902c8  sdr         $t1, 0x2C8($sp)
    ctx->pc = 0x34d164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 712); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_34d168:
    // 0x34d168: 0x8c8200ac  lw          $v0, 0xAC($a0)
    ctx->pc = 0x34d168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x34d16c: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x34D16Cu;
    {
        const bool branch_taken_0x34d16c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34D170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D16Cu;
        // 0x34d170: 0x27b401a0  addiu       $s4, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d16c) {
            ctx->pc = 0x34D1A0u;
            goto label_34d1a0;
        }
    }
    ctx->pc = 0x34D174u;
    // 0x34d174: 0x8faa0370  lw          $t2, 0x370($sp)
    ctx->pc = 0x34d174u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x34d178: 0x27a302e0  addiu       $v1, $sp, 0x2E0
    ctx->pc = 0x34d178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x34d17c: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x34d17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x34d180: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x34d180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_34d184:
    // 0x34d184: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x34d184u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34d188: 0x78460010  lq          $a2, 0x10($v0)
    ctx->pc = 0x34d188u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x34d18c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x34d18cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x34d190: 0x7c660010  sq          $a2, 0x10($v1)
    ctx->pc = 0x34d190u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 6));
    // 0x34d194: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x34d194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x34d198: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34D198u;
    {
        const bool branch_taken_0x34d198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x34D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D198u;
        // 0x34d19c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d198) {
            ctx->pc = 0x34D184u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34d184;
        }
    }
    ctx->pc = 0x34D1A0u;
label_34d1a0:
    // 0x34d1a0: 0x3c0a0062  lui         $t2, 0x62
    ctx->pc = 0x34d1a0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)98 << 16));
    // 0x34d1a4: 0x2542c2c8  addiu       $v0, $t2, -0x3D38
    ctx->pc = 0x34d1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294951624));
    // 0x34d1a8: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x34d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C378u));
    // 0x34d1ac: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x34D1ACu;
    {
        const bool branch_taken_0x34d1ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34D1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D1ACu;
        // 0x34d1b0: 0x8fa30370  lw          $v1, 0x370($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d1ac) {
            ctx->pc = 0x34D1D8u;
            goto label_34d1d8;
        }
    }
    ctx->pc = 0x34D1B4u;
    // 0x34d1b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34d1b8: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x34d1b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x34d1bc: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x34d1bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x34d1c0: 0x6845000f  ldl         $a1, 0xF($v0)
    ctx->pc = 0x34d1c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x34d1c4: 0x6c450008  ldr         $a1, 0x8($v0)
    ctx->pc = 0x34d1c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x34d1c8: 0xb3a40367  sdl         $a0, 0x367($sp)
    ctx->pc = 0x34d1c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 871); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d1cc: 0xb7a40360  sdr         $a0, 0x360($sp)
    ctx->pc = 0x34d1ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 864); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d1d0: 0xb3a5036f  sdl         $a1, 0x36F($sp)
    ctx->pc = 0x34d1d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 879); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d1d4: 0xb7a50368  sdr         $a1, 0x368($sp)
    ctx->pc = 0x34d1d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 872); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_34d1d8:
    // 0x34d1d8: 0x8fa90374  lw          $t1, 0x374($sp)
    ctx->pc = 0x34d1d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 884)));
    // 0x34d1dc: 0xc520004c  lwc1        $f0, 0x4C($t1)
    ctx->pc = 0x34d1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d1e0: 0xc5210050  lwc1        $f1, 0x50($t1)
    ctx->pc = 0x34d1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34d1e4: 0xc5220054  lwc1        $f2, 0x54($t1)
    ctx->pc = 0x34d1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34d1e8: 0xc5230058  lwc1        $f3, 0x58($t1)
    ctx->pc = 0x34d1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34d1ec: 0x692a0023  ldl         $t2, 0x23($t1)
    ctx->pc = 0x34d1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x34d1f0: 0x6d2a001c  ldr         $t2, 0x1C($t1)
    ctx->pc = 0x34d1f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x34d1f4: 0x8d220024  lw          $v0, 0x24($t1)
    ctx->pc = 0x34d1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 36)));
    // 0x34d1f8: 0xb3aa01af  sdl         $t2, 0x1AF($sp)
    ctx->pc = 0x34d1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 431); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d1fc: 0xb7aa01a8  sdr         $t2, 0x1A8($sp)
    ctx->pc = 0x34d1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 424); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d200: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x34d200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
    // 0x34d204: 0x6925002f  ldl         $a1, 0x2F($t1)
    ctx->pc = 0x34d204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x34d208: 0x6d250028  ldr         $a1, 0x28($t1)
    ctx->pc = 0x34d208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x34d20c: 0x8d260030  lw          $a2, 0x30($t1)
    ctx->pc = 0x34d20cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x34d210: 0xb3a501bb  sdl         $a1, 0x1BB($sp)
    ctx->pc = 0x34d210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 443); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d214: 0xb7a501b4  sdr         $a1, 0x1B4($sp)
    ctx->pc = 0x34d214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 436); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d218: 0xafa601bc  sw          $a2, 0x1BC($sp)
    ctx->pc = 0x34d218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 6));
    // 0x34d21c: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x34d21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x34d220: 0xe7a101c4  swc1        $f1, 0x1C4($sp)
    ctx->pc = 0x34d220u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
    // 0x34d224: 0xe7a201c8  swc1        $f2, 0x1C8($sp)
    ctx->pc = 0x34d224u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x34d228: 0xe7a301cc  swc1        $f3, 0x1CC($sp)
    ctx->pc = 0x34d228u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
    // 0x34d22c: 0x69220063  ldl         $v0, 0x63($t1)
    ctx->pc = 0x34d22cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x34d230: 0x6d22005c  ldr         $v0, 0x5C($t1)
    ctx->pc = 0x34d230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x34d234: 0x8d230064  lw          $v1, 0x64($t1)
    ctx->pc = 0x34d234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 100)));
    // 0x34d238: 0xb3a201d7  sdl         $v0, 0x1D7($sp)
    ctx->pc = 0x34d238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 471); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d23c: 0xb7a201d0  sdr         $v0, 0x1D0($sp)
    ctx->pc = 0x34d23cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 464); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d240: 0xafa301d8  sw          $v1, 0x1D8($sp)
    ctx->pc = 0x34d240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 3));
    // 0x34d244: 0x8d2400a8  lw          $a0, 0xA8($t1)
    ctx->pc = 0x34d244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 168)));
    // 0x34d248: 0x6926006f  ldl         $a2, 0x6F($t1)
    ctx->pc = 0x34d248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x34d24c: 0x6d260068  ldr         $a2, 0x68($t1)
    ctx->pc = 0x34d24cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x34d250: 0x8d270070  lw          $a3, 0x70($t1)
    ctx->pc = 0x34d250u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 112)));
    // 0x34d254: 0xb3a601e3  sdl         $a2, 0x1E3($sp)
    ctx->pc = 0x34d254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 483); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d258: 0xb7a601dc  sdr         $a2, 0x1DC($sp)
    ctx->pc = 0x34d258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 476); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d25c: 0xafa701e4  sw          $a3, 0x1E4($sp)
    ctx->pc = 0x34d25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 7));
    // 0x34d260: 0x6923007b  ldl         $v1, 0x7B($t1)
    ctx->pc = 0x34d260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 123); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x34d264: 0x6d230074  ldr         $v1, 0x74($t1)
    ctx->pc = 0x34d264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 116); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x34d268: 0xb3a301ef  sdl         $v1, 0x1EF($sp)
    ctx->pc = 0x34d268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 495); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d26c: 0xb7a301e8  sdr         $v1, 0x1E8($sp)
    ctx->pc = 0x34d26cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 488); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34d270: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x34D270u;
    {
        const bool branch_taken_0x34d270 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D270u;
        // 0x34d274: 0x8fa301fc  lw          $v1, 0x1FC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d270) {
            ctx->pc = 0x34D29Cu;
            goto label_34d29c;
        }
    }
    ctx->pc = 0x34D278u;
    // 0x34d278: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x34d278u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34d27c: 0x7fa201f0  sq          $v0, 0x1F0($sp)
    ctx->pc = 0x34d27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
    // 0x34d280: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x34d280u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x34d284: 0x7fa30200  sq          $v1, 0x200($sp)
    ctx->pc = 0x34d284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 3));
    // 0x34d288: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x34d288u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x34d28c: 0x7fa20210  sq          $v0, 0x210($sp)
    ctx->pc = 0x34d28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
    // 0x34d290: 0x78830030  lq          $v1, 0x30($a0)
    ctx->pc = 0x34d290u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x34d294: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x34D294u;
    {
        const bool branch_taken_0x34d294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D294u;
        // 0x34d298: 0x7fa30220  sq          $v1, 0x220($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d294) {
            ctx->pc = 0x34D2E8u;
            goto label_34d2e8;
        }
    }
    ctx->pc = 0x34D29Cu;
label_34d29c:
    // 0x34d29c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x34d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x34d2a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34d2a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d2a4: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x34d2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x34d2a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34d2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34d2ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x34d2acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34d2b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x34d2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x34d2b4: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x34d2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x34d2b8: 0xe7a101f0  swc1        $f1, 0x1F0($sp)
    ctx->pc = 0x34d2b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x34d2bc: 0xafa301fc  sw          $v1, 0x1FC($sp)
    ctx->pc = 0x34d2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 3));
    // 0x34d2c0: 0xe7a10218  swc1        $f1, 0x218($sp)
    ctx->pc = 0x34d2c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
    // 0x34d2c4: 0xe7a10204  swc1        $f1, 0x204($sp)
    ctx->pc = 0x34d2c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
    // 0x34d2c8: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x34d2c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x34d2cc: 0xe7a001f8  swc1        $f0, 0x1F8($sp)
    ctx->pc = 0x34d2ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x34d2d0: 0xe7a001f4  swc1        $f0, 0x1F4($sp)
    ctx->pc = 0x34d2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
    // 0x34d2d4: 0xe7a00214  swc1        $f0, 0x214($sp)
    ctx->pc = 0x34d2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
    // 0x34d2d8: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x34d2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x34d2dc: 0xe7a00208  swc1        $f0, 0x208($sp)
    ctx->pc = 0x34d2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x34d2e0: 0xe7a00228  swc1        $f0, 0x228($sp)
    ctx->pc = 0x34d2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
    // 0x34d2e4: 0xe7a00224  swc1        $f0, 0x224($sp)
    ctx->pc = 0x34d2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
label_34d2e8:
    // 0x34d2e8: 0x8fa90370  lw          $t1, 0x370($sp)
    ctx->pc = 0x34d2e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x34d2ec: 0x24053c80  addiu       $a1, $zero, 0x3C80
    ctx->pc = 0x34d2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15488));
    // 0x34d2f0: 0x8d270018  lw          $a3, 0x18($t1)
    ctx->pc = 0x34d2f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x34d2f4: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x34d2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x34d2f8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x34d2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x34d2fc: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x34d2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x34d300: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x34d300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x34d304: 0x8d060014  lw          $a2, 0x14($t0)
    ctx->pc = 0x34d304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x34d308: 0xad030010  sw          $v1, 0x10($t0)
    ctx->pc = 0x34d308u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
    // 0x34d30c: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x34d30cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x34d310: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x34d310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x34d314: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x34d314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34d318: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x34d318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34d31c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x34d31cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x34d320: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x34d320u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x34d324: 0xafa600dc  sw          $a2, 0xDC($sp)
    ctx->pc = 0x34d324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 6));
    // 0x34d328: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x34d328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x34d32c: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x34d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x34d330: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x34d330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34d334: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34d334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34d338: 0x8fa700cc  lw          $a3, 0xCC($sp)
    ctx->pc = 0x34d338u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x34d33c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x34d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x34d340: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x34d340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x34d344: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x34d344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x34d348: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x34d348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x34d34c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34d350: 0xafa600d8  sw          $a2, 0xD8($sp)
    ctx->pc = 0x34d350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 6));
    // 0x34d354: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x34d354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x34d358: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x34d358u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x34d35c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x34D35Cu;
    {
        const bool branch_taken_0x34d35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d35c) {
            ctx->pc = 0x34D360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34D35Cu;
            // 0x34d360: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34D364u;
            goto label_34d364;
        }
    }
    ctx->pc = 0x34D364u;
label_34d364:
    // 0x34d364: 0x2812  mflo        $a1
    ctx->pc = 0x34d364u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x34d368: 0x30a53ffc  andi        $a1, $a1, 0x3FFC
    ctx->pc = 0x34d368u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16380);
    // 0x34d36c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x34D36Cu;
    {
        const bool branch_taken_0x34d36c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D36Cu;
        // 0x34d370: 0xafa5000c  sw          $a1, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d36c) {
            ctx->pc = 0x34D37Cu;
            goto label_34d37c;
        }
    }
    ctx->pc = 0x34D374u;
    // 0x34d374: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x34d374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34d378: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x34d378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_34d37c:
    // 0x34d37c: 0x8fa9000c  lw          $t1, 0xC($sp)
    ctx->pc = 0x34d37cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x34d380: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x34d380u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x34d384: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x34d384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x34d388: 0x35080370  ori         $t0, $t0, 0x370
    ctx->pc = 0x34d388u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)880);
    // 0x34d38c: 0x8faa0374  lw          $t2, 0x374($sp)
    ctx->pc = 0x34d38cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 884)));
    // 0x34d390: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x34d390u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x34d394: 0x891818  mult        $v1, $a0, $t1
    ctx->pc = 0x34d394u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34d398: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x34d398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x34d39c: 0xc5400010  lwc1        $f0, 0x10($t2)
    ctx->pc = 0x34d39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d3a0: 0x34e7fff0  ori         $a3, $a3, 0xFFF0
    ctx->pc = 0x34d3a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65520);
    // 0x34d3a4: 0x495018  mult        $t2, $v0, $t1
    ctx->pc = 0x34d3a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x34d3a8: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x34d3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34d3ac: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x34d3acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x34d3b0: 0x3c117000  lui         $s1, 0x7000
    ctx->pc = 0x34d3b0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)28672 << 16));
    // 0x34d3b4: 0x682021  addu        $a0, $v1, $t0
    ctx->pc = 0x34d3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x34d3b8: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x34d3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x34d3bc: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x34d3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x34d3c0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34d3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34d3c4: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x34d3c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x34d3c8: 0x3c157000  lui         $s5, 0x7000
    ctx->pc = 0x34d3c8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)28672 << 16));
    // 0x34d3cc: 0x1441021  addu        $v0, $t2, $a0
    ctx->pc = 0x34d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x34d3d0: 0x363101a0  ori         $s1, $s1, 0x1A0
    ctx->pc = 0x34d3d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)416);
    // 0x34d3d4: 0x8faa0374  lw          $t2, 0x374($sp)
    ctx->pc = 0x34d3d4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 884)));
    // 0x34d3d8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x34d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x34d3dc: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x34d3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x34d3e0: 0xc5410014  lwc1        $f1, 0x14($t2)
    ctx->pc = 0x34d3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34d3e4: 0xc5430018  lwc1        $f3, 0x18($t2)
    ctx->pc = 0x34d3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34d3e8: 0x695018  mult        $t2, $v1, $t1
    ctx->pc = 0x34d3e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x34d3ec: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x34d3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x34d3f0: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x34d3f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x34d3f4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x34d3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x34d3f8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x34d3f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x34d3fc: 0x1421821  addu        $v1, $t2, $v0
    ctx->pc = 0x34d3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x34d400: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x34d400u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x34d404: 0xa91018  mult        $v0, $a1, $t1
    ctx->pc = 0x34d404u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34d408: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x34d408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x34d40c: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x34d40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x34d410: 0xafa80108  sw          $t0, 0x108($sp)
    ctx->pc = 0x34d410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 8));
    // 0x34d414: 0xafa40124  sw          $a0, 0x124($sp)
    ctx->pc = 0x34d414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 4));
    // 0x34d418: 0xafa3012c  sw          $v1, 0x12C($sp)
    ctx->pc = 0x34d418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
    // 0x34d41c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x34d41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34d420: 0xc91018  mult        $v0, $a2, $t1
    ctx->pc = 0x34d420u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34d424: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x34d424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x34d428: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x34d428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x34d42c: 0xafa50130  sw          $a1, 0x130($sp)
    ctx->pc = 0x34d42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 5));
    // 0x34d430: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x34d430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34d434: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x34d434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x34d438: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x34d438u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x34d43c: 0xafa60134  sw          $a2, 0x134($sp)
    ctx->pc = 0x34d43cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 6));
    // 0x34d440: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x34d440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x34d444: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x34d444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x34d448: 0x2410001a  addiu       $s0, $zero, 0x1A
    ctx->pc = 0x34d448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x34d44c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x34d44cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x1000d400
    // 0x34d450: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x34d450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x34d454: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x34D454u;
    {
        const bool branch_taken_0x34d454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D454u;
        // 0x34d458: 0x2413001d  addiu       $s3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d454) {
            ctx->pc = 0x34D4B4u;
            goto label_34d4b4;
        }
    }
    ctx->pc = 0x34D45Cu;
    // 0x34d45c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x34d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x34d460: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x34d460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x34d464: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x34d464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x34d468: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x34d468u;
    runtime->Store32(rdram, ctx, 0x1000E020u, GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x34d46c: 0xf  sync
    ctx->pc = 0x34d46cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34d470: 0x40f  sync.p
    ctx->pc = 0x34d470u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_34d474:
    // 0x34d474: 0x0  nop
    ctx->pc = 0x34d474u;
    // NOP
    // 0x34d478: 0x0  nop
    ctx->pc = 0x34d478u;
    // NOP
    // 0x34d47c: 0x0  nop
    ctx->pc = 0x34d47cu;
    // NOP
    // 0x34d480: 0x0  nop
    ctx->pc = 0x34d480u;
    // NOP
    // 0x34d484: 0x0  nop
    ctx->pc = 0x34d484u;
    // NOP
    // 0x34d488: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x34D488u;
    {
        const bool branch_taken_0x34d488 = (false);
        if (branch_taken_0x34d488) {
            ctx->pc = 0x34D474u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34d474;
        }
    }
    ctx->pc = 0x34D490u;
    // 0x34d490: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34d490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x34d494: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x34d494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_34d498:
    // 0x34d498: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34d498u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x34d49c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34d49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34d4a0: 0x0  nop
    ctx->pc = 0x34d4a0u;
    // NOP
    // 0x34d4a4: 0x0  nop
    ctx->pc = 0x34d4a4u;
    // NOP
    // 0x34d4a8: 0x0  nop
    ctx->pc = 0x34d4a8u;
    // NOP
    // 0x34d4ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34D4ACu;
    {
        const bool branch_taken_0x34d4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34d4ac) {
            ctx->pc = 0x34D498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34d498;
        }
    }
    ctx->pc = 0x34D4B4u;
label_34d4b4:
    // 0x34d4b4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x34d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x34d4b8: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x34d4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x34d4bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x34d4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x34d4c0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x34d4c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x34d4c4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34D4C4u;
    {
        const bool branch_taken_0x34d4c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D4C4u;
        // 0x34d4c8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d4c4) {
            ctx->pc = 0x34D500u;
            goto label_34d500;
        }
    }
    ctx->pc = 0x34D4CCu;
    // 0x34d4cc: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x34d4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34d4d0: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x34d4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x34d4d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x34d4d4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x34d4d8: 0xf  sync
    ctx->pc = 0x34d4d8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34d4dc: 0x40f  sync.p
    ctx->pc = 0x34d4dcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_34d4e0:
    // 0x34d4e0: 0x0  nop
    ctx->pc = 0x34d4e0u;
    // NOP
    // 0x34d4e4: 0x0  nop
    ctx->pc = 0x34d4e4u;
    // NOP
    // 0x34d4e8: 0x0  nop
    ctx->pc = 0x34d4e8u;
    // NOP
    // 0x34d4ec: 0x0  nop
    ctx->pc = 0x34d4ecu;
    // NOP
    // 0x34d4f0: 0x0  nop
    ctx->pc = 0x34d4f0u;
    // NOP
    // 0x34d4f4: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x34D4F4u;
    {
        const bool branch_taken_0x34d4f4 = (false);
        if (branch_taken_0x34d4f4) {
            ctx->pc = 0x34D4E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34d4e0;
        }
    }
    ctx->pc = 0x34D4FCu;
    // 0x34d4fc: 0x0  nop
    ctx->pc = 0x34d4fcu;
    // NOP
label_34d500:
    // 0x34d500: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x34D500u;
    SET_GPR_U32(ctx, 31, 0x34D508u);
    ctx->pc = 0x34D504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D500u;
    // 0x34d504: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x34D500u, 0x34D508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D508u;
label_34d508:
    // 0x34d508: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x34d508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x34d50c: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x34d50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x34d510: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x34d510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x34d514: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34d514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x34d518: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x34d518u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x1000e010
    // 0x34d51c: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x34d51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x34d520: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x34d520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x34d524: 0xac750000  sw          $s5, 0x0($v1)
    ctx->pc = 0x34d524u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 21)); // MMIO: 0x1000d480
    // 0x34d528: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x34d528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x34d52c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34d52cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x34d530: 0xac5d0000  sw          $sp, 0x0($v0)
    ctx->pc = 0x34d530u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 29)); // MMIO: 0x1000d410
    // 0x34d534: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x34d534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x34d538: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x34d538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x34d53c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x34d53cu;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 16)); // MMIO: 0x1000d420
    // 0x34d540: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x34d540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x34d544: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x34d544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34d548: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x34d548u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x1000d400
    // 0x34d54c: 0xf  sync
    ctx->pc = 0x34d54cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34d550: 0x40f  sync.p
    ctx->pc = 0x34d550u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34d554: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x34d554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34d558: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34d558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34d55c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x34D55Cu;
    {
        const bool branch_taken_0x34d55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D55Cu;
        // 0x34d560: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d55c) {
            ctx->pc = 0x34D5B4u;
            goto label_34d5b4;
        }
    }
    ctx->pc = 0x34D564u;
    // 0x34d564: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x34d564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x34d568: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x34d568u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x1000e020
    // 0x34d56c: 0xf  sync
    ctx->pc = 0x34d56cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34d570: 0x40f  sync.p
    ctx->pc = 0x34d570u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_34d574:
    // 0x34d574: 0x0  nop
    ctx->pc = 0x34d574u;
    // NOP
    // 0x34d578: 0x0  nop
    ctx->pc = 0x34d578u;
    // NOP
    // 0x34d57c: 0x0  nop
    ctx->pc = 0x34d57cu;
    // NOP
    // 0x34d580: 0x0  nop
    ctx->pc = 0x34d580u;
    // NOP
    // 0x34d584: 0x0  nop
    ctx->pc = 0x34d584u;
    // NOP
    // 0x34d588: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x34D588u;
    {
        const bool branch_taken_0x34d588 = (false);
        if (branch_taken_0x34d588) {
            ctx->pc = 0x34D574u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34d574;
        }
    }
    ctx->pc = 0x34D590u;
    // 0x34d590: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34d590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x34d594: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x34d594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_34d598:
    // 0x34d598: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34d598u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x34d59c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34d59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34d5a0: 0x0  nop
    ctx->pc = 0x34d5a0u;
    // NOP
    // 0x34d5a4: 0x0  nop
    ctx->pc = 0x34d5a4u;
    // NOP
    // 0x34d5a8: 0x0  nop
    ctx->pc = 0x34d5a8u;
    // NOP
    // 0x34d5ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34D5ACu;
    {
        const bool branch_taken_0x34d5ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34d5ac) {
            ctx->pc = 0x34D598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34d598;
        }
    }
    ctx->pc = 0x34D5B4u;
label_34d5b4:
    // 0x34d5b4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x34d5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x34d5b8: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x34d5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x34d5bc: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x34d5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x34d5c0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34d5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x34d5c4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x34d5c4u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x1000e010
    // 0x34d5c8: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x34d5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x34d5cc: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x34d5ccu;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 17)); // MMIO: 0x1000d480
    // 0x34d5d0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x34d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x34d5d4: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x34d5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x34d5d8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34d5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x34d5dc: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x34d5dcu;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 20)); // MMIO: 0x1000d410
    // 0x34d5e0: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x34d5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x34d5e4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x34d5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x34d5e8: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x34d5e8u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 19)); // MMIO: 0x1000d420
    // 0x34d5ec: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x34d5ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x34d5f0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x34d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34d5f4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x34d5f4u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x1000d400
    // 0x34d5f8: 0xf  sync
    ctx->pc = 0x34d5f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34d5fc: 0x40f  sync.p
    ctx->pc = 0x34d5fcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34d600: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34d600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34d604: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x34d604u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000070u)); // MMIO: 0x70000070
    // 0x34d608: 0x1840003b  blez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x34D608u;
    {
        const bool branch_taken_0x34d608 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x34d608) {
            ctx->pc = 0x34D6F8u;
            goto label_34d6f8;
        }
    }
    ctx->pc = 0x34D610u;
    // 0x34d610: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x34d610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34d614: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34d614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34d618: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x34D618u;
    {
        const bool branch_taken_0x34d618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D618u;
        // 0x34d61c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d618) {
            ctx->pc = 0x34D674u;
            goto label_34d674;
        }
    }
    ctx->pc = 0x34D620u;
    // 0x34d620: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x34d620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x34d624: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x34d624u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x1000e020
    // 0x34d628: 0xf  sync
    ctx->pc = 0x34d628u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34d62c: 0x40f  sync.p
    ctx->pc = 0x34d62cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_34d630:
    // 0x34d630: 0x0  nop
    ctx->pc = 0x34d630u;
    // NOP
    // 0x34d634: 0x0  nop
    ctx->pc = 0x34d634u;
    // NOP
    // 0x34d638: 0x0  nop
    ctx->pc = 0x34d638u;
    // NOP
    // 0x34d63c: 0x0  nop
    ctx->pc = 0x34d63cu;
    // NOP
    // 0x34d640: 0x0  nop
    ctx->pc = 0x34d640u;
    // NOP
    // 0x34d644: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x34D644u;
    {
        const bool branch_taken_0x34d644 = (false);
        if (branch_taken_0x34d644) {
            ctx->pc = 0x34D630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34d630;
        }
    }
    ctx->pc = 0x34D64Cu;
    // 0x34d64c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34d64cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x34d650: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x34d650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x34d654: 0x0  nop
    ctx->pc = 0x34d654u;
    // NOP
label_34d658:
    // 0x34d658: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34d658u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x34d65c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34d65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34d660: 0x0  nop
    ctx->pc = 0x34d660u;
    // NOP
    // 0x34d664: 0x0  nop
    ctx->pc = 0x34d664u;
    // NOP
    // 0x34d668: 0x0  nop
    ctx->pc = 0x34d668u;
    // NOP
    // 0x34d66c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34D66Cu;
    {
        const bool branch_taken_0x34d66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34d66c) {
            ctx->pc = 0x34D658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34d658;
        }
    }
    ctx->pc = 0x34D674u;
label_34d674:
    // 0x34d674: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x34d674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x34d678: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x34d678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x34d67c: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x34d67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x34d680: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x34d680u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x34d684: 0x8ce70128  lw          $a3, 0x128($a3)
    ctx->pc = 0x34d684u;
    SET_GPR_S32(ctx, 7, (int32_t)runtime->Load32(rdram, ctx, 0x70000128u)); // MMIO: 0x70000128
    // 0x34d688: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x34d688u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 6)); // MMIO: 0x1000e010
    // 0x34d68c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34d68cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x34d690: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34d690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34d694: 0x8ca500ec  lw          $a1, 0xEC($a1)
    ctx->pc = 0x34d694u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x700000ECu)); // MMIO: 0x700000ec
    // 0x34d698: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x34d698u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x34d69c: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x34d69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x34d6a0: 0x3484fff0  ori         $a0, $a0, 0xFFF0
    ctx->pc = 0x34d6a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65520);
    // 0x34d6a4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x34d6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x34d6a8: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x34d6a8u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 7)); // MMIO: 0x1000d480
    // 0x34d6ac: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x34d6acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x34d6b0: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x34d6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x34d6b4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x34d6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x34d6b8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x34d6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x34d6bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34d6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d6c0: 0x3484d420  ori         $a0, $a0, 0xD420
    ctx->pc = 0x34d6c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54304);
    // 0x34d6c4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x34d6c4u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 2)); // MMIO: 0x1000d420
    // 0x34d6c8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34d6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x34d6cc: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x34d6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x34d6d0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x34d6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34d6d4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34d6d4u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x1000d400
    // 0x34d6d8: 0xf  sync
    ctx->pc = 0x34d6d8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34d6dc: 0x40f  sync.p
    ctx->pc = 0x34d6dcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34d6e0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34d6e4: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x34d6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000070u)); // MMIO: 0x70000070
    // 0x34d6e8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x34d6e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x34d6ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34d6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34d6f0: 0xac220070  sw          $v0, 0x70($at)
    ctx->pc = 0x34d6f0u;
    runtime->Store32(rdram, ctx, 0x70000070u, GPR_U32(ctx, 2)); // MMIO: 0x70000070
    // 0x34d6f4: 0x0  nop
    ctx->pc = 0x34d6f4u;
    // NOP
label_34d6f8:
    // 0x34d6f8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34d6fc: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x34d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000074u)); // MMIO: 0x70000074
    // 0x34d700: 0x1840003d  blez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x34D700u;
    {
        const bool branch_taken_0x34d700 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x34D704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D700u;
        // 0x34d704: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d700) {
            ctx->pc = 0x34D7F8u;
            goto label_34d7f8;
        }
    }
    ctx->pc = 0x34D708u;
    // 0x34d708: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x34d708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x34d70c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x34d70cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d400
    // 0x34d710: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x34d710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x34d714: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x34D714u;
    {
        const bool branch_taken_0x34d714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D714u;
        // 0x34d718: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d714) {
            ctx->pc = 0x34D774u;
            goto label_34d774;
        }
    }
    ctx->pc = 0x34D71Cu;
    // 0x34d71c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x34d71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x34d720: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x34d720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x34d724: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x34d724u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x34d728: 0xf  sync
    ctx->pc = 0x34d728u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34d72c: 0x40f  sync.p
    ctx->pc = 0x34d72cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_34d730:
    // 0x34d730: 0x0  nop
    ctx->pc = 0x34d730u;
    // NOP
    // 0x34d734: 0x0  nop
    ctx->pc = 0x34d734u;
    // NOP
    // 0x34d738: 0x0  nop
    ctx->pc = 0x34d738u;
    // NOP
    // 0x34d73c: 0x0  nop
    ctx->pc = 0x34d73cu;
    // NOP
    // 0x34d740: 0x0  nop
    ctx->pc = 0x34d740u;
    // NOP
    // 0x34d744: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x34D744u;
    {
        const bool branch_taken_0x34d744 = (false);
        if (branch_taken_0x34d744) {
            ctx->pc = 0x34D730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34d730;
        }
    }
    ctx->pc = 0x34D74Cu;
    // 0x34d74c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34d74cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x34d750: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x34d750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x34d754: 0x0  nop
    ctx->pc = 0x34d754u;
    // NOP
label_34d758:
    // 0x34d758: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34d758u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x34d75c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34d75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34d760: 0x0  nop
    ctx->pc = 0x34d760u;
    // NOP
    // 0x34d764: 0x0  nop
    ctx->pc = 0x34d764u;
    // NOP
    // 0x34d768: 0x0  nop
    ctx->pc = 0x34d768u;
    // NOP
    // 0x34d76c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34D76Cu;
    {
        const bool branch_taken_0x34d76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34d76c) {
            ctx->pc = 0x34D758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34d758;
        }
    }
    ctx->pc = 0x34D774u;
label_34d774:
    // 0x34d774: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x34d774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x34d778: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x34d778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x34d77c: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x34d77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x34d780: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x34d780u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x34d784: 0x8ce70130  lw          $a3, 0x130($a3)
    ctx->pc = 0x34d784u;
    SET_GPR_S32(ctx, 7, (int32_t)runtime->Load32(rdram, ctx, 0x70000130u)); // MMIO: 0x70000130
    // 0x34d788: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x34d788u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 6)); // MMIO: 0x1000e010
    // 0x34d78c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34d78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x34d790: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34d790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34d794: 0x8ca500fc  lw          $a1, 0xFC($a1)
    ctx->pc = 0x34d794u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x700000FCu)); // MMIO: 0x700000fc
    // 0x34d798: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x34d798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x34d79c: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x34d79cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x34d7a0: 0x3484fff0  ori         $a0, $a0, 0xFFF0
    ctx->pc = 0x34d7a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65520);
    // 0x34d7a4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x34d7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x34d7a8: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x34d7a8u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 7)); // MMIO: 0x1000d480
    // 0x34d7ac: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x34d7acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x34d7b0: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x34d7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x34d7b4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x34d7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x34d7b8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x34d7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x34d7bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34d7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d7c0: 0x3484d420  ori         $a0, $a0, 0xD420
    ctx->pc = 0x34d7c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54304);
    // 0x34d7c4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x34d7c4u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 2)); // MMIO: 0x1000d420
    // 0x34d7c8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34d7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x34d7cc: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x34d7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x34d7d0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x34d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34d7d4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34d7d4u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x1000d400
    // 0x34d7d8: 0xf  sync
    ctx->pc = 0x34d7d8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34d7dc: 0x40f  sync.p
    ctx->pc = 0x34d7dcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34d7e0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34d7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34d7e4: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x34d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000074u)); // MMIO: 0x70000074
    // 0x34d7e8: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x34d7e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x34d7ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34d7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34d7f0: 0xac220074  sw          $v0, 0x74($at)
    ctx->pc = 0x34d7f0u;
    runtime->Store32(rdram, ctx, 0x70000074u, GPR_U32(ctx, 2)); // MMIO: 0x70000074
    // 0x34d7f4: 0x0  nop
    ctx->pc = 0x34d7f4u;
    // NOP
label_34d7f8:
    // 0x34d7f8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34d7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34d7fc: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x34d7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000078u)); // MMIO: 0x70000078
    // 0x34d800: 0x1840003d  blez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x34D800u;
    {
        const bool branch_taken_0x34d800 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x34D804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D800u;
        // 0x34d804: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d800) {
            ctx->pc = 0x34D8F8u;
            goto label_34d8f8;
        }
    }
    ctx->pc = 0x34D808u;
    // 0x34d808: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x34d808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x34d80c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x34d80cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d400
    // 0x34d810: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x34d810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x34d814: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x34D814u;
    {
        const bool branch_taken_0x34d814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D814u;
        // 0x34d818: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d814) {
            ctx->pc = 0x34D874u;
            goto label_34d874;
        }
    }
    ctx->pc = 0x34D81Cu;
    // 0x34d81c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x34d81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x34d820: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x34d820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x34d824: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x34d824u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x34d828: 0xf  sync
    ctx->pc = 0x34d828u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34d82c: 0x40f  sync.p
    ctx->pc = 0x34d82cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_34d830:
    // 0x34d830: 0x0  nop
    ctx->pc = 0x34d830u;
    // NOP
    // 0x34d834: 0x0  nop
    ctx->pc = 0x34d834u;
    // NOP
    // 0x34d838: 0x0  nop
    ctx->pc = 0x34d838u;
    // NOP
    // 0x34d83c: 0x0  nop
    ctx->pc = 0x34d83cu;
    // NOP
    // 0x34d840: 0x0  nop
    ctx->pc = 0x34d840u;
    // NOP
    // 0x34d844: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x34D844u;
    {
        const bool branch_taken_0x34d844 = (false);
        if (branch_taken_0x34d844) {
            ctx->pc = 0x34D830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34d830;
        }
    }
    ctx->pc = 0x34D84Cu;
    // 0x34d84c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34d84cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x34d850: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x34d850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x34d854: 0x0  nop
    ctx->pc = 0x34d854u;
    // NOP
label_34d858:
    // 0x34d858: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34d858u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x34d85c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34d85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34d860: 0x0  nop
    ctx->pc = 0x34d860u;
    // NOP
    // 0x34d864: 0x0  nop
    ctx->pc = 0x34d864u;
    // NOP
    // 0x34d868: 0x0  nop
    ctx->pc = 0x34d868u;
    // NOP
    // 0x34d86c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34D86Cu;
    {
        const bool branch_taken_0x34d86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34d86c) {
            ctx->pc = 0x34D858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34d858;
        }
    }
    ctx->pc = 0x34D874u;
label_34d874:
    // 0x34d874: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x34d874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x34d878: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x34d878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x34d87c: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x34d87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x34d880: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x34d880u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x34d884: 0x8ce70134  lw          $a3, 0x134($a3)
    ctx->pc = 0x34d884u;
    SET_GPR_S32(ctx, 7, (int32_t)runtime->Load32(rdram, ctx, 0x70000134u)); // MMIO: 0x70000134
    // 0x34d888: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x34d888u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 6)); // MMIO: 0x1000e010
    // 0x34d88c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34d88cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x34d890: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34d890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34d894: 0x8ca50104  lw          $a1, 0x104($a1)
    ctx->pc = 0x34d894u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x34d898: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x34d898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x34d89c: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x34d89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x34d8a0: 0x3484fff0  ori         $a0, $a0, 0xFFF0
    ctx->pc = 0x34d8a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65520);
    // 0x34d8a4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x34d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x34d8a8: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x34d8a8u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 7)); // MMIO: 0x1000d480
    // 0x34d8ac: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x34d8acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x34d8b0: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x34d8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x34d8b4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x34d8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x34d8b8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x34d8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x34d8bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d8c0: 0x3484d420  ori         $a0, $a0, 0xD420
    ctx->pc = 0x34d8c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54304);
    // 0x34d8c4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x34d8c4u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 2)); // MMIO: 0x1000d420
    // 0x34d8c8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34d8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x34d8cc: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x34d8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x34d8d0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x34d8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34d8d4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34d8d4u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x1000d400
    // 0x34d8d8: 0xf  sync
    ctx->pc = 0x34d8d8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34d8dc: 0x40f  sync.p
    ctx->pc = 0x34d8dcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34d8e0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34d8e4: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x34d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000078u)); // MMIO: 0x70000078
    // 0x34d8e8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x34d8e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x34d8ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34d8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34d8f0: 0xac220078  sw          $v0, 0x78($at)
    ctx->pc = 0x34d8f0u;
    runtime->Store32(rdram, ctx, 0x70000078u, GPR_U32(ctx, 2)); // MMIO: 0x70000078
    // 0x34d8f4: 0x0  nop
    ctx->pc = 0x34d8f4u;
    // NOP
label_34d8f8:
    // 0x34d8f8: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x34d8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x34d8fc: 0x8cc60070  lw          $a2, 0x70($a2)
    ctx->pc = 0x34d8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x70000070u)); // MMIO: 0x70000070
    // 0x34d900: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34d900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34d904: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x34d904u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000074u)); // MMIO: 0x70000074
    // 0x34d908: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34d908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34d90c: 0x8c630078  lw          $v1, 0x78($v1)
    ctx->pc = 0x34d90cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000078u)); // MMIO: 0x70000078
    // 0x34d910: 0x46202a  slt         $a0, $v0, $a2
    ctx->pc = 0x34d910u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x34d914: 0xc4100b  movn        $v0, $a2, $a0
    ctx->pc = 0x34d914u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x34d918: 0x62282a  slt         $a1, $v1, $v0
    ctx->pc = 0x34d918u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x34d91c: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x34d91cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x34d920: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34d920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34d924: 0xac230070  sw          $v1, 0x70($at)
    ctx->pc = 0x34d924u;
    runtime->Store32(rdram, ctx, 0x70000070u, GPR_U32(ctx, 3)); // MMIO: 0x70000070
    // 0x34d928: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x34d928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x34d92c: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x34d92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x34d930: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x34d930u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x1000d400
    // 0x34d934: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x34d934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x34d938: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x34D938u;
    {
        const bool branch_taken_0x34d938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D938u;
        // 0x34d93c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d938) {
            ctx->pc = 0x34D994u;
            goto label_34d994;
        }
    }
    ctx->pc = 0x34D940u;
    // 0x34d940: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x34d940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x34d944: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x34d944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x34d948: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x34d948u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x34d94c: 0xf  sync
    ctx->pc = 0x34d94cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34d950: 0x40f  sync.p
    ctx->pc = 0x34d950u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_34d954:
    // 0x34d954: 0x0  nop
    ctx->pc = 0x34d954u;
    // NOP
    // 0x34d958: 0x0  nop
    ctx->pc = 0x34d958u;
    // NOP
    // 0x34d95c: 0x0  nop
    ctx->pc = 0x34d95cu;
    // NOP
    // 0x34d960: 0x0  nop
    ctx->pc = 0x34d960u;
    // NOP
    // 0x34d964: 0x0  nop
    ctx->pc = 0x34d964u;
    // NOP
    // 0x34d968: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x34D968u;
    {
        const bool branch_taken_0x34d968 = (false);
        if (branch_taken_0x34d968) {
            ctx->pc = 0x34D954u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34d954;
        }
    }
    ctx->pc = 0x34D970u;
    // 0x34d970: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34d970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x34d974: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x34d974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_34d978:
    // 0x34d978: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34d978u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x34d97c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34d97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34d980: 0x0  nop
    ctx->pc = 0x34d980u;
    // NOP
    // 0x34d984: 0x0  nop
    ctx->pc = 0x34d984u;
    // NOP
    // 0x34d988: 0x0  nop
    ctx->pc = 0x34d988u;
    // NOP
    // 0x34d98c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34D98Cu;
    {
        const bool branch_taken_0x34d98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34d98c) {
            ctx->pc = 0x34D978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34d978;
        }
    }
    ctx->pc = 0x34D994u;
label_34d994:
    // 0x34d994: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34d994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34d998: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x34d998u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000008u)); // MMIO: 0x70000008
    // 0x34d99c: 0x188007d8  blez        $a0, . + 4 + (0x7D8 << 2)
    ctx->pc = 0x34D99Cu;
    {
        const bool branch_taken_0x34d99c = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x34d99c) {
            ctx->pc = 0x34F900u;
            goto label_34f900;
        }
    }
    ctx->pc = 0x34D9A4u;
    // 0x34d9a4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x34d9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x34d9a8: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x34d9a8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x34d9ac: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x34d9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x34d9b0: 0x3c0c1000  lui         $t4, 0x1000
    ctx->pc = 0x34d9b0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4096 << 16));
    // 0x34d9b4: 0x3c171000  lui         $s7, 0x1000
    ctx->pc = 0x34d9b4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)4096 << 16));
    // 0x34d9b8: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x34d9b8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
    // 0x34d9bc: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x34d9bcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
    // 0x34d9c0: 0x3c161000  lui         $s6, 0x1000
    ctx->pc = 0x34d9c0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)4096 << 16));
    // 0x34d9c4: 0xafa30384  sw          $v1, 0x384($sp)
    ctx->pc = 0x34d9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 900), GPR_U32(ctx, 3));
    // 0x34d9c8: 0x356be010  ori         $t3, $t3, 0xE010
    ctx->pc = 0x34d9c8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)57360);
    // 0x34d9cc: 0x24130100  addiu       $s3, $zero, 0x100
    ctx->pc = 0x34d9ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34d9d0: 0x358cd080  ori         $t4, $t4, 0xD080
    ctx->pc = 0x34d9d0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)53376);
    // 0x34d9d4: 0x36f7d010  ori         $s7, $s7, 0xD010
    ctx->pc = 0x34d9d4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)53264);
    // 0x34d9d8: 0x37ded020  ori         $fp, $fp, 0xD020
    ctx->pc = 0x34d9d8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)53280);
    // 0x34d9dc: 0x36b5d000  ori         $s5, $s5, 0xD000
    ctx->pc = 0x34d9dcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)53248);
    // 0x34d9e0: 0x36d6e020  ori         $s6, $s6, 0xE020
    ctx->pc = 0x34d9e0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)57376);
    // 0x34d9e4: 0x0  nop
    ctx->pc = 0x34d9e4u;
    // NOP
label_34d9e8:
    // 0x34d9e8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34d9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34d9ec: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x34d9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000000Cu)); // MMIO: 0x7000000c
    // 0x34d9f0: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x34d9f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x34d9f4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34D9F4u;
    {
        const bool branch_taken_0x34d9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d9f4) {
            ctx->pc = 0x34DA1Cu;
            goto label_34da1c;
        }
    }
    ctx->pc = 0x34D9FCu;
    // 0x34d9fc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34d9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34da00: 0xac240004  sw          $a0, 0x4($at)
    ctx->pc = 0x34da00u;
    runtime->Store32(rdram, ctx, 0x70000004u, GPR_U32(ctx, 4)); // MMIO: 0x70000004
    // 0x34da04: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34da04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34da08: 0xac24000c  sw          $a0, 0xC($at)
    ctx->pc = 0x34da08u;
    runtime->Store32(rdram, ctx, 0x7000000Cu, GPR_U32(ctx, 4)); // MMIO: 0x7000000c
    // 0x34da0c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34da0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34da10: 0xac240000  sw          $a0, 0x0($at)
    ctx->pc = 0x34da10u;
    runtime->Store32(rdram, ctx, 0x70000000u, GPR_U32(ctx, 4)); // MMIO: 0x70000000
    // 0x34da14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34DA14u;
    {
        const bool branch_taken_0x34da14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34da14) {
            ctx->pc = 0x34DA38u;
            goto label_34da38;
        }
    }
    ctx->pc = 0x34DA1Cu;
label_34da1c:
    // 0x34da1c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34da20: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x34da20u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000070u)); // MMIO: 0x70000070
    // 0x34da24: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x34da24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34da28: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34da28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34da2c: 0xac220004  sw          $v0, 0x4($at)
    ctx->pc = 0x34da2cu;
    runtime->Store32(rdram, ctx, 0x70000004u, GPR_U32(ctx, 2)); // MMIO: 0x70000004
    // 0x34da30: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34da30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34da34: 0xac220000  sw          $v0, 0x0($at)
    ctx->pc = 0x34da34u;
    runtime->Store32(rdram, ctx, 0x70000000u, GPR_U32(ctx, 2)); // MMIO: 0x70000000
label_34da38:
    // 0x34da38: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34da38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34da3c: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x34da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000070u)); // MMIO: 0x70000070
    // 0x34da40: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34da40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34da44: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x34da44u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000074u)); // MMIO: 0x70000074
    // 0x34da48: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x34da48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x34da4c: 0x8cc60128  lw          $a2, 0x128($a2)
    ctx->pc = 0x34da4cu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x70000128u)); // MMIO: 0x70000128
    // 0x34da50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34da50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34da54: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x34da54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x34da58: 0x8ce70130  lw          $a3, 0x130($a3)
    ctx->pc = 0x34da58u;
    SET_GPR_S32(ctx, 7, (int32_t)runtime->Load32(rdram, ctx, 0x70000130u)); // MMIO: 0x70000130
    // 0x34da5c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x34da5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x34da60: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x34da60u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x34da64: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x34da64u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x70000000u)); // MMIO: 0x70000000
    // 0x34da68: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x34da68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x34da6c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34da6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34da70: 0x8c840078  lw          $a0, 0x78($a0)
    ctx->pc = 0x34da70u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000078u)); // MMIO: 0x70000078
    // 0x34da74: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x34da74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x34da78: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34da78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34da7c: 0x8ca50134  lw          $a1, 0x134($a1)
    ctx->pc = 0x34da7cu;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70000134u)); // MMIO: 0x70000134
    // 0x34da80: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x34da80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34da84: 0x3c097000  lui         $t1, 0x7000
    ctx->pc = 0x34da84u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
    // 0x34da88: 0x8d290108  lw          $t1, 0x108($t1)
    ctx->pc = 0x34da88u;
    SET_GPR_S32(ctx, 9, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x34da8c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x34da8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x34da90: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34da90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34da94: 0x8c420124  lw          $v0, 0x124($v0)
    ctx->pc = 0x34da94u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000124u)); // MMIO: 0x70000124
    // 0x34da98: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x34da98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x34da9c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34da9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34daa0: 0x8c63012c  lw          $v1, 0x12C($v1)
    ctx->pc = 0x34daa0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000012Cu)); // MMIO: 0x7000012c
    // 0x34daa4: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x34daa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x34daa8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34daa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34daac: 0xac29013c  sw          $t1, 0x13C($at)
    ctx->pc = 0x34daacu;
    runtime->Store32(rdram, ctx, 0x7000013Cu, GPR_U32(ctx, 9)); // MMIO: 0x7000013c
    // 0x34dab0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34dab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dab4: 0xac22017c  sw          $v0, 0x17C($at)
    ctx->pc = 0x34dab4u;
    runtime->Store32(rdram, ctx, 0x7000017Cu, GPR_U32(ctx, 2)); // MMIO: 0x7000017c
    // 0x34dab8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34dab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dabc: 0xac260184  sw          $a2, 0x184($at)
    ctx->pc = 0x34dabcu;
    runtime->Store32(rdram, ctx, 0x70000184u, GPR_U32(ctx, 6)); // MMIO: 0x70000184
    // 0x34dac0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34dac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dac4: 0xac23018c  sw          $v1, 0x18C($at)
    ctx->pc = 0x34dac4u;
    runtime->Store32(rdram, ctx, 0x7000018Cu, GPR_U32(ctx, 3)); // MMIO: 0x7000018c
    // 0x34dac8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34dac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dacc: 0xac270194  sw          $a3, 0x194($at)
    ctx->pc = 0x34daccu;
    runtime->Store32(rdram, ctx, 0x70000194u, GPR_U32(ctx, 7)); // MMIO: 0x70000194
    // 0x34dad0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34dad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dad4: 0xac25019c  sw          $a1, 0x19C($at)
    ctx->pc = 0x34dad4u;
    runtime->Store32(rdram, ctx, 0x7000019Cu, GPR_U32(ctx, 5)); // MMIO: 0x7000019c
    // 0x34dad8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34dad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dadc: 0xac280000  sw          $t0, 0x0($at)
    ctx->pc = 0x34dadcu;
    runtime->Store32(rdram, ctx, 0x70000000u, GPR_U32(ctx, 8)); // MMIO: 0x70000000
    // 0x34dae0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34dae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dae4: 0xac290138  sw          $t1, 0x138($at)
    ctx->pc = 0x34dae4u;
    runtime->Store32(rdram, ctx, 0x70000138u, GPR_U32(ctx, 9)); // MMIO: 0x70000138
    // 0x34dae8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34dae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34daec: 0xac220178  sw          $v0, 0x178($at)
    ctx->pc = 0x34daecu;
    runtime->Store32(rdram, ctx, 0x70000178u, GPR_U32(ctx, 2)); // MMIO: 0x70000178
    // 0x34daf0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34daf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34daf4: 0xac260180  sw          $a2, 0x180($at)
    ctx->pc = 0x34daf4u;
    runtime->Store32(rdram, ctx, 0x70000180u, GPR_U32(ctx, 6)); // MMIO: 0x70000180
    // 0x34daf8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34daf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dafc: 0xac230188  sw          $v1, 0x188($at)
    ctx->pc = 0x34dafcu;
    runtime->Store32(rdram, ctx, 0x70000188u, GPR_U32(ctx, 3)); // MMIO: 0x70000188
    // 0x34db00: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34db00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34db04: 0xac270190  sw          $a3, 0x190($at)
    ctx->pc = 0x34db04u;
    runtime->Store32(rdram, ctx, 0x70000190u, GPR_U32(ctx, 7)); // MMIO: 0x70000190
    // 0x34db08: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34db08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34db0c: 0xac250198  sw          $a1, 0x198($at)
    ctx->pc = 0x34db0cu;
    runtime->Store32(rdram, ctx, 0x70000198u, GPR_U32(ctx, 5)); // MMIO: 0x70000198
    // 0x34db10: 0x19400650  blez        $t2, . + 4 + (0x650 << 2)
    ctx->pc = 0x34DB10u;
    {
        const bool branch_taken_0x34db10 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x34DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DB10u;
        // 0x34db14: 0x3c040002  lui         $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34db10) {
            ctx->pc = 0x34F454u;
            goto label_34f454;
        }
    }
    ctx->pc = 0x34DB18u;
    // 0x34db18: 0x3c147000  lui         $s4, 0x7000
    ctx->pc = 0x34db18u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)28672 << 16));
    // 0x34db1c: 0xafb4037c  sw          $s4, 0x37C($sp)
    ctx->pc = 0x34db1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 892), GPR_U32(ctx, 20));
    // 0x34db20: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x34db20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x34db24: 0xafb40380  sw          $s4, 0x380($sp)
    ctx->pc = 0x34db24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 20));
    // 0x34db28: 0x3c110bb3  lui         $s1, 0xBB3
    ctx->pc = 0x34db28u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)2995 << 16));
    // 0x34db2c: 0x8fa6037c  lw          $a2, 0x37C($sp)
    ctx->pc = 0x34db2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 892)));
    // 0x34db30: 0x3c103619  lui         $s0, 0x3619
    ctx->pc = 0x34db30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)13849 << 16));
    // 0x34db34: 0x8fa90380  lw          $t1, 0x380($sp)
    ctx->pc = 0x34db34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x34db38: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x34db38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x34db3c: 0x34c60040  ori         $a2, $a2, 0x40
    ctx->pc = 0x34db3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x34db40: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x34db40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x34db44: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x34db44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x34db48: 0x35290050  ori         $t1, $t1, 0x50
    ctx->pc = 0x34db48u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)80);
    // 0x34db4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34db4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34db50: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x34db50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x34db54: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x34db54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x34db58: 0x36318435  ori         $s1, $s1, 0x8435
    ctx->pc = 0x34db58u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)33845);
    // 0x34db5c: 0xafa40378  sw          $a0, 0x378($sp)
    ctx->pc = 0x34db5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 888), GPR_U32(ctx, 4));
    // 0x34db60: 0x3610636b  ori         $s0, $s0, 0x636B
    ctx->pc = 0x34db60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)25451);
    // 0x34db64: 0xafa6037c  sw          $a2, 0x37C($sp)
    ctx->pc = 0x34db64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 892), GPR_U32(ctx, 6));
    // 0x34db68: 0x36940030  ori         $s4, $s4, 0x30
    ctx->pc = 0x34db68u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)48);
    // 0x34db6c: 0xafa90380  sw          $t1, 0x380($sp)
    ctx->pc = 0x34db6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 9));
    // 0x34db70: 0x24a7c2c8  addiu       $a3, $a1, -0x3D38
    ctx->pc = 0x34db70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951624));
    // 0x34db74: 0x0  nop
    ctx->pc = 0x34db74u;
    // NOP
label_34db78:
    // 0x34db78: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34db78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34db7c: 0x8c42013c  lw          $v0, 0x13C($v0)
    ctx->pc = 0x34db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000013Cu)); // MMIO: 0x7000013c
    // 0x34db80: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x34db80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x34db84: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x34db84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x34db88: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34db88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34db8c: 0x8c6301a0  lw          $v1, 0x1A0($v1)
    ctx->pc = 0x34db8cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34db90: 0x712018  mult        $a0, $v1, $s1
    ctx->pc = 0x34db90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x34db94: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x34db94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x34db98: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34db98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34db9c: 0xac2201a0  sw          $v0, 0x1A0($at)
    ctx->pc = 0x34db9cu;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 2)); // MMIO: 0x700001a0
    // 0x34dba0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34DBA0u;
    {
        const bool branch_taken_0x34dba0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34DBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DBA0u;
        // 0x34dba4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dba0) {
            ctx->pc = 0x34DBB8u;
            goto label_34dbb8;
        }
    }
    ctx->pc = 0x34DBA8u;
    // 0x34dba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34dba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dbac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34dbacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34dbb0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34DBB0u;
    {
        const bool branch_taken_0x34dbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DBB0u;
        // 0x34dbb4: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dbb0) {
            ctx->pc = 0x34DBD0u;
            goto label_34dbd0;
        }
    }
    ctx->pc = 0x34DBB8u;
label_34dbb8:
    // 0x34dbb8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34dbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34dbbc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34dbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34dbc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34dbc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dbc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34dbc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34dbc8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34dbc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34dbcc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34dbccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34dbd0:
    // 0x34dbd0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34dbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dbd4: 0xc42201cc  lwc1        $f2, 0x1CC($at)
    ctx->pc = 0x34dbd4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700001CCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34dbd8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34dbd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dbdc: 0xc42101c8  lwc1        $f1, 0x1C8($at)
    ctx->pc = 0x34dbdcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700001C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34dbe0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34dbe4: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x34dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34dbe8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34dbe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34dbec: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34dbecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34dbf0: 0x8c63013c  lw          $v1, 0x13C($v1)
    ctx->pc = 0x34dbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000013Cu)); // MMIO: 0x7000013c
    // 0x34dbf4: 0x512018  mult        $a0, $v0, $s1
    ctx->pc = 0x34dbf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x34dbf8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34dbf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34dbfc: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x34dbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x34dc00: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x34dc00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34dc04: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34dc04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dc08: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34dc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34dc0c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34dc0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dc10: 0xac2201a0  sw          $v0, 0x1A0($at)
    ctx->pc = 0x34dc10u;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 2)); // MMIO: 0x700001a0
    // 0x34dc14: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34dc14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34dc18: 0x4601a003  div.s       $f0, $f20, $f1
    ctx->pc = 0x34dc18u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
    // 0x34dc1c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x34dc1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x34dc20: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34DC20u;
    {
        const bool branch_taken_0x34dc20 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DC20u;
        // 0x34dc24: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dc20) {
            ctx->pc = 0x34DC38u;
            goto label_34dc38;
        }
    }
    ctx->pc = 0x34DC28u;
    // 0x34dc28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34dc28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dc2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34dc2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34dc30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34DC30u;
    {
        const bool branch_taken_0x34dc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DC30u;
        // 0x34dc34: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dc30) {
            ctx->pc = 0x34DC54u;
            goto label_34dc54;
        }
    }
    ctx->pc = 0x34DC38u;
label_34dc38:
    // 0x34dc38: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x34dc38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x34dc3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34dc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34dc40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34dc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34dc44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34dc44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dc48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34dc48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34dc4c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34dc4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34dc50: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34dc50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34dc54:
    // 0x34dc54: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34dc54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dc58: 0xc42201dc  lwc1        $f2, 0x1DC($at)
    ctx->pc = 0x34dc58u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700001DCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34dc5c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34dc60: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x34dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34dc64: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34dc64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dc68: 0xc42101d0  lwc1        $f1, 0x1D0($at)
    ctx->pc = 0x34dc68u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700001D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34dc6c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34dc6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34dc70: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x34dc70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34dc74: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34dc74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34dc78: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x34dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x34dc7c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34dc7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dc80: 0xac2201a0  sw          $v0, 0x1A0($at)
    ctx->pc = 0x34dc80u;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 2)); // MMIO: 0x700001a0
    // 0x34dc84: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x34dc84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34dc88: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34dc88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dc8c: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34dc8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34dc90: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34dc90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34dc94: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34dc94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dc98: 0xe4210030  swc1        $f1, 0x30($at)
    ctx->pc = 0x34dc98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000030u, bits); }
    // 0x34dc9c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34DC9Cu;
    {
        const bool branch_taken_0x34dc9c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DC9Cu;
        // 0x34dca0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dc9c) {
            ctx->pc = 0x34DCB4u;
            goto label_34dcb4;
        }
    }
    ctx->pc = 0x34DCA4u;
    // 0x34dca4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34dca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dca8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34dca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34dcac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34DCACu;
    {
        const bool branch_taken_0x34dcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DCACu;
        // 0x34dcb0: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dcac) {
            ctx->pc = 0x34DCCCu;
            goto label_34dccc;
        }
    }
    ctx->pc = 0x34DCB4u;
label_34dcb4:
    // 0x34dcb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34dcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34dcb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34dcb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34dcbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34dcbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dcc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34dcc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34dcc4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34dcc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34dcc8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34dcc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34dccc:
    // 0x34dccc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34dcccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dcd0: 0xc42201e0  lwc1        $f2, 0x1E0($at)
    ctx->pc = 0x34dcd0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700001E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34dcd4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34dcd8: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x34dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34dcdc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34dcdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dce0: 0xc42101d4  lwc1        $f1, 0x1D4($at)
    ctx->pc = 0x34dce0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700001D4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34dce4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34dce4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34dce8: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x34dce8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34dcec: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34dcecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34dcf0: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x34dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x34dcf4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34dcf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dcf8: 0xac2201a0  sw          $v0, 0x1A0($at)
    ctx->pc = 0x34dcf8u;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 2)); // MMIO: 0x700001a0
    // 0x34dcfc: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x34dcfcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34dd00: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34dd00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dd04: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34dd04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34dd08: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34dd08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34dd0c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34dd0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dd10: 0xe4210034  swc1        $f1, 0x34($at)
    ctx->pc = 0x34dd10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000034u, bits); }
    // 0x34dd14: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34DD14u;
    {
        const bool branch_taken_0x34dd14 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DD14u;
        // 0x34dd18: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dd14) {
            ctx->pc = 0x34DD2Cu;
            goto label_34dd2c;
        }
    }
    ctx->pc = 0x34DD1Cu;
    // 0x34dd1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34dd1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dd20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34dd20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34dd24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34DD24u;
    {
        const bool branch_taken_0x34dd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DD24u;
        // 0x34dd28: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dd24) {
            ctx->pc = 0x34DD44u;
            goto label_34dd44;
        }
    }
    ctx->pc = 0x34DD2Cu;
label_34dd2c:
    // 0x34dd2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34dd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34dd30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34dd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34dd34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34dd34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dd38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34dd38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34dd3c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34dd3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34dd40: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34dd40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34dd44:
    // 0x34dd44: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34dd44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dd48: 0xc42101e4  lwc1        $f1, 0x1E4($at)
    ctx->pc = 0x34dd48u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700001E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34dd4c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34dd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dd50: 0xc42201d8  lwc1        $f2, 0x1D8($at)
    ctx->pc = 0x34dd50u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700001D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34dd54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x34dd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dd58: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x34dd58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dd5c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34dd5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34dd60: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34dd60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34dd64: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x34dd64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34dd68: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34dd68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dd6c: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34dd6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34dd70: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x34dd70u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x34dd74: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34dd74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dd78: 0xe4220038  swc1        $f2, 0x38($at)
    ctx->pc = 0x34dd78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000038u, bits); }
    // 0x34dd7c: 0x7fa70390  sq          $a3, 0x390($sp)
    ctx->pc = 0x34dd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), GPR_VEC(ctx, 7));
    // 0x34dd80: 0x7fab03a0  sq          $t3, 0x3A0($sp)
    ctx->pc = 0x34dd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), GPR_VEC(ctx, 11));
    // 0x34dd84: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x34DD84u;
    SET_GPR_U32(ctx, 31, 0x34DD8Cu);
    ctx->pc = 0x34DD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DD84u;
    // 0x34dd88: 0x7fac03b0  sq          $t4, 0x3B0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), GPR_VEC(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x34DD84u, 0x34DD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DD8Cu;
label_34dd8c:
    // 0x34dd8c: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x34dd8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x34dd90: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x34dd90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dd94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x34dd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dd98: 0xc104d84  jal         func_413610
    ctx->pc = 0x34DD98u;
    SET_GPR_U32(ctx, 31, 0x34DDA0u);
    ctx->pc = 0x34DD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DD98u;
    // 0x34dd9c: 0x34c601f0  ori         $a2, $a2, 0x1F0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)496);
    ctx->in_delay_slot = false;
    ctx->pc = 0x413610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413610u, 0x34DD98u, 0x34DDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DDA0u;
label_34dda0:
    // 0x34dda0: 0x7ba70390  lq          $a3, 0x390($sp)
    ctx->pc = 0x34dda0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x34dda4: 0x7bab03a0  lq          $t3, 0x3A0($sp)
    ctx->pc = 0x34dda4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x34dda8: 0x8ce500c8  lw          $a1, 0xC8($a3)
    ctx->pc = 0x34dda8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 200)));
    // 0x34ddac: 0x4a00040  bltz        $a1, . + 4 + (0x40 << 2)
    ctx->pc = 0x34DDACu;
    {
        const bool branch_taken_0x34ddac = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x34DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DDACu;
        // 0x34ddb0: 0x7bac03b0  lq          $t4, 0x3B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 944)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ddac) {
            ctx->pc = 0x34DEB0u;
            goto label_34deb0;
        }
    }
    ctx->pc = 0x34DDB4u;
    // 0x34ddb4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34ddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34ddb8: 0x8c6301a0  lw          $v1, 0x1A0($v1)
    ctx->pc = 0x34ddb8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34ddbc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34ddc0: 0x8c42013c  lw          $v0, 0x13C($v0)
    ctx->pc = 0x34ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000013Cu)); // MMIO: 0x7000013c
    // 0x34ddc4: 0x713018  mult        $a2, $v1, $s1
    ctx->pc = 0x34ddc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x34ddc8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x34ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34ddcc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ddccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ddd0: 0xac22014c  sw          $v0, 0x14C($at)
    ctx->pc = 0x34ddd0u;
    runtime->Store32(rdram, ctx, 0x7000014Cu, GPR_U32(ctx, 2)); // MMIO: 0x7000014c
    // 0x34ddd4: 0xd02021  addu        $a0, $a2, $s0
    ctx->pc = 0x34ddd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x34ddd8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ddd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dddc: 0xac2401a0  sw          $a0, 0x1A0($at)
    ctx->pc = 0x34dddcu;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 4)); // MMIO: 0x700001a0
    // 0x34dde0: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34DDE0u;
    {
        const bool branch_taken_0x34dde0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x34DDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DDE0u;
        // 0x34dde4: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dde0) {
            ctx->pc = 0x34DDF8u;
            goto label_34ddf8;
        }
    }
    ctx->pc = 0x34DDE8u;
    // 0x34dde8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x34dde8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34ddec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34ddecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34ddf0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34DDF0u;
    {
        const bool branch_taken_0x34ddf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DDF0u;
        // 0x34ddf4: 0x46150842  mul.s       $f1, $f1, $f21 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ddf0) {
            ctx->pc = 0x34DE10u;
            goto label_34de10;
        }
    }
    ctx->pc = 0x34DDF8u;
label_34ddf8:
    // 0x34ddf8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x34ddf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x34ddfc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34ddfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34de00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34de00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34de04: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34de04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34de08: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x34de08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x34de0c: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x34de0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_34de10:
    // 0x34de10: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x34de10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x34de14: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x34de14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x34de18: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34de18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34de1c: 0xe42101a4  swc1        $f1, 0x1A4($at)
    ctx->pc = 0x34de1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34de20: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34de20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34de24: 0x8c42014c  lw          $v0, 0x14C($v0)
    ctx->pc = 0x34de24u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000014Cu)); // MMIO: 0x7000014c
    // 0x34de28: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34de28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34de2c: 0xc42301c4  lwc1        $f3, 0x1C4($at)
    ctx->pc = 0x34de2cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700001C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34de30: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34de30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34de34: 0xc42201c0  lwc1        $f2, 0x1C0($at)
    ctx->pc = 0x34de34u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700001C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34de38: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x34de38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x34de3c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34de3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34de40: 0xc4200030  lwc1        $f0, 0x30($at)
    ctx->pc = 0x34de40u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000030u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34de44: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x34de44u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x34de48: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x34de48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34de4c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x34de4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x34de50: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34de50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34de54: 0xc42301c4  lwc1        $f3, 0x1C4($at)
    ctx->pc = 0x34de54u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700001C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34de58: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34de58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34de5c: 0xc42201a4  lwc1        $f2, 0x1A4($at)
    ctx->pc = 0x34de5cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700001A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34de60: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34de60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34de64: 0xc42101c0  lwc1        $f1, 0x1C0($at)
    ctx->pc = 0x34de64u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700001C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34de68: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x34de68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x34de6c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34de6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34de70: 0xc4200034  lwc1        $f0, 0x34($at)
    ctx->pc = 0x34de70u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000034u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34de74: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34de74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34de78: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x34de78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34de7c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x34de7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x34de80: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34de80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34de84: 0xc42201a4  lwc1        $f2, 0x1A4($at)
    ctx->pc = 0x34de84u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700001A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34de88: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34de88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34de8c: 0xc42301c4  lwc1        $f3, 0x1C4($at)
    ctx->pc = 0x34de8cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700001C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34de90: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34de90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34de94: 0xc42101c0  lwc1        $f1, 0x1C0($at)
    ctx->pc = 0x34de94u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700001C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34de98: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x34de98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x34de9c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34de9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dea0: 0xc4200038  lwc1        $f0, 0x38($at)
    ctx->pc = 0x34dea0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000038u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34dea4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34dea4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34dea8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x34dea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34deac: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x34deacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_34deb0:
    // 0x34deb0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34deb4: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x34deb4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34deb8: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x34deb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34debc: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x34debcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x34dec0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34dec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dec4: 0xac2201a0  sw          $v0, 0x1A0($at)
    ctx->pc = 0x34dec4u;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 2)); // MMIO: 0x700001a0
    // 0x34dec8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34DEC8u;
    {
        const bool branch_taken_0x34dec8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DEC8u;
        // 0x34decc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dec8) {
            ctx->pc = 0x34DEE0u;
            goto label_34dee0;
        }
    }
    ctx->pc = 0x34DED0u;
    // 0x34ded0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34ded0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ded4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34ded4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34ded8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34DED8u;
    {
        const bool branch_taken_0x34ded8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DED8u;
        // 0x34dedc: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ded8) {
            ctx->pc = 0x34DEF8u;
            goto label_34def8;
        }
    }
    ctx->pc = 0x34DEE0u;
label_34dee0:
    // 0x34dee0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34dee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34dee4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34dee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34dee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34dee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34deec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34deecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34def0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34def0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34def4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34def4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34def8:
    // 0x34def8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34def8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34defc: 0xc42201b4  lwc1        $f2, 0x1B4($at)
    ctx->pc = 0x34defcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700001B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34df00: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34df00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34df04: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x34df04u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34df08: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34df08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34df0c: 0xc42101a8  lwc1        $f1, 0x1A8($at)
    ctx->pc = 0x34df0cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700001A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34df10: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34df10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34df14: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x34df14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34df18: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34df18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34df1c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x34df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x34df20: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34df20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34df24: 0xac2201a0  sw          $v0, 0x1A0($at)
    ctx->pc = 0x34df24u;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 2)); // MMIO: 0x700001a0
    // 0x34df28: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x34df28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34df2c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34df2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34df30: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34df30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34df34: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34df34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34df38: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34df38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34df3c: 0xe4210030  swc1        $f1, 0x30($at)
    ctx->pc = 0x34df3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000030u, bits); }
    // 0x34df40: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34DF40u;
    {
        const bool branch_taken_0x34df40 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34DF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DF40u;
        // 0x34df44: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34df40) {
            ctx->pc = 0x34DF58u;
            goto label_34df58;
        }
    }
    ctx->pc = 0x34DF48u;
    // 0x34df48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34df48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34df4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34df4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34df50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34DF50u;
    {
        const bool branch_taken_0x34df50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DF50u;
        // 0x34df54: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34df50) {
            ctx->pc = 0x34DF70u;
            goto label_34df70;
        }
    }
    ctx->pc = 0x34DF58u;
label_34df58:
    // 0x34df58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34df58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34df5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34df5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34df60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34df60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34df64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34df64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34df68: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34df68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34df6c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34df6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34df70:
    // 0x34df70: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34df70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34df74: 0xc42201b8  lwc1        $f2, 0x1B8($at)
    ctx->pc = 0x34df74u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700001B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34df78: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34df78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34df7c: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x34df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34df80: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34df80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34df84: 0xc42101ac  lwc1        $f1, 0x1AC($at)
    ctx->pc = 0x34df84u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700001ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34df88: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34df88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34df8c: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x34df8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34df90: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34df90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34df94: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x34df94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x34df98: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34df98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34df9c: 0xac2201a0  sw          $v0, 0x1A0($at)
    ctx->pc = 0x34df9cu;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 2)); // MMIO: 0x700001a0
    // 0x34dfa0: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x34dfa0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34dfa4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34dfa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dfa8: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34dfa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34dfac: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34dfacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34dfb0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34dfb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dfb4: 0xe4210034  swc1        $f1, 0x34($at)
    ctx->pc = 0x34dfb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000034u, bits); }
    // 0x34dfb8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34DFB8u;
    {
        const bool branch_taken_0x34dfb8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34DFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DFB8u;
        // 0x34dfbc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dfb8) {
            ctx->pc = 0x34DFD0u;
            goto label_34dfd0;
        }
    }
    ctx->pc = 0x34DFC0u;
    // 0x34dfc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34dfc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dfc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34dfc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34dfc8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34DFC8u;
    {
        const bool branch_taken_0x34dfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DFC8u;
        // 0x34dfcc: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dfc8) {
            ctx->pc = 0x34DFE8u;
            goto label_34dfe8;
        }
    }
    ctx->pc = 0x34DFD0u;
label_34dfd0:
    // 0x34dfd0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34dfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34dfd4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34dfd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34dfd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34dfd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dfdc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34dfdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34dfe0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34dfe0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34dfe4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34dfe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34dfe8:
    // 0x34dfe8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34dfe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dfec: 0xc42101bc  lwc1        $f1, 0x1BC($at)
    ctx->pc = 0x34dfecu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700001BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34dff0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34dff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34dff4: 0xc42201b0  lwc1        $f2, 0x1B0($at)
    ctx->pc = 0x34dff4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700001B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34dff8: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x34dff8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x34dffc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x34dffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e000: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x34e000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e004: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e004u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e008: 0x34c601f0  ori         $a2, $a2, 0x1F0
    ctx->pc = 0x34e008u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)496);
    // 0x34e00c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34e00cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34e010: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x34e010u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34e014: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e018: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34e018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34e01c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x34e01cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x34e020: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e024: 0xe4220038  swc1        $f2, 0x38($at)
    ctx->pc = 0x34e024u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000038u, bits); }
    // 0x34e028: 0x7fa70390  sq          $a3, 0x390($sp)
    ctx->pc = 0x34e028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), GPR_VEC(ctx, 7));
    // 0x34e02c: 0x7fab03a0  sq          $t3, 0x3A0($sp)
    ctx->pc = 0x34e02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), GPR_VEC(ctx, 11));
    // 0x34e030: 0xc104d64  jal         func_413590
    ctx->pc = 0x34E030u;
    SET_GPR_U32(ctx, 31, 0x34E038u);
    ctx->pc = 0x34E034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E030u;
    // 0x34e034: 0x7fac03b0  sq          $t4, 0x3B0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), GPR_VEC(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413590u, 0x34E030u, 0x34E038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E038u;
label_34e038:
    // 0x34e038: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x34e038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x34e03c: 0x7ba70390  lq          $a3, 0x390($sp)
    ctx->pc = 0x34e03cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x34e040: 0x24a4c2c8  addiu       $a0, $a1, -0x3D38
    ctx->pc = 0x34e040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951624));
    // 0x34e044: 0x7bab03a0  lq          $t3, 0x3A0($sp)
    ctx->pc = 0x34e044u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x34e048: 0x8c8300b4  lw          $v1, 0xB4($a0)
    ctx->pc = 0x34e048u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C37Cu));
    // 0x34e04c: 0x460000f  bltz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x34E04Cu;
    {
        const bool branch_taken_0x34e04c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x34E050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E04Cu;
        // 0x34e050: 0x7bac03b0  lq          $t4, 0x3B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 944)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e04c) {
            ctx->pc = 0x34E08Cu;
            goto label_34e08c;
        }
    }
    ctx->pc = 0x34E054u;
    // 0x34e054: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34e054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34e058: 0x8c42013c  lw          $v0, 0x13C($v0)
    ctx->pc = 0x34e058u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000013Cu)); // MMIO: 0x7000013c
    // 0x34e05c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e05cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e060: 0xc4200030  lwc1        $f0, 0x30($at)
    ctx->pc = 0x34e060u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000030u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34e064: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34e064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34e068: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x34e068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x34e06c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e070: 0xac220144  sw          $v0, 0x144($at)
    ctx->pc = 0x34e070u;
    runtime->Store32(rdram, ctx, 0x70000144u, GPR_U32(ctx, 2)); // MMIO: 0x70000144
    // 0x34e074: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e078: 0xc4200034  lwc1        $f0, 0x34($at)
    ctx->pc = 0x34e078u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000034u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34e07c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x34e07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x34e080: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e084: 0xc4210038  lwc1        $f1, 0x38($at)
    ctx->pc = 0x34e084u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000038u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34e088: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x34e088u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_34e08c:
    // 0x34e08c: 0x8c82009c  lw          $v0, 0x9C($a0)
    ctx->pc = 0x34e08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x34e090: 0x4420112  bltzl       $v0, . + 4 + (0x112 << 2)
    ctx->pc = 0x34E090u;
    {
        const bool branch_taken_0x34e090 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x34e090) {
            ctx->pc = 0x34E094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34E090u;
            // 0x34e094: 0x8ce200a0  lw          $v0, 0xA0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34E4DCu;
            goto label_34e4dc;
        }
    }
    ctx->pc = 0x34E098u;
    // 0x34e098: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34e098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34e09c: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x34e09cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34e0a0: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x34e0a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34e0a4: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x34e0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x34e0a8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e0ac: 0xac2201a0  sw          $v0, 0x1A0($at)
    ctx->pc = 0x34e0acu;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 2)); // MMIO: 0x700001a0
    // 0x34e0b0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E0B0u;
    {
        const bool branch_taken_0x34e0b0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34E0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E0B0u;
        // 0x34e0b4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e0b0) {
            ctx->pc = 0x34E0C8u;
            goto label_34e0c8;
        }
    }
    ctx->pc = 0x34E0B8u;
    // 0x34e0b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e0b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e0bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e0bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e0c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34E0C0u;
    {
        const bool branch_taken_0x34e0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E0C0u;
        // 0x34e0c4: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e0c0) {
            ctx->pc = 0x34E0E0u;
            goto label_34e0e0;
        }
    }
    ctx->pc = 0x34E0C8u;
label_34e0c8:
    // 0x34e0c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34e0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34e0cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34e0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34e0d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e0d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e0d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e0d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e0d8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e0d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e0dc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34e0dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34e0e0:
    // 0x34e0e0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e0e4: 0xc4220240  lwc1        $f2, 0x240($at)
    ctx->pc = 0x34e0e4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000240u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34e0e8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34e0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34e0ec: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x34e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34e0f0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e0f4: 0xc4210230  lwc1        $f1, 0x230($at)
    ctx->pc = 0x34e0f4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000230u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34e0f8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e0f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e0fc: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x34e0fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34e100: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34e100u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34e104: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x34e104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x34e108: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e10c: 0xac2201a0  sw          $v0, 0x1A0($at)
    ctx->pc = 0x34e10cu;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 2)); // MMIO: 0x700001a0
    // 0x34e110: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x34e110u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34e114: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e118: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34e118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34e11c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34e11cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34e120: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e124: 0xe4210040  swc1        $f1, 0x40($at)
    ctx->pc = 0x34e124u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000040u, bits); }
    // 0x34e128: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E128u;
    {
        const bool branch_taken_0x34e128 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E128u;
        // 0x34e12c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e128) {
            ctx->pc = 0x34E140u;
            goto label_34e140;
        }
    }
    ctx->pc = 0x34E130u;
    // 0x34e130: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e134: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e134u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e138: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34E138u;
    {
        const bool branch_taken_0x34e138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E138u;
        // 0x34e13c: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e138) {
            ctx->pc = 0x34E158u;
            goto label_34e158;
        }
    }
    ctx->pc = 0x34E140u;
label_34e140:
    // 0x34e140: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34e140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34e144: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34e144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34e148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e14c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e14cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e150: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e150u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e154: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34e154u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34e158:
    // 0x34e158: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e15c: 0xc4220244  lwc1        $f2, 0x244($at)
    ctx->pc = 0x34e15cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000244u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34e160: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34e160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34e164: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x34e164u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34e168: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e16c: 0xc4210234  lwc1        $f1, 0x234($at)
    ctx->pc = 0x34e16cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000234u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34e170: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e170u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e174: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x34e174u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34e178: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34e178u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34e17c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x34e17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x34e180: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e184: 0xac2201a0  sw          $v0, 0x1A0($at)
    ctx->pc = 0x34e184u;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 2)); // MMIO: 0x700001a0
    // 0x34e188: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x34e188u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34e18c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e190: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34e190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34e194: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34e194u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34e198: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e19c: 0xe4210044  swc1        $f1, 0x44($at)
    ctx->pc = 0x34e19cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000044u, bits); }
    // 0x34e1a0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E1A0u;
    {
        const bool branch_taken_0x34e1a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E1A0u;
        // 0x34e1a4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e1a0) {
            ctx->pc = 0x34E1B8u;
            goto label_34e1b8;
        }
    }
    ctx->pc = 0x34E1A8u;
    // 0x34e1a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e1a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e1ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e1acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e1b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34E1B0u;
    {
        const bool branch_taken_0x34e1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E1B0u;
        // 0x34e1b4: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e1b0) {
            ctx->pc = 0x34E1D0u;
            goto label_34e1d0;
        }
    }
    ctx->pc = 0x34E1B8u;
label_34e1b8:
    // 0x34e1b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34e1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34e1bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34e1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34e1c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e1c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e1c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e1c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e1c8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e1c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e1cc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34e1ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34e1d0:
    // 0x34e1d0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e1d4: 0xc4220248  lwc1        $f2, 0x248($at)
    ctx->pc = 0x34e1d4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000248u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34e1d8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34e1dc: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x34e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34e1e0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e1e4: 0xc4210238  lwc1        $f1, 0x238($at)
    ctx->pc = 0x34e1e4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000238u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34e1e8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e1e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e1ec: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x34e1ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34e1f0: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34e1f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34e1f4: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x34e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x34e1f8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e1fc: 0xac2201a0  sw          $v0, 0x1A0($at)
    ctx->pc = 0x34e1fcu;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 2)); // MMIO: 0x700001a0
    // 0x34e200: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x34e200u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34e204: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e208: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34e208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34e20c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34e20cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34e210: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e214: 0xe4210048  swc1        $f1, 0x48($at)
    ctx->pc = 0x34e214u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000048u, bits); }
    // 0x34e218: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E218u;
    {
        const bool branch_taken_0x34e218 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E218u;
        // 0x34e21c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e218) {
            ctx->pc = 0x34E230u;
            goto label_34e230;
        }
    }
    ctx->pc = 0x34E220u;
    // 0x34e220: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e224: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e228: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34E228u;
    {
        const bool branch_taken_0x34e228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E228u;
        // 0x34e22c: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e228) {
            ctx->pc = 0x34E248u;
            goto label_34e248;
        }
    }
    ctx->pc = 0x34E230u;
label_34e230:
    // 0x34e230: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34e230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34e234: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34e234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34e238: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e23c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e23cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e240: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e240u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e244: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34e244u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34e248:
    // 0x34e248: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e24c: 0xc421024c  lwc1        $f1, 0x24C($at)
    ctx->pc = 0x34e24cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x7000024Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34e250: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e254: 0xc422023c  lwc1        $f2, 0x23C($at)
    ctx->pc = 0x34e254u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x7000023Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34e258: 0x8ce300bc  lw          $v1, 0xBC($a3)
    ctx->pc = 0x34e258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 188)));
    // 0x34e25c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e25cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e260: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34e260u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34e264: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x34e264u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34e268: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e26c: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34e26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34e270: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x34e270u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x34e274: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e278: 0xe422004c  swc1        $f2, 0x4C($at)
    ctx->pc = 0x34e278u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x7000004Cu, bits); }
    // 0x34e27c: 0x4620097  bltzl       $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x34E27Cu;
    {
        const bool branch_taken_0x34e27c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x34e27c) {
            ctx->pc = 0x34E280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34E27Cu;
            // 0x34e280: 0x8ce200a0  lw          $v0, 0xA0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34E4DCu;
            goto label_34e4dc;
        }
    }
    ctx->pc = 0x34E284u;
    // 0x34e284: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34e284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34e288: 0x8c42013c  lw          $v0, 0x13C($v0)
    ctx->pc = 0x34e288u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000013Cu)); // MMIO: 0x7000013c
    // 0x34e28c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e290: 0xc4200040  lwc1        $f0, 0x40($at)
    ctx->pc = 0x34e290u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000040u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34e294: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34e294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34e298: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x34e298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x34e29c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34e29cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34e2a0: 0x8c6301a0  lw          $v1, 0x1A0($v1)
    ctx->pc = 0x34e2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34e2a4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e2a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e2a8: 0xc4200044  lwc1        $f0, 0x44($at)
    ctx->pc = 0x34e2a8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000044u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34e2ac: 0x712818  mult        $a1, $v1, $s1
    ctx->pc = 0x34e2acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x34e2b0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e2b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e2b4: 0xac220154  sw          $v0, 0x154($at)
    ctx->pc = 0x34e2b4u;
    runtime->Store32(rdram, ctx, 0x70000154u, GPR_U32(ctx, 2)); // MMIO: 0x70000154
    // 0x34e2b8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x34e2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x34e2bc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e2bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e2c0: 0xc4200048  lwc1        $f0, 0x48($at)
    ctx->pc = 0x34e2c0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000048u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34e2c4: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x34e2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x34e2c8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x34e2c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x34e2cc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e2d0: 0xac2401a0  sw          $a0, 0x1A0($at)
    ctx->pc = 0x34e2d0u;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 4)); // MMIO: 0x700001a0
    // 0x34e2d4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e2d8: 0xc421004c  lwc1        $f1, 0x4C($at)
    ctx->pc = 0x34e2d8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x7000004Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34e2dc: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E2DCu;
    {
        const bool branch_taken_0x34e2dc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x34E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E2DCu;
        // 0x34e2e0: 0xe441000c  swc1        $f1, 0xC($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e2dc) {
            ctx->pc = 0x34E2F4u;
            goto label_34e2f4;
        }
    }
    ctx->pc = 0x34E2E4u;
    // 0x34e2e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34e2e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e2e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e2e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e2ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34E2ECu;
    {
        const bool branch_taken_0x34e2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E2ECu;
        // 0x34e2f0: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e2ec) {
            ctx->pc = 0x34E310u;
            goto label_34e310;
        }
    }
    ctx->pc = 0x34E2F4u;
label_34e2f4:
    // 0x34e2f4: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x34e2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x34e2f8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x34e2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x34e2fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34e2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34e300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e304: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e304u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e308: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e308u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e30c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34e30cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34e310:
    // 0x34e310: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e314: 0xc4220260  lwc1        $f2, 0x260($at)
    ctx->pc = 0x34e314u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000260u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34e318: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e31c: 0xc4210250  lwc1        $f1, 0x250($at)
    ctx->pc = 0x34e31cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34e320: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34e320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34e324: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x34e324u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34e328: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e328u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e32c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34e32cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34e330: 0x8c630154  lw          $v1, 0x154($v1)
    ctx->pc = 0x34e330u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000154u)); // MMIO: 0x70000154
    // 0x34e334: 0x512018  mult        $a0, $v0, $s1
    ctx->pc = 0x34e334u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x34e338: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34e338u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34e33c: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x34e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x34e340: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x34e340u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34e344: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e348: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34e348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34e34c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e350: 0xac2201a0  sw          $v0, 0x1A0($at)
    ctx->pc = 0x34e350u;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 2)); // MMIO: 0x700001a0
    // 0x34e354: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x34e354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34e358: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34e358u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34e35c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x34e35cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34e360: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E360u;
    {
        const bool branch_taken_0x34e360 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34E364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E360u;
        // 0x34e364: 0xe4610010  swc1        $f1, 0x10($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e360) {
            ctx->pc = 0x34E378u;
            goto label_34e378;
        }
    }
    ctx->pc = 0x34E368u;
    // 0x34e368: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e36c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e36cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e370: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34E370u;
    {
        const bool branch_taken_0x34e370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E370u;
        // 0x34e374: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e370) {
            ctx->pc = 0x34E394u;
            goto label_34e394;
        }
    }
    ctx->pc = 0x34E378u;
label_34e378:
    // 0x34e378: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x34e378u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x34e37c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34e37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34e380: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34e380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34e384: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e388: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e388u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e38c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e38cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e390: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34e390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34e394:
    // 0x34e394: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e398: 0xc4220264  lwc1        $f2, 0x264($at)
    ctx->pc = 0x34e398u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000264u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34e39c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e3a0: 0xc4210254  lwc1        $f1, 0x254($at)
    ctx->pc = 0x34e3a0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34e3a4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34e3a8: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x34e3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34e3ac: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e3acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e3b0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34e3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34e3b4: 0x8c630154  lw          $v1, 0x154($v1)
    ctx->pc = 0x34e3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000154u)); // MMIO: 0x70000154
    // 0x34e3b8: 0x512018  mult        $a0, $v0, $s1
    ctx->pc = 0x34e3b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x34e3bc: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34e3bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34e3c0: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x34e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x34e3c4: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x34e3c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34e3c8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e3c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e3cc: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34e3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34e3d0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e3d4: 0xac2201a0  sw          $v0, 0x1A0($at)
    ctx->pc = 0x34e3d4u;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 2)); // MMIO: 0x700001a0
    // 0x34e3d8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x34e3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34e3dc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34e3dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34e3e0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x34e3e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34e3e4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E3E4u;
    {
        const bool branch_taken_0x34e3e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34E3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E3E4u;
        // 0x34e3e8: 0xe4610014  swc1        $f1, 0x14($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e3e4) {
            ctx->pc = 0x34E3FCu;
            goto label_34e3fc;
        }
    }
    ctx->pc = 0x34E3ECu;
    // 0x34e3ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e3ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e3f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e3f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e3f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34E3F4u;
    {
        const bool branch_taken_0x34e3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E3F4u;
        // 0x34e3f8: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e3f4) {
            ctx->pc = 0x34E418u;
            goto label_34e418;
        }
    }
    ctx->pc = 0x34E3FCu;
label_34e3fc:
    // 0x34e3fc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x34e3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x34e400: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34e400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34e404: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34e404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34e408: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e40c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e40cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e410: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e410u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e414: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34e414u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34e418:
    // 0x34e418: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e41c: 0xc4220268  lwc1        $f2, 0x268($at)
    ctx->pc = 0x34e41cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000268u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34e420: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e424: 0xc4210258  lwc1        $f1, 0x258($at)
    ctx->pc = 0x34e424u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34e428: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34e428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34e42c: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x34e42cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34e430: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e430u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e434: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34e434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34e438: 0x8c630154  lw          $v1, 0x154($v1)
    ctx->pc = 0x34e438u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000154u)); // MMIO: 0x70000154
    // 0x34e43c: 0x512018  mult        $a0, $v0, $s1
    ctx->pc = 0x34e43cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x34e440: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34e440u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34e444: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x34e444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x34e448: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x34e448u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34e44c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e44cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e450: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34e450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34e454: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e458: 0xac2201a0  sw          $v0, 0x1A0($at)
    ctx->pc = 0x34e458u;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 2)); // MMIO: 0x700001a0
    // 0x34e45c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x34e45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34e460: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34e460u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34e464: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x34e464u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34e468: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E468u;
    {
        const bool branch_taken_0x34e468 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E468u;
        // 0x34e46c: 0xe4610018  swc1        $f1, 0x18($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e468) {
            ctx->pc = 0x34E480u;
            goto label_34e480;
        }
    }
    ctx->pc = 0x34E470u;
    // 0x34e470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e474: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e474u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e478: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34E478u;
    {
        const bool branch_taken_0x34e478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E478u;
        // 0x34e47c: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e478) {
            ctx->pc = 0x34E49Cu;
            goto label_34e49c;
        }
    }
    ctx->pc = 0x34E480u;
label_34e480:
    // 0x34e480: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x34e480u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x34e484: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34e484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34e488: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34e488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34e48c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e48cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e490: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e494: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e494u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e498: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34e498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34e49c:
    // 0x34e49c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e4a0: 0xc423026c  lwc1        $f3, 0x26C($at)
    ctx->pc = 0x34e4a0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x7000026Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34e4a4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e4a8: 0xc421025c  lwc1        $f1, 0x25C($at)
    ctx->pc = 0x34e4a8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x7000025Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34e4ac: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34e4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34e4b0: 0x8c420154  lw          $v0, 0x154($v0)
    ctx->pc = 0x34e4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000154u)); // MMIO: 0x70000154
    // 0x34e4b4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e4b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e4b8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34e4b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34e4bc: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x34e4bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x34e4c0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e4c4: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34e4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34e4c8: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x34e4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34e4cc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x34e4ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x34e4d0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x34e4d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x34e4d4: 0xe441001c  swc1        $f1, 0x1C($v0)
    ctx->pc = 0x34e4d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x34e4d8: 0x8ce200a0  lw          $v0, 0xA0($a3)
    ctx->pc = 0x34e4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 160)));
label_34e4dc:
    // 0x34e4dc: 0x18400112  blez        $v0, . + 4 + (0x112 << 2)
    ctx->pc = 0x34E4DCu;
    {
        const bool branch_taken_0x34e4dc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x34E4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E4DCu;
        // 0x34e4e0: 0x3c050062  lui         $a1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e4dc) {
            ctx->pc = 0x34E928u;
            goto label_34e928;
        }
    }
    ctx->pc = 0x34E4E4u;
    // 0x34e4e4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34e4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34e4e8: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x34e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34e4ec: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x34e4ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34e4f0: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x34e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x34e4f4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e4f8: 0xac2201a0  sw          $v0, 0x1A0($at)
    ctx->pc = 0x34e4f8u;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 2)); // MMIO: 0x700001a0
    // 0x34e4fc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E4FCu;
    {
        const bool branch_taken_0x34e4fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34E500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E4FCu;
        // 0x34e500: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e4fc) {
            ctx->pc = 0x34E514u;
            goto label_34e514;
        }
    }
    ctx->pc = 0x34E504u;
    // 0x34e504: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e508: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e508u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e50c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34E50Cu;
    {
        const bool branch_taken_0x34e50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E50Cu;
        // 0x34e510: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e50c) {
            ctx->pc = 0x34E52Cu;
            goto label_34e52c;
        }
    }
    ctx->pc = 0x34E514u;
label_34e514:
    // 0x34e514: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34e514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34e518: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34e518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34e51c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e51cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e520: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e520u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e524: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e524u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e528: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34e528u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34e52c:
    // 0x34e52c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e530: 0xc4220278  lwc1        $f2, 0x278($at)
    ctx->pc = 0x34e530u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000278u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34e534: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34e534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34e538: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x34e538u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34e53c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e540: 0xc4210270  lwc1        $f1, 0x270($at)
    ctx->pc = 0x34e540u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000270u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34e544: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e544u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e548: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x34e548u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34e54c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34e54cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34e550: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x34e550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x34e554: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e558: 0xac2201a0  sw          $v0, 0x1A0($at)
    ctx->pc = 0x34e558u;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 2)); // MMIO: 0x700001a0
    // 0x34e55c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x34e55cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34e560: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e564: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34e564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34e568: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34e568u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34e56c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e56cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e570: 0xe4210050  swc1        $f1, 0x50($at)
    ctx->pc = 0x34e570u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000050u, bits); }
    // 0x34e574: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E574u;
    {
        const bool branch_taken_0x34e574 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E574u;
        // 0x34e578: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e574) {
            ctx->pc = 0x34E58Cu;
            goto label_34e58c;
        }
    }
    ctx->pc = 0x34E57Cu;
    // 0x34e57c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e57cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e580: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e580u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e584: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34E584u;
    {
        const bool branch_taken_0x34e584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E584u;
        // 0x34e588: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e584) {
            ctx->pc = 0x34E5A4u;
            goto label_34e5a4;
        }
    }
    ctx->pc = 0x34E58Cu;
label_34e58c:
    // 0x34e58c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34e58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34e590: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34e590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34e594: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e598: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e598u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e59c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e59cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e5a0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34e5a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34e5a4:
    // 0x34e5a4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e5a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e5a8: 0xc422027c  lwc1        $f2, 0x27C($at)
    ctx->pc = 0x34e5a8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x7000027Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34e5ac: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34e5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34e5b0: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x34e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34e5b4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e5b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e5b8: 0xc4210274  lwc1        $f1, 0x274($at)
    ctx->pc = 0x34e5b8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000274u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34e5bc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e5bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e5c0: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x34e5c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34e5c4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34e5c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34e5c8: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x34e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x34e5cc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e5d0: 0xac2201a0  sw          $v0, 0x1A0($at)
    ctx->pc = 0x34e5d0u;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 2)); // MMIO: 0x700001a0
    // 0x34e5d4: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x34e5d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34e5d8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e5dc: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34e5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34e5e0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34e5e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34e5e4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e5e8: 0xe4210054  swc1        $f1, 0x54($at)
    ctx->pc = 0x34e5e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000054u, bits); }
    // 0x34e5ec: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E5ECu;
    {
        const bool branch_taken_0x34e5ec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E5ECu;
        // 0x34e5f0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e5ec) {
            ctx->pc = 0x34E604u;
            goto label_34e604;
        }
    }
    ctx->pc = 0x34E5F4u;
    // 0x34e5f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e5f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e5f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e5f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e5fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34E5FCu;
    {
        const bool branch_taken_0x34e5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E5FCu;
        // 0x34e600: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e5fc) {
            ctx->pc = 0x34E61Cu;
            goto label_34e61c;
        }
    }
    ctx->pc = 0x34E604u;
label_34e604:
    // 0x34e604: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34e604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34e608: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34e608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34e60c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e60cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e610: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e610u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e614: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e618: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34e618u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34e61c:
    // 0x34e61c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e61cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e620: 0xc4220298  lwc1        $f2, 0x298($at)
    ctx->pc = 0x34e620u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000298u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34e624: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34e624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34e628: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x34e628u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34e62c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e62cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e630: 0xc4210290  lwc1        $f1, 0x290($at)
    ctx->pc = 0x34e630u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000290u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34e634: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e634u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e638: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x34e638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34e63c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34e63cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34e640: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x34e640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x34e644: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e648: 0xac2201a0  sw          $v0, 0x1A0($at)
    ctx->pc = 0x34e648u;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 2)); // MMIO: 0x700001a0
    // 0x34e64c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x34e64cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34e650: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e654: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34e654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34e658: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34e658u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34e65c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e660: 0xe4210058  swc1        $f1, 0x58($at)
    ctx->pc = 0x34e660u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000058u, bits); }
    // 0x34e664: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E664u;
    {
        const bool branch_taken_0x34e664 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34E668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E664u;
        // 0x34e668: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e664) {
            ctx->pc = 0x34E67Cu;
            goto label_34e67c;
        }
    }
    ctx->pc = 0x34E66Cu;
    // 0x34e66c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e66cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e670: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e670u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e674: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34E674u;
    {
        const bool branch_taken_0x34e674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E674u;
        // 0x34e678: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e674) {
            ctx->pc = 0x34E694u;
            goto label_34e694;
        }
    }
    ctx->pc = 0x34E67Cu;
label_34e67c:
    // 0x34e67c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34e67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34e680: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34e680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34e684: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e688: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e688u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e68c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e68cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e690: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34e690u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34e694:
    // 0x34e694: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e698: 0xc421029c  lwc1        $f1, 0x29C($at)
    ctx->pc = 0x34e698u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x7000029Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34e69c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e69cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e6a0: 0xc4220294  lwc1        $f2, 0x294($at)
    ctx->pc = 0x34e6a0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000294u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34e6a4: 0x8ce300c0  lw          $v1, 0xC0($a3)
    ctx->pc = 0x34e6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 192)));
    // 0x34e6a8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e6a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e6ac: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34e6acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34e6b0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x34e6b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34e6b4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e6b8: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34e6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34e6bc: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x34e6bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x34e6c0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e6c4: 0xe422005c  swc1        $f2, 0x5C($at)
    ctx->pc = 0x34e6c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x7000005Cu, bits); }
    // 0x34e6c8: 0x4600097  bltz        $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x34E6C8u;
    {
        const bool branch_taken_0x34e6c8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x34E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E6C8u;
        // 0x34e6cc: 0x3c050062  lui         $a1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e6c8) {
            ctx->pc = 0x34E928u;
            goto label_34e928;
        }
    }
    ctx->pc = 0x34E6D0u;
    // 0x34e6d0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34e6d4: 0x8c42013c  lw          $v0, 0x13C($v0)
    ctx->pc = 0x34e6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000013Cu)); // MMIO: 0x7000013c
    // 0x34e6d8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e6dc: 0xc4200050  lwc1        $f0, 0x50($at)
    ctx->pc = 0x34e6dcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000050u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34e6e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34e6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34e6e4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x34e6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x34e6e8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34e6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34e6ec: 0x8c6301a0  lw          $v1, 0x1A0($v1)
    ctx->pc = 0x34e6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34e6f0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e6f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e6f4: 0xc4200054  lwc1        $f0, 0x54($at)
    ctx->pc = 0x34e6f4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000054u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34e6f8: 0x712818  mult        $a1, $v1, $s1
    ctx->pc = 0x34e6f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x34e6fc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e700: 0xac22015c  sw          $v0, 0x15C($at)
    ctx->pc = 0x34e700u;
    runtime->Store32(rdram, ctx, 0x7000015Cu, GPR_U32(ctx, 2)); // MMIO: 0x7000015c
    // 0x34e704: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x34e704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x34e708: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e70c: 0xc4200058  lwc1        $f0, 0x58($at)
    ctx->pc = 0x34e70cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000058u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34e710: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x34e710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x34e714: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x34e714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x34e718: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e71c: 0xac2401a0  sw          $a0, 0x1A0($at)
    ctx->pc = 0x34e71cu;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 4)); // MMIO: 0x700001a0
    // 0x34e720: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e724: 0xc421005c  lwc1        $f1, 0x5C($at)
    ctx->pc = 0x34e724u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x7000005Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34e728: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E728u;
    {
        const bool branch_taken_0x34e728 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x34E72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E728u;
        // 0x34e72c: 0xe441000c  swc1        $f1, 0xC($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e728) {
            ctx->pc = 0x34E740u;
            goto label_34e740;
        }
    }
    ctx->pc = 0x34E730u;
    // 0x34e730: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34e730u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e734: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e734u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e738: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34E738u;
    {
        const bool branch_taken_0x34e738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E738u;
        // 0x34e73c: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e738) {
            ctx->pc = 0x34E75Cu;
            goto label_34e75c;
        }
    }
    ctx->pc = 0x34E740u;
label_34e740:
    // 0x34e740: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x34e740u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x34e744: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x34e744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x34e748: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34e748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34e74c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e74cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e750: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e750u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e754: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e758: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34e758u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34e75c:
    // 0x34e75c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e75cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e760: 0xc4220288  lwc1        $f2, 0x288($at)
    ctx->pc = 0x34e760u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000288u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34e764: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e768: 0xc4210280  lwc1        $f1, 0x280($at)
    ctx->pc = 0x34e768u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000280u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34e76c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34e76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34e770: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x34e770u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34e774: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e774u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e778: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34e778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34e77c: 0x8c63015c  lw          $v1, 0x15C($v1)
    ctx->pc = 0x34e77cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000015Cu)); // MMIO: 0x7000015c
    // 0x34e780: 0x512018  mult        $a0, $v0, $s1
    ctx->pc = 0x34e780u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x34e784: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34e784u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34e788: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x34e788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x34e78c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x34e78cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34e790: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e794: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34e794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34e798: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e79c: 0xac2201a0  sw          $v0, 0x1A0($at)
    ctx->pc = 0x34e79cu;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 2)); // MMIO: 0x700001a0
    // 0x34e7a0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x34e7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34e7a4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34e7a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34e7a8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x34e7a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34e7ac: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E7ACu;
    {
        const bool branch_taken_0x34e7ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E7ACu;
        // 0x34e7b0: 0xe4610010  swc1        $f1, 0x10($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e7ac) {
            ctx->pc = 0x34E7C4u;
            goto label_34e7c4;
        }
    }
    ctx->pc = 0x34E7B4u;
    // 0x34e7b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e7b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e7b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e7b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e7bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34E7BCu;
    {
        const bool branch_taken_0x34e7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E7BCu;
        // 0x34e7c0: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e7bc) {
            ctx->pc = 0x34E7E0u;
            goto label_34e7e0;
        }
    }
    ctx->pc = 0x34E7C4u;
label_34e7c4:
    // 0x34e7c4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x34e7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x34e7c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34e7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34e7cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34e7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34e7d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e7d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e7d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e7d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e7d8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e7d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e7dc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34e7dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34e7e0:
    // 0x34e7e0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e7e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e7e4: 0xc422028c  lwc1        $f2, 0x28C($at)
    ctx->pc = 0x34e7e4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x7000028Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34e7e8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e7ec: 0xc4210284  lwc1        $f1, 0x284($at)
    ctx->pc = 0x34e7ecu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34e7f0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34e7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34e7f4: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x34e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34e7f8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e7f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e7fc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34e7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34e800: 0x8c63015c  lw          $v1, 0x15C($v1)
    ctx->pc = 0x34e800u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000015Cu)); // MMIO: 0x7000015c
    // 0x34e804: 0x512018  mult        $a0, $v0, $s1
    ctx->pc = 0x34e804u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x34e808: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34e808u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34e80c: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x34e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x34e810: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x34e810u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34e814: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e818: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34e818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34e81c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e81cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e820: 0xac2201a0  sw          $v0, 0x1A0($at)
    ctx->pc = 0x34e820u;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 2)); // MMIO: 0x700001a0
    // 0x34e824: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x34e824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34e828: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34e828u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34e82c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x34e82cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34e830: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E830u;
    {
        const bool branch_taken_0x34e830 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E830u;
        // 0x34e834: 0xe4610014  swc1        $f1, 0x14($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e830) {
            ctx->pc = 0x34E848u;
            goto label_34e848;
        }
    }
    ctx->pc = 0x34E838u;
    // 0x34e838: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e83c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e83cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e840: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34E840u;
    {
        const bool branch_taken_0x34e840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E840u;
        // 0x34e844: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e840) {
            ctx->pc = 0x34E864u;
            goto label_34e864;
        }
    }
    ctx->pc = 0x34E848u;
label_34e848:
    // 0x34e848: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x34e848u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x34e84c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34e84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34e850: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34e850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34e854: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e858: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e858u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e85c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e85cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e860: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34e860u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34e864:
    // 0x34e864: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e868: 0xc42202a8  lwc1        $f2, 0x2A8($at)
    ctx->pc = 0x34e868u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34e86c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e870: 0xc42102a0  lwc1        $f1, 0x2A0($at)
    ctx->pc = 0x34e870u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34e874: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34e874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34e878: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x34e878u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34e87c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e87cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e880: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34e880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34e884: 0x8c63015c  lw          $v1, 0x15C($v1)
    ctx->pc = 0x34e884u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000015Cu)); // MMIO: 0x7000015c
    // 0x34e888: 0x512018  mult        $a0, $v0, $s1
    ctx->pc = 0x34e888u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x34e88c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34e88cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34e890: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x34e890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x34e894: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x34e894u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34e898: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e89c: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34e89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34e8a0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e8a4: 0xac2201a0  sw          $v0, 0x1A0($at)
    ctx->pc = 0x34e8a4u;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 2)); // MMIO: 0x700001a0
    // 0x34e8a8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x34e8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34e8ac: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34e8acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34e8b0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x34e8b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34e8b4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E8B4u;
    {
        const bool branch_taken_0x34e8b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E8B4u;
        // 0x34e8b8: 0xe4610018  swc1        $f1, 0x18($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e8b4) {
            ctx->pc = 0x34E8CCu;
            goto label_34e8cc;
        }
    }
    ctx->pc = 0x34E8BCu;
    // 0x34e8bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e8bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e8c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e8c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e8c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34E8C4u;
    {
        const bool branch_taken_0x34e8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E8C4u;
        // 0x34e8c8: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e8c4) {
            ctx->pc = 0x34E8E8u;
            goto label_34e8e8;
        }
    }
    ctx->pc = 0x34E8CCu;
label_34e8cc:
    // 0x34e8cc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x34e8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x34e8d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34e8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34e8d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34e8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34e8d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e8d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e8dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e8dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e8e0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e8e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e8e4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34e8e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34e8e8:
    // 0x34e8e8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e8e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e8ec: 0xc42302ac  lwc1        $f3, 0x2AC($at)
    ctx->pc = 0x34e8ecu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34e8f0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e8f4: 0xc42102a4  lwc1        $f1, 0x2A4($at)
    ctx->pc = 0x34e8f4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34e8f8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34e8fc: 0x8c42015c  lw          $v0, 0x15C($v0)
    ctx->pc = 0x34e8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000015Cu)); // MMIO: 0x7000015c
    // 0x34e900: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e900u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e904: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34e904u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34e908: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x34e908u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x34e90c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e910: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34e910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34e914: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x34e914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34e918: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x34e918u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x34e91c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x34e91cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x34e920: 0xe441001c  swc1        $f1, 0x1C($v0)
    ctx->pc = 0x34e920u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x34e924: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x34e924u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_34e928:
    // 0x34e928: 0x24a4c2c8  addiu       $a0, $a1, -0x3D38
    ctx->pc = 0x34e928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951624));
    // 0x34e92c: 0x8c8300cc  lw          $v1, 0xCC($a0)
    ctx->pc = 0x34e92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x34e930: 0x4620017  bltzl       $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x34E930u;
    {
        const bool branch_taken_0x34e930 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x34e930) {
            ctx->pc = 0x34E934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34E930u;
            // 0x34e934: 0x8c8200a4  lw          $v0, 0xA4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34E990u;
            goto label_34e990;
        }
    }
    ctx->pc = 0x34E938u;
    // 0x34e938: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34e938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34e93c: 0x8c42013c  lw          $v0, 0x13C($v0)
    ctx->pc = 0x34e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000013Cu)); // MMIO: 0x7000013c
    // 0x34e940: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34e940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34e944: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e948: 0xac220174  sw          $v0, 0x174($at)
    ctx->pc = 0x34e948u;
    runtime->Store32(rdram, ctx, 0x70000174u, GPR_U32(ctx, 2)); // MMIO: 0x70000174
    // 0x34e94c: 0xe4540028  swc1        $f20, 0x28($v0)
    ctx->pc = 0x34e94cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x34e950: 0xe4540014  swc1        $f20, 0x14($v0)
    ctx->pc = 0x34e950u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x34e954: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x34e954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x34e958: 0x8fa60378  lw          $a2, 0x378($sp)
    ctx->pc = 0x34e958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 888)));
    // 0x34e95c: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x34e95cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x34e960: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x34e960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x34e964: 0xe4560010  swc1        $f22, 0x10($v0)
    ctx->pc = 0x34e964u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x34e968: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x34e968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x34e96c: 0xe4560008  swc1        $f22, 0x8($v0)
    ctx->pc = 0x34e96cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x34e970: 0xe4560004  swc1        $f22, 0x4($v0)
    ctx->pc = 0x34e970u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x34e974: 0xe4560024  swc1        $f22, 0x24($v0)
    ctx->pc = 0x34e974u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x34e978: 0xe4560020  swc1        $f22, 0x20($v0)
    ctx->pc = 0x34e978u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x34e97c: 0xe4560018  swc1        $f22, 0x18($v0)
    ctx->pc = 0x34e97cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x34e980: 0xe4560038  swc1        $f22, 0x38($v0)
    ctx->pc = 0x34e980u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x34e984: 0xe4560034  swc1        $f22, 0x34($v0)
    ctx->pc = 0x34e984u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x34e988: 0xe4560030  swc1        $f22, 0x30($v0)
    ctx->pc = 0x34e988u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x34e98c: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x34e98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_34e990:
    // 0x34e990: 0x44000ab  bltz        $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x34E990u;
    {
        const bool branch_taken_0x34e990 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x34e990) {
            ctx->pc = 0x34EC40u;
            goto label_34ec40;
        }
    }
    ctx->pc = 0x34E998u;
    // 0x34e998: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34e998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34e99c: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x34e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34e9a0: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x34e9a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34e9a4: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x34e9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x34e9a8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e9ac: 0xac2201a0  sw          $v0, 0x1A0($at)
    ctx->pc = 0x34e9acu;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 2)); // MMIO: 0x700001a0
    // 0x34e9b0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E9B0u;
    {
        const bool branch_taken_0x34e9b0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E9B0u;
        // 0x34e9b4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e9b0) {
            ctx->pc = 0x34E9C8u;
            goto label_34e9c8;
        }
    }
    ctx->pc = 0x34E9B8u;
    // 0x34e9b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e9b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e9bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e9bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e9c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34E9C0u;
    {
        const bool branch_taken_0x34e9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E9C0u;
        // 0x34e9c4: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e9c0) {
            ctx->pc = 0x34E9E0u;
            goto label_34e9e0;
        }
    }
    ctx->pc = 0x34E9C8u;
label_34e9c8:
    // 0x34e9c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34e9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34e9cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34e9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34e9d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e9d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e9d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e9d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e9d8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e9d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e9dc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34e9dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34e9e0:
    // 0x34e9e0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e9e4: 0xc42202b8  lwc1        $f2, 0x2B8($at)
    ctx->pc = 0x34e9e4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34e9e8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34e9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34e9ec: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x34e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34e9f0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34e9f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34e9f4: 0xc42102b0  lwc1        $f1, 0x2B0($at)
    ctx->pc = 0x34e9f4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34e9f8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e9f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34e9fc: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x34e9fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34ea00: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34ea00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34ea04: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x34ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x34ea08: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ea08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ea0c: 0xac2201a0  sw          $v0, 0x1A0($at)
    ctx->pc = 0x34ea0cu;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 2)); // MMIO: 0x700001a0
    // 0x34ea10: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x34ea10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34ea14: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ea14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ea18: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34ea18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34ea1c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34ea1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34ea20: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ea20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ea24: 0xe4210060  swc1        $f1, 0x60($at)
    ctx->pc = 0x34ea24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000060u, bits); }
    // 0x34ea28: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34EA28u;
    {
        const bool branch_taken_0x34ea28 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA28u;
        // 0x34ea2c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ea28) {
            ctx->pc = 0x34EA40u;
            goto label_34ea40;
        }
    }
    ctx->pc = 0x34EA30u;
    // 0x34ea30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34ea30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ea34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34ea34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34ea38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34EA38u;
    {
        const bool branch_taken_0x34ea38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA38u;
        // 0x34ea3c: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ea38) {
            ctx->pc = 0x34EA58u;
            goto label_34ea58;
        }
    }
    ctx->pc = 0x34EA40u;
label_34ea40:
    // 0x34ea40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34ea40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34ea44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34ea44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34ea48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34ea48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ea4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34ea4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34ea50: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34ea50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34ea54: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34ea54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34ea58:
    // 0x34ea58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34ea58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34ea5c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x34ea5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x34ea60: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ea60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ea64: 0xc42102bc  lwc1        $f1, 0x2BC($at)
    ctx->pc = 0x34ea64u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ea68: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ea68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ea6c: 0xc42202b4  lwc1        $f2, 0x2B4($at)
    ctx->pc = 0x34ea6cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34ea70: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34ea70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34ea74: 0x8ce300c4  lw          $v1, 0xC4($a3)
    ctx->pc = 0x34ea74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x34ea78: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x34ea78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x34ea7c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x34ea7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34ea80: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ea80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ea84: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34ea84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34ea88: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x34ea88u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x34ea8c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ea8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ea90: 0xe4220064  swc1        $f2, 0x64($at)
    ctx->pc = 0x34ea90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000064u, bits); }
    // 0x34ea94: 0x4620073  bltzl       $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x34EA94u;
    {
        const bool branch_taken_0x34ea94 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x34ea94) {
            ctx->pc = 0x34EA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34EA94u;
            // 0x34ea98: 0x8ce200b0  lw          $v0, 0xB0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34EC64u;
            goto label_34ec64;
        }
    }
    ctx->pc = 0x34EA9Cu;
    // 0x34ea9c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34ea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34eaa0: 0x8c42013c  lw          $v0, 0x13C($v0)
    ctx->pc = 0x34eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000013Cu)); // MMIO: 0x7000013c
    // 0x34eaa4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34eaa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34eaa8: 0xc4200060  lwc1        $f0, 0x60($at)
    ctx->pc = 0x34eaa8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000060u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34eaac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34eab0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x34eab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x34eab4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34eab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34eab8: 0xac220164  sw          $v0, 0x164($at)
    ctx->pc = 0x34eab8u;
    runtime->Store32(rdram, ctx, 0x70000164u, GPR_U32(ctx, 2)); // MMIO: 0x70000164
    // 0x34eabc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34eabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34eac0: 0xc4200064  lwc1        $f0, 0x64($at)
    ctx->pc = 0x34eac0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000064u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34eac4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x34eac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x34eac8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34eac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34eacc: 0xc4210060  lwc1        $f1, 0x60($at)
    ctx->pc = 0x34eaccu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000060u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ead0: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x34ead0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x34ead4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ead4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ead8: 0xc4200064  lwc1        $f0, 0x64($at)
    ctx->pc = 0x34ead8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000064u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34eadc: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x34eadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x34eae0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34eae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34eae4: 0xc4200060  lwc1        $f0, 0x60($at)
    ctx->pc = 0x34eae4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000060u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34eae8: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x34eae8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34eaec: 0x0  nop
    ctx->pc = 0x34eaecu;
    // NOP
    // 0x34eaf0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x34EAF0u;
    {
        const bool branch_taken_0x34eaf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34eaf0) {
            ctx->pc = 0x34EAF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34EAF0u;
            // 0x34eaf4: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34EB00u;
            goto label_34eb00;
        }
    }
    ctx->pc = 0x34EAF8u;
    // 0x34eaf8: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x34eaf8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x34eafc: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x34eafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_34eb00:
    // 0x34eb00: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34eb00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34eb04: 0xc4200064  lwc1        $f0, 0x64($at)
    ctx->pc = 0x34eb04u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000064u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34eb08: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x34eb08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34eb0c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x34EB0Cu;
    {
        const bool branch_taken_0x34eb0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34eb0c) {
            ctx->pc = 0x34EB28u;
            goto label_34eb28;
        }
    }
    ctx->pc = 0x34EB14u;
    // 0x34eb14: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x34eb14u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x34eb18: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34eb1c: 0x8c420164  lw          $v0, 0x164($v0)
    ctx->pc = 0x34eb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000164u)); // MMIO: 0x70000164
    // 0x34eb20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34EB20u;
    {
        const bool branch_taken_0x34eb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EB20u;
        // 0x34eb24: 0xe440001c  swc1        $f0, 0x1C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34eb20) {
            ctx->pc = 0x34EB34u;
            goto label_34eb34;
        }
    }
    ctx->pc = 0x34EB28u;
label_34eb28:
    // 0x34eb28: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34eb2c: 0x8c420164  lw          $v0, 0x164($v0)
    ctx->pc = 0x34eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000164u)); // MMIO: 0x70000164
    // 0x34eb30: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x34eb30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_34eb34:
    // 0x34eb34: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34eb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34eb38: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x34eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34eb3c: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x34eb3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34eb40: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x34eb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x34eb44: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34eb44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34eb48: 0xac2201a0  sw          $v0, 0x1A0($at)
    ctx->pc = 0x34eb48u;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 2)); // MMIO: 0x700001a0
    // 0x34eb4c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34EB4Cu;
    {
        const bool branch_taken_0x34eb4c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34EB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EB4Cu;
        // 0x34eb50: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34eb4c) {
            ctx->pc = 0x34EB64u;
            goto label_34eb64;
        }
    }
    ctx->pc = 0x34EB54u;
    // 0x34eb54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34eb54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34eb58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34eb58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34eb5c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34EB5Cu;
    {
        const bool branch_taken_0x34eb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EB5Cu;
        // 0x34eb60: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34eb5c) {
            ctx->pc = 0x34EB7Cu;
            goto label_34eb7c;
        }
    }
    ctx->pc = 0x34EB64u;
label_34eb64:
    // 0x34eb64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34eb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34eb68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34eb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34eb6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34eb6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34eb70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34eb70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34eb74: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34eb74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34eb78: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34eb78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34eb7c:
    // 0x34eb7c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34eb7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34eb80: 0xc42202c8  lwc1        $f2, 0x2C8($at)
    ctx->pc = 0x34eb80u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34eb84: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34eb84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34eb88: 0xc42102c0  lwc1        $f1, 0x2C0($at)
    ctx->pc = 0x34eb88u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34eb8c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34eb90: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x34eb90u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34eb94: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34eb94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34eb98: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34eb98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34eb9c: 0x8c630164  lw          $v1, 0x164($v1)
    ctx->pc = 0x34eb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000164u)); // MMIO: 0x70000164
    // 0x34eba0: 0x512018  mult        $a0, $v0, $s1
    ctx->pc = 0x34eba0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x34eba4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34eba4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34eba8: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x34eba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x34ebac: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x34ebacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34ebb0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ebb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ebb4: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34ebb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34ebb8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ebb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ebbc: 0xac2201a0  sw          $v0, 0x1A0($at)
    ctx->pc = 0x34ebbcu;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 2)); // MMIO: 0x700001a0
    // 0x34ebc0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x34ebc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ebc4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34ebc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34ebc8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x34ebc8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34ebcc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34EBCCu;
    {
        const bool branch_taken_0x34ebcc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34EBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EBCCu;
        // 0x34ebd0: 0xe4610008  swc1        $f1, 0x8($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ebcc) {
            ctx->pc = 0x34EBE4u;
            goto label_34ebe4;
        }
    }
    ctx->pc = 0x34EBD4u;
    // 0x34ebd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34ebd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ebd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34ebd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34ebdc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34EBDCu;
    {
        const bool branch_taken_0x34ebdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EBDCu;
        // 0x34ebe0: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ebdc) {
            ctx->pc = 0x34EC00u;
            goto label_34ec00;
        }
    }
    ctx->pc = 0x34EBE4u;
label_34ebe4:
    // 0x34ebe4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x34ebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x34ebe8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34ebe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34ebec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34ebecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34ebf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34ebf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ebf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34ebf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34ebf8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34ebf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34ebfc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34ebfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34ec00:
    // 0x34ec00: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ec00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ec04: 0xc42302cc  lwc1        $f3, 0x2CC($at)
    ctx->pc = 0x34ec04u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002CCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34ec08: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ec08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ec0c: 0xc42102c4  lwc1        $f1, 0x2C4($at)
    ctx->pc = 0x34ec0cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ec10: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34ec14: 0x8c420164  lw          $v0, 0x164($v0)
    ctx->pc = 0x34ec14u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000164u)); // MMIO: 0x70000164
    // 0x34ec18: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34ec18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34ec1c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34ec1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34ec20: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x34ec20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x34ec24: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ec24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ec28: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34ec28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34ec2c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x34ec2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34ec30: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x34ec30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x34ec34: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x34ec34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x34ec38: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34EC38u;
    {
        const bool branch_taken_0x34ec38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EC38u;
        // 0x34ec3c: 0xe441000c  swc1        $f1, 0xC($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ec38) {
            ctx->pc = 0x34EC60u;
            goto label_34ec60;
        }
    }
    ctx->pc = 0x34EC40u;
label_34ec40:
    // 0x34ec40: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ec40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ec44: 0xc42001e8  lwc1        $f0, 0x1E8($at)
    ctx->pc = 0x34ec44u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700001E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ec48: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ec48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ec4c: 0xc42101ec  lwc1        $f1, 0x1EC($at)
    ctx->pc = 0x34ec4cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700001ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ec50: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ec50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ec54: 0xe4200060  swc1        $f0, 0x60($at)
    ctx->pc = 0x34ec54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000060u, bits); }
    // 0x34ec58: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ec58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ec5c: 0xe4210064  swc1        $f1, 0x64($at)
    ctx->pc = 0x34ec5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000064u, bits); }
label_34ec60:
    // 0x34ec60: 0x8ce200b0  lw          $v0, 0xB0($a3)
    ctx->pc = 0x34ec60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 176)));
label_34ec64:
    // 0x34ec64: 0x4400049  bltz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x34EC64u;
    {
        const bool branch_taken_0x34ec64 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x34ec64) {
            ctx->pc = 0x34ED8Cu;
            goto label_34ed8c;
        }
    }
    ctx->pc = 0x34EC6Cu;
    // 0x34ec6c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34ec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34ec70: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x34ec70u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34ec74: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x34ec74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34ec78: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x34ec78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x34ec7c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ec7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ec80: 0xac2201a0  sw          $v0, 0x1A0($at)
    ctx->pc = 0x34ec80u;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 2)); // MMIO: 0x700001a0
    // 0x34ec84: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34EC84u;
    {
        const bool branch_taken_0x34ec84 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34EC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EC84u;
        // 0x34ec88: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ec84) {
            ctx->pc = 0x34EC9Cu;
            goto label_34ec9c;
        }
    }
    ctx->pc = 0x34EC8Cu;
    // 0x34ec8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34ec8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ec90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34ec90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34ec94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34EC94u;
    {
        const bool branch_taken_0x34ec94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EC94u;
        // 0x34ec98: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ec94) {
            ctx->pc = 0x34ECB4u;
            goto label_34ecb4;
        }
    }
    ctx->pc = 0x34EC9Cu;
label_34ec9c:
    // 0x34ec9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34ec9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34eca0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34eca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34eca4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34eca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34eca8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34eca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34ecac: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34ecacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34ecb0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34ecb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34ecb4:
    // 0x34ecb4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ecb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ecb8: 0xc4210364  lwc1        $f1, 0x364($at)
    ctx->pc = 0x34ecb8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000364u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ecbc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ecbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ecc0: 0xc4220360  lwc1        $f2, 0x360($at)
    ctx->pc = 0x34ecc0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000360u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34ecc4: 0x8ce500d0  lw          $a1, 0xD0($a3)
    ctx->pc = 0x34ecc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 208)));
    // 0x34ecc8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34ecc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34eccc: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34ecccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34ecd0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x34ecd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34ecd4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ecd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ecd8: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34ecd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34ecdc: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x34ecdcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x34ece0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ece0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ece4: 0xe4220068  swc1        $f2, 0x68($at)
    ctx->pc = 0x34ece4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000068u, bits); }
    // 0x34ece8: 0x4a00028  bltz        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x34ECE8u;
    {
        const bool branch_taken_0x34ece8 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x34ece8) {
            ctx->pc = 0x34ED8Cu;
            goto label_34ed8c;
        }
    }
    ctx->pc = 0x34ECF0u;
    // 0x34ecf0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34ecf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34ecf4: 0x8c6301a0  lw          $v1, 0x1A0($v1)
    ctx->pc = 0x34ecf4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34ecf8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34ecfc: 0x8c42013c  lw          $v0, 0x13C($v0)
    ctx->pc = 0x34ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000013Cu)); // MMIO: 0x7000013c
    // 0x34ed00: 0x713018  mult        $a2, $v1, $s1
    ctx->pc = 0x34ed00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x34ed04: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x34ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34ed08: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x34ed08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x34ed0c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ed0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ed10: 0xac22016c  sw          $v0, 0x16C($at)
    ctx->pc = 0x34ed10u;
    runtime->Store32(rdram, ctx, 0x7000016Cu, GPR_U32(ctx, 2)); // MMIO: 0x7000016c
    // 0x34ed14: 0xd02021  addu        $a0, $a2, $s0
    ctx->pc = 0x34ed14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x34ed18: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ed18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ed1c: 0xac2401a0  sw          $a0, 0x1A0($at)
    ctx->pc = 0x34ed1cu;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 4)); // MMIO: 0x700001a0
    // 0x34ed20: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34ED20u;
    {
        const bool branch_taken_0x34ed20 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x34ED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ED20u;
        // 0x34ed24: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ed20) {
            ctx->pc = 0x34ED38u;
            goto label_34ed38;
        }
    }
    ctx->pc = 0x34ED28u;
    // 0x34ed28: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34ed28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ed2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34ed2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34ed30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34ED30u;
    {
        const bool branch_taken_0x34ed30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ED30u;
        // 0x34ed34: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ed30) {
            ctx->pc = 0x34ED50u;
            goto label_34ed50;
        }
    }
    ctx->pc = 0x34ED38u;
label_34ed38:
    // 0x34ed38: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x34ed38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x34ed3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34ed3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34ed40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34ed40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ed44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34ed44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34ed48: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34ed48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34ed4c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34ed4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34ed50:
    // 0x34ed50: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ed50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ed54: 0xc423036c  lwc1        $f3, 0x36C($at)
    ctx->pc = 0x34ed54u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x7000036Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34ed58: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ed58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ed5c: 0xc4210368  lwc1        $f1, 0x368($at)
    ctx->pc = 0x34ed5cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000368u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ed60: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34ed64: 0x8c42016c  lw          $v0, 0x16C($v0)
    ctx->pc = 0x34ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000016Cu)); // MMIO: 0x7000016c
    // 0x34ed68: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34ed68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34ed6c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34ed6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34ed70: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x34ed70u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x34ed74: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ed74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ed78: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34ed78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34ed7c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x34ed7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34ed80: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x34ed80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x34ed84: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x34ed84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x34ed88: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x34ed88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_34ed8c:
    // 0x34ed8c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34ed90: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x34ed90u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700000C4u)); // MMIO: 0x700000c4
    // 0x34ed94: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x34ed94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34ed98: 0x1449000f  bne         $v0, $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x34ED98u;
    {
        const bool branch_taken_0x34ed98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x34ed98) {
            ctx->pc = 0x34EDD8u;
            goto label_34edd8;
        }
    }
    ctx->pc = 0x34EDA0u;
    // 0x34eda0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34eda0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34eda4: 0x8c63017c  lw          $v1, 0x17C($v1)
    ctx->pc = 0x34eda4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000017Cu)); // MMIO: 0x7000017c
    // 0x34eda8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34eda8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34edac: 0xc4200030  lwc1        $f0, 0x30($at)
    ctx->pc = 0x34edacu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000030u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34edb0: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x34edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x34edb4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x34edb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x34edb8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34edb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34edbc: 0xac22017c  sw          $v0, 0x17C($at)
    ctx->pc = 0x34edbcu;
    runtime->Store32(rdram, ctx, 0x7000017Cu, GPR_U32(ctx, 2)); // MMIO: 0x7000017c
    // 0x34edc0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34edc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34edc4: 0xc4200034  lwc1        $f0, 0x34($at)
    ctx->pc = 0x34edc4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000034u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34edc8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x34edc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x34edcc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34edccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34edd0: 0xc4210038  lwc1        $f1, 0x38($at)
    ctx->pc = 0x34edd0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000038u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34edd4: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x34edd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_34edd8:
    // 0x34edd8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34eddc: 0x8c4200c8  lw          $v0, 0xC8($v0)
    ctx->pc = 0x34eddcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700000C8u)); // MMIO: 0x700000c8
    // 0x34ede0: 0x18400024  blez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x34EDE0u;
    {
        const bool branch_taken_0x34ede0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x34ede0) {
            ctx->pc = 0x34EE74u;
            goto label_34ee74;
        }
    }
    ctx->pc = 0x34EDE8u;
    // 0x34ede8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ede8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34edec: 0xc4200040  lwc1        $f0, 0x40($at)
    ctx->pc = 0x34edecu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000040u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34edf0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34edf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34edf4: 0x8c630184  lw          $v1, 0x184($v1)
    ctx->pc = 0x34edf4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000184u)); // MMIO: 0x70000184
    // 0x34edf8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34edf8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x34edfc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x34edfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x34ee00: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x34ee00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x34ee04: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ee04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ee08: 0xc4200044  lwc1        $f0, 0x44($at)
    ctx->pc = 0x34ee08u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000044u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ee0c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34ee0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34ee10: 0x8c630184  lw          $v1, 0x184($v1)
    ctx->pc = 0x34ee10u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000184u)); // MMIO: 0x70000184
    // 0x34ee14: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34ee14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x34ee18: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x34ee18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x34ee1c: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x34ee1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x34ee20: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ee20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ee24: 0xc4200048  lwc1        $f0, 0x48($at)
    ctx->pc = 0x34ee24u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000048u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ee28: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34ee28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34ee2c: 0x8c630184  lw          $v1, 0x184($v1)
    ctx->pc = 0x34ee2cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000184u)); // MMIO: 0x70000184
    // 0x34ee30: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34ee30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x34ee34: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x34ee34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x34ee38: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x34ee38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x34ee3c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ee3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ee40: 0xc420004c  lwc1        $f0, 0x4C($at)
    ctx->pc = 0x34ee40u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x7000004Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ee44: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34ee44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34ee48: 0x8c840184  lw          $a0, 0x184($a0)
    ctx->pc = 0x34ee48u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000184u)); // MMIO: 0x70000184
    // 0x34ee4c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34ee4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x34ee50: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x34ee50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x34ee54: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x34ee54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x34ee58: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34ee58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34ee5c: 0x8c630184  lw          $v1, 0x184($v1)
    ctx->pc = 0x34ee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000184u)); // MMIO: 0x70000184
    // 0x34ee60: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34ee64: 0x8c4200c8  lw          $v0, 0xC8($v0)
    ctx->pc = 0x34ee64u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700000C8u)); // MMIO: 0x700000c8
    // 0x34ee68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x34ee68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34ee6c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ee6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ee70: 0xac230184  sw          $v1, 0x184($at)
    ctx->pc = 0x34ee70u;
    runtime->Store32(rdram, ctx, 0x70000184u, GPR_U32(ctx, 3)); // MMIO: 0x70000184
label_34ee74:
    // 0x34ee74: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34ee74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34ee78: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x34ee78u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x700000CCu)); // MMIO: 0x700000cc
    // 0x34ee7c: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x34EE7Cu;
    {
        const bool branch_taken_0x34ee7c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x34ee7c) {
            ctx->pc = 0x34EEC8u;
            goto label_34eec8;
        }
    }
    ctx->pc = 0x34EE84u;
    // 0x34ee84: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34ee84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34ee88: 0x8c42018c  lw          $v0, 0x18C($v0)
    ctx->pc = 0x34ee88u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000018Cu)); // MMIO: 0x7000018c
    // 0x34ee8c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ee8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ee90: 0xc4200050  lwc1        $f0, 0x50($at)
    ctx->pc = 0x34ee90u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000050u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ee94: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x34ee94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34ee98: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x34ee98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x34ee9c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ee9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34eea0: 0xac23018c  sw          $v1, 0x18C($at)
    ctx->pc = 0x34eea0u;
    runtime->Store32(rdram, ctx, 0x7000018Cu, GPR_U32(ctx, 3)); // MMIO: 0x7000018c
    // 0x34eea4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34eea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34eea8: 0xc4200054  lwc1        $f0, 0x54($at)
    ctx->pc = 0x34eea8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000054u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34eeac: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x34eeacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x34eeb0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34eeb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34eeb4: 0xc4210058  lwc1        $f1, 0x58($at)
    ctx->pc = 0x34eeb4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000058u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34eeb8: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x34eeb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x34eebc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34eebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34eec0: 0xc420005c  lwc1        $f0, 0x5C($at)
    ctx->pc = 0x34eec0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x7000005Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34eec4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x34eec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_34eec8:
    // 0x34eec8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34eec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34eecc: 0x8c6300d0  lw          $v1, 0xD0($v1)
    ctx->pc = 0x34eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x700000D0u)); // MMIO: 0x700000d0
    // 0x34eed0: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x34EED0u;
    {
        const bool branch_taken_0x34eed0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x34eed0) {
            ctx->pc = 0x34EF04u;
            goto label_34ef04;
        }
    }
    ctx->pc = 0x34EED8u;
    // 0x34eed8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34eedc: 0x8c420194  lw          $v0, 0x194($v0)
    ctx->pc = 0x34eedcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000194u)); // MMIO: 0x70000194
    // 0x34eee0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34eee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34eee4: 0xc4200060  lwc1        $f0, 0x60($at)
    ctx->pc = 0x34eee4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000060u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34eee8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x34eee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34eeec: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x34eeecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x34eef0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34eef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34eef4: 0xac230194  sw          $v1, 0x194($at)
    ctx->pc = 0x34eef4u;
    runtime->Store32(rdram, ctx, 0x70000194u, GPR_U32(ctx, 3)); // MMIO: 0x70000194
    // 0x34eef8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34eef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34eefc: 0xc4200064  lwc1        $f0, 0x64($at)
    ctx->pc = 0x34eefcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000064u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ef00: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x34ef00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_34ef04:
    // 0x34ef04: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34ef04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34ef08: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x34ef08u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x700000D4u)); // MMIO: 0x700000d4
    // 0x34ef0c: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x34EF0Cu;
    {
        const bool branch_taken_0x34ef0c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x34ef0c) {
            ctx->pc = 0x34EF34u;
            goto label_34ef34;
        }
    }
    ctx->pc = 0x34EF14u;
    // 0x34ef14: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34ef14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34ef18: 0x8c42019c  lw          $v0, 0x19C($v0)
    ctx->pc = 0x34ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000019Cu)); // MMIO: 0x7000019c
    // 0x34ef1c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ef1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ef20: 0xc4200068  lwc1        $f0, 0x68($at)
    ctx->pc = 0x34ef20u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000068u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ef24: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x34ef24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34ef28: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x34ef28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x34ef2c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ef2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ef30: 0xac23019c  sw          $v1, 0x19C($at)
    ctx->pc = 0x34ef30u;
    runtime->Store32(rdram, ctx, 0x7000019Cu, GPR_U32(ctx, 3)); // MMIO: 0x7000019c
label_34ef34:
    // 0x34ef34: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34ef34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34ef38: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x34ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700000C4u)); // MMIO: 0x700000c4
    // 0x34ef3c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x34ef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x34ef40: 0x14430135  bne         $v0, $v1, . + 4 + (0x135 << 2)
    ctx->pc = 0x34EF40u;
    {
        const bool branch_taken_0x34ef40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x34ef40) {
            ctx->pc = 0x34F418u;
            goto label_34f418;
        }
    }
    ctx->pc = 0x34EF48u;
    // 0x34ef48: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34ef4c: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x34ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34ef50: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x34ef50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34ef54: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x34ef54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x34ef58: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ef58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ef5c: 0xac2201a0  sw          $v0, 0x1A0($at)
    ctx->pc = 0x34ef5cu;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 2)); // MMIO: 0x700001a0
    // 0x34ef60: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34EF60u;
    {
        const bool branch_taken_0x34ef60 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EF60u;
        // 0x34ef64: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ef60) {
            ctx->pc = 0x34EF78u;
            goto label_34ef78;
        }
    }
    ctx->pc = 0x34EF68u;
    // 0x34ef68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34ef68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ef6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34ef6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34ef70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34EF70u;
    {
        const bool branch_taken_0x34ef70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EF70u;
        // 0x34ef74: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ef70) {
            ctx->pc = 0x34EF90u;
            goto label_34ef90;
        }
    }
    ctx->pc = 0x34EF78u;
label_34ef78:
    // 0x34ef78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34ef78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34ef7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34ef7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34ef80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34ef80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ef84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34ef84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34ef88: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34ef88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34ef8c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34ef8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34ef90:
    // 0x34ef90: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ef90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ef94: 0xc422032c  lwc1        $f2, 0x32C($at)
    ctx->pc = 0x34ef94u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x7000032Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34ef98: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34ef9c: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x34ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34efa0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34efa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34efa4: 0xc4210320  lwc1        $f1, 0x320($at)
    ctx->pc = 0x34efa4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000320u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34efa8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34efa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34efac: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x34efacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34efb0: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34efb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34efb4: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x34efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x34efb8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34efb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34efbc: 0xac2201a0  sw          $v0, 0x1A0($at)
    ctx->pc = 0x34efbcu;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 2)); // MMIO: 0x700001a0
    // 0x34efc0: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x34efc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34efc4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34efc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34efc8: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34efc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34efcc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34efccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34efd0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34efd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34efd4: 0xe4210040  swc1        $f1, 0x40($at)
    ctx->pc = 0x34efd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000040u, bits); }
    // 0x34efd8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34EFD8u;
    {
        const bool branch_taken_0x34efd8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34EFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EFD8u;
        // 0x34efdc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34efd8) {
            ctx->pc = 0x34EFF0u;
            goto label_34eff0;
        }
    }
    ctx->pc = 0x34EFE0u;
    // 0x34efe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34efe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34efe4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34efe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34efe8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34EFE8u;
    {
        const bool branch_taken_0x34efe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EFE8u;
        // 0x34efec: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34efe8) {
            ctx->pc = 0x34F008u;
            goto label_34f008;
        }
    }
    ctx->pc = 0x34EFF0u;
label_34eff0:
    // 0x34eff0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34eff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34eff4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34eff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34eff8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34eff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34effc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34effcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34f000: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34f000u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34f004: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34f004u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34f008:
    // 0x34f008: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f00c: 0xc4220330  lwc1        $f2, 0x330($at)
    ctx->pc = 0x34f00cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000330u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34f010: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34f010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34f014: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x34f014u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34f018: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f01c: 0xc4210324  lwc1        $f1, 0x324($at)
    ctx->pc = 0x34f01cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000324u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f020: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34f020u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34f024: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x34f024u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34f028: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34f028u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34f02c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x34f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x34f030: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f034: 0xac2201a0  sw          $v0, 0x1A0($at)
    ctx->pc = 0x34f034u;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 2)); // MMIO: 0x700001a0
    // 0x34f038: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x34f038u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34f03c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f03cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f040: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34f040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34f044: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34f044u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34f048: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f04c: 0xe4210044  swc1        $f1, 0x44($at)
    ctx->pc = 0x34f04cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000044u, bits); }
    // 0x34f050: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34F050u;
    {
        const bool branch_taken_0x34f050 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34F054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F050u;
        // 0x34f054: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f050) {
            ctx->pc = 0x34F068u;
            goto label_34f068;
        }
    }
    ctx->pc = 0x34F058u;
    // 0x34f058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f05c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34f05cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34f060: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34F060u;
    {
        const bool branch_taken_0x34f060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F060u;
        // 0x34f064: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f060) {
            ctx->pc = 0x34F080u;
            goto label_34f080;
        }
    }
    ctx->pc = 0x34F068u;
label_34f068:
    // 0x34f068: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34f068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34f06c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34f06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34f070: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f074: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34f074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34f078: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34f078u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34f07c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34f07cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34f080:
    // 0x34f080: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f084: 0xc4210334  lwc1        $f1, 0x334($at)
    ctx->pc = 0x34f084u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000334u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f088: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f08c: 0xc4220328  lwc1        $f2, 0x328($at)
    ctx->pc = 0x34f08cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000328u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34f090: 0x8fa4037c  lw          $a0, 0x37C($sp)
    ctx->pc = 0x34f090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 892)));
    // 0x34f094: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34f094u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34f098: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x34f098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f09c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34f09cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34f0a0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x34f0a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34f0a4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f0a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f0a8: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34f0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34f0ac: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x34f0acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x34f0b0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f0b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f0b4: 0xe4220048  swc1        $f2, 0x48($at)
    ctx->pc = 0x34f0b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000048u, bits); }
    // 0x34f0b8: 0x7fa70390  sq          $a3, 0x390($sp)
    ctx->pc = 0x34f0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), GPR_VEC(ctx, 7));
    // 0x34f0bc: 0x7fab03a0  sq          $t3, 0x3A0($sp)
    ctx->pc = 0x34f0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), GPR_VEC(ctx, 11));
    // 0x34f0c0: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x34F0C0u;
    SET_GPR_U32(ctx, 31, 0x34F0C8u);
    ctx->pc = 0x34F0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F0C0u;
    // 0x34f0c4: 0x7fac03b0  sq          $t4, 0x3B0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), GPR_VEC(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x34F0C0u, 0x34F0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F0C8u;
label_34f0c8:
    // 0x34f0c8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34f0cc: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x34f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34f0d0: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x34f0d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34f0d4: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x34f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x34f0d8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f0d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f0dc: 0xac2201a0  sw          $v0, 0x1A0($at)
    ctx->pc = 0x34f0dcu;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 2)); // MMIO: 0x700001a0
    // 0x34f0e0: 0x7ba70390  lq          $a3, 0x390($sp)
    ctx->pc = 0x34f0e0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x34f0e4: 0x7bab03a0  lq          $t3, 0x3A0($sp)
    ctx->pc = 0x34f0e4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x34f0e8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34F0E8u;
    {
        const bool branch_taken_0x34f0e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F0E8u;
        // 0x34f0ec: 0x7bac03b0  lq          $t4, 0x3B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 944)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f0e8) {
            ctx->pc = 0x34F100u;
            goto label_34f100;
        }
    }
    ctx->pc = 0x34F0F0u;
    // 0x34f0f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f0f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f0f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34f0f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34f0f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34F0F8u;
    {
        const bool branch_taken_0x34f0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F0F8u;
        // 0x34f0fc: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f0f8) {
            ctx->pc = 0x34F11Cu;
            goto label_34f11c;
        }
    }
    ctx->pc = 0x34F100u;
label_34f100:
    // 0x34f100: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x34f100u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x34f104: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34f104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34f108: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34f108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34f10c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f10cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f110: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34f110u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34f114: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34f114u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34f118: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34f118u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34f11c:
    // 0x34f11c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f120: 0xc4220344  lwc1        $f2, 0x344($at)
    ctx->pc = 0x34f120u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000344u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34f124: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34f124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34f128: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x34f128u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34f12c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f130: 0xc4210338  lwc1        $f1, 0x338($at)
    ctx->pc = 0x34f130u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000338u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f134: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34f134u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34f138: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x34f138u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34f13c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34f13cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34f140: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x34f140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x34f144: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f148: 0xac2201a0  sw          $v0, 0x1A0($at)
    ctx->pc = 0x34f148u;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 2)); // MMIO: 0x700001a0
    // 0x34f14c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x34f14cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34f150: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f154: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34f154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34f158: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34f158u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34f15c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f15cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f160: 0xe4210050  swc1        $f1, 0x50($at)
    ctx->pc = 0x34f160u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000050u, bits); }
    // 0x34f164: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34F164u;
    {
        const bool branch_taken_0x34f164 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F164u;
        // 0x34f168: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f164) {
            ctx->pc = 0x34F17Cu;
            goto label_34f17c;
        }
    }
    ctx->pc = 0x34F16Cu;
    // 0x34f16c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f16cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f170: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34f170u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34f174: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34F174u;
    {
        const bool branch_taken_0x34f174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F174u;
        // 0x34f178: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f174) {
            ctx->pc = 0x34F194u;
            goto label_34f194;
        }
    }
    ctx->pc = 0x34F17Cu;
label_34f17c:
    // 0x34f17c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34f17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34f180: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34f180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34f184: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f188: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34f188u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34f18c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34f18cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34f190: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34f190u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34f194:
    // 0x34f194: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f198: 0xc4220348  lwc1        $f2, 0x348($at)
    ctx->pc = 0x34f198u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000348u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34f19c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34f1a0: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x34f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34f1a4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f1a8: 0xc421033c  lwc1        $f1, 0x33C($at)
    ctx->pc = 0x34f1a8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x7000033Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f1ac: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34f1acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34f1b0: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x34f1b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34f1b4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34f1b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34f1b8: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x34f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x34f1bc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f1c0: 0xac2201a0  sw          $v0, 0x1A0($at)
    ctx->pc = 0x34f1c0u;
    runtime->Store32(rdram, ctx, 0x700001A0u, GPR_U32(ctx, 2)); // MMIO: 0x700001a0
    // 0x34f1c4: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x34f1c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34f1c8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f1c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f1cc: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34f1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34f1d0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34f1d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34f1d4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f1d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f1d8: 0xe4210054  swc1        $f1, 0x54($at)
    ctx->pc = 0x34f1d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000054u, bits); }
    // 0x34f1dc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34F1DCu;
    {
        const bool branch_taken_0x34f1dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34F1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F1DCu;
        // 0x34f1e0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f1dc) {
            ctx->pc = 0x34F1F4u;
            goto label_34f1f4;
        }
    }
    ctx->pc = 0x34F1E4u;
    // 0x34f1e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f1e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f1e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34f1e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34f1ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34F1ECu;
    {
        const bool branch_taken_0x34f1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F1ECu;
        // 0x34f1f0: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f1ec) {
            ctx->pc = 0x34F20Cu;
            goto label_34f20c;
        }
    }
    ctx->pc = 0x34F1F4u;
label_34f1f4:
    // 0x34f1f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34f1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34f1f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34f1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34f1fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f1fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f200: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34f200u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34f204: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34f204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34f208: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34f208u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_34f20c:
    // 0x34f20c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f20cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f210: 0xc421034c  lwc1        $f1, 0x34C($at)
    ctx->pc = 0x34f210u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x7000034Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f214: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f218: 0xc4220340  lwc1        $f2, 0x340($at)
    ctx->pc = 0x34f218u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34f21c: 0x8fa40380  lw          $a0, 0x380($sp)
    ctx->pc = 0x34f21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x34f220: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34f220u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34f224: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x34f224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f228: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x34f228u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34f22c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x34f22cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34f230: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f234: 0xe42001a4  swc1        $f0, 0x1A4($at)
    ctx->pc = 0x34f234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700001A4u, bits); }
    // 0x34f238: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x34f238u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x34f23c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f240: 0xe4220058  swc1        $f2, 0x58($at)
    ctx->pc = 0x34f240u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000058u, bits); }
    // 0x34f244: 0x7fa70390  sq          $a3, 0x390($sp)
    ctx->pc = 0x34f244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), GPR_VEC(ctx, 7));
    // 0x34f248: 0x7fab03a0  sq          $t3, 0x3A0($sp)
    ctx->pc = 0x34f248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), GPR_VEC(ctx, 11));
    // 0x34f24c: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x34F24Cu;
    SET_GPR_U32(ctx, 31, 0x34F254u);
    ctx->pc = 0x34F250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F24Cu;
    // 0x34f250: 0x7fac03b0  sq          $t4, 0x3B0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), GPR_VEC(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x34F24Cu, 0x34F254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F254u;
label_34f254:
    // 0x34f254: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f258: 0xc4200040  lwc1        $f0, 0x40($at)
    ctx->pc = 0x34f258u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000040u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f25c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34f25cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34f260: 0x8c63017c  lw          $v1, 0x17C($v1)
    ctx->pc = 0x34f260u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000017Cu)); // MMIO: 0x7000017c
    // 0x34f264: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x34f264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x34f268: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f26c: 0xc4210044  lwc1        $f1, 0x44($at)
    ctx->pc = 0x34f26cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000044u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f270: 0xe4610024  swc1        $f1, 0x24($v1)
    ctx->pc = 0x34f270u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x34f274: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f278: 0xc4200048  lwc1        $f0, 0x48($at)
    ctx->pc = 0x34f278u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000048u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f27c: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x34f27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x34f280: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f284: 0xc4260044  lwc1        $f6, 0x44($at)
    ctx->pc = 0x34f284u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000044u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x34f288: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f28c: 0xc4220058  lwc1        $f2, 0x58($at)
    ctx->pc = 0x34f28cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000058u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34f290: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f294: 0xc4210054  lwc1        $f1, 0x54($at)
    ctx->pc = 0x34f294u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000054u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f298: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f29c: 0xc4200048  lwc1        $f0, 0x48($at)
    ctx->pc = 0x34f29cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000048u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f2a0: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x34f2a0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x34f2a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x34f2a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34f2a8: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x34f2a8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x34f2ac: 0xe4660000  swc1        $f6, 0x0($v1)
    ctx->pc = 0x34f2acu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x34f2b0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f2b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f2b4: 0xc4220050  lwc1        $f2, 0x50($at)
    ctx->pc = 0x34f2b4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000050u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34f2b8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f2bc: 0xc4210058  lwc1        $f1, 0x58($at)
    ctx->pc = 0x34f2bcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000058u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f2c0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f2c4: 0xc4250048  lwc1        $f5, 0x48($at)
    ctx->pc = 0x34f2c4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000048u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x34f2c8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f2cc: 0xc4200040  lwc1        $f0, 0x40($at)
    ctx->pc = 0x34f2ccu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000040u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f2d0: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x34f2d0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x34f2d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x34f2d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34f2d8: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x34f2d8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x34f2dc: 0xe4650004  swc1        $f5, 0x4($v1)
    ctx->pc = 0x34f2dcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x34f2e0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f2e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f2e4: 0xc4230040  lwc1        $f3, 0x40($at)
    ctx->pc = 0x34f2e4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000040u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34f2e8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f2e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f2ec: 0xc4220054  lwc1        $f2, 0x54($at)
    ctx->pc = 0x34f2ecu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000054u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34f2f0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f2f4: 0xc4200044  lwc1        $f0, 0x44($at)
    ctx->pc = 0x34f2f4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000044u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f2f8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f2fc: 0xc4210050  lwc1        $f1, 0x50($at)
    ctx->pc = 0x34f2fcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000050u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f300: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x34f300u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x34f304: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x34f304u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34f308: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x34f308u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x34f30c: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x34f30cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x34f310: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f314: 0xc4240048  lwc1        $f4, 0x48($at)
    ctx->pc = 0x34f314u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000048u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34f318: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f31c: 0xc4200044  lwc1        $f0, 0x44($at)
    ctx->pc = 0x34f31cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000044u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f320: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x34f320u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x34f324: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x34f324u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x34f328: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x34f328u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x34f32c: 0xe4640010  swc1        $f4, 0x10($v1)
    ctx->pc = 0x34f32cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34f330: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f334: 0xc4220040  lwc1        $f2, 0x40($at)
    ctx->pc = 0x34f334u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000040u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34f338: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f33c: 0xc4200048  lwc1        $f0, 0x48($at)
    ctx->pc = 0x34f33cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000048u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f340: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x34f340u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x34f344: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x34f344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x34f348: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x34f348u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x34f34c: 0xe4620014  swc1        $f2, 0x14($v1)
    ctx->pc = 0x34f34cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x34f350: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f354: 0xc4210044  lwc1        $f1, 0x44($at)
    ctx->pc = 0x34f354u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000044u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f358: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f35c: 0xc4200040  lwc1        $f0, 0x40($at)
    ctx->pc = 0x34f35cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000040u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f360: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x34f360u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x34f364: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x34f364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x34f368: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x34f368u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34f36c: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x34f36cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x34f370: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f374: 0xc4200060  lwc1        $f0, 0x60($at)
    ctx->pc = 0x34f374u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000060u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f378: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x34f378u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x34f37c: 0xe4660000  swc1        $f6, 0x0($v1)
    ctx->pc = 0x34f37cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x34f380: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f384: 0xc4200060  lwc1        $f0, 0x60($at)
    ctx->pc = 0x34f384u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000060u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f388: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x34f388u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x34f38c: 0xe4650004  swc1        $f5, 0x4($v1)
    ctx->pc = 0x34f38cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x34f390: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f394: 0xc4200060  lwc1        $f0, 0x60($at)
    ctx->pc = 0x34f394u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000060u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f398: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x34f398u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x34f39c: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x34f39cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x34f3a0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f3a4: 0xc4200064  lwc1        $f0, 0x64($at)
    ctx->pc = 0x34f3a4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000064u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f3a8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x34f3a8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x34f3ac: 0xe4640010  swc1        $f4, 0x10($v1)
    ctx->pc = 0x34f3acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34f3b0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f3b4: 0xc4200064  lwc1        $f0, 0x64($at)
    ctx->pc = 0x34f3b4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000064u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f3b8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x34f3b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x34f3bc: 0xe4620014  swc1        $f2, 0x14($v1)
    ctx->pc = 0x34f3bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x34f3c0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f3c4: 0xc4200064  lwc1        $f0, 0x64($at)
    ctx->pc = 0x34f3c4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000064u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f3c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x34f3c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34f3cc: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x34f3ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x34f3d0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f3d4: 0xc4200030  lwc1        $f0, 0x30($at)
    ctx->pc = 0x34f3d4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000030u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f3d8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34f3dc: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x34f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700000C4u)); // MMIO: 0x700000c4
    // 0x34f3e0: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x34f3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x34f3e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34f3e8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f3ec: 0xc4210034  lwc1        $f1, 0x34($at)
    ctx->pc = 0x34f3ecu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000034u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f3f0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f3f4: 0xac22017c  sw          $v0, 0x17C($at)
    ctx->pc = 0x34f3f4u;
    runtime->Store32(rdram, ctx, 0x7000017Cu, GPR_U32(ctx, 2)); // MMIO: 0x7000017c
    // 0x34f3f8: 0xe4610034  swc1        $f1, 0x34($v1)
    ctx->pc = 0x34f3f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x34f3fc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f400: 0xc4200038  lwc1        $f0, 0x38($at)
    ctx->pc = 0x34f400u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000038u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f404: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x34f404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x34f408: 0x7bac03b0  lq          $t4, 0x3B0($sp)
    ctx->pc = 0x34f408u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x34f40c: 0x7bab03a0  lq          $t3, 0x3A0($sp)
    ctx->pc = 0x34f40cu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x34f410: 0x7ba70390  lq          $a3, 0x390($sp)
    ctx->pc = 0x34f410u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x34f414: 0x0  nop
    ctx->pc = 0x34f414u;
    // NOP
label_34f418:
    // 0x34f418: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34f418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34f41c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34f41cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000000u)); // MMIO: 0x70000000
    // 0x34f420: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34f420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34f424: 0x8c63013c  lw          $v1, 0x13C($v1)
    ctx->pc = 0x34f424u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000013Cu)); // MMIO: 0x7000013c
    // 0x34f428: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34f428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34f42c: 0x8c8400c0  lw          $a0, 0xC0($a0)
    ctx->pc = 0x34f42cu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x700000C0u)); // MMIO: 0x700000c0
    // 0x34f430: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34f430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f434: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x34f434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x34f438: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34f438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34f43c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f43cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f440: 0xac220000  sw          $v0, 0x0($at)
    ctx->pc = 0x34f440u;
    runtime->Store32(rdram, ctx, 0x70000000u, GPR_U32(ctx, 2)); // MMIO: 0x70000000
    // 0x34f444: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f448: 0xac23013c  sw          $v1, 0x13C($at)
    ctx->pc = 0x34f448u;
    runtime->Store32(rdram, ctx, 0x7000013Cu, GPR_U32(ctx, 3)); // MMIO: 0x7000013c
    // 0x34f44c: 0x1ca0f9ca  bgtz        $a1, . + 4 + (-0x636 << 2)
    ctx->pc = 0x34F44Cu;
    {
        const bool branch_taken_0x34f44c = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x34f44c) {
            ctx->pc = 0x34DB78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34db78;
        }
    }
    ctx->pc = 0x34F454u;
label_34f454:
    // 0x34f454: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34f454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34f458: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x34f458u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x34f45c: 0xad730000  sw          $s3, 0x0($t3)
    ctx->pc = 0x34f45cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 19));
    // 0x34f460: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34f460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34f464: 0x8c6300dc  lw          $v1, 0xDC($v1)
    ctx->pc = 0x34f464u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x700000DCu)); // MMIO: 0x700000dc
    // 0x34f468: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x34f468u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x34f46c: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x34f46cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x34f470: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34f470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34f474: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x34f474u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000004u)); // MMIO: 0x70000004
    // 0x34f478: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34f478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34f47c: 0x8c6300c0  lw          $v1, 0xC0($v1)
    ctx->pc = 0x34f47cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x700000C0u)); // MMIO: 0x700000c0
    // 0x34f480: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x34f480u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34f484: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x34f484u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x34f488: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x34f488u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x34f48c: 0xaeb30000  sw          $s3, 0x0($s5)
    ctx->pc = 0x34f48cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 19));
    // 0x34f490: 0xf  sync
    ctx->pc = 0x34f490u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34f494: 0x40f  sync.p
    ctx->pc = 0x34f494u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34f498: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34f498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34f49c: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x34f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700000C4u)); // MMIO: 0x700000c4
    // 0x34f4a0: 0x18400025  blez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x34F4A0u;
    {
        const bool branch_taken_0x34f4a0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x34f4a0) {
            ctx->pc = 0x34F538u;
            goto label_34f538;
        }
    }
    ctx->pc = 0x34F4A8u;
    // 0x34f4a8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x34f4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x34f4ac: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34f4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34f4b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x34F4B0u;
    {
        const bool branch_taken_0x34f4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f4b0) {
            ctx->pc = 0x34F4E0u;
            goto label_34f4e0;
        }
    }
    ctx->pc = 0x34F4B8u;
    // 0x34f4b8: 0xaed30000  sw          $s3, 0x0($s6)
    ctx->pc = 0x34f4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 19));
    // 0x34f4bc: 0xf  sync
    ctx->pc = 0x34f4bcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34f4c0: 0x40f  sync.p
    ctx->pc = 0x34f4c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_34f4c4:
    // 0x34f4c4: 0x0  nop
    ctx->pc = 0x34f4c4u;
    // NOP
    // 0x34f4c8: 0x0  nop
    ctx->pc = 0x34f4c8u;
    // NOP
    // 0x34f4cc: 0x0  nop
    ctx->pc = 0x34f4ccu;
    // NOP
    // 0x34f4d0: 0x0  nop
    ctx->pc = 0x34f4d0u;
    // NOP
    // 0x34f4d4: 0x0  nop
    ctx->pc = 0x34f4d4u;
    // NOP
    // 0x34f4d8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x34F4D8u;
    {
        const bool branch_taken_0x34f4d8 = (false);
        if (branch_taken_0x34f4d8) {
            ctx->pc = 0x34F4C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34f4c4;
        }
    }
    ctx->pc = 0x34F4E0u;
label_34f4e0:
    // 0x34f4e0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34f4e4: 0x8c420124  lw          $v0, 0x124($v0)
    ctx->pc = 0x34f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000124u)); // MMIO: 0x70000124
    // 0x34f4e8: 0xad730000  sw          $s3, 0x0($t3)
    ctx->pc = 0x34f4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 19));
    // 0x34f4ec: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34f4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34f4f0: 0x8ca500e4  lw          $a1, 0xE4($a1)
    ctx->pc = 0x34f4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x700000E4u)); // MMIO: 0x700000e4
    // 0x34f4f4: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x34f4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x34f4f8: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x34f4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
    // 0x34f4fc: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34f4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34f500: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x34f500u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000004u)); // MMIO: 0x70000004
    // 0x34f504: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34f504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34f508: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x34f508u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700000C4u)); // MMIO: 0x700000c4
    // 0x34f50c: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x34f50cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x34f510: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x34f510u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x34f514: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x34f514u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x34f518: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x34f518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x34f51c: 0xac33d000  sw          $s3, -0x3000($at)
    ctx->pc = 0x34f51cu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 19)); // MMIO: 0x1000d000
    // 0x34f520: 0xf  sync
    ctx->pc = 0x34f520u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34f524: 0x40f  sync.p
    ctx->pc = 0x34f524u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34f528: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x34f528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x34f52c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f530: 0xac2500e4  sw          $a1, 0xE4($at)
    ctx->pc = 0x34f530u;
    runtime->Store32(rdram, ctx, 0x700000E4u, GPR_U32(ctx, 5)); // MMIO: 0x700000e4
    // 0x34f534: 0x0  nop
    ctx->pc = 0x34f534u;
    // NOP
label_34f538:
    // 0x34f538: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34f538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34f53c: 0x8c8400c8  lw          $a0, 0xC8($a0)
    ctx->pc = 0x34f53cu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x700000C8u)); // MMIO: 0x700000c8
    // 0x34f540: 0x18800033  blez        $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x34F540u;
    {
        const bool branch_taken_0x34f540 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x34F544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F540u;
        // 0x34f544: 0x2405fffc  addiu       $a1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f540) {
            ctx->pc = 0x34F610u;
            goto label_34f610;
        }
    }
    ctx->pc = 0x34F548u;
    // 0x34f548: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34f548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34f54c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x34f54cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000004u)); // MMIO: 0x70000004
    // 0x34f550: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34f550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34f554: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x34f554u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000070u)); // MMIO: 0x70000070
    // 0x34f558: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x34f558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34f55c: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x34f55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x34f560: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x34f560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x34f564: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x34f564u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34f568: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x34f568u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x34f56c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f56cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f570: 0xac230014  sw          $v1, 0x14($at)
    ctx->pc = 0x34f570u;
    runtime->Store32(rdram, ctx, 0x70000014u, GPR_U32(ctx, 3)); // MMIO: 0x70000014
    // 0x34f574: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x34f574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x34f578: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34f578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34f57c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x34F57Cu;
    {
        const bool branch_taken_0x34f57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f57c) {
            ctx->pc = 0x34F5B0u;
            goto label_34f5b0;
        }
    }
    ctx->pc = 0x34F584u;
    // 0x34f584: 0xaed30000  sw          $s3, 0x0($s6)
    ctx->pc = 0x34f584u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 19));
    // 0x34f588: 0xf  sync
    ctx->pc = 0x34f588u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34f58c: 0x40f  sync.p
    ctx->pc = 0x34f58cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_34f590:
    // 0x34f590: 0x0  nop
    ctx->pc = 0x34f590u;
    // NOP
    // 0x34f594: 0x0  nop
    ctx->pc = 0x34f594u;
    // NOP
    // 0x34f598: 0x0  nop
    ctx->pc = 0x34f598u;
    // NOP
    // 0x34f59c: 0x0  nop
    ctx->pc = 0x34f59cu;
    // NOP
    // 0x34f5a0: 0x0  nop
    ctx->pc = 0x34f5a0u;
    // NOP
    // 0x34f5a4: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x34F5A4u;
    {
        const bool branch_taken_0x34f5a4 = (false);
        if (branch_taken_0x34f5a4) {
            ctx->pc = 0x34F590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34f590;
        }
    }
    ctx->pc = 0x34F5ACu;
    // 0x34f5ac: 0x0  nop
    ctx->pc = 0x34f5acu;
    // NOP
label_34f5b0:
    // 0x34f5b0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34f5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34f5b4: 0x8c630128  lw          $v1, 0x128($v1)
    ctx->pc = 0x34f5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000128u)); // MMIO: 0x70000128
    // 0x34f5b8: 0xad730000  sw          $s3, 0x0($t3)
    ctx->pc = 0x34f5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 19));
    // 0x34f5bc: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x34f5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x34f5c0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34f5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34f5c4: 0x8c8400ec  lw          $a0, 0xEC($a0)
    ctx->pc = 0x34f5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x700000ECu)); // MMIO: 0x700000ec
    // 0x34f5c8: 0x8fa60384  lw          $a2, 0x384($sp)
    ctx->pc = 0x34f5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 900)));
    // 0x34f5cc: 0x861024  and         $v0, $a0, $a2
    ctx->pc = 0x34f5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x34f5d0: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x34f5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x34f5d4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34f5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34f5d8: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x34f5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000014u)); // MMIO: 0x70000014
    // 0x34f5dc: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x34f5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x34f5e0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x34f5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x34f5e4: 0xac33d000  sw          $s3, -0x3000($at)
    ctx->pc = 0x34f5e4u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 19)); // MMIO: 0x1000d000
    // 0x34f5e8: 0xf  sync
    ctx->pc = 0x34f5e8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34f5ec: 0x40f  sync.p
    ctx->pc = 0x34f5ecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34f5f0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34f5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34f5f4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x34f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000004u)); // MMIO: 0x70000004
    // 0x34f5f8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34f5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34f5fc: 0x8c6300c8  lw          $v1, 0xC8($v1)
    ctx->pc = 0x34f5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x700000C8u)); // MMIO: 0x700000c8
    // 0x34f600: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x34f600u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x34f604: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x34f604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x34f608: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f60c: 0xac2200ec  sw          $v0, 0xEC($at)
    ctx->pc = 0x34f60cu;
    runtime->Store32(rdram, ctx, 0x700000ECu, GPR_U32(ctx, 2)); // MMIO: 0x700000ec
label_34f610:
    // 0x34f610: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34f610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34f614: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x34f614u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700000CCu)); // MMIO: 0x700000cc
    // 0x34f618: 0x18400025  blez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x34F618u;
    {
        const bool branch_taken_0x34f618 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x34f618) {
            ctx->pc = 0x34F6B0u;
            goto label_34f6b0;
        }
    }
    ctx->pc = 0x34F620u;
    // 0x34f620: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x34f620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x34f624: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34f624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34f628: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x34F628u;
    {
        const bool branch_taken_0x34f628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f628) {
            ctx->pc = 0x34F658u;
            goto label_34f658;
        }
    }
    ctx->pc = 0x34F630u;
    // 0x34f630: 0xaed30000  sw          $s3, 0x0($s6)
    ctx->pc = 0x34f630u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 19));
    // 0x34f634: 0xf  sync
    ctx->pc = 0x34f634u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34f638: 0x40f  sync.p
    ctx->pc = 0x34f638u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_34f63c:
    // 0x34f63c: 0x0  nop
    ctx->pc = 0x34f63cu;
    // NOP
    // 0x34f640: 0x0  nop
    ctx->pc = 0x34f640u;
    // NOP
    // 0x34f644: 0x0  nop
    ctx->pc = 0x34f644u;
    // NOP
    // 0x34f648: 0x0  nop
    ctx->pc = 0x34f648u;
    // NOP
    // 0x34f64c: 0x0  nop
    ctx->pc = 0x34f64cu;
    // NOP
    // 0x34f650: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x34F650u;
    {
        const bool branch_taken_0x34f650 = (false);
        if (branch_taken_0x34f650) {
            ctx->pc = 0x34F63Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34f63c;
        }
    }
    ctx->pc = 0x34F658u;
label_34f658:
    // 0x34f658: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34f658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34f65c: 0x8c42012c  lw          $v0, 0x12C($v0)
    ctx->pc = 0x34f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000012Cu)); // MMIO: 0x7000012c
    // 0x34f660: 0xad730000  sw          $s3, 0x0($t3)
    ctx->pc = 0x34f660u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 19));
    // 0x34f664: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34f664u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34f668: 0x8ca500f4  lw          $a1, 0xF4($a1)
    ctx->pc = 0x34f668u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x700000F4u)); // MMIO: 0x700000f4
    // 0x34f66c: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x34f66cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x34f670: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x34f670u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
    // 0x34f674: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34f674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34f678: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x34f678u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000004u)); // MMIO: 0x70000004
    // 0x34f67c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34f680: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x34f680u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700000CCu)); // MMIO: 0x700000cc
    // 0x34f684: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x34f684u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x34f688: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x34f688u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x34f68c: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x34f68cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x34f690: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x34f690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x34f694: 0xac33d000  sw          $s3, -0x3000($at)
    ctx->pc = 0x34f694u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 19)); // MMIO: 0x1000d000
    // 0x34f698: 0xf  sync
    ctx->pc = 0x34f698u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34f69c: 0x40f  sync.p
    ctx->pc = 0x34f69cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34f6a0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x34f6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x34f6a4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f6a8: 0xac2500f4  sw          $a1, 0xF4($at)
    ctx->pc = 0x34f6a8u;
    runtime->Store32(rdram, ctx, 0x700000F4u, GPR_U32(ctx, 5)); // MMIO: 0x700000f4
    // 0x34f6ac: 0x0  nop
    ctx->pc = 0x34f6acu;
    // NOP
label_34f6b0:
    // 0x34f6b0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34f6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34f6b4: 0x8c8400d0  lw          $a0, 0xD0($a0)
    ctx->pc = 0x34f6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x700000D0u)); // MMIO: 0x700000d0
    // 0x34f6b8: 0x18800033  blez        $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x34F6B8u;
    {
        const bool branch_taken_0x34f6b8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x34F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F6B8u;
        // 0x34f6bc: 0x2406fffe  addiu       $a2, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f6b8) {
            ctx->pc = 0x34F788u;
            goto label_34f788;
        }
    }
    ctx->pc = 0x34F6C0u;
    // 0x34f6c0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34f6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34f6c4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x34f6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000004u)); // MMIO: 0x70000004
    // 0x34f6c8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34f6cc: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x34f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000074u)); // MMIO: 0x70000074
    // 0x34f6d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x34f6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34f6d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34f6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34f6d8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x34f6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x34f6dc: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x34f6dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34f6e0: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x34f6e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x34f6e4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f6e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f6e8: 0xac230014  sw          $v1, 0x14($at)
    ctx->pc = 0x34f6e8u;
    runtime->Store32(rdram, ctx, 0x70000014u, GPR_U32(ctx, 3)); // MMIO: 0x70000014
    // 0x34f6ec: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x34f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x34f6f0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34f6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34f6f4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x34F6F4u;
    {
        const bool branch_taken_0x34f6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f6f4) {
            ctx->pc = 0x34F728u;
            goto label_34f728;
        }
    }
    ctx->pc = 0x34F6FCu;
    // 0x34f6fc: 0xaed30000  sw          $s3, 0x0($s6)
    ctx->pc = 0x34f6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 19));
    // 0x34f700: 0xf  sync
    ctx->pc = 0x34f700u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34f704: 0x40f  sync.p
    ctx->pc = 0x34f704u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_34f708:
    // 0x34f708: 0x0  nop
    ctx->pc = 0x34f708u;
    // NOP
    // 0x34f70c: 0x0  nop
    ctx->pc = 0x34f70cu;
    // NOP
    // 0x34f710: 0x0  nop
    ctx->pc = 0x34f710u;
    // NOP
    // 0x34f714: 0x0  nop
    ctx->pc = 0x34f714u;
    // NOP
    // 0x34f718: 0x0  nop
    ctx->pc = 0x34f718u;
    // NOP
    // 0x34f71c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x34F71Cu;
    {
        const bool branch_taken_0x34f71c = (false);
        if (branch_taken_0x34f71c) {
            ctx->pc = 0x34F708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34f708;
        }
    }
    ctx->pc = 0x34F724u;
    // 0x34f724: 0x0  nop
    ctx->pc = 0x34f724u;
    // NOP
label_34f728:
    // 0x34f728: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34f728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34f72c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x34f72cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000130u)); // MMIO: 0x70000130
    // 0x34f730: 0xad730000  sw          $s3, 0x0($t3)
    ctx->pc = 0x34f730u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 19));
    // 0x34f734: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x34f734u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x34f738: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34f738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34f73c: 0x8c8400fc  lw          $a0, 0xFC($a0)
    ctx->pc = 0x34f73cu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x700000FCu)); // MMIO: 0x700000fc
    // 0x34f740: 0x8fa70384  lw          $a3, 0x384($sp)
    ctx->pc = 0x34f740u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 900)));
    // 0x34f744: 0x871024  and         $v0, $a0, $a3
    ctx->pc = 0x34f744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x34f748: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x34f748u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x34f74c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34f74cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34f750: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x34f750u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000014u)); // MMIO: 0x70000014
    // 0x34f754: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x34f754u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x34f758: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x34f758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x34f75c: 0xac33d000  sw          $s3, -0x3000($at)
    ctx->pc = 0x34f75cu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 19)); // MMIO: 0x1000d000
    // 0x34f760: 0xf  sync
    ctx->pc = 0x34f760u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34f764: 0x40f  sync.p
    ctx->pc = 0x34f764u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34f768: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34f768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34f76c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x34f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000004u)); // MMIO: 0x70000004
    // 0x34f770: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34f770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34f774: 0x8c6300d0  lw          $v1, 0xD0($v1)
    ctx->pc = 0x34f774u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x700000D0u)); // MMIO: 0x700000d0
    // 0x34f778: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x34f778u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x34f77c: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x34f77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x34f780: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f784: 0xac2200fc  sw          $v0, 0xFC($at)
    ctx->pc = 0x34f784u;
    runtime->Store32(rdram, ctx, 0x700000FCu, GPR_U32(ctx, 2)); // MMIO: 0x700000fc
label_34f788:
    // 0x34f788: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34f788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34f78c: 0x8c8400d4  lw          $a0, 0xD4($a0)
    ctx->pc = 0x34f78cu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x700000D4u)); // MMIO: 0x700000d4
    // 0x34f790: 0x18800033  blez        $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x34F790u;
    {
        const bool branch_taken_0x34f790 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x34F794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F790u;
        // 0x34f794: 0x2406fffc  addiu       $a2, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f790) {
            ctx->pc = 0x34F860u;
            goto label_34f860;
        }
    }
    ctx->pc = 0x34F798u;
    // 0x34f798: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34f798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34f79c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x34f79cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000004u)); // MMIO: 0x70000004
    // 0x34f7a0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34f7a4: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x34f7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000078u)); // MMIO: 0x70000078
    // 0x34f7a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x34f7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34f7ac: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x34f7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x34f7b0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x34f7b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x34f7b4: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x34f7b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34f7b8: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x34f7b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x34f7bc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f7bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f7c0: 0xac230014  sw          $v1, 0x14($at)
    ctx->pc = 0x34f7c0u;
    runtime->Store32(rdram, ctx, 0x70000014u, GPR_U32(ctx, 3)); // MMIO: 0x70000014
    // 0x34f7c4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x34f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x34f7c8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34f7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34f7cc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x34F7CCu;
    {
        const bool branch_taken_0x34f7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f7cc) {
            ctx->pc = 0x34F800u;
            goto label_34f800;
        }
    }
    ctx->pc = 0x34F7D4u;
    // 0x34f7d4: 0xaed30000  sw          $s3, 0x0($s6)
    ctx->pc = 0x34f7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 19));
    // 0x34f7d8: 0xf  sync
    ctx->pc = 0x34f7d8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34f7dc: 0x40f  sync.p
    ctx->pc = 0x34f7dcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_34f7e0:
    // 0x34f7e0: 0x0  nop
    ctx->pc = 0x34f7e0u;
    // NOP
    // 0x34f7e4: 0x0  nop
    ctx->pc = 0x34f7e4u;
    // NOP
    // 0x34f7e8: 0x0  nop
    ctx->pc = 0x34f7e8u;
    // NOP
    // 0x34f7ec: 0x0  nop
    ctx->pc = 0x34f7ecu;
    // NOP
    // 0x34f7f0: 0x0  nop
    ctx->pc = 0x34f7f0u;
    // NOP
    // 0x34f7f4: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x34F7F4u;
    {
        const bool branch_taken_0x34f7f4 = (false);
        if (branch_taken_0x34f7f4) {
            ctx->pc = 0x34F7E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34f7e0;
        }
    }
    ctx->pc = 0x34F7FCu;
    // 0x34f7fc: 0x0  nop
    ctx->pc = 0x34f7fcu;
    // NOP
label_34f800:
    // 0x34f800: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34f800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34f804: 0x8c630134  lw          $v1, 0x134($v1)
    ctx->pc = 0x34f804u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000134u)); // MMIO: 0x70000134
    // 0x34f808: 0xad730000  sw          $s3, 0x0($t3)
    ctx->pc = 0x34f808u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 19));
    // 0x34f80c: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x34f80cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x34f810: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34f810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34f814: 0x8c840104  lw          $a0, 0x104($a0)
    ctx->pc = 0x34f814u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x34f818: 0x8fa70384  lw          $a3, 0x384($sp)
    ctx->pc = 0x34f818u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 900)));
    // 0x34f81c: 0x871024  and         $v0, $a0, $a3
    ctx->pc = 0x34f81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x34f820: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x34f820u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x34f824: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34f824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34f828: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x34f828u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000014u)); // MMIO: 0x70000014
    // 0x34f82c: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x34f82cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x34f830: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x34f830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x34f834: 0xac33d000  sw          $s3, -0x3000($at)
    ctx->pc = 0x34f834u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 19)); // MMIO: 0x1000d000
    // 0x34f838: 0xf  sync
    ctx->pc = 0x34f838u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34f83c: 0x40f  sync.p
    ctx->pc = 0x34f83cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34f840: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34f840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34f844: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x34f844u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000004u)); // MMIO: 0x70000004
    // 0x34f848: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34f848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34f84c: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x34f84cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x700000D4u)); // MMIO: 0x700000d4
    // 0x34f850: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x34f850u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x34f854: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x34f854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x34f858: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f85c: 0xac220104  sw          $v0, 0x104($at)
    ctx->pc = 0x34f85cu;
    runtime->Store32(rdram, ctx, 0x70000104u, GPR_U32(ctx, 2)); // MMIO: 0x70000104
label_34f860:
    // 0x34f860: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34f860u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34f864: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x34f864u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70000004u)); // MMIO: 0x70000004
    // 0x34f868: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34f868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34f86c: 0x8c8400c0  lw          $a0, 0xC0($a0)
    ctx->pc = 0x34f86cu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x700000C0u)); // MMIO: 0x700000c0
    // 0x34f870: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34f870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34f874: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x34f874u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000008u)); // MMIO: 0x70000008
    // 0x34f878: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x34f878u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x34f87c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34f87cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34f880: 0x8c6300dc  lw          $v1, 0xDC($v1)
    ctx->pc = 0x34f880u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x700000DCu)); // MMIO: 0x700000dc
    // 0x34f884: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x34f884u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34f888: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f88c: 0xac200070  sw          $zero, 0x70($at)
    ctx->pc = 0x34f88cu;
    runtime->Store32(rdram, ctx, 0x70000070u, GPR_U32(ctx, 0)); // MMIO: 0x70000070
    // 0x34f890: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f894: 0xac220008  sw          $v0, 0x8($at)
    ctx->pc = 0x34f894u;
    runtime->Store32(rdram, ctx, 0x70000008u, GPR_U32(ctx, 2)); // MMIO: 0x70000008
    // 0x34f898: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f89c: 0xac200074  sw          $zero, 0x74($at)
    ctx->pc = 0x34f89cu;
    runtime->Store32(rdram, ctx, 0x70000074u, GPR_U32(ctx, 0)); // MMIO: 0x70000074
    // 0x34f8a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34f8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34f8a4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f8a8: 0xac200078  sw          $zero, 0x78($at)
    ctx->pc = 0x34f8a8u;
    runtime->Store32(rdram, ctx, 0x70000078u, GPR_U32(ctx, 0)); // MMIO: 0x70000078
    // 0x34f8ac: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34f8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34f8b0: 0xac2300dc  sw          $v1, 0xDC($at)
    ctx->pc = 0x34f8b0u;
    runtime->Store32(rdram, ctx, 0x700000DCu, GPR_U32(ctx, 3)); // MMIO: 0x700000dc
    // 0x34f8b4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x34f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x34f8b8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34f8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34f8bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x34F8BCu;
    {
        const bool branch_taken_0x34f8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f8bc) {
            ctx->pc = 0x34F8F0u;
            goto label_34f8f0;
        }
    }
    ctx->pc = 0x34F8C4u;
    // 0x34f8c4: 0xaed30000  sw          $s3, 0x0($s6)
    ctx->pc = 0x34f8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 19));
    // 0x34f8c8: 0xf  sync
    ctx->pc = 0x34f8c8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34f8cc: 0x40f  sync.p
    ctx->pc = 0x34f8ccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_34f8d0:
    // 0x34f8d0: 0x0  nop
    ctx->pc = 0x34f8d0u;
    // NOP
    // 0x34f8d4: 0x0  nop
    ctx->pc = 0x34f8d4u;
    // NOP
    // 0x34f8d8: 0x0  nop
    ctx->pc = 0x34f8d8u;
    // NOP
    // 0x34f8dc: 0x0  nop
    ctx->pc = 0x34f8dcu;
    // NOP
    // 0x34f8e0: 0x0  nop
    ctx->pc = 0x34f8e0u;
    // NOP
    // 0x34f8e4: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x34F8E4u;
    {
        const bool branch_taken_0x34f8e4 = (false);
        if (branch_taken_0x34f8e4) {
            ctx->pc = 0x34F8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34f8d0;
        }
    }
    ctx->pc = 0x34F8ECu;
    // 0x34f8ec: 0x0  nop
    ctx->pc = 0x34f8ecu;
    // NOP
label_34f8f0:
    // 0x34f8f0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34f8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34f8f4: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x34f8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000008u)); // MMIO: 0x70000008
    // 0x34f8f8: 0x1c80f83b  bgtz        $a0, . + 4 + (-0x7C5 << 2)
    ctx->pc = 0x34F8F8u;
    {
        const bool branch_taken_0x34f8f8 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x34f8f8) {
            ctx->pc = 0x34D9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34d9e8;
        }
    }
    ctx->pc = 0x34F900u;
label_34f900:
    // 0x34f900: 0x1240003e  beqz        $s2, . + 4 + (0x3E << 2)
    ctx->pc = 0x34F900u;
    {
        const bool branch_taken_0x34f900 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F900u;
        // 0x34f904: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f900) {
            ctx->pc = 0x34F9FCu;
            goto label_34f9fc;
        }
    }
    ctx->pc = 0x34F908u;
    // 0x34f908: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x34f908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x34f90c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x34f90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34f910: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x34f910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34f914: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x34f914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x34f918: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x34f918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x34f91c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x34F91Cu;
    {
        const bool branch_taken_0x34f91c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F91Cu;
        // 0x34f920: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f91c) {
            ctx->pc = 0x34F938u;
            goto label_34f938;
        }
    }
    ctx->pc = 0x34F924u;
    // 0x34f924: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x34f924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x34f928: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34f928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f92c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34f92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34f930: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x34f930u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700000E4u)); // MMIO: 0x700000e4
    // 0x34f934: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34f934u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_34f938:
    // 0x34f938: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x34f938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34f93c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x34f93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x34f940: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34F940u;
    {
        const bool branch_taken_0x34f940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F940u;
        // 0x34f944: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f940) {
            ctx->pc = 0x34F960u;
            goto label_34f960;
        }
    }
    ctx->pc = 0x34F948u;
    // 0x34f948: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x34f948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x34f94c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34f94cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34f950: 0x8c8400ec  lw          $a0, 0xEC($a0)
    ctx->pc = 0x34f950u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x700000ECu)); // MMIO: 0x700000ec
    // 0x34f954: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x34f954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x34f958: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x34f958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34f95c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x34f95cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_34f960:
    // 0x34f960: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x34f960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34f964: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x34f964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x34f968: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34F968u;
    {
        const bool branch_taken_0x34f968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F968u;
        // 0x34f96c: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f968) {
            ctx->pc = 0x34F988u;
            goto label_34f988;
        }
    }
    ctx->pc = 0x34F970u;
    // 0x34f970: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x34f970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x34f974: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34f974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34f978: 0x8c8400fc  lw          $a0, 0xFC($a0)
    ctx->pc = 0x34f978u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x700000FCu)); // MMIO: 0x700000fc
    // 0x34f97c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x34f97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x34f980: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x34f980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34f984: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x34f984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_34f988:
    // 0x34f988: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x34f988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34f98c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x34f98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x34f990: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34F990u;
    {
        const bool branch_taken_0x34f990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F990u;
        // 0x34f994: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f990) {
            ctx->pc = 0x34F9B0u;
            goto label_34f9b0;
        }
    }
    ctx->pc = 0x34F998u;
    // 0x34f998: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x34f998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x34f99c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34f99cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34f9a0: 0x8c8400e4  lw          $a0, 0xE4($a0)
    ctx->pc = 0x34f9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x700000E4u)); // MMIO: 0x700000e4
    // 0x34f9a4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x34f9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x34f9a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x34f9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34f9ac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x34f9acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_34f9b0:
    // 0x34f9b0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x34f9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34f9b4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x34f9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x34f9b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34F9B8u;
    {
        const bool branch_taken_0x34f9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F9B8u;
        // 0x34f9bc: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f9b8) {
            ctx->pc = 0x34F9D8u;
            goto label_34f9d8;
        }
    }
    ctx->pc = 0x34F9C0u;
    // 0x34f9c0: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x34f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x34f9c4: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34f9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34f9c8: 0x8c840104  lw          $a0, 0x104($a0)
    ctx->pc = 0x34f9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x34f9cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x34f9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x34f9d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x34f9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34f9d4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x34f9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_34f9d8:
    // 0x34f9d8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x34f9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34f9dc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x34f9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x34f9e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34F9E0u;
    {
        const bool branch_taken_0x34f9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F9E0u;
        // 0x34f9e4: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f9e0) {
            ctx->pc = 0x34F9FCu;
            goto label_34f9fc;
        }
    }
    ctx->pc = 0x34F9E8u;
    // 0x34f9e8: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x34f9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x34f9ec: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34f9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34f9f0: 0x8c8400f4  lw          $a0, 0xF4($a0)
    ctx->pc = 0x34f9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x700000F4u)); // MMIO: 0x700000f4
    // 0x34f9f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x34f9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34f9f8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x34f9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_34f9fc:
    // 0x34f9fc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34fa00: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x34fa00u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x700001A0u)); // MMIO: 0x700001a0
    // 0x34fa04: 0x8fa60374  lw          $a2, 0x374($sp)
    ctx->pc = 0x34fa04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 884)));
    // 0x34fa08: 0x8fb00370  lw          $s0, 0x370($sp)
    ctx->pc = 0x34fa08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x34fa0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x34FA0Cu;
    {
        const bool branch_taken_0x34fa0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FA0Cu;
        // 0x34fa10: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fa0c) {
            ctx->pc = 0x34FA18u;
            goto label_34fa18;
        }
    }
    ctx->pc = 0x34FA14u;
label_34fa14:
    // 0x34fa14: 0x8fb00370  lw          $s0, 0x370($sp)
    ctx->pc = 0x34fa14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
label_34fa18:
    // 0x34fa18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x34fa18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34fa1c:
    // 0x34fa1c: 0x7bb00450  lq          $s0, 0x450($sp)
    ctx->pc = 0x34fa1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x34fa20: 0x7bb10440  lq          $s1, 0x440($sp)
    ctx->pc = 0x34fa20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x34fa24: 0x7bb20430  lq          $s2, 0x430($sp)
    ctx->pc = 0x34fa24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x34fa28: 0x7bb30420  lq          $s3, 0x420($sp)
    ctx->pc = 0x34fa28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x34fa2c: 0x7bb40410  lq          $s4, 0x410($sp)
    ctx->pc = 0x34fa2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x34fa30: 0x7bb50400  lq          $s5, 0x400($sp)
    ctx->pc = 0x34fa30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x34fa34: 0x7bb603f0  lq          $s6, 0x3F0($sp)
    ctx->pc = 0x34fa34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x34fa38: 0x7bb703e0  lq          $s7, 0x3E0($sp)
    ctx->pc = 0x34fa38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x34fa3c: 0x7bbe03d0  lq          $fp, 0x3D0($sp)
    ctx->pc = 0x34fa3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x34fa40: 0xdfbf03c0  ld          $ra, 0x3C0($sp)
    ctx->pc = 0x34fa40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 960)));
    // 0x34fa44: 0xc7b60470  lwc1        $f22, 0x470($sp)
    ctx->pc = 0x34fa44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x34fa48: 0xc7b50468  lwc1        $f21, 0x468($sp)
    ctx->pc = 0x34fa48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x34fa4c: 0xc7b40460  lwc1        $f20, 0x460($sp)
    ctx->pc = 0x34fa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34fa50: 0x3e00008  jr          $ra
    ctx->pc = 0x34FA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FA50u;
        // 0x34fa54: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34FA58u;
    // 0x34fa58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34fa58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34fa5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x34fa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x34fa60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34fa60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34fa64: 0xc0d0988  jal         func_342620
    ctx->pc = 0x34FA64u;
    SET_GPR_U32(ctx, 31, 0x34FA6Cu);
    ctx->pc = 0x34FA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FA64u;
    // 0x34fa68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342620u, 0x34FA64u, 0x34FA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FA6Cu;
label_34fa6c:
    // 0x34fa6c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x34fa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x34fa70: 0x8c62c370  lw          $v0, -0x3C90($v1)
    ctx->pc = 0x34fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C370u));
    // 0x34fa74: 0x440005c  bltz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x34FA74u;
    {
        const bool branch_taken_0x34fa74 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34FA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FA74u;
        // 0x34fa78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fa74) {
            ctx->pc = 0x34FBE8u;
            goto label_34fbe8;
        }
    }
    ctx->pc = 0x34FA7Cu;
    // 0x34fa7c: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x34fa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x34fa80: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x34fa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34fa84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34fa84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34fa88: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34FA88u;
    {
        const bool branch_taken_0x34fa88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FA88u;
        // 0x34fa8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fa88) {
            ctx->pc = 0x34FAA8u;
            goto label_34faa8;
        }
    }
    ctx->pc = 0x34FA90u;
    // 0x34fa90: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x34fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x34fa94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34fa94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34fa98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34FA98u;
    {
        const bool branch_taken_0x34fa98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FA98u;
        // 0x34fa9c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fa98) {
            ctx->pc = 0x34FAA8u;
            goto label_34faa8;
        }
    }
    ctx->pc = 0x34FAA0u;
    // 0x34faa0: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x34faa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x34faa4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x34faa4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34faa8:
    // 0x34faa8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x34faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34faac: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x34faacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fab0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x34fab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x34fab4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x34FAB4u;
    {
        const bool branch_taken_0x34fab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FAB4u;
        // 0x34fab8: 0x31020004  andi        $v0, $t0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fab4) {
            ctx->pc = 0x34FAE8u;
            goto label_34fae8;
        }
    }
    ctx->pc = 0x34FABCu;
    // 0x34fabc: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x34fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x34fac0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x34fac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x34fac4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34FAC4u;
    {
        const bool branch_taken_0x34fac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FAC4u;
        // 0x34fac8: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fac4) {
            ctx->pc = 0x34FAE0u;
            goto label_34fae0;
        }
    }
    ctx->pc = 0x34FACCu;
    // 0x34facc: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x34faccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x34fad0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34fad4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34fad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34fad8: 0xe4182a  slt         $v1, $a3, $a0
    ctx->pc = 0x34fad8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x34fadc: 0x83380b  movn        $a3, $a0, $v1
    ctx->pc = 0x34fadcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
label_34fae0:
    // 0x34fae0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x34fae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x34fae4: 0x31020004  andi        $v0, $t0, 0x4
    ctx->pc = 0x34fae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
label_34fae8:
    // 0x34fae8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x34FAE8u;
    {
        const bool branch_taken_0x34fae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FAE8u;
        // 0x34faec: 0x31020008  andi        $v0, $t0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fae8) {
            ctx->pc = 0x34FB1Cu;
            goto label_34fb1c;
        }
    }
    ctx->pc = 0x34FAF0u;
    // 0x34faf0: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x34faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x34faf4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x34faf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x34faf8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34FAF8u;
    {
        const bool branch_taken_0x34faf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FAF8u;
        // 0x34fafc: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34faf8) {
            ctx->pc = 0x34FB14u;
            goto label_34fb14;
        }
    }
    ctx->pc = 0x34FB00u;
    // 0x34fb00: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x34fb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x34fb04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34fb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34fb08: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34fb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34fb0c: 0xe4182a  slt         $v1, $a3, $a0
    ctx->pc = 0x34fb0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x34fb10: 0x83380b  movn        $a3, $a0, $v1
    ctx->pc = 0x34fb10u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
label_34fb14:
    // 0x34fb14: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x34fb14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x34fb18: 0x31020008  andi        $v0, $t0, 0x8
    ctx->pc = 0x34fb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8);
label_34fb1c:
    // 0x34fb1c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x34FB1Cu;
    {
        const bool branch_taken_0x34fb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FB1Cu;
        // 0x34fb20: 0x31020020  andi        $v0, $t0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fb1c) {
            ctx->pc = 0x34FB50u;
            goto label_34fb50;
        }
    }
    ctx->pc = 0x34FB24u;
    // 0x34fb24: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x34fb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x34fb28: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x34fb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x34fb2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34FB2Cu;
    {
        const bool branch_taken_0x34fb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FB2Cu;
        // 0x34fb30: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fb2c) {
            ctx->pc = 0x34FB48u;
            goto label_34fb48;
        }
    }
    ctx->pc = 0x34FB34u;
    // 0x34fb34: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x34fb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x34fb38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34fb3c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34fb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34fb40: 0xe4182a  slt         $v1, $a3, $a0
    ctx->pc = 0x34fb40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x34fb44: 0x83380b  movn        $a3, $a0, $v1
    ctx->pc = 0x34fb44u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
label_34fb48:
    // 0x34fb48: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x34fb48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x34fb4c: 0x31020020  andi        $v0, $t0, 0x20
    ctx->pc = 0x34fb4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32);
label_34fb50:
    // 0x34fb50: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x34FB50u;
    {
        const bool branch_taken_0x34fb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FB50u;
        // 0x34fb54: 0x31020080  andi        $v0, $t0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fb50) {
            ctx->pc = 0x34FB84u;
            goto label_34fb84;
        }
    }
    ctx->pc = 0x34FB58u;
    // 0x34fb58: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x34fb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x34fb5c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x34fb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x34fb60: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34FB60u;
    {
        const bool branch_taken_0x34fb60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FB60u;
        // 0x34fb64: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fb60) {
            ctx->pc = 0x34FB7Cu;
            goto label_34fb7c;
        }
    }
    ctx->pc = 0x34FB68u;
    // 0x34fb68: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x34fb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x34fb6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34fb70: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34fb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34fb74: 0xe4182a  slt         $v1, $a3, $a0
    ctx->pc = 0x34fb74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x34fb78: 0x83380b  movn        $a3, $a0, $v1
    ctx->pc = 0x34fb78u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
label_34fb7c:
    // 0x34fb7c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x34fb7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x34fb80: 0x31020080  andi        $v0, $t0, 0x80
    ctx->pc = 0x34fb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)128);
label_34fb84:
    // 0x34fb84: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x34FB84u;
    {
        const bool branch_taken_0x34fb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fb84) {
            ctx->pc = 0x34FB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34FB84u;
            // 0x34fb88: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34FBB8u;
            goto label_34fbb8;
        }
    }
    ctx->pc = 0x34FB8Cu;
    // 0x34fb8c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x34fb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x34fb90: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x34fb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x34fb94: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x34FB94u;
    {
        const bool branch_taken_0x34fb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fb94) {
            ctx->pc = 0x34FB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34FB94u;
            // 0x34fb98: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34FBB8u;
            goto label_34fbb8;
        }
    }
    ctx->pc = 0x34FB9Cu;
    // 0x34fb9c: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x34fb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x34fba0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x34fba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x34fba4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34fba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34fba8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34fba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34fbac: 0xe4182a  slt         $v1, $a3, $a0
    ctx->pc = 0x34fbacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x34fbb0: 0x83380b  movn        $a3, $a0, $v1
    ctx->pc = 0x34fbb0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x34fbb4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x34fbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_34fbb8:
    // 0x34fbb8: 0x24033b90  addiu       $v1, $zero, 0x3B90
    ctx->pc = 0x34fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15248));
    // 0x34fbbc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x34fbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x34fbc0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x34fbc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34fbc4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x34fbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34fbc8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x34fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x34fbcc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x34fbccu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34fbd0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x34FBD0u;
    {
        const bool branch_taken_0x34fbd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fbd0) {
            ctx->pc = 0x34FBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34FBD0u;
            // 0x34fbd4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34FBD8u;
            goto label_34fbd8;
        }
    }
    ctx->pc = 0x34FBD8u;
label_34fbd8:
    // 0x34fbd8: 0x1812  mflo        $v1
    ctx->pc = 0x34fbd8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x34fbdc: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x34fbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x34fbe0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x34FBE0u;
    {
        const bool branch_taken_0x34fbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FBE0u;
        // 0x34fbe4: 0xc2100a  movz        $v0, $a2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fbe0) {
            ctx->pc = 0x34FBECu;
            goto label_34fbec;
        }
    }
    ctx->pc = 0x34FBE8u;
label_34fbe8:
    // 0x34fbe8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x34fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_34fbec:
    // 0x34fbec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x34fbecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34fbf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34fbf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34fbf4: 0x3e00008  jr          $ra
    ctx->pc = 0x34FBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34FBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FBF4u;
        // 0x34fbf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FBF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34FBFCu;
    // 0x34fbfc: 0x0  nop
    ctx->pc = 0x34fbfcu;
    // NOP
    ctx->pc = 0x34fc00u;
}
