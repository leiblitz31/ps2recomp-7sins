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

// Function: sub_0029BA10
// Address: 0x29ba10 - 0x29bba0
void sub_0029BA10_0x29ba10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029BA10_0x29ba10");
#endif

    switch (ctx->pc) {
        case 0x29ba3cu: goto label_29ba3c;
        case 0x29ba50u: goto label_29ba50;
        case 0x29ba60u: goto label_29ba60;
        case 0x29ba70u: goto label_29ba70;
        case 0x29ba98u: goto label_29ba98;
        case 0x29baa8u: goto label_29baa8;
        case 0x29bb00u: goto label_29bb00;
        case 0x29bb10u: goto label_29bb10;
        default: break;
    }

    ctx->pc = 0x29ba10u;

    // 0x29ba10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x29ba10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x29ba14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29ba14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29ba18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x29ba18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x29ba1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29ba1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x29ba20: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x29ba20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29ba24: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x29ba24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x29ba28: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x29ba28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x29ba2c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x29ba2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29ba30: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x29ba30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x29ba34: 0xc085538  jal         func_2154E0
    ctx->pc = 0x29BA34u;
    SET_GPR_U32(ctx, 31, 0x29BA3Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x29BA34u, 0x29BA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BA3Cu;
label_29ba3c:
    // 0x29ba3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29ba3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ba40: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x29ba40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29ba44: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x29ba44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x29ba48: 0xc085538  jal         func_2154E0
    ctx->pc = 0x29BA48u;
    SET_GPR_U32(ctx, 31, 0x29BA50u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x29BA48u, 0x29BA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BA50u;
label_29ba50:
    // 0x29ba50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29ba50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ba54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ba54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ba58: 0xc0a82cc  jal         func_2A0B30
    ctx->pc = 0x29BA58u;
    SET_GPR_U32(ctx, 31, 0x29BA60u);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x29BA58u, 0x29BA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BA60u;
label_29ba60:
    // 0x29ba60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29ba60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ba64: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x29ba64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x29ba68: 0xc121e84  jal         func_487A10
    ctx->pc = 0x29BA68u;
    SET_GPR_U32(ctx, 31, 0x29BA70u);
    ctx->pc = 0x487A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A10u, 0x29BA68u, 0x29BA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BA70u;
label_29ba70:
    // 0x29ba70: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x29ba70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29ba74: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x29ba74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29ba78: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x29ba78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ba7c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x29ba7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ba80: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x29ba80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x29ba84: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x29ba84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x29ba88: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x29ba88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x29ba8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29ba8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ba90: 0xc0a82cc  jal         func_2A0B30
    ctx->pc = 0x29BA90u;
    SET_GPR_U32(ctx, 31, 0x29BA98u);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x29BA90u, 0x29BA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BA98u;
label_29ba98:
    // 0x29ba98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29ba98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ba9c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x29ba9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x29baa0: 0xc121e84  jal         func_487A10
    ctx->pc = 0x29BAA0u;
    SET_GPR_U32(ctx, 31, 0x29BAA8u);
    ctx->pc = 0x487A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A10u, 0x29BAA0u, 0x29BAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BAA8u;
label_29baa8:
    // 0x29baa8: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x29baa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29baac: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x29baacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29bab0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x29bab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bab4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x29bab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bab8: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x29bab8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x29babc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x29babcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x29bac0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x29bac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x29bac4: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x29bac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bac8: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x29bac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bacc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29baccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29bad0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x29bad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x29bad4: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x29bad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bad8: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x29bad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29badc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29badcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29bae0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x29bae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x29bae4: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x29bae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bae8: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x29bae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29baec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29baecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29baf0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x29baf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x29baf4: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x29baf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29baf8: 0xc0c3926  jal         func_30E498
    ctx->pc = 0x29BAF8u;
    SET_GPR_U32(ctx, 31, 0x29BB00u);
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x29BAF8u, 0x29BB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BB00u;
label_29bb00:
    // 0x29bb00: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x29bb00u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x29bb04: 0xc7ac0048  lwc1        $f12, 0x48($sp)
    ctx->pc = 0x29bb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29bb08: 0xc0c3926  jal         func_30E498
    ctx->pc = 0x29BB08u;
    SET_GPR_U32(ctx, 31, 0x29BB10u);
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x29BB08u, 0x29BB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BB10u;
label_29bb10:
    // 0x29bb10: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x29bb10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29bb14: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x29BB14u;
    {
        const bool branch_taken_0x29bb14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29bb14) {
            ctx->pc = 0x29BB54u;
            goto label_29bb54;
        }
    }
    ctx->pc = 0x29BB1Cu;
    // 0x29bb1c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x29bb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bb20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29bb20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bb24: 0x0  nop
    ctx->pc = 0x29bb24u;
    // NOP
    // 0x29bb28: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29bb28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29bb2c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x29BB2Cu;
    {
        const bool branch_taken_0x29bb2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29bb2c) {
            ctx->pc = 0x29BB44u;
            goto label_29bb44;
        }
    }
    ctx->pc = 0x29BB34u;
    // 0x29bb34: 0x3c02c2b4  lui         $v0, 0xC2B4
    ctx->pc = 0x29bb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49844 << 16));
    // 0x29bb38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29bb38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bb3c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x29BB3Cu;
    {
        const bool branch_taken_0x29bb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bb3c) {
            ctx->pc = 0x29BB80u;
            goto label_29bb80;
        }
    }
    ctx->pc = 0x29BB44u;
label_29bb44:
    // 0x29bb44: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x29bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x29bb48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29bb48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bb4c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29BB4Cu;
    {
        const bool branch_taken_0x29bb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bb4c) {
            ctx->pc = 0x29BB80u;
            goto label_29bb80;
        }
    }
    ctx->pc = 0x29BB54u;
label_29bb54:
    // 0x29bb54: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x29bb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bb58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29bb58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bb5c: 0x0  nop
    ctx->pc = 0x29bb5cu;
    // NOP
    // 0x29bb60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29bb60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29bb64: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x29BB64u;
    {
        const bool branch_taken_0x29bb64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29bb64) {
            ctx->pc = 0x29BB78u;
            goto label_29bb78;
        }
    }
    ctx->pc = 0x29BB6Cu;
    // 0x29bb6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29bb6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bb70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29BB70u;
    {
        const bool branch_taken_0x29bb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bb70) {
            ctx->pc = 0x29BB80u;
            goto label_29bb80;
        }
    }
    ctx->pc = 0x29BB78u;
label_29bb78:
    // 0x29bb78: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x29bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x29bb7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29bb7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29bb80:
    // 0x29bb80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29bb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29bb84: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x29bb84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29bb88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29bb88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29bb8c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x29bb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29bb90: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x29bb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x29bb94: 0x3e00008  jr          $ra
    ctx->pc = 0x29BB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BB9Cu;
    // 0x29bb9c: 0x0  nop
    ctx->pc = 0x29bb9cu;
    // NOP
    ctx->pc = 0x29bba0u;
}
