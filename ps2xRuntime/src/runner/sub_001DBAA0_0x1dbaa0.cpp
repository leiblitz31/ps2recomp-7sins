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

// Function: sub_001DBAA0
// Address: 0x1dbaa0 - 0x1dbc50
void sub_001DBAA0_0x1dbaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBAA0_0x1dbaa0");
#endif

    switch (ctx->pc) {
        case 0x1dbad8u: goto label_1dbad8;
        case 0x1dbaf0u: goto label_1dbaf0;
        case 0x1dbb04u: goto label_1dbb04;
        case 0x1dbb18u: goto label_1dbb18;
        case 0x1dbb2cu: goto label_1dbb2c;
        case 0x1dbb78u: goto label_1dbb78;
        case 0x1dbb88u: goto label_1dbb88;
        case 0x1dbb94u: goto label_1dbb94;
        default: break;
    }

    ctx->pc = 0x1dbaa0u;

    // 0x1dbaa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dbaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dbaa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbaa8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1dbaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1dbaac: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x1dbaacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbab0: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1dbab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbab4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1dbab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbab8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1dbab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbabc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1dbabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbac0: 0xc4cc0074  lwc1        $f12, 0x74($a2)
    ctx->pc = 0x1dbac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dbac4: 0xc4ad0080  lwc1        $f13, 0x80($a1)
    ctx->pc = 0x1dbac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1dbac8: 0xc46e0078  lwc1        $f14, 0x78($v1)
    ctx->pc = 0x1dbac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1dbacc: 0xc44f007c  lwc1        $f15, 0x7C($v0)
    ctx->pc = 0x1dbaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1dbad0: 0xc076d14  jal         func_1DB450
    ctx->pc = 0x1DBAD0u;
    SET_GPR_U32(ctx, 31, 0x1DBAD8u);
    ctx->pc = 0x1DB450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB450u, 0x1DBAD0u, 0x1DBAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBAD8u;
label_1dbad8:
    // 0x1dbad8: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1DBAD8u;
    {
        const bool branch_taken_0x1dbad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbad8) {
            ctx->pc = 0x1DBC3Cu;
            goto label_1dbc3c;
        }
    }
    ctx->pc = 0x1DBAE0u;
    // 0x1dbae0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1dbae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbae4: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1dbae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dbae8: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DBAE8u;
    SET_GPR_U32(ctx, 31, 0x1DBAF0u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DBAE8u, 0x1DBAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBAF0u;
label_1dbaf0:
    // 0x1dbaf0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1dbaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbaf4: 0x8c650054  lw          $a1, 0x54($v1)
    ctx->pc = 0x1dbaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1dbaf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dbaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbafc: 0xc08c794  jal         func_231E50
    ctx->pc = 0x1DBAFCu;
    SET_GPR_U32(ctx, 31, 0x1DBB04u);
    ctx->pc = 0x231E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231E50u, 0x1DBAFCu, 0x1DBB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBB04u;
label_1dbb04:
    // 0x1dbb04: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1dbb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1dbb08: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1dbb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbb0c: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1dbb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dbb10: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DBB10u;
    SET_GPR_U32(ctx, 31, 0x1DBB18u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DBB10u, 0x1DBB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBB18u;
label_1dbb18:
    // 0x1dbb18: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1dbb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbb1c: 0x8c650058  lw          $a1, 0x58($v1)
    ctx->pc = 0x1dbb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1dbb20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dbb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbb24: 0xc08c794  jal         func_231E50
    ctx->pc = 0x1DBB24u;
    SET_GPR_U32(ctx, 31, 0x1DBB2Cu);
    ctx->pc = 0x231E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231E50u, 0x1DBB24u, 0x1DBB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBB2Cu;
label_1dbb2c:
    // 0x1dbb2c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1dbb2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1dbb30: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x1dbb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbb34: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1dbb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbb38: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1dbb38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1dbb3c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1dbb3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1dbb40: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1dbb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbb44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dbb44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbb48: 0x0  nop
    ctx->pc = 0x1dbb48u;
    // NOP
    // 0x1dbb4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dbb4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dbb50: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1DBB50u;
    {
        const bool branch_taken_0x1dbb50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dbb50) {
            ctx->pc = 0x1DBB64u;
            goto label_1dbb64;
        }
    }
    ctx->pc = 0x1DBB58u;
    // 0x1dbb58: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1dbb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbb5c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1dbb5cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1dbb60: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1dbb60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1dbb64:
    // 0x1dbb64: 0xc781825c  lwc1        $f1, -0x7DA4($gp)
    ctx->pc = 0x1dbb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbb68: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1dbb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbb6c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1dbb6cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1dbb70: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x1DBB70u;
    SET_GPR_U32(ctx, 31, 0x1DBB78u);
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x1DBB70u, 0x1DBB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBB78u;
label_1dbb78:
    // 0x1dbb78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dbb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbb7c: 0xdf858028  ld          $a1, -0x7FD8($gp)
    ctx->pc = 0x1dbb7cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294934568)));
    // 0x1dbb80: 0xc0c39be  jal         func_30E6F8
    ctx->pc = 0x1DBB80u;
    SET_GPR_U32(ctx, 31, 0x1DBB88u);
    ctx->pc = 0x30E6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E6F8u, 0x1DBB80u, 0x1DBB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBB88u;
label_1dbb88:
    // 0x1dbb88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dbb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbb8c: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1DBB8Cu;
    SET_GPR_U32(ctx, 31, 0x1DBB94u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1DBB8Cu, 0x1DBB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBB94u;
label_1dbb94:
    // 0x1dbb94: 0xc7818154  lwc1        $f1, -0x7EAC($gp)
    ctx->pc = 0x1dbb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbb98: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1dbb98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1dbb9c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1dbb9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1dbba0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1dbba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbba4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1dbba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1dbba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dbba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbbac: 0x0  nop
    ctx->pc = 0x1dbbacu;
    // NOP
    // 0x1dbbb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dbbb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dbbb4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1DBBB4u;
    {
        const bool branch_taken_0x1dbbb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dbbb4) {
            ctx->pc = 0x1DBBD0u;
            goto label_1dbbd0;
        }
    }
    ctx->pc = 0x1DBBBCu;
    // 0x1dbbbc: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1dbbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1dbbc0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dbbc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dbbc4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1dbbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbbc8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1dbbc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1dbbcc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1dbbccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1dbbd0:
    // 0x1dbbd0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1dbbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbbd4: 0xc44100a4  lwc1        $f1, 0xA4($v0)
    ctx->pc = 0x1dbbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbbd8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1dbbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbbdc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1dbbdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dbbe0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1DBBE0u;
    {
        const bool branch_taken_0x1dbbe0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dbbe0) {
            ctx->pc = 0x1DBBF4u;
            goto label_1dbbf4;
        }
    }
    ctx->pc = 0x1DBBE8u;
    // 0x1dbbe8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dbbe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1DBBECu;
    {
        const bool branch_taken_0x1dbbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbbec) {
            ctx->pc = 0x1DBC40u;
            goto label_1dbc40;
        }
    }
    ctx->pc = 0x1DBBF4u;
label_1dbbf4:
    // 0x1dbbf4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1dbbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbbf8: 0xc44100a8  lwc1        $f1, 0xA8($v0)
    ctx->pc = 0x1dbbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbbfc: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1dbbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbc00: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1dbc00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dbc04: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1DBC04u;
    {
        const bool branch_taken_0x1dbc04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dbc04) {
            ctx->pc = 0x1DBC18u;
            goto label_1dbc18;
        }
    }
    ctx->pc = 0x1DBC0Cu;
    // 0x1dbc0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dbc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbc10: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1DBC10u;
    {
        const bool branch_taken_0x1dbc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbc10) {
            ctx->pc = 0x1DBC40u;
            goto label_1dbc40;
        }
    }
    ctx->pc = 0x1DBC18u;
label_1dbc18:
    // 0x1dbc18: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1dbc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbc1c: 0xc44100ac  lwc1        $f1, 0xAC($v0)
    ctx->pc = 0x1dbc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbc20: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1dbc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbc24: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1dbc24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dbc28: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1DBC28u;
    {
        const bool branch_taken_0x1dbc28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dbc28) {
            ctx->pc = 0x1DBC3Cu;
            goto label_1dbc3c;
        }
    }
    ctx->pc = 0x1DBC30u;
    // 0x1dbc30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dbc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dbc34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DBC34u;
    {
        const bool branch_taken_0x1dbc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbc34) {
            ctx->pc = 0x1DBC40u;
            goto label_1dbc40;
        }
    }
    ctx->pc = 0x1DBC3Cu;
label_1dbc3c:
    // 0x1dbc3c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dbc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dbc40:
    // 0x1dbc40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbc40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbc44: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1dbc44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dbc48: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBC50u;
}
