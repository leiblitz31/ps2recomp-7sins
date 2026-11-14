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

// Function: sub_00118DC0
// Address: 0x118dc0 - 0x118f70
void sub_00118DC0_0x118dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118DC0_0x118dc0");
#endif

    switch (ctx->pc) {
        case 0x118e48u: goto label_118e48;
        case 0x118e7cu: goto label_118e7c;
        case 0x118e90u: goto label_118e90;
        case 0x118ea4u: goto label_118ea4;
        default: break;
    }

    ctx->pc = 0x118dc0u;

    // 0x118dc0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x118dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x118dc4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x118dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x118dc8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x118dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x118dcc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x118dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x118dd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x118dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x118dd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x118dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x118dd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x118dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x118ddc: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x118ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x118de0: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x118de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x118de4: 0x8fb00080  lw          $s0, 0x80($sp)
    ctx->pc = 0x118de4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x118de8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x118de8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118dec: 0x0  nop
    ctx->pc = 0x118decu;
    // NOP
    // 0x118df0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x118df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x118df4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x118df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x118df8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x118df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x118dfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x118dfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118e00: 0x0  nop
    ctx->pc = 0x118e00u;
    // NOP
    // 0x118e04: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x118e04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x118e08: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x118E08u;
    {
        const bool branch_taken_0x118e08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x118e08) {
            ctx->pc = 0x118E20u;
            goto label_118e20;
        }
    }
    ctx->pc = 0x118E10u;
    // 0x118e10: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x118e10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x118e14: 0x44140800  mfc1        $s4, $f1
    ctx->pc = 0x118e14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x118e18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x118E18u;
    {
        const bool branch_taken_0x118e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x118e18) {
            ctx->pc = 0x118E34u;
            goto label_118e34;
        }
    }
    ctx->pc = 0x118E20u;
label_118e20:
    // 0x118e20: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x118e20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x118e24: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x118e24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x118e28: 0x44140800  mfc1        $s4, $f1
    ctx->pc = 0x118e28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x118e2c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x118e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x118e30: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x118e30u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_118e34:
    // 0x118e34: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x118e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x118e38: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x118e38u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x118e3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x118e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118e40: 0xc1067fa  jal         func_419FE8
    ctx->pc = 0x118E40u;
    SET_GPR_U32(ctx, 31, 0x118E48u);
    ctx->pc = 0x419FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419FE8u, 0x118E40u, 0x118E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118E48u;
label_118e48:
    // 0x118e48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x118e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118e4c: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x118E4Cu;
    {
        const bool branch_taken_0x118e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x118e4c) {
            ctx->pc = 0x118E6Cu;
            goto label_118e6c;
        }
    }
    ctx->pc = 0x118E54u;
    // 0x118e54: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x118e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x118e58: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x118E58u;
    {
        const bool branch_taken_0x118e58 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x118e58) {
            ctx->pc = 0x118E6Cu;
            goto label_118e6c;
        }
    }
    ctx->pc = 0x118E60u;
    // 0x118e60: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x118e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x118e64: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x118E64u;
    {
        const bool branch_taken_0x118e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x118e64) {
            ctx->pc = 0x118F40u;
            goto label_118f40;
        }
    }
    ctx->pc = 0x118E6Cu;
label_118e6c:
    // 0x118e6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x118e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118e70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x118e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118e74: 0xc0e0c2e  jal         func_3830B8
    ctx->pc = 0x118E74u;
    SET_GPR_U32(ctx, 31, 0x118E7Cu);
    ctx->pc = 0x3830B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3830B8u, 0x118E74u, 0x118E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118E7Cu;
label_118e7c:
    // 0x118e7c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x118e7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118e80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x118e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118e84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x118e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118e88: 0xc0e0dc6  jal         func_383718
    ctx->pc = 0x118E88u;
    SET_GPR_U32(ctx, 31, 0x118E90u);
    ctx->pc = 0x383718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383718u, 0x118E88u, 0x118E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118E90u;
label_118e90:
    // 0x118e90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x118e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118e94: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x118e94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x118e98: 0x24a51bf8  addiu       $a1, $a1, 0x1BF8
    ctx->pc = 0x118e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7160));
    // 0x118e9c: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x118E9Cu;
    SET_GPR_U32(ctx, 31, 0x118EA4u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x118E9Cu, 0x118EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118EA4u;
label_118ea4:
    // 0x118ea4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x118EA4u;
    {
        const bool branch_taken_0x118ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118ea4) {
            ctx->pc = 0x118EB8u;
            goto label_118eb8;
        }
    }
    ctx->pc = 0x118EACu;
    // 0x118eac: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x118eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x118eb0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x118EB0u;
    {
        const bool branch_taken_0x118eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x118eb0) {
            ctx->pc = 0x118F40u;
            goto label_118f40;
        }
    }
    ctx->pc = 0x118EB8u;
label_118eb8:
    // 0x118eb8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x118eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x118ebc: 0x8c510018  lw          $s1, 0x18($v0)
    ctx->pc = 0x118ebcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x118ec0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x118ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x118ec4: 0x28410065  slti        $at, $v0, 0x65
    ctx->pc = 0x118ec4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x118ec8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x118EC8u;
    {
        const bool branch_taken_0x118ec8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x118ec8) {
            ctx->pc = 0x118EDCu;
            goto label_118edc;
        }
    }
    ctx->pc = 0x118ED0u;
    // 0x118ed0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x118ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x118ed4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x118ED4u;
    {
        const bool branch_taken_0x118ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x118ed4) {
            ctx->pc = 0x118F40u;
            goto label_118f40;
        }
    }
    ctx->pc = 0x118EDCu;
label_118edc:
    // 0x118edc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x118edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x118ee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x118ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118ee4: 0x0  nop
    ctx->pc = 0x118ee4u;
    // NOP
    // 0x118ee8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x118ee8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x118eec: 0xc78081a0  lwc1        $f0, -0x7E60($gp)
    ctx->pc = 0x118eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118ef0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x118ef0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x118ef4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x118ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x118ef8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x118ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x118efc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x118efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x118f00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x118f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118f04: 0x0  nop
    ctx->pc = 0x118f04u;
    // NOP
    // 0x118f08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x118f08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x118f0c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x118F0Cu;
    {
        const bool branch_taken_0x118f0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x118f0c) {
            ctx->pc = 0x118F24u;
            goto label_118f24;
        }
    }
    ctx->pc = 0x118F14u;
    // 0x118f14: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x118f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118f18: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x118f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x118f1c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x118F1Cu;
    {
        const bool branch_taken_0x118f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x118f1c) {
            ctx->pc = 0x118F34u;
            goto label_118f34;
        }
    }
    ctx->pc = 0x118F24u;
label_118f24:
    // 0x118f24: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x118f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x118f28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x118f28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118f2c: 0x0  nop
    ctx->pc = 0x118f2cu;
    // NOP
    // 0x118f30: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x118f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_118f34:
    // 0x118f34: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x118f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118f38: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x118f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x118f3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x118f3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_118f40:
    // 0x118f40: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x118f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x118f44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x118f44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118f48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x118f48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118f4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x118f4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118f50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x118f50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118f54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x118f54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118f58: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x118f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x118f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x118F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118F64u;
    // 0x118f64: 0x0  nop
    ctx->pc = 0x118f64u;
    // NOP
    // 0x118f68: 0x0  nop
    ctx->pc = 0x118f68u;
    // NOP
    // 0x118f6c: 0x0  nop
    ctx->pc = 0x118f6cu;
    // NOP
    ctx->pc = 0x118f70u;
}
