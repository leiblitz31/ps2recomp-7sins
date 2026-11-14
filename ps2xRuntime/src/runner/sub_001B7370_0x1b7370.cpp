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

// Function: sub_001B7370
// Address: 0x1b7370 - 0x1b75d0
void sub_001B7370_0x1b7370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7370_0x1b7370");
#endif

    switch (ctx->pc) {
        case 0x1b739cu: goto label_1b739c;
        case 0x1b73b4u: goto label_1b73b4;
        case 0x1b73f4u: goto label_1b73f4;
        case 0x1b741cu: goto label_1b741c;
        case 0x1b742cu: goto label_1b742c;
        case 0x1b7448u: goto label_1b7448;
        case 0x1b748cu: goto label_1b748c;
        case 0x1b749cu: goto label_1b749c;
        case 0x1b74acu: goto label_1b74ac;
        case 0x1b74ccu: goto label_1b74cc;
        case 0x1b7514u: goto label_1b7514;
        case 0x1b7528u: goto label_1b7528;
        case 0x1b7548u: goto label_1b7548;
        case 0x1b7590u: goto label_1b7590;
        default: break;
    }

    ctx->pc = 0x1b7370u;

    // 0x1b7370: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1b7370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1b7374: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b7374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b7378: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b7378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b737c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b737cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b7380: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1b7380u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b7384: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b7384u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b7388: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1b7388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x1b738c: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x1b738cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x1b7390: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x1b7390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
    // 0x1b7394: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B7394u;
    SET_GPR_U32(ctx, 31, 0x1B739Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B7394u, 0x1B739Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B739Cu;
label_1b739c:
    // 0x1b739c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1b739cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b73a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b73a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b73a4: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x1b73a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1b73a8: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x1b73a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1b73ac: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1B73ACu;
    SET_GPR_U32(ctx, 31, 0x1B73B4u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1B73ACu, 0x1B73B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B73B4u;
label_1b73b4:
    // 0x1b73b4: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1b73b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b73b8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1b73b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b73bc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1b73bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b73c0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1b73c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b73c4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x1b73c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b73c8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1b73c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b73cc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1b73ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b73d0: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1b73d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b73d4: 0xc78080b4  lwc1        $f0, -0x7F4C($gp)
    ctx->pc = 0x1b73d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b73d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b73d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b73dc: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1b73dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1b73e0: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1b73e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1b73e4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1b73e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b73e8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B73E8u;
    {
        const bool branch_taken_0x1b73e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b73e8) {
            ctx->pc = 0x1B7410u;
            goto label_1b7410;
        }
    }
    ctx->pc = 0x1B73F0u;
    // 0x1b73f0: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1b73f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1b73f4:
    // 0x1b73f4: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1b73f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b73f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b73f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b73fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b73fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b7400: 0x0  nop
    ctx->pc = 0x1b7400u;
    // NOP
    // 0x1b7404: 0x0  nop
    ctx->pc = 0x1b7404u;
    // NOP
    // 0x1b7408: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B7408u;
    {
        const bool branch_taken_0x1b7408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7408) {
            ctx->pc = 0x1B73F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b73f4;
        }
    }
    ctx->pc = 0x1B7410u;
label_1b7410:
    // 0x1b7410: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x1b7410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b7414: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x1B7414u;
    SET_GPR_U32(ctx, 31, 0x1B741Cu);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x1B7414u, 0x1B741Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B741Cu;
label_1b741c:
    // 0x1b741c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1b741cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1b7420: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x1b7420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b7424: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x1B7424u;
    SET_GPR_U32(ctx, 31, 0x1B742Cu);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x1B7424u, 0x1B742Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B742Cu;
label_1b742c:
    // 0x1b742c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1b742cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1b7430: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1b7430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1b7434: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1b7434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b7438: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1b7438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b743c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B743Cu;
    {
        const bool branch_taken_0x1b743c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b743c) {
            ctx->pc = 0x1B7464u;
            goto label_1b7464;
        }
    }
    ctx->pc = 0x1B7444u;
    // 0x1b7444: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1b7444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1b7448:
    // 0x1b7448: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1b7448u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b744c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b744cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b7450: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b7450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b7454: 0x0  nop
    ctx->pc = 0x1b7454u;
    // NOP
    // 0x1b7458: 0x0  nop
    ctx->pc = 0x1b7458u;
    // NOP
    // 0x1b745c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B745Cu;
    {
        const bool branch_taken_0x1b745c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b745c) {
            ctx->pc = 0x1B7448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7448;
        }
    }
    ctx->pc = 0x1B7464u;
label_1b7464:
    // 0x1b7464: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1b7464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7468: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b7468u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1b746c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1b746cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1b7470: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1b7470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7474: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1b7474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1b7478: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1b7478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1b747c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b747cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b7480: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x1b7480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1b7484: 0xc069ce8  jal         func_1A73A0
    ctx->pc = 0x1B7484u;
    SET_GPR_U32(ctx, 31, 0x1B748Cu);
    ctx->pc = 0x1A73A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A73A0u, 0x1B7484u, 0x1B748Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B748Cu;
label_1b748c:
    // 0x1b748c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b748cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7490: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b7490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7494: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1B7494u;
    {
        const bool branch_taken_0x1b7494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7494) {
            ctx->pc = 0x1B7598u;
            goto label_1b7598;
        }
    }
    ctx->pc = 0x1B749Cu;
label_1b749c:
    // 0x1b749c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1b749cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b74a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b74a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b74a4: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B74A4u;
    SET_GPR_U32(ctx, 31, 0x1B74ACu);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B74A4u, 0x1B74ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B74ACu;
label_1b74ac:
    // 0x1b74ac: 0xc4550004  lwc1        $f21, 0x4($v0)
    ctx->pc = 0x1b74acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b74b0: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x1b74b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b74b4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b74b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b74b8: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x1b74b8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b74bc: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1b74bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b74c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b74c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b74c4: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B74C4u;
    SET_GPR_U32(ctx, 31, 0x1B74CCu);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B74C4u, 0x1B74CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B74CCu;
label_1b74cc:
    // 0x1b74cc: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1b74ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b74d0: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x1b74d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b74d4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1b74d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b74d8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1b74d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b74dc: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x1b74dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b74e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b74e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b74e4: 0x0  nop
    ctx->pc = 0x1b74e4u;
    // NOP
    // 0x1b74e8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b74e8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b74ec: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1b74ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b74f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b74f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b74f4: 0x0  nop
    ctx->pc = 0x1b74f4u;
    // NOP
    // 0x1b74f8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b74f8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b74fc: 0x4615a51c  madd.s      $f20, $f20, $f21
    ctx->pc = 0x1b74fcu;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[20], ctx->f[21]));
    // 0x1b7500: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b7500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b7504: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x1b7504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1b7508: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b7508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b750c: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B750Cu;
    SET_GPR_U32(ctx, 31, 0x1B7514u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B750Cu, 0x1B7514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7514u;
label_1b7514:
    // 0x1b7514: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1b7514u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b7518: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1b7518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b751c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b751cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7520: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B7520u;
    SET_GPR_U32(ctx, 31, 0x1B7528u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B7520u, 0x1B7528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7528u;
label_1b7528:
    // 0x1b7528: 0xc4550004  lwc1        $f21, 0x4($v0)
    ctx->pc = 0x1b7528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b752c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1b752cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7530: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b7530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7534: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x1b7534u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b7538: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1b7538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b753c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b753cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7540: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B7540u;
    SET_GPR_U32(ctx, 31, 0x1B7548u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B7540u, 0x1B7548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7548u;
label_1b7548:
    // 0x1b7548: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1b7548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b754c: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x1b754cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7550: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1b7550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7554: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1b7554u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b7558: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b7558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b755c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b755cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7560: 0x0  nop
    ctx->pc = 0x1b7560u;
    // NOP
    // 0x1b7564: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b7564u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b7568: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1b7568u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b756c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b756cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7570: 0x0  nop
    ctx->pc = 0x1b7570u;
    // NOP
    // 0x1b7574: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b7574u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b7578: 0x4615a51c  madd.s      $f20, $f20, $f21
    ctx->pc = 0x1b7578u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[20], ctx->f[21]));
    // 0x1b757c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b757cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b7580: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x1b7580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1b7584: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b7584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7588: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B7588u;
    SET_GPR_U32(ctx, 31, 0x1B7590u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B7588u, 0x1B7590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7590u;
label_1b7590:
    // 0x1b7590: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1b7590u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b7594: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b7594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b7598:
    // 0x1b7598: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x1b7598u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1b759c: 0x1460ffbf  bnez        $v1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x1B759Cu;
    {
        const bool branch_taken_0x1b759c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b759c) {
            ctx->pc = 0x1B749Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b749c;
        }
    }
    ctx->pc = 0x1B75A4u;
    // 0x1b75a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b75a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b75a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b75a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b75ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b75acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b75b0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1b75b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b75b4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1b75b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b75b8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1b75b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b75bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B75BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B75BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B75C4u;
    // 0x1b75c4: 0x0  nop
    ctx->pc = 0x1b75c4u;
    // NOP
    // 0x1b75c8: 0x0  nop
    ctx->pc = 0x1b75c8u;
    // NOP
    // 0x1b75cc: 0x0  nop
    ctx->pc = 0x1b75ccu;
    // NOP
    ctx->pc = 0x1b75d0u;
}
