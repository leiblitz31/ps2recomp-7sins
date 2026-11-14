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

// Function: sub_002D5F20
// Address: 0x2d5f20 - 0x2d6700
void sub_002D5F20_0x2d5f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5F20_0x2d5f20");
#endif

    switch (ctx->pc) {
        case 0x2d5f64u: goto label_2d5f64;
        case 0x2d5f7cu: goto label_2d5f7c;
        case 0x2d5f90u: goto label_2d5f90;
        case 0x2d5fa0u: goto label_2d5fa0;
        case 0x2d5fb0u: goto label_2d5fb0;
        case 0x2d5fc0u: goto label_2d5fc0;
        case 0x2d6028u: goto label_2d6028;
        case 0x2d6034u: goto label_2d6034;
        case 0x2d6048u: goto label_2d6048;
        case 0x2d6058u: goto label_2d6058;
        case 0x2d60a0u: goto label_2d60a0;
        case 0x2d60b8u: goto label_2d60b8;
        case 0x2d60c4u: goto label_2d60c4;
        case 0x2d60dcu: goto label_2d60dc;
        case 0x2d60f4u: goto label_2d60f4;
        case 0x2d6114u: goto label_2d6114;
        case 0x2d6120u: goto label_2d6120;
        case 0x2d6138u: goto label_2d6138;
        case 0x2d6158u: goto label_2d6158;
        case 0x2d616cu: goto label_2d616c;
        case 0x2d61b0u: goto label_2d61b0;
        case 0x2d61d0u: goto label_2d61d0;
        case 0x2d61e4u: goto label_2d61e4;
        case 0x2d6240u: goto label_2d6240;
        case 0x2d6270u: goto label_2d6270;
        case 0x2d628cu: goto label_2d628c;
        case 0x2d62acu: goto label_2d62ac;
        case 0x2d62bcu: goto label_2d62bc;
        case 0x2d62ccu: goto label_2d62cc;
        case 0x2d6318u: goto label_2d6318;
        case 0x2d6328u: goto label_2d6328;
        case 0x2d633cu: goto label_2d633c;
        case 0x2d6394u: goto label_2d6394;
        case 0x2d63e0u: goto label_2d63e0;
        case 0x2d6424u: goto label_2d6424;
        case 0x2d6454u: goto label_2d6454;
        case 0x2d647cu: goto label_2d647c;
        case 0x2d648cu: goto label_2d648c;
        case 0x2d64e4u: goto label_2d64e4;
        case 0x2d6534u: goto label_2d6534;
        case 0x2d6558u: goto label_2d6558;
        case 0x2d6578u: goto label_2d6578;
        case 0x2d65acu: goto label_2d65ac;
        case 0x2d65c8u: goto label_2d65c8;
        case 0x2d65dcu: goto label_2d65dc;
        case 0x2d65f4u: goto label_2d65f4;
        case 0x2d6614u: goto label_2d6614;
        case 0x2d6628u: goto label_2d6628;
        case 0x2d663cu: goto label_2d663c;
        case 0x2d6664u: goto label_2d6664;
        case 0x2d667cu: goto label_2d667c;
        case 0x2d6688u: goto label_2d6688;
        case 0x2d66a0u: goto label_2d66a0;
        case 0x2d66c0u: goto label_2d66c0;
        default: break;
    }

    ctx->pc = 0x2d5f20u;

    // 0x2d5f20: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2d5f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2d5f24: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2d5f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2d5f28: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2d5f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2d5f2c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2d5f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2d5f30: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2d5f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2d5f34: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d5f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d5f38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d5f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d5f3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d5f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d5f40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d5f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d5f44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d5f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d5f48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d5f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d5f4c: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x2d5f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
    // 0x2d5f50: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2d5f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2d5f54: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x2d5f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2d5f58: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2d5f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d5f5c: 0xc0b4d8c  jal         func_2D3630
    ctx->pc = 0x2D5F5Cu;
    SET_GPR_U32(ctx, 31, 0x2D5F64u);
    ctx->pc = 0x2D3630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3630u, 0x2D5F5Cu, 0x2D5F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5F64u;
label_2d5f64:
    // 0x2d5f64: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x2d5f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    // 0x2d5f68: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2d5f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2d5f6c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d5f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d5f70: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2d5f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d5f74: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D5F74u;
    SET_GPR_U32(ctx, 31, 0x2D5F7Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D5F74u, 0x2D5F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5F7Cu;
label_2d5f7c:
    // 0x2d5f7c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2d5f7cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5f80: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2d5f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d5f84: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2d5f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5f88: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2D5F88u;
    SET_GPR_U32(ctx, 31, 0x2D5F90u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2D5F88u, 0x2D5F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5F90u;
label_2d5f90:
    // 0x2d5f90: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2d5f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2d5f94: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2d5f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d5f98: 0xc041d58  jal         func_107560
    ctx->pc = 0x2D5F98u;
    SET_GPR_U32(ctx, 31, 0x2D5FA0u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2D5F98u, 0x2D5FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5FA0u;
label_2d5fa0:
    // 0x2d5fa0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2d5fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2d5fa4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d5fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5fa8: 0xc041d58  jal         func_107560
    ctx->pc = 0x2D5FA8u;
    SET_GPR_U32(ctx, 31, 0x2D5FB0u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2D5FA8u, 0x2D5FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5FB0u;
label_2d5fb0:
    // 0x2d5fb0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d5fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5fb4: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2d5fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2d5fb8: 0xc0b3f84  jal         func_2CFE10
    ctx->pc = 0x2D5FB8u;
    SET_GPR_U32(ctx, 31, 0x2D5FC0u);
    ctx->pc = 0x2CFE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFE10u, 0x2D5FB8u, 0x2D5FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5FC0u;
label_2d5fc0:
    // 0x2d5fc0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2d5fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2d5fc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d5fc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d5fc8: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x2d5fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5fcc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d5fccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d5fd0: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x2d5fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2d5fd4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2d5fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2d5fd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d5fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d5fdc: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x2d5fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5fe0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d5fe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d5fe4: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x2d5fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2d5fe8: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x2d5fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5fec: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x2d5fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5ff0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d5ff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d5ff4: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x2d5ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2d5ff8: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x2d5ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5ffc: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x2d5ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6000: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d6000u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d6004: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x2d6004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2d6008: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x2d6008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d600c: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x2d600cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6010: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d6010u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d6014: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x2d6014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2d6018: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2d6018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2d601c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d601cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d6020: 0xc0b42ec  jal         func_2D0BB0
    ctx->pc = 0x2D6020u;
    SET_GPR_U32(ctx, 31, 0x2D6028u);
    ctx->pc = 0x2D0BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0BB0u, 0x2D6020u, 0x2D6028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6028u;
label_2d6028:
    // 0x2d6028: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d6028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d602c: 0x100001a0  b           . + 4 + (0x1A0 << 2)
    ctx->pc = 0x2D602Cu;
    {
        const bool branch_taken_0x2d602c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d602c) {
            ctx->pc = 0x2D66B0u;
            goto label_2d66b0;
        }
    }
    ctx->pc = 0x2D6034u;
label_2d6034:
    // 0x2d6034: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d6034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6038: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x2d6038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d603c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2d603cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d6040: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D6040u;
    SET_GPR_U32(ctx, 31, 0x2D6048u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D6040u, 0x2D6048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6048u;
label_2d6048:
    // 0x2d6048: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d6048u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d604c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d604cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6050: 0xc096fd8  jal         func_25BF60
    ctx->pc = 0x2D6050u;
    SET_GPR_U32(ctx, 31, 0x2D6058u);
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x2D6050u, 0x2D6058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6058u;
label_2d6058:
    // 0x2d6058: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d6058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d605c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d605cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d6060: 0x12420004  beq         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D6060u;
    {
        const bool branch_taken_0x2d6060 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d6060) {
            ctx->pc = 0x2D6074u;
            goto label_2d6074;
        }
    }
    ctx->pc = 0x2D6068u;
    // 0x2d6068: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2d6068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d606c: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D606Cu;
    {
        const bool branch_taken_0x2d606c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d606c) {
            ctx->pc = 0x2D6080u;
            goto label_2d6080;
        }
    }
    ctx->pc = 0x2D6074u;
label_2d6074:
    // 0x2d6074: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d6074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d6078: 0x1000018d  b           . + 4 + (0x18D << 2)
    ctx->pc = 0x2D6078u;
    {
        const bool branch_taken_0x2d6078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6078) {
            ctx->pc = 0x2D66B0u;
            goto label_2d66b0;
        }
    }
    ctx->pc = 0x2D6080u;
label_2d6080:
    // 0x2d6080: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D6080u;
    {
        const bool branch_taken_0x2d6080 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6080) {
            ctx->pc = 0x2D6094u;
            goto label_2d6094;
        }
    }
    ctx->pc = 0x2D6088u;
    // 0x2d6088: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d6088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d608c: 0x16420016  bne         $s2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D608Cu;
    {
        const bool branch_taken_0x2d608c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d608c) {
            ctx->pc = 0x2D60E8u;
            goto label_2d60e8;
        }
    }
    ctx->pc = 0x2D6094u;
label_2d6094:
    // 0x2d6094: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d6094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6098: 0xc0b62c4  jal         func_2D8B10
    ctx->pc = 0x2D6098u;
    SET_GPR_U32(ctx, 31, 0x2D60A0u);
    ctx->pc = 0x2D8B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8B10u, 0x2D6098u, 0x2D60A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D60A0u;
label_2d60a0:
    // 0x2d60a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d60a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d60a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D60A4u;
    {
        const bool branch_taken_0x2d60a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d60a4) {
            ctx->pc = 0x2D60C8u;
            goto label_2d60c8;
        }
    }
    ctx->pc = 0x2D60ACu;
    // 0x2d60ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d60acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d60b0: 0xc0b42dc  jal         func_2D0B70
    ctx->pc = 0x2D60B0u;
    SET_GPR_U32(ctx, 31, 0x2D60B8u);
    ctx->pc = 0x2D0B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0B70u, 0x2D60B0u, 0x2D60B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D60B8u;
label_2d60b8:
    // 0x2d60b8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d60b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d60bc: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2D60BCu;
    SET_GPR_U32(ctx, 31, 0x2D60C4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2D60BCu, 0x2D60C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D60C4u;
label_2d60c4:
    // 0x2d60c4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d60c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2d60c8:
    // 0x2d60c8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2d60c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2d60cc: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d60ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d60d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d60d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d60d4: 0xc0b4854  jal         func_2D2150
    ctx->pc = 0x2D60D4u;
    SET_GPR_U32(ctx, 31, 0x2D60DCu);
    ctx->pc = 0x2D2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2150u, 0x2D60D4u, 0x2D60DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D60DCu;
label_2d60dc:
    // 0x2d60dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d60dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d60e0: 0x10000173  b           . + 4 + (0x173 << 2)
    ctx->pc = 0x2D60E0u;
    {
        const bool branch_taken_0x2d60e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d60e0) {
            ctx->pc = 0x2D66B0u;
            goto label_2d66b0;
        }
    }
    ctx->pc = 0x2D60E8u;
label_2d60e8:
    // 0x2d60e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d60e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d60ec: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x2D60ECu;
    SET_GPR_U32(ctx, 31, 0x2D60F4u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2D60ECu, 0x2D60F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D60F4u;
label_2d60f4:
    // 0x2d60f4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D60F4u;
    {
        const bool branch_taken_0x2d60f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d60f4) {
            ctx->pc = 0x2D6144u;
            goto label_2d6144;
        }
    }
    ctx->pc = 0x2D60FCu;
    // 0x2d60fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d60fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6100: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D6100u;
    {
        const bool branch_taken_0x2d6100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6100) {
            ctx->pc = 0x2D6124u;
            goto label_2d6124;
        }
    }
    ctx->pc = 0x2D6108u;
    // 0x2d6108: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d6108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d610c: 0xc0b42dc  jal         func_2D0B70
    ctx->pc = 0x2D610Cu;
    SET_GPR_U32(ctx, 31, 0x2D6114u);
    ctx->pc = 0x2D0B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0B70u, 0x2D610Cu, 0x2D6114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6114u;
label_2d6114:
    // 0x2d6114: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d6114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6118: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2D6118u;
    SET_GPR_U32(ctx, 31, 0x2D6120u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2D6118u, 0x2D6120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6120u;
label_2d6120:
    // 0x2d6120: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d6120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2d6124:
    // 0x2d6124: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2d6124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2d6128: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d6128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d612c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d612cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6130: 0xc0b4854  jal         func_2D2150
    ctx->pc = 0x2D6130u;
    SET_GPR_U32(ctx, 31, 0x2D6138u);
    ctx->pc = 0x2D2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2150u, 0x2D6130u, 0x2D6138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6138u;
label_2d6138:
    // 0x2d6138: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d6138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d613c: 0x1000015c  b           . + 4 + (0x15C << 2)
    ctx->pc = 0x2D613Cu;
    {
        const bool branch_taken_0x2d613c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d613c) {
            ctx->pc = 0x2D66B0u;
            goto label_2d66b0;
        }
    }
    ctx->pc = 0x2D6144u;
label_2d6144:
    // 0x2d6144: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d6144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6148: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x2d6148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d614c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2d614cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d6150: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D6150u;
    SET_GPR_U32(ctx, 31, 0x2D6158u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D6150u, 0x2D6158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6158u;
label_2d6158:
    // 0x2d6158: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2d6158u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d615c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2d615cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2d6160: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d6160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6164: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2D6164u;
    SET_GPR_U32(ctx, 31, 0x2D616Cu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2D6164u, 0x2D616Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D616Cu;
label_2d616c:
    // 0x2d616c: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x2d616cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2d6170: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x2d6170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d6174: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2d6174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d6178: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2d6178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d617c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2d617cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6180: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2d6180u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d6184: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2d6184u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d6188: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d6188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d618c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d618cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6190: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d6190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6194: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x2d6194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2d6198: 0x104000b1  beqz        $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x2D6198u;
    {
        const bool branch_taken_0x2d6198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6198) {
            ctx->pc = 0x2D6460u;
            goto label_2d6460;
        }
    }
    ctx->pc = 0x2D61A0u;
    // 0x2d61a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d61a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d61a4: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x2d61a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2d61a8: 0xc085530  jal         func_2154C0
    ctx->pc = 0x2D61A8u;
    SET_GPR_U32(ctx, 31, 0x2D61B0u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x2D61A8u, 0x2D61B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D61B0u;
label_2d61b0:
    // 0x2d61b0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2d61b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2d61b4: 0x144300aa  bne         $v0, $v1, . + 4 + (0xAA << 2)
    ctx->pc = 0x2D61B4u;
    {
        const bool branch_taken_0x2d61b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d61b4) {
            ctx->pc = 0x2D6460u;
            goto label_2d6460;
        }
    }
    ctx->pc = 0x2D61BCu;
    // 0x2d61bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d61bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d61c0: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x2d61c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2d61c4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2d61c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d61c8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D61C8u;
    SET_GPR_U32(ctx, 31, 0x2D61D0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D61C8u, 0x2D61D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D61D0u;
label_2d61d0:
    // 0x2d61d0: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x2d61d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x2d61d4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2d61d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2d61d8: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2d61d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2d61dc: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2D61DCu;
    SET_GPR_U32(ctx, 31, 0x2D61E4u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2D61DCu, 0x2D61E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D61E4u;
label_2d61e4:
    // 0x2d61e4: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2d61e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2d61e8: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x2d61e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2d61ec: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2d61ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d61f0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2d61f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d61f4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2d61f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d61f8: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2d61f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d61fc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2d61fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d6200: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d6200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d6204: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x2d6204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6208: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x2d6208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d620c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d620cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d6210: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2d6210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2d6214: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x2d6214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6218: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x2d6218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d621c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d621cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d6220: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2d6220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2d6224: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x2d6224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6228: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x2d6228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d622c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d622cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d6230: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x2d6230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2d6234: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2d6234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2d6238: 0xc104d24  jal         func_413490
    ctx->pc = 0x2D6238u;
    SET_GPR_U32(ctx, 31, 0x2D6240u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2D6238u, 0x2D6240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6240u;
label_2d6240:
    // 0x2d6240: 0x3c024284  lui         $v0, 0x4284
    ctx->pc = 0x2d6240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17028 << 16));
    // 0x2d6244: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d6244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d6248: 0x0  nop
    ctx->pc = 0x2d6248u;
    // NOP
    // 0x2d624c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d624cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d6250: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2D6250u;
    {
        const bool branch_taken_0x2d6250 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d6250) {
            ctx->pc = 0x2D6294u;
            goto label_2d6294;
        }
    }
    ctx->pc = 0x2D6258u;
    // 0x2d6258: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d6258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d625c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2d625cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d6260: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2d6260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d6264: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2d6264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2d6268: 0xc0b5f04  jal         func_2D7C10
    ctx->pc = 0x2D6268u;
    SET_GPR_U32(ctx, 31, 0x2D6270u);
    ctx->pc = 0x2D7C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C10u, 0x2D6268u, 0x2D6270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6270u;
label_2d6270:
    // 0x2d6270: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2d6270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2d6274: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d6274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d6278: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d6278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d627c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2d627cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2d6280: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d6280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6284: 0xc090fe0  jal         func_243F80
    ctx->pc = 0x2D6284u;
    SET_GPR_U32(ctx, 31, 0x2D628Cu);
    ctx->pc = 0x243F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243F80u, 0x2D6284u, 0x2D628Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D628Cu;
label_2d628c:
    // 0x2d628c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2D628Cu;
    {
        const bool branch_taken_0x2d628c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d628c) {
            ctx->pc = 0x2D6460u;
            goto label_2d6460;
        }
    }
    ctx->pc = 0x2D6294u;
label_2d6294:
    // 0x2d6294: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d6294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6298: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2d6298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2d629c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d629cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d62a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d62a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d62a4: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D62A4u;
    SET_GPR_U32(ctx, 31, 0x2D62ACu);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D62A4u, 0x2D62ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D62ACu;
label_2d62ac:
    // 0x2d62ac: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2d62acu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d62b0: 0x26840004  addiu       $a0, $s4, 0x4
    ctx->pc = 0x2d62b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x2d62b4: 0xc0b537c  jal         func_2D4DF0
    ctx->pc = 0x2D62B4u;
    SET_GPR_U32(ctx, 31, 0x2D62BCu);
    ctx->pc = 0x2D4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4DF0u, 0x2D62B4u, 0x2D62BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D62BCu;
label_2d62bc:
    // 0x2d62bc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2d62bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2d62c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d62c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d62c4: 0xc041d58  jal         func_107560
    ctx->pc = 0x2D62C4u;
    SET_GPR_U32(ctx, 31, 0x2D62CCu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2D62C4u, 0x2D62CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D62CCu;
label_2d62cc:
    // 0x2d62cc: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x2d62ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d62d0: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2d62d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2d62d4: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x2d62d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d62d8: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x2d62d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d62dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d62dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d62e0: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2d62e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2d62e4: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x2d62e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d62e8: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x2d62e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d62ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d62ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d62f0: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2d62f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2d62f4: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x2d62f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d62f8: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x2d62f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d62fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d62fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d6300: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x2d6300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2d6304: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d6304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6308: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x2d6308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2d630c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2d630cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d6310: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D6310u;
    SET_GPR_U32(ctx, 31, 0x2D6318u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D6310u, 0x2D6318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6318u;
label_2d6318:
    // 0x2d6318: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2d6318u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d631c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2d631cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6320: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x2D6320u;
    SET_GPR_U32(ctx, 31, 0x2D6328u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2D6320u, 0x2D6328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6328u;
label_2d6328:
    // 0x2d6328: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2D6328u;
    {
        const bool branch_taken_0x2d6328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6328) {
            ctx->pc = 0x2D6460u;
            goto label_2d6460;
        }
    }
    ctx->pc = 0x2D6330u;
    // 0x2d6330: 0x26840004  addiu       $a0, $s4, 0x4
    ctx->pc = 0x2d6330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x2d6334: 0xc082b70  jal         func_20ADC0
    ctx->pc = 0x2D6334u;
    SET_GPR_U32(ctx, 31, 0x2D633Cu);
    ctx->pc = 0x20ADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADC0u, 0x2D6334u, 0x2D633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D633Cu;
label_2d633c:
    // 0x2d633c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D633Cu;
    {
        const bool branch_taken_0x2d633c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2d633c) {
            ctx->pc = 0x2D6358u;
            goto label_2d6358;
        }
    }
    ctx->pc = 0x2D6344u;
    // 0x2d6344: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d6344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6348: 0x0  nop
    ctx->pc = 0x2d6348u;
    // NOP
    // 0x2d634c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2d634cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d6350: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D6350u;
    {
        const bool branch_taken_0x2d6350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6350) {
            ctx->pc = 0x2D6374u;
            goto label_2d6374;
        }
    }
    ctx->pc = 0x2D6358u;
label_2d6358:
    // 0x2d6358: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2d6358u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2d635c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d635cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d6360: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d6360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d6364: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d6364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6368: 0x0  nop
    ctx->pc = 0x2d6368u;
    // NOP
    // 0x2d636c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2d636cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d6370: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2d6370u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2d6374:
    // 0x2d6374: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2d6374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2d6378: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d6378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d637c: 0x0  nop
    ctx->pc = 0x2d637cu;
    // NOP
    // 0x2d6380: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d6380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d6384: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x2d6384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x2d6388: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2d6388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2d638c: 0xc104d24  jal         func_413490
    ctx->pc = 0x2D638Cu;
    SET_GPR_U32(ctx, 31, 0x2D6394u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2D638Cu, 0x2D6394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6394u;
label_2d6394:
    // 0x2d6394: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x2d6394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2d6398: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x2d6398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d639c: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2d639cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x2d63a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d63a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d63a4: 0x0  nop
    ctx->pc = 0x2d63a4u;
    // NOP
    // 0x2d63a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d63a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d63ac: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2D63ACu;
    {
        const bool branch_taken_0x2d63ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d63ac) {
            ctx->pc = 0x2D63E8u;
            goto label_2d63e8;
        }
    }
    ctx->pc = 0x2D63B4u;
    // 0x2d63b4: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x2d63b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d63b8: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2d63b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2d63bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d63bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d63c0: 0x0  nop
    ctx->pc = 0x2d63c0u;
    // NOP
    // 0x2d63c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d63c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d63c8: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x2D63C8u;
    {
        const bool branch_taken_0x2d63c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d63c8) {
            ctx->pc = 0x2D6460u;
            goto label_2d6460;
        }
    }
    ctx->pc = 0x2D63D0u;
    // 0x2d63d0: 0x26840004  addiu       $a0, $s4, 0x4
    ctx->pc = 0x2d63d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x2d63d4: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2d63d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2d63d8: 0xc0b4880  jal         func_2D2200
    ctx->pc = 0x2D63D8u;
    SET_GPR_U32(ctx, 31, 0x2D63E0u);
    ctx->pc = 0x2D2200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2200u, 0x2D63D8u, 0x2D63E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D63E0u;
label_2d63e0:
    // 0x2d63e0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2D63E0u;
    {
        const bool branch_taken_0x2d63e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d63e0) {
            ctx->pc = 0x2D6460u;
            goto label_2d6460;
        }
    }
    ctx->pc = 0x2D63E8u;
label_2d63e8:
    // 0x2d63e8: 0xc7a20130  lwc1        $f2, 0x130($sp)
    ctx->pc = 0x2d63e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d63ec: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x2d63ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x2d63f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d63f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d63f4: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x2d63f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d63f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2d63f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d63fc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2d63fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d6400: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x2D6400u;
    {
        const bool branch_taken_0x2d6400 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d6400) {
            ctx->pc = 0x2D6460u;
            goto label_2d6460;
        }
    }
    ctx->pc = 0x2D6408u;
    // 0x2d6408: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d6408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d640c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d640cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6410: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x2d6410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2d6414: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2d6414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d6418: 0x24460014  addiu       $a2, $v0, 0x14
    ctx->pc = 0x2d6418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2d641c: 0xc0ad4f8  jal         func_2B53E0
    ctx->pc = 0x2D641Cu;
    SET_GPR_U32(ctx, 31, 0x2D6424u);
    ctx->pc = 0x2B53E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B53E0u, 0x2D641Cu, 0x2D6424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6424u;
label_2d6424:
    // 0x2d6424: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d6424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6428: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d6428u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d642c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d642cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6430: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d6430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6434: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x2d6434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2d6438: 0x8ca50018  lw          $a1, 0x18($a1)
    ctx->pc = 0x2d6438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2d643c: 0x8cc60024  lw          $a2, 0x24($a2)
    ctx->pc = 0x2d643cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2d6440: 0x8c670020  lw          $a3, 0x20($v1)
    ctx->pc = 0x2d6440u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2d6444: 0x8c480028  lw          $t0, 0x28($v0)
    ctx->pc = 0x2d6444u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2d6448: 0x24090064  addiu       $t1, $zero, 0x64
    ctx->pc = 0x2d6448u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2d644c: 0xc0b43d8  jal         func_2D0F60
    ctx->pc = 0x2D644Cu;
    SET_GPR_U32(ctx, 31, 0x2D6454u);
    ctx->pc = 0x2D0F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0F60u, 0x2D644Cu, 0x2D6454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6454u;
label_2d6454:
    // 0x2d6454: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d6454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d6458: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x2D6458u;
    {
        const bool branch_taken_0x2d6458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6458) {
            ctx->pc = 0x2D66B0u;
            goto label_2d66b0;
        }
    }
    ctx->pc = 0x2D6460u;
label_2d6460:
    // 0x2d6460: 0x16200065  bnez        $s1, . + 4 + (0x65 << 2)
    ctx->pc = 0x2D6460u;
    {
        const bool branch_taken_0x2d6460 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6460) {
            ctx->pc = 0x2D65F8u;
            goto label_2d65f8;
        }
    }
    ctx->pc = 0x2D6468u;
    // 0x2d6468: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2d6468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2d646c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d646cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6470: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2d6470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d6474: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D6474u;
    SET_GPR_U32(ctx, 31, 0x2D647Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D6474u, 0x2D647Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D647Cu;
label_2d647c:
    // 0x2d647c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2d647cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6480: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d6480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6484: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x2D6484u;
    SET_GPR_U32(ctx, 31, 0x2D648Cu);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2D6484u, 0x2D648Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D648Cu;
label_2d648c:
    // 0x2d648c: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2D648Cu;
    {
        const bool branch_taken_0x2d648c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d648c) {
            ctx->pc = 0x2D65E8u;
            goto label_2d65e8;
        }
    }
    ctx->pc = 0x2D6494u;
    // 0x2d6494: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2d6494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2d6498: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d6498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d649c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d649cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d64a0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2d64a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d64a4: 0x10620050  beq         $v1, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2D64A4u;
    {
        const bool branch_taken_0x2d64a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d64a4) {
            ctx->pc = 0x2D65E8u;
            goto label_2d65e8;
        }
    }
    ctx->pc = 0x2D64ACu;
    // 0x2d64ac: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x2d64acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x2d64b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d64b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d64b4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2d64b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d64b8: 0x1062004b  beq         $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x2D64B8u;
    {
        const bool branch_taken_0x2d64b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d64b8) {
            ctx->pc = 0x2D65E8u;
            goto label_2d65e8;
        }
    }
    ctx->pc = 0x2D64C0u;
    // 0x2d64c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d64c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d64c4: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2d64c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2d64c8: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2d64c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2d64cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d64ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d64d0: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2D64D0u;
    {
        const bool branch_taken_0x2d64d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d64d0) {
            ctx->pc = 0x2D65E8u;
            goto label_2d65e8;
        }
    }
    ctx->pc = 0x2D64D8u;
    // 0x2d64d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d64d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d64dc: 0xc0ad2e8  jal         func_2B4BA0
    ctx->pc = 0x2D64DCu;
    SET_GPR_U32(ctx, 31, 0x2D64E4u);
    ctx->pc = 0x2B4BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4BA0u, 0x2D64DCu, 0x2D64E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D64E4u;
label_2d64e4:
    // 0x2d64e4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2d64e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d64e8: 0x0  nop
    ctx->pc = 0x2d64e8u;
    // NOP
    // 0x2d64ec: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2d64ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d64f0: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
    ctx->pc = 0x2D64F0u;
    {
        const bool branch_taken_0x2d64f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d64f0) {
            ctx->pc = 0x2D65E8u;
            goto label_2d65e8;
        }
    }
    ctx->pc = 0x2D64F8u;
    // 0x2d64f8: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x2d64f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d64fc: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x2d64fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6500: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d6500u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d6504: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2d6504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2d6508: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x2d6508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d650c: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x2d650cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6510: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d6510u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d6514: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2d6514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2d6518: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x2d6518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d651c: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x2d651cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6520: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d6520u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d6524: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2d6524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2d6528: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2d6528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d652c: 0xc104d24  jal         func_413490
    ctx->pc = 0x2D652Cu;
    SET_GPR_U32(ctx, 31, 0x2D6534u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2D652Cu, 0x2D6534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6534u;
label_2d6534:
    // 0x2d6534: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2d6534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2d6538: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d6538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d653c: 0x0  nop
    ctx->pc = 0x2d653cu;
    // NOP
    // 0x2d6540: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d6540u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d6544: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x2D6544u;
    {
        const bool branch_taken_0x2d6544 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d6544) {
            ctx->pc = 0x2D656Cu;
            goto label_2d656c;
        }
    }
    ctx->pc = 0x2D654Cu;
    // 0x2d654c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d654cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6550: 0xc0b4b00  jal         func_2D2C00
    ctx->pc = 0x2D6550u;
    SET_GPR_U32(ctx, 31, 0x2D6558u);
    ctx->pc = 0x2D2C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2C00u, 0x2D6550u, 0x2D6558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6558u;
label_2d6558:
    // 0x2d6558: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2d6558u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d655c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d655cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6560: 0xa0400030  sb          $zero, 0x30($v0)
    ctx->pc = 0x2d6560u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6564: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2D6564u;
    {
        const bool branch_taken_0x2d6564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6564) {
            ctx->pc = 0x2D65F8u;
            goto label_2d65f8;
        }
    }
    ctx->pc = 0x2D656Cu;
label_2d656c:
    // 0x2d656c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d656cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6570: 0xc0969a0  jal         func_25A680
    ctx->pc = 0x2D6570u;
    SET_GPR_U32(ctx, 31, 0x2D6578u);
    ctx->pc = 0x25A680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A680u, 0x2D6570u, 0x2D6578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6578u;
label_2d6578:
    // 0x2d6578: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D6578u;
    {
        const bool branch_taken_0x2d6578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6578) {
            ctx->pc = 0x2D658Cu;
            goto label_2d658c;
        }
    }
    ctx->pc = 0x2D6580u;
    // 0x2d6580: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d6580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6584: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d6584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6588: 0xa0430030  sb          $v1, 0x30($v0)
    ctx->pc = 0x2d6588u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 48), (uint8_t)GPR_U32(ctx, 3));
label_2d658c:
    // 0x2d658c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d658cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6590: 0x90420030  lbu         $v0, 0x30($v0)
    ctx->pc = 0x2d6590u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2d6594: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D6594u;
    {
        const bool branch_taken_0x2d6594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6594) {
            ctx->pc = 0x2D65D0u;
            goto label_2d65d0;
        }
    }
    ctx->pc = 0x2D659Cu;
    // 0x2d659c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2d659cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d65a0: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2d65a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2d65a4: 0xc0b5f04  jal         func_2D7C10
    ctx->pc = 0x2D65A4u;
    SET_GPR_U32(ctx, 31, 0x2D65ACu);
    ctx->pc = 0x2D7C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C10u, 0x2D65A4u, 0x2D65ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D65ACu;
label_2d65ac:
    // 0x2d65ac: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2d65acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2d65b0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d65b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d65b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d65b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d65b8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2d65b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2d65bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d65bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d65c0: 0xc090fe0  jal         func_243F80
    ctx->pc = 0x2D65C0u;
    SET_GPR_U32(ctx, 31, 0x2D65C8u);
    ctx->pc = 0x243F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243F80u, 0x2D65C0u, 0x2D65C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D65C8u;
label_2d65c8:
    // 0x2d65c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D65C8u;
    {
        const bool branch_taken_0x2d65c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d65c8) {
            ctx->pc = 0x2D65F8u;
            goto label_2d65f8;
        }
    }
    ctx->pc = 0x2D65D0u;
label_2d65d0:
    // 0x2d65d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d65d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d65d4: 0xc0b4b00  jal         func_2D2C00
    ctx->pc = 0x2D65D4u;
    SET_GPR_U32(ctx, 31, 0x2D65DCu);
    ctx->pc = 0x2D2C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2C00u, 0x2D65D4u, 0x2D65DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D65DCu;
label_2d65dc:
    // 0x2d65dc: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2d65dcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d65e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D65E0u;
    {
        const bool branch_taken_0x2d65e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d65e0) {
            ctx->pc = 0x2D65F8u;
            goto label_2d65f8;
        }
    }
    ctx->pc = 0x2D65E8u;
label_2d65e8:
    // 0x2d65e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d65e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d65ec: 0xc0b4b00  jal         func_2D2C00
    ctx->pc = 0x2D65ECu;
    SET_GPR_U32(ctx, 31, 0x2D65F4u);
    ctx->pc = 0x2D2C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2C00u, 0x2D65ECu, 0x2D65F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D65F4u;
label_2d65f4:
    // 0x2d65f4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2d65f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2d65f8:
    // 0x2d65f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d65f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d65fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d65fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6600: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x2d6600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2d6604: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2d6604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d6608: 0x24460014  addiu       $a2, $v0, 0x14
    ctx->pc = 0x2d6608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2d660c: 0xc0ad4f8  jal         func_2B53E0
    ctx->pc = 0x2D660Cu;
    SET_GPR_U32(ctx, 31, 0x2D6614u);
    ctx->pc = 0x2B53E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B53E0u, 0x2D660Cu, 0x2D6614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6614u;
label_2d6614:
    // 0x2d6614: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2D6614u;
    {
        const bool branch_taken_0x2d6614 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6614) {
            ctx->pc = 0x2D66ACu;
            goto label_2d66ac;
        }
    }
    ctx->pc = 0x2D661Cu;
    // 0x2d661c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d661cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6620: 0xc0b62b0  jal         func_2D8AC0
    ctx->pc = 0x2D6620u;
    SET_GPR_U32(ctx, 31, 0x2D6628u);
    ctx->pc = 0x2D8AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8AC0u, 0x2D6620u, 0x2D6628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6628u;
label_2d6628:
    // 0x2d6628: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d6628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d662c: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x2d662cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2d6630: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x2d6630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d6634: 0xc0b4aac  jal         func_2D2AB0
    ctx->pc = 0x2D6634u;
    SET_GPR_U32(ctx, 31, 0x2D663Cu);
    ctx->pc = 0x2D2AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2AB0u, 0x2D6634u, 0x2D663Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D663Cu;
label_2d663c:
    // 0x2d663c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D663Cu;
    {
        const bool branch_taken_0x2d663c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d663c) {
            ctx->pc = 0x2D6664u;
            goto label_2d6664;
        }
    }
    ctx->pc = 0x2D6644u;
    // 0x2d6644: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d6644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6648: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x2d6648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2d664c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D664Cu;
    {
        const bool branch_taken_0x2d664c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d664c) {
            ctx->pc = 0x2D6664u;
            goto label_2d6664;
        }
    }
    ctx->pc = 0x2D6654u;
    // 0x2d6654: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d6654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6658: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d6658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d665c: 0xc0969e4  jal         func_25A790
    ctx->pc = 0x2D665Cu;
    SET_GPR_U32(ctx, 31, 0x2D6664u);
    ctx->pc = 0x25A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A790u, 0x2D665Cu, 0x2D6664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6664u;
label_2d6664:
    // 0x2d6664: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d6664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6668: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D6668u;
    {
        const bool branch_taken_0x2d6668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6668) {
            ctx->pc = 0x2D668Cu;
            goto label_2d668c;
        }
    }
    ctx->pc = 0x2D6670u;
    // 0x2d6670: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d6670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6674: 0xc0b42dc  jal         func_2D0B70
    ctx->pc = 0x2D6674u;
    SET_GPR_U32(ctx, 31, 0x2D667Cu);
    ctx->pc = 0x2D0B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0B70u, 0x2D6674u, 0x2D667Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D667Cu;
label_2d667c:
    // 0x2d667c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d667cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6680: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2D6680u;
    SET_GPR_U32(ctx, 31, 0x2D6688u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2D6680u, 0x2D6688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6688u;
label_2d6688:
    // 0x2d6688: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d6688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2d668c:
    // 0x2d668c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2d668cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2d6690: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d6690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d6694: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d6694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6698: 0xc0b4854  jal         func_2D2150
    ctx->pc = 0x2D6698u;
    SET_GPR_U32(ctx, 31, 0x2D66A0u);
    ctx->pc = 0x2D2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2150u, 0x2D6698u, 0x2D66A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D66A0u;
label_2d66a0:
    // 0x2d66a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d66a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d66a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D66A4u;
    {
        const bool branch_taken_0x2d66a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d66a4) {
            ctx->pc = 0x2D66B0u;
            goto label_2d66b0;
        }
    }
    ctx->pc = 0x2D66ACu;
label_2d66ac:
    // 0x2d66ac: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d66acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2d66b0:
    // 0x2d66b0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2d66b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2d66b4: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d66b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d66b8: 0xc0b42d4  jal         func_2D0B50
    ctx->pc = 0x2D66B8u;
    SET_GPR_U32(ctx, 31, 0x2D66C0u);
    ctx->pc = 0x2D0B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0B50u, 0x2D66B8u, 0x2D66C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D66C0u;
label_2d66c0:
    // 0x2d66c0: 0x1602fe5c  bne         $s0, $v0, . + 4 + (-0x1A4 << 2)
    ctx->pc = 0x2D66C0u;
    {
        const bool branch_taken_0x2d66c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d66c0) {
            ctx->pc = 0x2D6034u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6034;
        }
    }
    ctx->pc = 0x2D66C8u;
    // 0x2d66c8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2d66c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d66cc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2d66ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d66d0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2d66d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d66d4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2d66d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d66d8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d66d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d66dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d66dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d66e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d66e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d66e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d66e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d66e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d66e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d66ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d66ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d66f0: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x2d66f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2d66f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D66F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D66F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D66FCu;
    // 0x2d66fc: 0x0  nop
    ctx->pc = 0x2d66fcu;
    // NOP
    ctx->pc = 0x2d6700u;
}
