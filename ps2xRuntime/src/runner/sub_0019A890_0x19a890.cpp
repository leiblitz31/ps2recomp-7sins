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

// Function: sub_0019A890
// Address: 0x19a890 - 0x19aa60
void sub_0019A890_0x19a890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A890_0x19a890");
#endif

    switch (ctx->pc) {
        case 0x19a8d0u: goto label_19a8d0;
        case 0x19a8dcu: goto label_19a8dc;
        case 0x19a8f0u: goto label_19a8f0;
        case 0x19a904u: goto label_19a904;
        case 0x19a954u: goto label_19a954;
        case 0x19a974u: goto label_19a974;
        case 0x19a99cu: goto label_19a99c;
        case 0x19a9acu: goto label_19a9ac;
        case 0x19a9c8u: goto label_19a9c8;
        case 0x19a9d8u: goto label_19a9d8;
        case 0x19a9ecu: goto label_19a9ec;
        case 0x19a9fcu: goto label_19a9fc;
        case 0x19aa2cu: goto label_19aa2c;
        case 0x19aa38u: goto label_19aa38;
        case 0x19aa48u: goto label_19aa48;
        default: break;
    }

    ctx->pc = 0x19a890u;

    // 0x19a890: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19a890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19a894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19a894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19a898: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x19a898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x19a89c: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x19a89cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x19a8a0: 0xe7ac0050  swc1        $f12, 0x50($sp)
    ctx->pc = 0x19a8a0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x19a8a4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19a8a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19a8a8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a8ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x19a8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a8b0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x19a8b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a8b4: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x19A8B4u;
    {
        const bool branch_taken_0x19a8b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a8b4) {
            ctx->pc = 0x19A904u;
            goto label_19a904;
        }
    }
    ctx->pc = 0x19A8BCu;
    // 0x19a8bc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19a8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a8c0: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19a8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19a8c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19a8c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a8c8: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19A8C8u;
    SET_GPR_U32(ctx, 31, 0x19A8D0u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19A8C8u, 0x19A8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A8D0u;
label_19a8d0:
    // 0x19a8d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19a8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a8d4: 0xc0843c8  jal         func_210F20
    ctx->pc = 0x19A8D4u;
    SET_GPR_U32(ctx, 31, 0x19A8DCu);
    ctx->pc = 0x210F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210F20u, 0x19A8D4u, 0x19A8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A8DCu;
label_19a8dc:
    // 0x19a8dc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a8e0: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19a8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19a8e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19a8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a8e8: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19A8E8u;
    SET_GPR_U32(ctx, 31, 0x19A8F0u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19A8E8u, 0x19A8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A8F0u;
label_19a8f0:
    // 0x19a8f0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x19a8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a8f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19a8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a8f8: 0x246500f8  addiu       $a1, $v1, 0xF8
    ctx->pc = 0x19a8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 248));
    // 0x19a8fc: 0xc084400  jal         func_211000
    ctx->pc = 0x19A8FCu;
    SET_GPR_U32(ctx, 31, 0x19A904u);
    ctx->pc = 0x211000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211000u, 0x19A8FCu, 0x19A904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A904u;
label_19a904:
    // 0x19a904: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19a904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a908: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19a908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a90c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x19a90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a910: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19a910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19a914: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x19a914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x19a918: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19a918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a91c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x19a91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a920: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x19a920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a924: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19a924u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19a928: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19a928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a92c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x19a92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x19a930: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x19a930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x19a934: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19a934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19a938: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19a938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a93c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x19a93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a940: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x19a940u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19a944: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x19a944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a948: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x19a948u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19a94c: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x19A94Cu;
    SET_GPR_U32(ctx, 31, 0x19A954u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x19A94Cu, 0x19A954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A954u;
label_19a954:
    // 0x19a954: 0xc781830c  lwc1        $f1, -0x7CF4($gp)
    ctx->pc = 0x19a954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a958: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19a958u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19a95c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x19a95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x19a960: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x19a960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x19a964: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x19a964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19a968: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19A968u;
    {
        const bool branch_taken_0x19a968 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a968) {
            ctx->pc = 0x19A990u;
            goto label_19a990;
        }
    }
    ctx->pc = 0x19A970u;
    // 0x19a970: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x19a970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_19a974:
    // 0x19a974: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x19a974u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x19a978: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19a978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19a97c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19a97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19a980: 0x0  nop
    ctx->pc = 0x19a980u;
    // NOP
    // 0x19a984: 0x0  nop
    ctx->pc = 0x19a984u;
    // NOP
    // 0x19a988: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19A988u;
    {
        const bool branch_taken_0x19a988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a988) {
            ctx->pc = 0x19A974u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a974;
        }
    }
    ctx->pc = 0x19A990u;
label_19a990:
    // 0x19a990: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x19a990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19a994: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x19A994u;
    SET_GPR_U32(ctx, 31, 0x19A99Cu);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x19A994u, 0x19A99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A99Cu;
label_19a99c:
    // 0x19a99c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19a99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19a9a0: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x19a9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19a9a4: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x19A9A4u;
    SET_GPR_U32(ctx, 31, 0x19A9ACu);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x19A9A4u, 0x19A9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A9ACu;
label_19a9ac:
    // 0x19a9ac: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x19a9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x19a9b0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x19a9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x19a9b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19a9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a9b8: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19a9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19a9bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19a9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a9c0: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19A9C0u;
    SET_GPR_U32(ctx, 31, 0x19A9C8u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19A9C0u, 0x19A9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A9C8u;
label_19a9c8:
    // 0x19a9c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19a9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a9cc: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x19a9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x19a9d0: 0xc084420  jal         func_211080
    ctx->pc = 0x19A9D0u;
    SET_GPR_U32(ctx, 31, 0x19A9D8u);
    ctx->pc = 0x211080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211080u, 0x19A9D0u, 0x19A9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A9D8u;
label_19a9d8:
    // 0x19a9d8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a9dc: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19a9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19a9e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19a9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a9e4: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19A9E4u;
    SET_GPR_U32(ctx, 31, 0x19A9ECu);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19A9E4u, 0x19A9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A9ECu;
label_19a9ec:
    // 0x19a9ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19a9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a9f0: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x19a9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19a9f4: 0xc084440  jal         func_211100
    ctx->pc = 0x19A9F4u;
    SET_GPR_U32(ctx, 31, 0x19A9FCu);
    ctx->pc = 0x211100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211100u, 0x19A9F4u, 0x19A9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A9FCu;
label_19a9fc:
    // 0x19a9fc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x19a9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19aa00: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x19aa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19aa04: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x19aa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19aa08: 0xc46000e8  lwc1        $f0, 0xE8($v1)
    ctx->pc = 0x19aa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19aa0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19aa0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19aa10: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x19AA10u;
    {
        const bool branch_taken_0x19aa10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19aa10) {
            ctx->pc = 0x19AA48u;
            goto label_19aa48;
        }
    }
    ctx->pc = 0x19AA18u;
    // 0x19aa18: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19aa1c: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19aa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19aa20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19aa20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aa24: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19AA24u;
    SET_GPR_U32(ctx, 31, 0x19AA2Cu);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19AA24u, 0x19AA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AA2Cu;
label_19aa2c:
    // 0x19aa2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19aa2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aa30: 0xc0843f0  jal         func_210FC0
    ctx->pc = 0x19AA30u;
    SET_GPR_U32(ctx, 31, 0x19AA38u);
    ctx->pc = 0x210FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210FC0u, 0x19AA30u, 0x19AA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AA38u;
label_19aa38:
    // 0x19aa38: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19aa38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19aa3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19aa3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aa40: 0xc067068  jal         func_19C1A0
    ctx->pc = 0x19AA40u;
    SET_GPR_U32(ctx, 31, 0x19AA48u);
    ctx->pc = 0x19C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C1A0u, 0x19AA40u, 0x19AA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AA48u;
label_19aa48:
    // 0x19aa48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19aa48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19aa4c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x19aa4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19aa50: 0x3e00008  jr          $ra
    ctx->pc = 0x19AA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AA58u;
    // 0x19aa58: 0x0  nop
    ctx->pc = 0x19aa58u;
    // NOP
    // 0x19aa5c: 0x0  nop
    ctx->pc = 0x19aa5cu;
    // NOP
    ctx->pc = 0x19aa60u;
}
