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

// Function: sub_001B2E80
// Address: 0x1b2e80 - 0x1b33b0
void sub_001B2E80_0x1b2e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2E80_0x1b2e80");
#endif

    switch (ctx->pc) {
        case 0x1b2f28u: goto label_1b2f28;
        case 0x1b2f40u: goto label_1b2f40;
        case 0x1b2f54u: goto label_1b2f54;
        case 0x1b2f88u: goto label_1b2f88;
        case 0x1b2fa0u: goto label_1b2fa0;
        case 0x1b2ff0u: goto label_1b2ff0;
        case 0x1b2ffcu: goto label_1b2ffc;
        case 0x1b3014u: goto label_1b3014;
        case 0x1b3028u: goto label_1b3028;
        case 0x1b305cu: goto label_1b305c;
        case 0x1b3074u: goto label_1b3074;
        case 0x1b30a0u: goto label_1b30a0;
        case 0x1b30acu: goto label_1b30ac;
        case 0x1b30c4u: goto label_1b30c4;
        case 0x1b30d8u: goto label_1b30d8;
        case 0x1b30e4u: goto label_1b30e4;
        case 0x1b30fcu: goto label_1b30fc;
        case 0x1b3174u: goto label_1b3174;
        case 0x1b31a8u: goto label_1b31a8;
        case 0x1b31c0u: goto label_1b31c0;
        case 0x1b31f4u: goto label_1b31f4;
        case 0x1b3200u: goto label_1b3200;
        case 0x1b3218u: goto label_1b3218;
        case 0x1b322cu: goto label_1b322c;
        case 0x1b3260u: goto label_1b3260;
        case 0x1b3278u: goto label_1b3278;
        case 0x1b32acu: goto label_1b32ac;
        case 0x1b32b8u: goto label_1b32b8;
        case 0x1b32c4u: goto label_1b32c4;
        case 0x1b32dcu: goto label_1b32dc;
        case 0x1b32f0u: goto label_1b32f0;
        case 0x1b32fcu: goto label_1b32fc;
        case 0x1b3314u: goto label_1b3314;
        case 0x1b337cu: goto label_1b337c;
        default: break;
    }

    ctx->pc = 0x1b2e80u;

    // 0x1b2e80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b2e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b2e84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b2e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b2e88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b2e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b2e8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b2e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b2e90: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1b2e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1b2e94: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1b2e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1b2e98: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1b2e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b2e9c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2E9Cu;
    {
        const bool branch_taken_0x1b2e9c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1b2e9c) {
            ctx->pc = 0x1B2EB8u;
            goto label_1b2eb8;
        }
    }
    ctx->pc = 0x1B2EA4u;
    // 0x1b2ea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2ea8: 0x0  nop
    ctx->pc = 0x1b2ea8u;
    // NOP
    // 0x1b2eac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b2eacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b2eb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B2EB0u;
    {
        const bool branch_taken_0x1b2eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2eb0) {
            ctx->pc = 0x1B2ED4u;
            goto label_1b2ed4;
        }
    }
    ctx->pc = 0x1B2EB8u;
label_1b2eb8:
    // 0x1b2eb8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b2eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b2ebc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b2ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b2ec0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b2ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b2ec4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b2ec4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2ec8: 0x0  nop
    ctx->pc = 0x1b2ec8u;
    // NOP
    // 0x1b2ecc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b2eccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b2ed0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b2ed0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b2ed4:
    // 0x1b2ed4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1b2ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1b2ed8: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1b2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1b2edc: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1b2edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b2ee0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2EE0u;
    {
        const bool branch_taken_0x1b2ee0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1b2ee0) {
            ctx->pc = 0x1B2EFCu;
            goto label_1b2efc;
        }
    }
    ctx->pc = 0x1B2EE8u;
    // 0x1b2ee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2eec: 0x0  nop
    ctx->pc = 0x1b2eecu;
    // NOP
    // 0x1b2ef0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b2ef0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b2ef4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B2EF4u;
    {
        const bool branch_taken_0x1b2ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2ef4) {
            ctx->pc = 0x1B2F18u;
            goto label_1b2f18;
        }
    }
    ctx->pc = 0x1B2EFCu;
label_1b2efc:
    // 0x1b2efc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b2efcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b2f00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b2f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b2f04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b2f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b2f08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b2f08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2f0c: 0x0  nop
    ctx->pc = 0x1b2f0cu;
    // NOP
    // 0x1b2f10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b2f10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b2f14: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b2f14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b2f18:
    // 0x1b2f18: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1b2f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1b2f1c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1b2f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b2f20: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B2F20u;
    SET_GPR_U32(ctx, 31, 0x1B2F28u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B2F20u, 0x1B2F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2F28u;
label_1b2f28:
    // 0x1b2f28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b2f28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2f2c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b2f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b2f30: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b2f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b2f34: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1b2f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b2f38: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B2F38u;
    SET_GPR_U32(ctx, 31, 0x1B2F40u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B2F38u, 0x1B2F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2F40u;
label_1b2f40:
    // 0x1b2f40: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b2f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2f44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b2f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2f48: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1b2f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b2f4c: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1B2F4Cu;
    SET_GPR_U32(ctx, 31, 0x1B2F54u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1B2F4Cu, 0x1B2F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2F54u;
label_1b2f54:
    // 0x1b2f54: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b2f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b2f58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b2f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2f5c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1b2f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2f60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b2f60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b2f64: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1b2f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1b2f68: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b2f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b2f6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b2f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2f70: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1b2f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2f74: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b2f74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b2f78: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1b2f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1b2f7c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1b2f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b2f80: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B2F80u;
    SET_GPR_U32(ctx, 31, 0x1B2F88u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B2F80u, 0x1B2F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2F88u;
label_1b2f88:
    // 0x1b2f88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b2f88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2f8c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b2f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b2f90: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b2f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b2f94: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1b2f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b2f98: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B2F98u;
    SET_GPR_U32(ctx, 31, 0x1B2FA0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B2F98u, 0x1B2FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2FA0u;
label_1b2fa0:
    // 0x1b2fa0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b2fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2fa4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b2fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b2fa8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b2fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2fac: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1b2facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2fb0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b2fb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b2fb4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1b2fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2fb8: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1b2fb8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b2fbc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b2fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b2fc0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b2fc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b2fc4: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x1b2fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b2fc8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b2fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b2fcc: 0xc44101d4  lwc1        $f1, 0x1D4($v0)
    ctx->pc = 0x1b2fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2fd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b2fd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2fd4: 0x0  nop
    ctx->pc = 0x1b2fd4u;
    // NOP
    // 0x1b2fd8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b2fd8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b2fdc: 0x46021b5d  msub.s      $f13, $f3, $f2
    ctx->pc = 0x1b2fdcu;
    ctx->f[13] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1b2fe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b2fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2fe4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b2fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2fe8: 0xc08c208  jal         func_230820
    ctx->pc = 0x1B2FE8u;
    SET_GPR_U32(ctx, 31, 0x1B2FF0u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1B2FE8u, 0x1B2FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2FF0u;
label_1b2ff0:
    // 0x1b2ff0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1b2ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b2ff4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B2FF4u;
    SET_GPR_U32(ctx, 31, 0x1B2FFCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B2FF4u, 0x1B2FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2FFCu;
label_1b2ffc:
    // 0x1b2ffc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b2ffcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3000: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3004: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b3004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b3008: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1b3008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1b300c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B300Cu;
    SET_GPR_U32(ctx, 31, 0x1B3014u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B300Cu, 0x1B3014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3014u;
label_1b3014:
    // 0x1b3014: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b3014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3018: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b3018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b301c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1b301cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b3020: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1B3020u;
    SET_GPR_U32(ctx, 31, 0x1B3028u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1B3020u, 0x1B3028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3028u;
label_1b3028:
    // 0x1b3028: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b3028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b302c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b302cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3030: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1b3030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3034: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b3034u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b3038: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1b3038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1b303c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b303cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b3040: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b3040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3044: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1b3044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3048: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b3048u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b304c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1b304cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1b3050: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1b3050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3054: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B3054u;
    SET_GPR_U32(ctx, 31, 0x1B305Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B3054u, 0x1B305Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B305Cu;
label_1b305c:
    // 0x1b305c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b305cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3060: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3064: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b3064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b3068: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1b3068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1b306c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B306Cu;
    SET_GPR_U32(ctx, 31, 0x1B3074u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B306Cu, 0x1B3074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3074u;
label_1b3074:
    // 0x1b3074: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b3074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3078: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b307c: 0xc44100c8  lwc1        $f1, 0xC8($v0)
    ctx->pc = 0x1b307cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3080: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1b3080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3084: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1b3084u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b3088: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b308c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b308cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3090: 0xc44d01d4  lwc1        $f13, 0x1D4($v0)
    ctx->pc = 0x1b3090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b3094: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b3094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3098: 0xc08c208  jal         func_230820
    ctx->pc = 0x1B3098u;
    SET_GPR_U32(ctx, 31, 0x1B30A0u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1B3098u, 0x1B30A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B30A0u;
label_1b30a0:
    // 0x1b30a0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1b30a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b30a4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B30A4u;
    SET_GPR_U32(ctx, 31, 0x1B30ACu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B30A4u, 0x1B30ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B30ACu;
label_1b30ac:
    // 0x1b30ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b30acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b30b0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b30b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b30b4: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b30b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b30b8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1b30b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b30bc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B30BCu;
    SET_GPR_U32(ctx, 31, 0x1B30C4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B30BCu, 0x1B30C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B30C4u;
label_1b30c4:
    // 0x1b30c4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b30c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b30c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b30c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b30cc: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x1b30ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1b30d0: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1B30D0u;
    SET_GPR_U32(ctx, 31, 0x1B30D8u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1B30D0u, 0x1B30D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B30D8u;
label_1b30d8:
    // 0x1b30d8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1b30d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b30dc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B30DCu;
    SET_GPR_U32(ctx, 31, 0x1B30E4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B30DCu, 0x1B30E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B30E4u;
label_1b30e4:
    // 0x1b30e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b30e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b30e8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b30e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b30ec: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b30ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b30f0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1b30f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b30f4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B30F4u;
    SET_GPR_U32(ctx, 31, 0x1B30FCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B30F4u, 0x1B30FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B30FCu;
label_1b30fc:
    // 0x1b30fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b30fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3100: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3104: 0xc44301d8  lwc1        $f3, 0x1D8($v0)
    ctx->pc = 0x1b3104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b3108: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1b3108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b310c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b310cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3110: 0xc44100c8  lwc1        $f1, 0xC8($v0)
    ctx->pc = 0x1b3110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3114: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b3114u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3118: 0x0  nop
    ctx->pc = 0x1b3118u;
    // NOP
    // 0x1b311c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b311cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b3120: 0x4603131d  msub.s      $f12, $f2, $f3
    ctx->pc = 0x1b3120u;
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b3124: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3128: 0xc44501dc  lwc1        $f5, 0x1DC($v0)
    ctx->pc = 0x1b3128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1b312c: 0xc7a4003c  lwc1        $f4, 0x3C($sp)
    ctx->pc = 0x1b312cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b3130: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b3130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b3134: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b3134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b3138: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x1b3138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b313c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b313cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3140: 0xc44101d4  lwc1        $f1, 0x1D4($v0)
    ctx->pc = 0x1b3140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3144: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b3144u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3148: 0x0  nop
    ctx->pc = 0x1b3148u;
    // NOP
    // 0x1b314c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b314cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b3150: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x1b3150u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1b3154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b3154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3158: 0x0  nop
    ctx->pc = 0x1b3158u;
    // NOP
    // 0x1b315c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b315cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b3160: 0x4605235d  msub.s      $f13, $f4, $f5
    ctx->pc = 0x1b3160u;
    ctx->f[13] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x1b3164: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b3164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3168: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b3168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b316c: 0xc08c208  jal         func_230820
    ctx->pc = 0x1B316Cu;
    SET_GPR_U32(ctx, 31, 0x1B3174u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1B316Cu, 0x1B3174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3174u;
label_1b3174:
    // 0x1b3174: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b3174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b3178: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b3178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b317c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1b317cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3180: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b3180u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b3184: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1b3184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1b3188: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b3188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b318c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b318cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3190: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1b3190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3194: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b3194u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b3198: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1b3198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1b319c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1b319cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b31a0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B31A0u;
    SET_GPR_U32(ctx, 31, 0x1B31A8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B31A0u, 0x1B31A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B31A8u;
label_1b31a8:
    // 0x1b31a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b31a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b31ac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b31acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b31b0: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b31b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b31b4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1b31b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b31b8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B31B8u;
    SET_GPR_U32(ctx, 31, 0x1B31C0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B31B8u, 0x1B31C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B31C0u;
label_1b31c0:
    // 0x1b31c0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b31c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b31c4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1b31c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b31c8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1b31c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1b31cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b31ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b31d0: 0xc4600174  lwc1        $f0, 0x174($v1)
    ctx->pc = 0x1b31d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b31d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b31d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b31d8: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x1b31d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b31dc: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1b31dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b31e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b31e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b31e4: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x1b31e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1b31e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b31e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b31ec: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1B31ECu;
    SET_GPR_U32(ctx, 31, 0x1B31F4u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1B31ECu, 0x1B31F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B31F4u;
label_1b31f4:
    // 0x1b31f4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1b31f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b31f8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B31F8u;
    SET_GPR_U32(ctx, 31, 0x1B3200u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B31F8u, 0x1B3200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3200u;
label_1b3200:
    // 0x1b3200: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b3200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3204: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3208: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b3208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b320c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b320cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3210: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B3210u;
    SET_GPR_U32(ctx, 31, 0x1B3218u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B3210u, 0x1B3218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3218u;
label_1b3218:
    // 0x1b3218: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b3218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b321c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b321cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3220: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1b3220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b3224: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1B3224u;
    SET_GPR_U32(ctx, 31, 0x1B322Cu);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1B3224u, 0x1B322Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B322Cu;
label_1b322c:
    // 0x1b322c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b322cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b3230: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b3230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3234: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1b3234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3238: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b3238u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b323c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1b323cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1b3240: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b3240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b3244: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b3244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3248: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1b3248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b324c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b324cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b3250: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1b3250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1b3254: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1b3254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3258: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B3258u;
    SET_GPR_U32(ctx, 31, 0x1B3260u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B3258u, 0x1B3260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3260u;
label_1b3260:
    // 0x1b3260: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b3260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3264: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3268: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b3268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b326c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b326cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3270: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B3270u;
    SET_GPR_U32(ctx, 31, 0x1B3278u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B3270u, 0x1B3278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3278u;
label_1b3278:
    // 0x1b3278: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b3278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b327c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b327cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3280: 0xc44100c8  lwc1        $f1, 0xC8($v0)
    ctx->pc = 0x1b3280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3284: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1b3284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3288: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1b3288u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b328c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b328cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3290: 0xc44100cc  lwc1        $f1, 0xCC($v0)
    ctx->pc = 0x1b3290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3294: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1b3294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3298: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x1b3298u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b329c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b329cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b32a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b32a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b32a4: 0xc08c208  jal         func_230820
    ctx->pc = 0x1B32A4u;
    SET_GPR_U32(ctx, 31, 0x1B32ACu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1B32A4u, 0x1B32ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B32ACu;
label_1b32ac:
    // 0x1b32ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b32acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b32b0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1B32B0u;
    {
        const bool branch_taken_0x1b32b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b32b0) {
            ctx->pc = 0x1B3380u;
            goto label_1b3380;
        }
    }
    ctx->pc = 0x1B32B8u;
label_1b32b8:
    // 0x1b32b8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1b32b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b32bc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B32BCu;
    SET_GPR_U32(ctx, 31, 0x1B32C4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B32BCu, 0x1B32C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B32C4u;
label_1b32c4:
    // 0x1b32c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b32c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b32c8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b32c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b32cc: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x1b32ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b32d0: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b32d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b32d4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B32D4u;
    SET_GPR_U32(ctx, 31, 0x1B32DCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B32D4u, 0x1B32DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B32DCu;
label_1b32dc:
    // 0x1b32dc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b32dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b32e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b32e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b32e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b32e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b32e8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1B32E8u;
    SET_GPR_U32(ctx, 31, 0x1B32F0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1B32E8u, 0x1B32F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B32F0u;
label_1b32f0:
    // 0x1b32f0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1b32f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b32f4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B32F4u;
    SET_GPR_U32(ctx, 31, 0x1B32FCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B32F4u, 0x1B32FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B32FCu;
label_1b32fc:
    // 0x1b32fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b32fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3300: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b3300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3304: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x1b3304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b3308: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b3308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b330c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B330Cu;
    SET_GPR_U32(ctx, 31, 0x1B3314u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B330Cu, 0x1B3314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3314u;
label_1b3314:
    // 0x1b3314: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b3314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3318: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b3318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b331c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1b331cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b3320: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B3320u;
    {
        const bool branch_taken_0x1b3320 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1b3320) {
            ctx->pc = 0x1B333Cu;
            goto label_1b333c;
        }
    }
    ctx->pc = 0x1B3328u;
    // 0x1b3328: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b332c: 0x0  nop
    ctx->pc = 0x1b332cu;
    // NOP
    // 0x1b3330: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b3330u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b3334: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B3334u;
    {
        const bool branch_taken_0x1b3334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3334) {
            ctx->pc = 0x1B3358u;
            goto label_1b3358;
        }
    }
    ctx->pc = 0x1B333Cu;
label_1b333c:
    // 0x1b333c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b333cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b3340: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b3340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b3344: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b3344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b3348: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b3348u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b334c: 0x0  nop
    ctx->pc = 0x1b334cu;
    // NOP
    // 0x1b3350: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b3350u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b3354: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b3354u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b3358:
    // 0x1b3358: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1b3358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1b335c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b335cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3360: 0x0  nop
    ctx->pc = 0x1b3360u;
    // NOP
    // 0x1b3364: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1b3364u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b3368: 0x0  nop
    ctx->pc = 0x1b3368u;
    // NOP
    // 0x1b336c: 0x0  nop
    ctx->pc = 0x1b336cu;
    // NOP
    // 0x1b3370: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b3370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3374: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1B3374u;
    SET_GPR_U32(ctx, 31, 0x1B337Cu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1B3374u, 0x1B337Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B337Cu;
label_1b337c:
    // 0x1b337c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b337cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b3380:
    // 0x1b3380: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x1b3380u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b3384: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1B3384u;
    {
        const bool branch_taken_0x1b3384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3384) {
            ctx->pc = 0x1B32B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b32b8;
        }
    }
    ctx->pc = 0x1B338Cu;
    // 0x1b338c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b338cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3390: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b3390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b3394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3398: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1b3398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b339c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B339Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B339Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B33A4u;
    // 0x1b33a4: 0x0  nop
    ctx->pc = 0x1b33a4u;
    // NOP
    // 0x1b33a8: 0x0  nop
    ctx->pc = 0x1b33a8u;
    // NOP
    // 0x1b33ac: 0x0  nop
    ctx->pc = 0x1b33acu;
    // NOP
    ctx->pc = 0x1b33b0u;
}
