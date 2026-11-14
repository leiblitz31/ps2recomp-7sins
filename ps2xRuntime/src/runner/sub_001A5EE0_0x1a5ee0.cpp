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

// Function: sub_001A5EE0
// Address: 0x1a5ee0 - 0x1a65e0
void sub_001A5EE0_0x1a5ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5EE0_0x1a5ee0");
#endif

    switch (ctx->pc) {
        case 0x1a5f8cu: goto label_1a5f8c;
        case 0x1a5fa0u: goto label_1a5fa0;
        case 0x1a5fb4u: goto label_1a5fb4;
        case 0x1a5fe4u: goto label_1a5fe4;
        case 0x1a6024u: goto label_1a6024;
        case 0x1a603cu: goto label_1a603c;
        case 0x1a6050u: goto label_1a6050;
        case 0x1a605cu: goto label_1a605c;
        case 0x1a6074u: goto label_1a6074;
        case 0x1a6088u: goto label_1a6088;
        case 0x1a6094u: goto label_1a6094;
        case 0x1a60acu: goto label_1a60ac;
        case 0x1a60c0u: goto label_1a60c0;
        case 0x1a60ccu: goto label_1a60cc;
        case 0x1a60e8u: goto label_1a60e8;
        case 0x1a60fcu: goto label_1a60fc;
        case 0x1a6108u: goto label_1a6108;
        case 0x1a6124u: goto label_1a6124;
        case 0x1a6138u: goto label_1a6138;
        case 0x1a6398u: goto label_1a6398;
        case 0x1a63c4u: goto label_1a63c4;
        case 0x1a63fcu: goto label_1a63fc;
        case 0x1a6430u: goto label_1a6430;
        case 0x1a6458u: goto label_1a6458;
        case 0x1a6474u: goto label_1a6474;
        case 0x1a64e0u: goto label_1a64e0;
        case 0x1a64ecu: goto label_1a64ec;
        case 0x1a6508u: goto label_1a6508;
        case 0x1a653cu: goto label_1a653c;
        case 0x1a65acu: goto label_1a65ac;
        default: break;
    }

    ctx->pc = 0x1a5ee0u;

    // 0x1a5ee0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a5ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1a5ee4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a5ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a5ee8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a5ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a5eec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a5eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a5ef0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a5ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a5ef4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a5ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a5ef8: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x1a5ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x1a5efc: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1a5efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1a5f00: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1a5f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5f04: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1a5f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1a5f08: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a5f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a5f0c: 0xc44100e8  lwc1        $f1, 0xE8($v0)
    ctx->pc = 0x1a5f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5f10: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x1a5f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5f14: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a5f14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a5f18: 0xe44000e8  swc1        $f0, 0xE8($v0)
    ctx->pc = 0x1a5f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 232), bits); }
    // 0x1a5f1c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a5f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a5f20: 0xc44100e8  lwc1        $f1, 0xE8($v0)
    ctx->pc = 0x1a5f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5f24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a5f24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5f28: 0x0  nop
    ctx->pc = 0x1a5f28u;
    // NOP
    // 0x1a5f2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a5f2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a5f30: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5F30u;
    {
        const bool branch_taken_0x1a5f30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a5f30) {
            ctx->pc = 0x1A5F44u;
            goto label_1a5f44;
        }
    }
    ctx->pc = 0x1A5F38u;
    // 0x1a5f38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a5f38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5f3c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a5f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a5f40: 0xe44000e8  swc1        $f0, 0xE8($v0)
    ctx->pc = 0x1a5f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 232), bits); }
label_1a5f44:
    // 0x1a5f44: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a5f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a5f48: 0xc44100e8  lwc1        $f1, 0xE8($v0)
    ctx->pc = 0x1a5f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5f4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a5f4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5f50: 0x0  nop
    ctx->pc = 0x1a5f50u;
    // NOP
    // 0x1a5f54: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1a5f54u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a5f58: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x1A5F58u;
    {
        const bool branch_taken_0x1a5f58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a5f58) {
            ctx->pc = 0x1A600Cu;
            goto label_1a600c;
        }
    }
    ctx->pc = 0x1A5F60u;
    // 0x1a5f60: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a5f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a5f64: 0xc441010c  lwc1        $f1, 0x10C($v0)
    ctx->pc = 0x1a5f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5f68: 0xc7808278  lwc1        $f0, -0x7D88($gp)
    ctx->pc = 0x1a5f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5f6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a5f6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a5f70: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x1A5F70u;
    {
        const bool branch_taken_0x1a5f70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a5f70) {
            ctx->pc = 0x1A5FF8u;
            goto label_1a5ff8;
        }
    }
    ctx->pc = 0x1A5F78u;
    // 0x1a5f78: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a5f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a5f7c: 0xac4000f0  sw          $zero, 0xF0($v0)
    ctx->pc = 0x1a5f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 0));
    // 0x1a5f80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a5f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5f84: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A5F84u;
    {
        const bool branch_taken_0x1a5f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5f84) {
            ctx->pc = 0x1A5FD4u;
            goto label_1a5fd4;
        }
    }
    ctx->pc = 0x1A5F8Cu;
label_1a5f8c:
    // 0x1a5f8c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a5f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a5f90: 0x24440134  addiu       $a0, $v0, 0x134
    ctx->pc = 0x1a5f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
    // 0x1a5f94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a5f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5f98: 0xc068c6c  jal         func_1A31B0
    ctx->pc = 0x1A5F98u;
    SET_GPR_U32(ctx, 31, 0x1A5FA0u);
    ctx->pc = 0x1A31B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A31B0u, 0x1A5F98u, 0x1A5FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5FA0u;
label_1a5fa0:
    // 0x1a5fa0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1a5fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a5fa4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a5fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5fa8: 0x246500f4  addiu       $a1, $v1, 0xF4
    ctx->pc = 0x1a5fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 244));
    // 0x1a5fac: 0xc069d10  jal         func_1A7440
    ctx->pc = 0x1A5FACu;
    SET_GPR_U32(ctx, 31, 0x1A5FB4u);
    ctx->pc = 0x1A7440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7440u, 0x1A5FACu, 0x1A5FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5FB4u;
label_1a5fb4:
    // 0x1a5fb4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A5FB4u;
    {
        const bool branch_taken_0x1a5fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5fb4) {
            ctx->pc = 0x1A5FD0u;
            goto label_1a5fd0;
        }
    }
    ctx->pc = 0x1A5FBCu;
    // 0x1a5fbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a5fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5fc0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a5fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a5fc4: 0xac4300f0  sw          $v1, 0xF0($v0)
    ctx->pc = 0x1a5fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 3));
    // 0x1a5fc8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A5FC8u;
    {
        const bool branch_taken_0x1a5fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5fc8) {
            ctx->pc = 0x1A6018u;
            goto label_1a6018;
        }
    }
    ctx->pc = 0x1A5FD0u;
label_1a5fd0:
    // 0x1a5fd0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a5fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a5fd4:
    // 0x1a5fd4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a5fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a5fd8: 0x24440134  addiu       $a0, $v0, 0x134
    ctx->pc = 0x1a5fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
    // 0x1a5fdc: 0xc068c84  jal         func_1A3210
    ctx->pc = 0x1A5FDCu;
    SET_GPR_U32(ctx, 31, 0x1A5FE4u);
    ctx->pc = 0x1A3210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3210u, 0x1A5FDCu, 0x1A5FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5FE4u;
label_1a5fe4:
    // 0x1a5fe4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1a5fe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a5fe8: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1A5FE8u;
    {
        const bool branch_taken_0x1a5fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5fe8) {
            ctx->pc = 0x1A5F8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5f8c;
        }
    }
    ctx->pc = 0x1A5FF0u;
    // 0x1a5ff0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A5FF0u;
    {
        const bool branch_taken_0x1a5ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5ff0) {
            ctx->pc = 0x1A6018u;
            goto label_1a6018;
        }
    }
    ctx->pc = 0x1A5FF8u;
label_1a5ff8:
    // 0x1a5ff8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a5ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5ffc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a5ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6000: 0xac4300f0  sw          $v1, 0xF0($v0)
    ctx->pc = 0x1a6000u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 3));
    // 0x1a6004: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6004u;
    {
        const bool branch_taken_0x1a6004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6004) {
            ctx->pc = 0x1A6018u;
            goto label_1a6018;
        }
    }
    ctx->pc = 0x1A600Cu;
label_1a600c:
    // 0x1a600c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a600cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a6010: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a6010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6014: 0xac4300f0  sw          $v1, 0xF0($v0)
    ctx->pc = 0x1a6014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 3));
label_1a6018:
    // 0x1a6018: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1a6018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a601c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1A601Cu;
    SET_GPR_U32(ctx, 31, 0x1A6024u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A601Cu, 0x1A6024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6024u;
label_1a6024:
    // 0x1a6024: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a6024u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6028: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a6028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a602c: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x1a602cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x1a6030: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a6030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6034: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A6034u;
    SET_GPR_U32(ctx, 31, 0x1A603Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A6034u, 0x1A603Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A603Cu;
label_1a603c:
    // 0x1a603c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a603cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6040: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a6040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6044: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a6044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6048: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1A6048u;
    SET_GPR_U32(ctx, 31, 0x1A6050u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1A6048u, 0x1A6050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6050u;
label_1a6050:
    // 0x1a6050: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1a6050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6054: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1A6054u;
    SET_GPR_U32(ctx, 31, 0x1A605Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A6054u, 0x1A605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A605Cu;
label_1a605c:
    // 0x1a605c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a605cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6060: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a6060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6064: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x1a6064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x1a6068: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a6068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a606c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A606Cu;
    SET_GPR_U32(ctx, 31, 0x1A6074u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A606Cu, 0x1A6074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6074u;
label_1a6074:
    // 0x1a6074: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6078: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a6078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a607c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a607cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6080: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1A6080u;
    SET_GPR_U32(ctx, 31, 0x1A6088u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1A6080u, 0x1A6088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6088u;
label_1a6088:
    // 0x1a6088: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1a6088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a608c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1A608Cu;
    SET_GPR_U32(ctx, 31, 0x1A6094u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A608Cu, 0x1A6094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6094u;
label_1a6094:
    // 0x1a6094: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a6094u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6098: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a6098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a609c: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x1a609cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x1a60a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a60a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a60a4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A60A4u;
    SET_GPR_U32(ctx, 31, 0x1A60ACu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A60A4u, 0x1A60ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A60ACu;
label_1a60ac:
    // 0x1a60ac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a60acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a60b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a60b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a60b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a60b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a60b8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1A60B8u;
    SET_GPR_U32(ctx, 31, 0x1A60C0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1A60B8u, 0x1A60C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A60C0u;
label_1a60c0:
    // 0x1a60c0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1a60c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a60c4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1A60C4u;
    SET_GPR_U32(ctx, 31, 0x1A60CCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A60C4u, 0x1A60CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A60CCu;
label_1a60cc:
    // 0x1a60cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a60ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a60d0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1a60d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a60d4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a60d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a60d8: 0x246400dc  addiu       $a0, $v1, 0xDC
    ctx->pc = 0x1a60d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 220));
    // 0x1a60dc: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x1a60dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1a60e0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A60E0u;
    SET_GPR_U32(ctx, 31, 0x1A60E8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A60E0u, 0x1A60E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A60E8u;
label_1a60e8:
    // 0x1a60e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a60e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a60ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a60ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a60f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a60f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a60f4: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1A60F4u;
    SET_GPR_U32(ctx, 31, 0x1A60FCu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1A60F4u, 0x1A60FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A60FCu;
label_1a60fc:
    // 0x1a60fc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1a60fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6100: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1A6100u;
    SET_GPR_U32(ctx, 31, 0x1A6108u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A6100u, 0x1A6108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6108u;
label_1a6108:
    // 0x1a6108: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a6108u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a610c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1a610cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6110: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a6110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6114: 0x246400dc  addiu       $a0, $v1, 0xDC
    ctx->pc = 0x1a6114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 220));
    // 0x1a6118: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x1a6118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1a611c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A611Cu;
    SET_GPR_U32(ctx, 31, 0x1A6124u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A611Cu, 0x1A6124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6124u;
label_1a6124:
    // 0x1a6124: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6128: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a6128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a612c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1a612cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a6130: 0xc08c688  jal         func_231A20
    ctx->pc = 0x1A6130u;
    SET_GPR_U32(ctx, 31, 0x1A6138u);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x1A6130u, 0x1A6138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6138u;
label_1a6138:
    // 0x1a6138: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a6138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a613c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a613cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a6140: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1a6140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6144: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a6144u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a6148: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1a6148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1a614c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a614cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a6150: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a6150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a6154: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1a6154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6158: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a6158u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a615c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1a615cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1a6160: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a6160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6164: 0xc4450108  lwc1        $f5, 0x108($v0)
    ctx->pc = 0x1a6164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a6168: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x1a6168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x1a616c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1a616cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1a6170: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a6170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6174: 0xc4430100  lwc1        $f3, 0x100($v0)
    ctx->pc = 0x1a6174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a6178: 0xc7828320  lwc1        $f2, -0x7CE0($gp)
    ctx->pc = 0x1a6178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a617c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1a617cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6180: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1a6180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x1a6184: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a6184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a6188: 0xc46000fc  lwc1        $f0, 0xFC($v1)
    ctx->pc = 0x1a6188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a618c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1a618cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a6190: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a6190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a6194: 0x0  nop
    ctx->pc = 0x1a6194u;
    // NOP
    // 0x1a6198: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1a6198u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1a619c: 0x4603105d  msub.s      $f1, $f2, $f3
    ctx->pc = 0x1a619cu;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1a61a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a61a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a61a4: 0x0  nop
    ctx->pc = 0x1a61a4u;
    // NOP
    // 0x1a61a8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1a61a8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1a61ac: 0x4605201c  madd.s      $f0, $f4, $f5
    ctx->pc = 0x1a61acu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x1a61b0: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1a61b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1a61b4: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x1a61b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x1a61b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a61b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a61bc: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1a61bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a61c0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1a61c0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1a61c4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1a61c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1a61c8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a61c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a61cc: 0xc4430100  lwc1        $f3, 0x100($v0)
    ctx->pc = 0x1a61ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a61d0: 0xc7a2007c  lwc1        $f2, 0x7C($sp)
    ctx->pc = 0x1a61d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a61d4: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1a61d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a61d8: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x1a61d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a61dc: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x1a61dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a61e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1a61e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a61e4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a61e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a61e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a61e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a61ec: 0x0  nop
    ctx->pc = 0x1a61ecu;
    // NOP
    // 0x1a61f0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1a61f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a61f4: 0xc4600104  lwc1        $f0, 0x104($v1)
    ctx->pc = 0x1a61f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a61f8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1a61f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a61fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a61fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a6200: 0x0  nop
    ctx->pc = 0x1a6200u;
    // NOP
    // 0x1a6204: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1a6204u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1a6208: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x1a6208u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1a620c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a620cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6210: 0xc44000fc  lwc1        $f0, 0xFC($v0)
    ctx->pc = 0x1a6210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6214: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a6214u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a6218: 0xe44000fc  swc1        $f0, 0xFC($v0)
    ctx->pc = 0x1a6218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 252), bits); }
    // 0x1a621c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a621cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6220: 0xc44100fc  lwc1        $f1, 0xFC($v0)
    ctx->pc = 0x1a6220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6224: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a6224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a6228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a6228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a622c: 0x0  nop
    ctx->pc = 0x1a622cu;
    // NOP
    // 0x1a6230: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a6230u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a6234: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1A6234u;
    {
        const bool branch_taken_0x1a6234 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a6234) {
            ctx->pc = 0x1A6254u;
            goto label_1a6254;
        }
    }
    ctx->pc = 0x1A623Cu;
    // 0x1a623c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a623cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a6240: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a6240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a6244: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a6244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6248: 0xe44000fc  swc1        $f0, 0xFC($v0)
    ctx->pc = 0x1a6248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 252), bits); }
    // 0x1a624c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A624Cu;
    {
        const bool branch_taken_0x1a624c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a624c) {
            ctx->pc = 0x1A6284u;
            goto label_1a6284;
        }
    }
    ctx->pc = 0x1A6254u;
label_1a6254:
    // 0x1a6254: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a6254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6258: 0xc44100fc  lwc1        $f1, 0xFC($v0)
    ctx->pc = 0x1a6258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a625c: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1a625cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
    // 0x1a6260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a6260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a6264: 0x0  nop
    ctx->pc = 0x1a6264u;
    // NOP
    // 0x1a6268: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a6268u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a626c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1A626Cu;
    {
        const bool branch_taken_0x1a626c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a626c) {
            ctx->pc = 0x1A6284u;
            goto label_1a6284;
        }
    }
    ctx->pc = 0x1A6274u;
    // 0x1a6274: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1a6274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
    // 0x1a6278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a6278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a627c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a627cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6280: 0xe44000fc  swc1        $f0, 0xFC($v0)
    ctx->pc = 0x1a6280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 252), bits); }
label_1a6284:
    // 0x1a6284: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a6284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6288: 0xc4410104  lwc1        $f1, 0x104($v0)
    ctx->pc = 0x1a6288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a628c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1a628cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6290: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1a6290u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a6294: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a6294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a6298: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a6298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a629c: 0x0  nop
    ctx->pc = 0x1a629cu;
    // NOP
    // 0x1a62a0: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x1a62a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a62a4: 0xc7a2007c  lwc1        $f2, 0x7C($sp)
    ctx->pc = 0x1a62a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a62a8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a62a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a62ac: 0xc4410100  lwc1        $f1, 0x100($v0)
    ctx->pc = 0x1a62acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a62b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a62b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a62b4: 0x0  nop
    ctx->pc = 0x1a62b4u;
    // NOP
    // 0x1a62b8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1a62b8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1a62bc: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1a62bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1a62c0: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x1a62c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x1a62c4: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1a62c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a62c8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a62c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a62cc: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x1a62ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x1a62d0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1a62d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a62d4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1a62d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1a62d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a62d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a62dc: 0xc4600108  lwc1        $f0, 0x108($v1)
    ctx->pc = 0x1a62dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a62e0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1a62e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1a62e4: 0xe4600108  swc1        $f0, 0x108($v1)
    ctx->pc = 0x1a62e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 264), bits); }
    // 0x1a62e8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a62e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a62ec: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1a62ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a62f0: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x1a62f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a62f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a62f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a62f8: 0xe4400110  swc1        $f0, 0x110($v0)
    ctx->pc = 0x1a62f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x1a62fc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a62fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6300: 0xc441010c  lwc1        $f1, 0x10C($v0)
    ctx->pc = 0x1a6300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6304: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a6304u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a6308: 0x0  nop
    ctx->pc = 0x1a6308u;
    // NOP
    // 0x1a630c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a630cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a6310: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6310u;
    {
        const bool branch_taken_0x1a6310 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a6310) {
            ctx->pc = 0x1A6328u;
            goto label_1a6328;
        }
    }
    ctx->pc = 0x1A6318u;
    // 0x1a6318: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a6318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a631c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1a631cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a6320: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A6320u;
    {
        const bool branch_taken_0x1a6320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6320) {
            ctx->pc = 0x1A632Cu;
            goto label_1a632c;
        }
    }
    ctx->pc = 0x1A6328u;
label_1a6328:
    // 0x1a6328: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a6328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a632c:
    // 0x1a632c: 0x323200ff  andi        $s2, $s1, 0xFF
    ctx->pc = 0x1a632cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1a6330: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a6330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6334: 0xc441010c  lwc1        $f1, 0x10C($v0)
    ctx->pc = 0x1a6334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6338: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x1a6338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a633c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a633cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a6340: 0xe440010c  swc1        $f0, 0x10C($v0)
    ctx->pc = 0x1a6340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 268), bits); }
    // 0x1a6344: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a6344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6348: 0xc441010c  lwc1        $f1, 0x10C($v0)
    ctx->pc = 0x1a6348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a634c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a634cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a6350: 0x0  nop
    ctx->pc = 0x1a6350u;
    // NOP
    // 0x1a6354: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a6354u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a6358: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1A6358u;
    {
        const bool branch_taken_0x1a6358 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a6358) {
            ctx->pc = 0x1A6398u;
            goto label_1a6398;
        }
    }
    ctx->pc = 0x1A6360u;
    // 0x1a6360: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a6360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a6364: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a6364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6368: 0xe440010c  swc1        $f0, 0x10C($v0)
    ctx->pc = 0x1a6368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 268), bits); }
    // 0x1a636c: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x1A636Cu;
    {
        const bool branch_taken_0x1a636c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a636c) {
            ctx->pc = 0x1A6398u;
            goto label_1a6398;
        }
    }
    ctx->pc = 0x1A6374u;
    // 0x1a6374: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a6374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a6378: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a6378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a637c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1a637cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1a6380: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a6380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a6384: 0x24a56780  addiu       $a1, $a1, 0x6780
    ctx->pc = 0x1a6384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26496));
    // 0x1a6388: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a6388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a638c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1a638cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a6390: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1A6390u;
    SET_GPR_U32(ctx, 31, 0x1A6398u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1A6390u, 0x1A6398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6398u;
label_1a6398:
    // 0x1a6398: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1a6398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a639c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a639cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a63a0: 0xc461010c  lwc1        $f1, 0x10C($v1)
    ctx->pc = 0x1a63a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a63a4: 0xc440010c  lwc1        $f0, 0x10C($v0)
    ctx->pc = 0x1a63a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a63a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a63a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a63ac: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1a63acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1a63b0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1a63b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a63b4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1a63b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a63b8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A63B8u;
    {
        const bool branch_taken_0x1a63b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a63b8) {
            ctx->pc = 0x1A63E0u;
            goto label_1a63e0;
        }
    }
    ctx->pc = 0x1A63C0u;
    // 0x1a63c0: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1a63c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1a63c4:
    // 0x1a63c4: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1a63c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a63c8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a63c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a63cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a63ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a63d0: 0x0  nop
    ctx->pc = 0x1a63d0u;
    // NOP
    // 0x1a63d4: 0x0  nop
    ctx->pc = 0x1a63d4u;
    // NOP
    // 0x1a63d8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A63D8u;
    {
        const bool branch_taken_0x1a63d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a63d8) {
            ctx->pc = 0x1A63C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a63c4;
        }
    }
    ctx->pc = 0x1A63E0u;
label_1a63e0:
    // 0x1a63e0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1a63e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a63e4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1a63e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1a63e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a63e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a63ec: 0xc4600110  lwc1        $f0, 0x110($v1)
    ctx->pc = 0x1a63ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a63f0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1a63f0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a63f4: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x1A63F4u;
    SET_GPR_U32(ctx, 31, 0x1A63FCu);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x1A63F4u, 0x1A63FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A63FCu;
label_1a63fc:
    // 0x1a63fc: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1a63fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1a6400: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a6400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a6404: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x1a6404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6408: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1a6408u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1a640c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a640cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a6410: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1a6410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1a6414: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1a6414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6418: 0x3c0242ca  lui         $v0, 0x42CA
    ctx->pc = 0x1a6418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17098 << 16));
    // 0x1a641c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a641cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a6420: 0xc4600110  lwc1        $f0, 0x110($v1)
    ctx->pc = 0x1a6420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6424: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1a6424u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a6428: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x1A6428u;
    SET_GPR_U32(ctx, 31, 0x1A6430u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x1A6428u, 0x1A6430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6430u;
label_1a6430:
    // 0x1a6430: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1a6430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1a6434: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a6434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a6438: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x1a6438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a643c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1a643cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1a6440: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a6440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a6444: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1a6444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1a6448: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1a6448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1a644c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1a644cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6450: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1A6450u;
    SET_GPR_U32(ctx, 31, 0x1A6458u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A6450u, 0x1A6458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6458u;
label_1a6458:
    // 0x1a6458: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a6458u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a645c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1a645cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6460: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a6460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6464: 0x246400dc  addiu       $a0, $v1, 0xDC
    ctx->pc = 0x1a6464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 220));
    // 0x1a6468: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x1a6468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1a646c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A646Cu;
    SET_GPR_U32(ctx, 31, 0x1A6474u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A646Cu, 0x1A6474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6474u;
label_1a6474:
    // 0x1a6474: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6478: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a6478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a647c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a647cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a6480: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x1a6480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a6484: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a6484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6488: 0xc44100f4  lwc1        $f1, 0xF4($v0)
    ctx->pc = 0x1a6488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a648c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a648cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a6490: 0x0  nop
    ctx->pc = 0x1a6490u;
    // NOP
    // 0x1a6494: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1a6494u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1a6498: 0x4602185d  msub.s      $f1, $f3, $f2
    ctx->pc = 0x1a6498u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1a649c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1a649cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a64a0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1a64a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a64a4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a64a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a64a8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a64a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a64ac: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x1a64acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a64b0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a64b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a64b4: 0xc44100f8  lwc1        $f1, 0xF8($v0)
    ctx->pc = 0x1a64b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a64b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a64b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a64bc: 0x0  nop
    ctx->pc = 0x1a64bcu;
    // NOP
    // 0x1a64c0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1a64c0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1a64c4: 0x4602185d  msub.s      $f1, $f3, $f2
    ctx->pc = 0x1a64c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1a64c8: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1a64c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a64cc: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x1a64ccu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a64d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a64d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a64d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a64d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a64d8: 0xc08c208  jal         func_230820
    ctx->pc = 0x1A64D8u;
    SET_GPR_U32(ctx, 31, 0x1A64E0u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1A64D8u, 0x1A64E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A64E0u;
label_1a64e0:
    // 0x1a64e0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1a64e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a64e4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1A64E4u;
    SET_GPR_U32(ctx, 31, 0x1A64ECu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A64E4u, 0x1A64ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A64ECu;
label_1a64ec:
    // 0x1a64ec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a64ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a64f0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1a64f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a64f4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a64f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a64f8: 0x246400dc  addiu       $a0, $v1, 0xDC
    ctx->pc = 0x1a64f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 220));
    // 0x1a64fc: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x1a64fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1a6500: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A6500u;
    SET_GPR_U32(ctx, 31, 0x1A6508u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A6500u, 0x1A6508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6508u;
label_1a6508:
    // 0x1a6508: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a650c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1a650cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6510: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1a6510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1a6514: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a6514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a6518: 0xc46000fc  lwc1        $f0, 0xFC($v1)
    ctx->pc = 0x1a6518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a651c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1a651cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a6520: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x1a6520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6524: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1a6524u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a6528: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a6528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a652c: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x1a652cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1a6530: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a6530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6534: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1A6534u;
    SET_GPR_U32(ctx, 31, 0x1A653Cu);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1A6534u, 0x1A653Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A653Cu;
label_1a653c:
    // 0x1a653c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1a653cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6540: 0xc4610140  lwc1        $f1, 0x140($v1)
    ctx->pc = 0x1a6540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6544: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a6544u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a6548: 0x0  nop
    ctx->pc = 0x1a6548u;
    // NOP
    // 0x1a654c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a654cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a6550: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x1A6550u;
    {
        const bool branch_taken_0x1a6550 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a6550) {
            ctx->pc = 0x1A65B8u;
            goto label_1a65b8;
        }
    }
    ctx->pc = 0x1A6558u;
    // 0x1a6558: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1a6558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a655c: 0xc4610140  lwc1        $f1, 0x140($v1)
    ctx->pc = 0x1a655cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6560: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x1a6560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6564: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a6564u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a6568: 0xe4600140  swc1        $f0, 0x140($v1)
    ctx->pc = 0x1a6568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 320), bits); }
    // 0x1a656c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1a656cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a6570: 0xc4610140  lwc1        $f1, 0x140($v1)
    ctx->pc = 0x1a6570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6574: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a6574u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a6578: 0x0  nop
    ctx->pc = 0x1a6578u;
    // NOP
    // 0x1a657c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a657cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a6580: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1A6580u;
    {
        const bool branch_taken_0x1a6580 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a6580) {
            ctx->pc = 0x1A65B8u;
            goto label_1a65b8;
        }
    }
    ctx->pc = 0x1A6588u;
    // 0x1a6588: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a6588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a658c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a658cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a6590: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1a6590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1a6594: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a6594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a6598: 0x24a56790  addiu       $a1, $a1, 0x6790
    ctx->pc = 0x1a6598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26512));
    // 0x1a659c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a659cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a65a0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1a65a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a65a4: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1A65A4u;
    SET_GPR_U32(ctx, 31, 0x1A65ACu);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1A65A4u, 0x1A65ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A65ACu;
label_1a65ac:
    // 0x1a65ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a65acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a65b0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1a65b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a65b4: 0xe4600140  swc1        $f0, 0x140($v1)
    ctx->pc = 0x1a65b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 320), bits); }
label_1a65b8:
    // 0x1a65b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a65b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a65bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a65bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a65c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a65c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a65c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a65c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a65c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a65c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a65cc: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1a65ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a65d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A65D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A65D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A65D8u;
    // 0x1a65d8: 0x0  nop
    ctx->pc = 0x1a65d8u;
    // NOP
    // 0x1a65dc: 0x0  nop
    ctx->pc = 0x1a65dcu;
    // NOP
    ctx->pc = 0x1a65e0u;
}
