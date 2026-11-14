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

// Function: sub_002BFD90
// Address: 0x2bfd90 - 0x2c01f0
void sub_002BFD90_0x2bfd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFD90_0x2bfd90");
#endif

    switch (ctx->pc) {
        case 0x2bfe28u: goto label_2bfe28;
        case 0x2bfe48u: goto label_2bfe48;
        case 0x2bfe5cu: goto label_2bfe5c;
        case 0x2bfe70u: goto label_2bfe70;
        case 0x2bfe80u: goto label_2bfe80;
        case 0x2bfe90u: goto label_2bfe90;
        case 0x2bfea4u: goto label_2bfea4;
        case 0x2bfed0u: goto label_2bfed0;
        case 0x2bfee4u: goto label_2bfee4;
        case 0x2bfef4u: goto label_2bfef4;
        case 0x2bff24u: goto label_2bff24;
        case 0x2bff38u: goto label_2bff38;
        case 0x2bff60u: goto label_2bff60;
        case 0x2bff74u: goto label_2bff74;
        case 0x2bff88u: goto label_2bff88;
        case 0x2bffb0u: goto label_2bffb0;
        case 0x2c0048u: goto label_2c0048;
        case 0x2c00b8u: goto label_2c00b8;
        case 0x2c00d0u: goto label_2c00d0;
        case 0x2c012cu: goto label_2c012c;
        case 0x2c0144u: goto label_2c0144;
        default: break;
    }

    ctx->pc = 0x2bfd90u;

    // 0x2bfd90: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2bfd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2bfd94: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2bfd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2bfd98: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2bfd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2bfd9c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2bfd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2bfda0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2bfda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2bfda4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2bfda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2bfda8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2bfda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2bfdac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2bfdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2bfdb0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2bfdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2bfdb4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2bfdb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2bfdb8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2bfdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2bfdbc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2bfdbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bfdc0: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x2bfdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x2bfdc4: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x2bfdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    // 0x2bfdc8: 0xafa600f0  sw          $a2, 0xF0($sp)
    ctx->pc = 0x2bfdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 6));
    // 0x2bfdcc: 0xafa70100  sw          $a3, 0x100($sp)
    ctx->pc = 0x2bfdccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 7));
    // 0x2bfdd0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2bfdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2bfdd4: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x2bfdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2bfdd8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2bfdd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2bfddc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BFDDCu;
    {
        const bool branch_taken_0x2bfddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfddc) {
            ctx->pc = 0x2BFDF4u;
            goto label_2bfdf4;
        }
    }
    ctx->pc = 0x2BFDE4u;
    // 0x2bfde4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2bfde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2bfde8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bfde8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfdec: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x2BFDECu;
    {
        const bool branch_taken_0x2bfdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfdec) {
            ctx->pc = 0x2C01B0u;
            goto label_2c01b0;
        }
    }
    ctx->pc = 0x2BFDF4u;
label_2bfdf4:
    // 0x2bfdf4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2bfdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2bfdf8: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x2bfdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2bfdfc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bfdfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bfe00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BFE00u;
    {
        const bool branch_taken_0x2bfe00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfe00) {
            ctx->pc = 0x2BFE18u;
            goto label_2bfe18;
        }
    }
    ctx->pc = 0x2BFE08u;
    // 0x2bfe08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2bfe08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2bfe0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bfe0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfe10: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x2BFE10u;
    {
        const bool branch_taken_0x2bfe10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfe10) {
            ctx->pc = 0x2C01B0u;
            goto label_2c01b0;
        }
    }
    ctx->pc = 0x2BFE18u;
label_2bfe18:
    // 0x2bfe18: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x2bfe18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2bfe1c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2bfe1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2bfe20: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BFE20u;
    SET_GPR_U32(ctx, 31, 0x2BFE28u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BFE20u, 0x2BFE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFE28u;
label_2bfe28:
    // 0x2bfe28: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2bfe28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe2c: 0x8fb50100  lw          $s5, 0x100($sp)
    ctx->pc = 0x2bfe2cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2bfe30: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x2bfe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2bfe34: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BFE34u;
    {
        const bool branch_taken_0x2bfe34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bfe34) {
            ctx->pc = 0x2BFE4Cu;
            goto label_2bfe4c;
        }
    }
    ctx->pc = 0x2BFE3Cu;
    // 0x2bfe3c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2bfe3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe40: 0xc096880  jal         func_25A200
    ctx->pc = 0x2BFE40u;
    SET_GPR_U32(ctx, 31, 0x2BFE48u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2BFE40u, 0x2BFE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFE48u;
label_2bfe48:
    // 0x2bfe48: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2bfe48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bfe4c:
    // 0x2bfe4c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2bfe4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe50: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2bfe50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2bfe54: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BFE54u;
    SET_GPR_U32(ctx, 31, 0x2BFE5Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BFE54u, 0x2BFE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFE5Cu;
label_2bfe5c:
    // 0x2bfe5c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2bfe5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2bfe60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe64: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2bfe64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2bfe68: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BFE68u;
    SET_GPR_U32(ctx, 31, 0x2BFE70u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BFE68u, 0x2BFE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFE70u;
label_2bfe70:
    // 0x2bfe70: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2bfe70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bfe74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe78: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2BFE78u;
    SET_GPR_U32(ctx, 31, 0x2BFE80u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2BFE78u, 0x2BFE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFE80u;
label_2bfe80:
    // 0x2bfe80: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2bfe80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe84: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2bfe84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bfe88: 0xc048094  jal         func_120250
    ctx->pc = 0x2BFE88u;
    SET_GPR_U32(ctx, 31, 0x2BFE90u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2BFE88u, 0x2BFE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFE90u;
label_2bfe90:
    // 0x2bfe90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bfe90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe94: 0x24050480  addiu       $a1, $zero, 0x480
    ctx->pc = 0x2bfe94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    // 0x2bfe98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bfe98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe9c: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2BFE9Cu;
    SET_GPR_U32(ctx, 31, 0x2BFEA4u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2BFE9Cu, 0x2BFEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFEA4u;
label_2bfea4:
    // 0x2bfea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bfea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfea8: 0x0  nop
    ctx->pc = 0x2bfea8u;
    // NOP
    // 0x2bfeac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bfeacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bfeb0: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2bfeb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2bfeb4: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x2bfeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bfeb8: 0xc78081c4  lwc1        $f0, -0x7E3C($gp)
    ctx->pc = 0x2bfeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bfebc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2bfebcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bfec0: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2bfec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2bfec4: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2bfec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bfec8: 0xc048094  jal         func_120250
    ctx->pc = 0x2BFEC8u;
    SET_GPR_U32(ctx, 31, 0x2BFED0u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2BFEC8u, 0x2BFED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFED0u;
label_2bfed0:
    // 0x2bfed0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bfed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfed4: 0x24050402  addiu       $a1, $zero, 0x402
    ctx->pc = 0x2bfed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
    // 0x2bfed8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bfed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfedc: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2BFEDCu;
    SET_GPR_U32(ctx, 31, 0x2BFEE4u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2BFEDCu, 0x2BFEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFEE4u;
label_2bfee4:
    // 0x2bfee4: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x2bfee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x2bfee8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2bfee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfeec: 0xc096874  jal         func_25A1D0
    ctx->pc = 0x2BFEECu;
    SET_GPR_U32(ctx, 31, 0x2BFEF4u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x2BFEECu, 0x2BFEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFEF4u;
label_2bfef4:
    // 0x2bfef4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BFEF4u;
    {
        const bool branch_taken_0x2bfef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfef4) {
            ctx->pc = 0x2BFF0Cu;
            goto label_2bff0c;
        }
    }
    ctx->pc = 0x2BFEFCu;
    // 0x2bfefc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2bfefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2bff00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bff00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bff04: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x2BFF04u;
    {
        const bool branch_taken_0x2bff04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bff04) {
            ctx->pc = 0x2C01B0u;
            goto label_2c01b0;
        }
    }
    ctx->pc = 0x2BFF0Cu;
label_2bff0c:
    // 0x2bff0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bff0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bff10: 0x0  nop
    ctx->pc = 0x2bff10u;
    // NOP
    // 0x2bff14: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2bff14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2bff18: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2bff18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bff1c: 0xc048094  jal         func_120250
    ctx->pc = 0x2BFF1Cu;
    SET_GPR_U32(ctx, 31, 0x2BFF24u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2BFF1Cu, 0x2BFF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFF24u;
label_2bff24:
    // 0x2bff24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bff24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff28: 0x24050482  addiu       $a1, $zero, 0x482
    ctx->pc = 0x2bff28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1154));
    // 0x2bff2c: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x2bff2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2bff30: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2BFF30u;
    SET_GPR_U32(ctx, 31, 0x2BFF38u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2BFF30u, 0x2BFF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFF38u;
label_2bff38:
    // 0x2bff38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2bff38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff3c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2bff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2bff40: 0xac40007c  sw          $zero, 0x7C($v0)
    ctx->pc = 0x2bff40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 0));
    // 0x2bff44: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2bff44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2bff48: 0x1242002f  beq         $s2, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2BFF48u;
    {
        const bool branch_taken_0x2bff48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bff48) {
            ctx->pc = 0x2C0008u;
            goto label_2c0008;
        }
    }
    ctx->pc = 0x2BFF50u;
    // 0x2bff50: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x2bff50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2bff54: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2bff54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2bff58: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BFF58u;
    SET_GPR_U32(ctx, 31, 0x2BFF60u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BFF58u, 0x2BFF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFF60u;
label_2bff60:
    // 0x2bff60: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2bff60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x2bff64: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2bff64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2bff68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bff68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff6c: 0xc098090  jal         func_260240
    ctx->pc = 0x2BFF6Cu;
    SET_GPR_U32(ctx, 31, 0x2BFF74u);
    ctx->pc = 0x260240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260240u, 0x2BFF6Cu, 0x2BFF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFF74u;
label_2bff74:
    // 0x2bff74: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x2bff74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x2bff78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bff78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff7c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bff7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff80: 0xc098090  jal         func_260240
    ctx->pc = 0x2BFF80u;
    SET_GPR_U32(ctx, 31, 0x2BFF88u);
    ctx->pc = 0x260240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260240u, 0x2BFF80u, 0x2BFF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFF88u;
label_2bff88:
    // 0x2bff88: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2bff88u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff8c: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2bff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2bff90: 0x5e8023  subu        $s0, $v0, $fp
    ctx->pc = 0x2bff90u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2bff94: 0x6010002  bgez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BFF94u;
    {
        const bool branch_taken_0x2bff94 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2bff94) {
            ctx->pc = 0x2BFFA0u;
            goto label_2bffa0;
        }
    }
    ctx->pc = 0x2BFF9Cu;
    // 0x2bff9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2bff9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bffa0:
    // 0x2bffa0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bffa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bffa4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bffa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bffa8: 0xc098098  jal         func_260260
    ctx->pc = 0x2BFFA8u;
    SET_GPR_U32(ctx, 31, 0x2BFFB0u);
    ctx->pc = 0x260260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260260u, 0x2BFFA8u, 0x2BFFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFFB0u;
label_2bffb0:
    // 0x2bffb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bffb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bffb4: 0x1a20000b  blez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2BFFB4u;
    {
        const bool branch_taken_0x2bffb4 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2bffb4) {
            ctx->pc = 0x2BFFE4u;
            goto label_2bffe4;
        }
    }
    ctx->pc = 0x2BFFBCu;
    // 0x2bffbc: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x2bffbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2bffc0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2bffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2bffc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bffc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bffc8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2bffc8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bffcc: 0x0  nop
    ctx->pc = 0x2bffccu;
    // NOP
    // 0x2bffd0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bffd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bffd4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2bffd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bffd8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2bffd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2bffdc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BFFDCu;
    {
        const bool branch_taken_0x2bffdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bffdc) {
            ctx->pc = 0x2C0000u;
            goto label_2c0000;
        }
    }
    ctx->pc = 0x2BFFE4u;
label_2bffe4:
    // 0x2bffe4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2bffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2bffe8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bffe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bffec: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2bffecu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfff0: 0x0  nop
    ctx->pc = 0x2bfff0u;
    // NOP
    // 0x2bfff4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bfff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bfff8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2bfff8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bfffc: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2bfffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_2c0000:
    // 0x2c0000: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2c0000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c0004: 0xac51007c  sw          $s1, 0x7C($v0)
    ctx->pc = 0x2c0004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 17));
label_2c0008:
    // 0x2c0008: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2c0008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2c000c: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x2c000cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2c0010: 0x10200063  beqz        $at, . + 4 + (0x63 << 2)
    ctx->pc = 0x2C0010u;
    {
        const bool branch_taken_0x2c0010 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0010) {
            ctx->pc = 0x2C01A0u;
            goto label_2c01a0;
        }
    }
    ctx->pc = 0x2C0018u;
    // 0x2c0018: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2c0018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2c001c: 0x24638cc0  addiu       $v1, $v1, -0x7340
    ctx->pc = 0x2c001cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937792));
    // 0x2c0020: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c0020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c0024: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c0024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c0028: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c0028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c002c: 0x400008  jr          $v0
    ctx->pc = 0x2C002Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C0034u: goto label_2c0034;
            case 0x2C0088u: goto label_2c0088;
            case 0x2C0098u: goto label_2c0098;
            case 0x2C00A8u: goto label_2c00a8;
            case 0x2C011Cu: goto label_2c011c;
            case 0x2C0190u: goto label_2c0190;
            case 0x2C01A0u: goto label_2c01a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C002Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C0034u;
label_2c0034:
    // 0x2c0034: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2c0034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c0038: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2c0038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c003c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2c003cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0040: 0xc0b065c  jal         func_2C1970
    ctx->pc = 0x2C0040u;
    SET_GPR_U32(ctx, 31, 0x2C0048u);
    ctx->pc = 0x2C1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1970u, 0x2C0040u, 0x2C0048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0048u;
label_2c0048:
    // 0x2c0048: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2c0048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2c004c: 0xc7a200cc  lwc1        $f2, 0xCC($sp)
    ctx->pc = 0x2c004cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c0050: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x2c0050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0054: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x2c0054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0058: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c0058u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c005c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2c005cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0060: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C0060u;
    {
        const bool branch_taken_0x2c0060 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0060) {
            ctx->pc = 0x2C0078u;
            goto label_2c0078;
        }
    }
    ctx->pc = 0x2C0068u;
    // 0x2c0068: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c0068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c006c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c006cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0070: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2C0070u;
    {
        const bool branch_taken_0x2c0070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0070) {
            ctx->pc = 0x2C01B0u;
            goto label_2c01b0;
        }
    }
    ctx->pc = 0x2C0078u;
label_2c0078:
    // 0x2c0078: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2c0078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2c007c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c007cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0080: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2C0080u;
    {
        const bool branch_taken_0x2c0080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0080) {
            ctx->pc = 0x2C01B0u;
            goto label_2c01b0;
        }
    }
    ctx->pc = 0x2C0088u;
label_2c0088:
    // 0x2c0088: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c0088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c008c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c008cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0090: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2C0090u;
    {
        const bool branch_taken_0x2c0090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0090) {
            ctx->pc = 0x2C01B0u;
            goto label_2c01b0;
        }
    }
    ctx->pc = 0x2C0098u;
label_2c0098:
    // 0x2c0098: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c0098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c009c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c009cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c00a0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2C00A0u;
    {
        const bool branch_taken_0x2c00a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c00a0) {
            ctx->pc = 0x2C01B0u;
            goto label_2c01b0;
        }
    }
    ctx->pc = 0x2C00A8u;
label_2c00a8:
    // 0x2c00a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c00a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c00ac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2c00acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c00b0: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2C00B0u;
    SET_GPR_U32(ctx, 31, 0x2C00B8u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2C00B0u, 0x2C00B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C00B8u;
label_2c00b8:
    // 0x2c00b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c00b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c00bc: 0xc4540008  lwc1        $f20, 0x8($v0)
    ctx->pc = 0x2c00bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c00c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c00c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c00c4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2c00c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c00c8: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2C00C8u;
    SET_GPR_U32(ctx, 31, 0x2C00D0u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2C00C8u, 0x2C00D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C00D0u;
label_2c00d0:
    // 0x2c00d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c00d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c00d4: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x2c00d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c00d8: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x2c00d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c00dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c00dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c00e0: 0x0  nop
    ctx->pc = 0x2c00e0u;
    // NOP
    // 0x2c00e4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2c00e4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2c00e8: 0x4602a05c  madd.s      $f1, $f20, $f2
    ctx->pc = 0x2c00e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[20], ctx->f[2]));
    // 0x2c00ec: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x2c00ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c00f0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c00f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c00f4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C00F4u;
    {
        const bool branch_taken_0x2c00f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c00f4) {
            ctx->pc = 0x2C010Cu;
            goto label_2c010c;
        }
    }
    ctx->pc = 0x2C00FCu;
    // 0x2c00fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c00fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c0100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0104: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2C0104u;
    {
        const bool branch_taken_0x2c0104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0104) {
            ctx->pc = 0x2C01B0u;
            goto label_2c01b0;
        }
    }
    ctx->pc = 0x2C010Cu;
label_2c010c:
    // 0x2c010c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2c010cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2c0110: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0114: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2C0114u;
    {
        const bool branch_taken_0x2c0114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0114) {
            ctx->pc = 0x2C01B0u;
            goto label_2c01b0;
        }
    }
    ctx->pc = 0x2C011Cu;
label_2c011c:
    // 0x2c011c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c011cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0120: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2c0120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c0124: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2C0124u;
    SET_GPR_U32(ctx, 31, 0x2C012Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2C0124u, 0x2C012Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C012Cu;
label_2c012c:
    // 0x2c012c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c012cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0130: 0xc4540008  lwc1        $f20, 0x8($v0)
    ctx->pc = 0x2c0130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c0134: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c0134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0138: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2c0138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c013c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2C013Cu;
    SET_GPR_U32(ctx, 31, 0x2C0144u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2C013Cu, 0x2C0144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0144u;
label_2c0144:
    // 0x2c0144: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c0144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0148: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x2c0148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c014c: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x2c014cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0150: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c0150u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0154: 0x0  nop
    ctx->pc = 0x2c0154u;
    // NOP
    // 0x2c0158: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2c0158u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2c015c: 0x4602a05c  madd.s      $f1, $f20, $f2
    ctx->pc = 0x2c015cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[20], ctx->f[2]));
    // 0x2c0160: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x2c0160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0164: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c0164u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0168: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C0168u;
    {
        const bool branch_taken_0x2c0168 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0168) {
            ctx->pc = 0x2C0180u;
            goto label_2c0180;
        }
    }
    ctx->pc = 0x2C0170u;
    // 0x2c0170: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c0170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c0174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0178: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2C0178u;
    {
        const bool branch_taken_0x2c0178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0178) {
            ctx->pc = 0x2C01B0u;
            goto label_2c01b0;
        }
    }
    ctx->pc = 0x2C0180u;
label_2c0180:
    // 0x2c0180: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2c0180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2c0184: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0188: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C0188u;
    {
        const bool branch_taken_0x2c0188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0188) {
            ctx->pc = 0x2C01B0u;
            goto label_2c01b0;
        }
    }
    ctx->pc = 0x2C0190u;
label_2c0190:
    // 0x2c0190: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c0190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c0194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0198: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C0198u;
    {
        const bool branch_taken_0x2c0198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0198) {
            ctx->pc = 0x2C01B0u;
            goto label_2c01b0;
        }
    }
    ctx->pc = 0x2C01A0u;
label_2c01a0:
    // 0x2c01a0: 0x2402fc19  addiu       $v0, $zero, -0x3E7
    ctx->pc = 0x2c01a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966297));
    // 0x2c01a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c01a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c01a8: 0x0  nop
    ctx->pc = 0x2c01a8u;
    // NOP
    // 0x2c01ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c01acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2c01b0:
    // 0x2c01b0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2c01b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c01b4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2c01b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c01b8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2c01b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c01bc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2c01bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c01c0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2c01c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c01c4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2c01c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c01c8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2c01c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c01cc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c01ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c01d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c01d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c01d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c01d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c01d8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2c01d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c01dc: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x2c01dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2c01e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C01E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C01E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C01E8u;
    // 0x2c01e8: 0x0  nop
    ctx->pc = 0x2c01e8u;
    // NOP
    // 0x2c01ec: 0x0  nop
    ctx->pc = 0x2c01ecu;
    // NOP
    ctx->pc = 0x2c01f0u;
}
