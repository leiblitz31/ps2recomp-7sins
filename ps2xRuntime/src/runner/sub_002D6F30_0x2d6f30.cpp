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

// Function: sub_002D6F30
// Address: 0x2d6f30 - 0x2d73f0
void sub_002D6F30_0x2d6f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6F30_0x2d6f30");
#endif

    switch (ctx->pc) {
        case 0x2d6f60u: goto label_2d6f60;
        case 0x2d6f74u: goto label_2d6f74;
        case 0x2d6facu: goto label_2d6fac;
        case 0x2d6fbcu: goto label_2d6fbc;
        case 0x2d6fd8u: goto label_2d6fd8;
        case 0x2d6fe8u: goto label_2d6fe8;
        case 0x2d705cu: goto label_2d705c;
        case 0x2d708cu: goto label_2d708c;
        case 0x2d70e0u: goto label_2d70e0;
        case 0x2d712cu: goto label_2d712c;
        case 0x2d713cu: goto label_2d713c;
        case 0x2d71acu: goto label_2d71ac;
        case 0x2d71dcu: goto label_2d71dc;
        case 0x2d7230u: goto label_2d7230;
        case 0x2d72ccu: goto label_2d72cc;
        case 0x2d7308u: goto label_2d7308;
        case 0x2d7318u: goto label_2d7318;
        case 0x2d7350u: goto label_2d7350;
        case 0x2d73a4u: goto label_2d73a4;
        default: break;
    }

    ctx->pc = 0x2d6f30u;

    // 0x2d6f30: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2d6f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2d6f34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d6f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d6f38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d6f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d6f3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d6f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d6f40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d6f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d6f44: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x2d6f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    // 0x2d6f48: 0xafa600f0  sw          $a2, 0xF0($sp)
    ctx->pc = 0x2d6f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 6));
    // 0x2d6f4c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2d6f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d6f50: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x2d6f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d6f54: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2d6f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d6f58: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D6F58u;
    SET_GPR_U32(ctx, 31, 0x2D6F60u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D6F58u, 0x2D6F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6F60u;
label_2d6f60:
    // 0x2d6f60: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d6f60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f64: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2d6f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d6f68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d6f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f6c: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2D6F6Cu;
    SET_GPR_U32(ctx, 31, 0x2D6F74u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2D6F6Cu, 0x2D6F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6F74u;
label_2d6f74:
    // 0x2d6f74: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2d6f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d6f78: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2d6f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d6f7c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2d6f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d6f80: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2d6f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6f84: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2d6f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6f88: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2d6f88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d6f8c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2d6f8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d6f90: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d6f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d6f94: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2d6f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d6f98: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2d6f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2d6f9c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d6f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d6fa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d6fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6fa4: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D6FA4u;
    SET_GPR_U32(ctx, 31, 0x2D6FACu);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D6FA4u, 0x2D6FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6FACu;
label_2d6fac:
    // 0x2d6fac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d6facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6fb0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d6fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d6fb4: 0xc082b70  jal         func_20ADC0
    ctx->pc = 0x2D6FB4u;
    SET_GPR_U32(ctx, 31, 0x2D6FBCu);
    ctx->pc = 0x20ADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADC0u, 0x2D6FB4u, 0x2D6FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6FBCu;
label_2d6fbc:
    // 0x2d6fbc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d6fbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6fc0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2d6fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d6fc4: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2d6fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2d6fc8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d6fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d6fcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d6fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6fd0: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D6FD0u;
    SET_GPR_U32(ctx, 31, 0x2D6FD8u);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D6FD0u, 0x2D6FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6FD8u;
label_2d6fd8:
    // 0x2d6fd8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d6fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6fdc: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d6fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d6fe0: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2D6FE0u;
    SET_GPR_U32(ctx, 31, 0x2D6FE8u);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2D6FE0u, 0x2D6FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6FE8u;
label_2d6fe8:
    // 0x2d6fe8: 0x24430018  addiu       $v1, $v0, 0x18
    ctx->pc = 0x2d6fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x2d6fec: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2d6fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2d6ff0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2d6ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d6ff4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2d6ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6ff8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2d6ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6ffc: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2d6ffcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d7000: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2d7000u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d7004: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d7004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d7008: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x2d7008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d700c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2d700cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d7010: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d7010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7014: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d7014u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d7018: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2d7018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2d701c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2d701cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d7020: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d7020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7024: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x2d7024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7028: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d7028u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d702c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2d702cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2d7030: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2d7030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d7034: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2d7034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7038: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x2d7038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d703c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d703cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d7040: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2d7040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2d7044: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d7044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7048: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2d7048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d704c: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x2d704cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d7050: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2d7050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2d7054: 0xc0b5a08  jal         func_2D6820
    ctx->pc = 0x2D7054u;
    SET_GPR_U32(ctx, 31, 0x2D705Cu);
    ctx->pc = 0x2D6820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6820u, 0x2D7054u, 0x2D705Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D705Cu;
label_2d705c:
    // 0x2d705c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D705Cu;
    {
        const bool branch_taken_0x2d705c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d705c) {
            ctx->pc = 0x2D7074u;
            goto label_2d7074;
        }
    }
    ctx->pc = 0x2D7064u;
    // 0x2d7064: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d7064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7068: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2d7068u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d706c: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x2D706Cu;
    {
        const bool branch_taken_0x2d706c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d706c) {
            ctx->pc = 0x2D73C4u;
            goto label_2d73c4;
        }
    }
    ctx->pc = 0x2D7074u;
label_2d7074:
    // 0x2d7074: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2d7074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d7078: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x2d7078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d707c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2d707cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d7080: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2d7080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2d7084: 0xc0b5a44  jal         func_2D6910
    ctx->pc = 0x2D7084u;
    SET_GPR_U32(ctx, 31, 0x2D708Cu);
    ctx->pc = 0x2D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6910u, 0x2D7084u, 0x2D708Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D708Cu;
label_2d708c:
    // 0x2d708c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D708Cu;
    {
        const bool branch_taken_0x2d708c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d708c) {
            ctx->pc = 0x2D70A4u;
            goto label_2d70a4;
        }
    }
    ctx->pc = 0x2D7094u;
    // 0x2d7094: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d7094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7098: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2d7098u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d709c: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x2D709Cu;
    {
        const bool branch_taken_0x2d709c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d709c) {
            ctx->pc = 0x2D73C4u;
            goto label_2d73c4;
        }
    }
    ctx->pc = 0x2D70A4u;
label_2d70a4:
    // 0x2d70a4: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x2d70a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d70a8: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2d70a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d70ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d70acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d70b0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2d70b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2d70b4: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x2d70b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d70b8: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x2d70b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d70bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d70bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d70c0: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2d70c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2d70c4: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x2d70c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d70c8: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2d70c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d70cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d70ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d70d0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2d70d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2d70d4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2d70d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d70d8: 0xc104d24  jal         func_413490
    ctx->pc = 0x2D70D8u;
    SET_GPR_U32(ctx, 31, 0x2D70E0u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2D70D8u, 0x2D70E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D70E0u;
label_2d70e0:
    // 0x2d70e0: 0x3c024452  lui         $v0, 0x4452
    ctx->pc = 0x2d70e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17490 << 16));
    // 0x2d70e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d70e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d70e8: 0x0  nop
    ctx->pc = 0x2d70e8u;
    // NOP
    // 0x2d70ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d70ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d70f0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D70F0u;
    {
        const bool branch_taken_0x2d70f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d70f0) {
            ctx->pc = 0x2D7108u;
            goto label_2d7108;
        }
    }
    ctx->pc = 0x2D70F8u;
    // 0x2d70f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d70f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d70fc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2d70fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d7100: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x2D7100u;
    {
        const bool branch_taken_0x2d7100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7100) {
            ctx->pc = 0x2D73C4u;
            goto label_2d73c4;
        }
    }
    ctx->pc = 0x2D7108u;
label_2d7108:
    // 0x2d7108: 0x2e210005  sltiu       $at, $s1, 0x5
    ctx->pc = 0x2d7108u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2d710c: 0x142000ad  bnez        $at, . + 4 + (0xAD << 2)
    ctx->pc = 0x2D710Cu;
    {
        const bool branch_taken_0x2d710c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d710c) {
            ctx->pc = 0x2D73C4u;
            goto label_2d73c4;
        }
    }
    ctx->pc = 0x2D7114u;
    // 0x2d7114: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2d7114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d7118: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2d7118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2d711c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d711cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d7120: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d7120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7124: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D7124u;
    SET_GPR_U32(ctx, 31, 0x2D712Cu);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D7124u, 0x2D712Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D712Cu;
label_2d712c:
    // 0x2d712c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d712cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d7130: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d7130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d7134: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2D7134u;
    SET_GPR_U32(ctx, 31, 0x2D713Cu);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2D7134u, 0x2D713Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D713Cu;
label_2d713c:
    // 0x2d713c: 0x24430024  addiu       $v1, $v0, 0x24
    ctx->pc = 0x2d713cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x2d7140: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2d7140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d7144: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2d7144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d7148: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2d7148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d714c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2d714cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7150: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2d7150u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d7154: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2d7154u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d7158: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d7158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d715c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2d715cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7160: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2d7160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d7164: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d7164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7168: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d7168u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d716c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2d716cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2d7170: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2d7170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d7174: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d7174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7178: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2d7178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d717c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d717cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d7180: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2d7180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2d7184: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2d7184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d7188: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2d7188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d718c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2d718cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7190: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d7190u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d7194: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2d7194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2d7198: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2d7198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d719c: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x2d719cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d71a0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2d71a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d71a4: 0xc0b5a08  jal         func_2D6820
    ctx->pc = 0x2D71A4u;
    SET_GPR_U32(ctx, 31, 0x2D71ACu);
    ctx->pc = 0x2D6820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6820u, 0x2D71A4u, 0x2D71ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D71ACu;
label_2d71ac:
    // 0x2d71ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D71ACu;
    {
        const bool branch_taken_0x2d71ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d71ac) {
            ctx->pc = 0x2D71C4u;
            goto label_2d71c4;
        }
    }
    ctx->pc = 0x2D71B4u;
    // 0x2d71b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d71b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d71b8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2d71b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d71bc: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x2D71BCu;
    {
        const bool branch_taken_0x2d71bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d71bc) {
            ctx->pc = 0x2D73C4u;
            goto label_2d73c4;
        }
    }
    ctx->pc = 0x2D71C4u;
label_2d71c4:
    // 0x2d71c4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2d71c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d71c8: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x2d71c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d71cc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2d71ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2d71d0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2d71d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d71d4: 0xc0b5a44  jal         func_2D6910
    ctx->pc = 0x2D71D4u;
    SET_GPR_U32(ctx, 31, 0x2D71DCu);
    ctx->pc = 0x2D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6910u, 0x2D71D4u, 0x2D71DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D71DCu;
label_2d71dc:
    // 0x2d71dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D71DCu;
    {
        const bool branch_taken_0x2d71dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d71dc) {
            ctx->pc = 0x2D71F4u;
            goto label_2d71f4;
        }
    }
    ctx->pc = 0x2D71E4u;
    // 0x2d71e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d71e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d71e8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2d71e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d71ec: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x2D71ECu;
    {
        const bool branch_taken_0x2d71ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d71ec) {
            ctx->pc = 0x2D73C4u;
            goto label_2d73c4;
        }
    }
    ctx->pc = 0x2D71F4u;
label_2d71f4:
    // 0x2d71f4: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2d71f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d71f8: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2d71f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d71fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d71fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d7200: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2d7200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2d7204: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2d7204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7208: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x2d7208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d720c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d720cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d7210: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2d7210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2d7214: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2d7214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7218: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2d7218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d721c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d721cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d7220: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2d7220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2d7224: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2d7224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d7228: 0xc104d24  jal         func_413490
    ctx->pc = 0x2D7228u;
    SET_GPR_U32(ctx, 31, 0x2D7230u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2D7228u, 0x2D7230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7230u;
label_2d7230:
    // 0x2d7230: 0x3c024452  lui         $v0, 0x4452
    ctx->pc = 0x2d7230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17490 << 16));
    // 0x2d7234: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d7234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d7238: 0x0  nop
    ctx->pc = 0x2d7238u;
    // NOP
    // 0x2d723c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d723cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d7240: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D7240u;
    {
        const bool branch_taken_0x2d7240 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d7240) {
            ctx->pc = 0x2D7258u;
            goto label_2d7258;
        }
    }
    ctx->pc = 0x2D7248u;
    // 0x2d7248: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d7248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d724c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2d724cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d7250: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2D7250u;
    {
        const bool branch_taken_0x2d7250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7250) {
            ctx->pc = 0x2D73C4u;
            goto label_2d73c4;
        }
    }
    ctx->pc = 0x2D7258u;
label_2d7258:
    // 0x2d7258: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2d7258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d725c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2d725cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7260: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2d7260u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d7264: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2d7264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2d7268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d7268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d726c: 0x0  nop
    ctx->pc = 0x2d726cu;
    // NOP
    // 0x2d7270: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d7270u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d7274: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2d7274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2d7278: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2d7278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d727c: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x2d727cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7280: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2d7280u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d7284: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2d7284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2d7288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d7288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d728c: 0x0  nop
    ctx->pc = 0x2d728cu;
    // NOP
    // 0x2d7290: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d7290u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d7294: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2d7294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2d7298: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2d7298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d729c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2d729cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d72a0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2d72a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d72a4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2d72a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2d72a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d72a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d72ac: 0x0  nop
    ctx->pc = 0x2d72acu;
    // NOP
    // 0x2d72b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d72b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d72b4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2d72b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2d72b8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2d72b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d72bc: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x2d72bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d72c0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2d72c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d72c4: 0xc0b5a08  jal         func_2D6820
    ctx->pc = 0x2D72C4u;
    SET_GPR_U32(ctx, 31, 0x2D72CCu);
    ctx->pc = 0x2D6820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6820u, 0x2D72C4u, 0x2D72CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D72CCu;
label_2d72cc:
    // 0x2d72cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D72CCu;
    {
        const bool branch_taken_0x2d72cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d72cc) {
            ctx->pc = 0x2D72E4u;
            goto label_2d72e4;
        }
    }
    ctx->pc = 0x2D72D4u;
    // 0x2d72d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d72d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d72d8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2d72d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d72dc: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2D72DCu;
    {
        const bool branch_taken_0x2d72dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d72dc) {
            ctx->pc = 0x2D73C4u;
            goto label_2d73c4;
        }
    }
    ctx->pc = 0x2D72E4u;
label_2d72e4:
    // 0x2d72e4: 0x2e210006  sltiu       $at, $s1, 0x6
    ctx->pc = 0x2d72e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2d72e8: 0x14200036  bnez        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x2D72E8u;
    {
        const bool branch_taken_0x2d72e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d72e8) {
            ctx->pc = 0x2D73C4u;
            goto label_2d73c4;
        }
    }
    ctx->pc = 0x2D72F0u;
    // 0x2d72f0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2d72f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d72f4: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2d72f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2d72f8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d72f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d72fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d72fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7300: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D7300u;
    SET_GPR_U32(ctx, 31, 0x2D7308u);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D7300u, 0x2D7308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7308u;
label_2d7308:
    // 0x2d7308: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d7308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d730c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d730cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d7310: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2D7310u;
    SET_GPR_U32(ctx, 31, 0x2D7318u);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2D7310u, 0x2D7318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7318u;
label_2d7318:
    // 0x2d7318: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x2d7318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2d731c: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2d731cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d7320: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2d7320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d7324: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2d7324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7328: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2d7328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d732c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2d732cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d7330: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2d7330u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d7334: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d7334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d7338: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2d7338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d733c: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x2d733cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d7340: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2d7340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d7344: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2d7344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d7348: 0xc0b5a44  jal         func_2D6910
    ctx->pc = 0x2D7348u;
    SET_GPR_U32(ctx, 31, 0x2D7350u);
    ctx->pc = 0x2D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6910u, 0x2D7348u, 0x2D7350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7350u;
label_2d7350:
    // 0x2d7350: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D7350u;
    {
        const bool branch_taken_0x2d7350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7350) {
            ctx->pc = 0x2D7368u;
            goto label_2d7368;
        }
    }
    ctx->pc = 0x2D7358u;
    // 0x2d7358: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d7358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d735c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2d735cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d7360: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2D7360u;
    {
        const bool branch_taken_0x2d7360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7360) {
            ctx->pc = 0x2D73C4u;
            goto label_2d73c4;
        }
    }
    ctx->pc = 0x2D7368u;
label_2d7368:
    // 0x2d7368: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2d7368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d736c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2d736cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7370: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d7370u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d7374: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2d7374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2d7378: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2d7378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d737c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2d737cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7380: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d7380u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d7384: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2d7384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2d7388: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2d7388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d738c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2d738cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7390: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d7390u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d7394: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2d7394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2d7398: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2d7398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d739c: 0xc104d24  jal         func_413490
    ctx->pc = 0x2D739Cu;
    SET_GPR_U32(ctx, 31, 0x2D73A4u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2D739Cu, 0x2D73A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D73A4u;
label_2d73a4:
    // 0x2d73a4: 0x3c024452  lui         $v0, 0x4452
    ctx->pc = 0x2d73a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17490 << 16));
    // 0x2d73a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d73a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d73ac: 0x0  nop
    ctx->pc = 0x2d73acu;
    // NOP
    // 0x2d73b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d73b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d73b4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2D73B4u;
    {
        const bool branch_taken_0x2d73b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d73b4) {
            ctx->pc = 0x2D73C4u;
            goto label_2d73c4;
        }
    }
    ctx->pc = 0x2D73BCu;
    // 0x2d73bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d73bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d73c0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2d73c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2d73c4:
    // 0x2d73c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d73c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d73c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d73c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d73cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d73ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d73d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d73d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d73d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d73d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d73d8: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x2d73d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d73dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D73DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D73DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D73E4u;
    // 0x2d73e4: 0x0  nop
    ctx->pc = 0x2d73e4u;
    // NOP
    // 0x2d73e8: 0x0  nop
    ctx->pc = 0x2d73e8u;
    // NOP
    // 0x2d73ec: 0x0  nop
    ctx->pc = 0x2d73ecu;
    // NOP
    ctx->pc = 0x2d73f0u;
}
