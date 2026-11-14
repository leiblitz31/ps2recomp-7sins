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

// Function: sub_001DE0B0
// Address: 0x1de0b0 - 0x1de3b0
void sub_001DE0B0_0x1de0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE0B0_0x1de0b0");
#endif

    switch (ctx->pc) {
        case 0x1de0ecu: goto label_1de0ec;
        case 0x1de104u: goto label_1de104;
        case 0x1de114u: goto label_1de114;
        case 0x1de12cu: goto label_1de12c;
        case 0x1de184u: goto label_1de184;
        case 0x1de19cu: goto label_1de19c;
        case 0x1de1acu: goto label_1de1ac;
        case 0x1de1c4u: goto label_1de1c4;
        default: break;
    }

    ctx->pc = 0x1de0b0u;

    // 0x1de0b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1de0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1de0b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de0b8: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1de0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1de0bc: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x1de0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x1de0c0: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x1de0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x1de0c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de0c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de0c8: 0x0  nop
    ctx->pc = 0x1de0c8u;
    // NOP
    // 0x1de0cc: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1de0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1de0d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de0d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de0d4: 0x0  nop
    ctx->pc = 0x1de0d4u;
    // NOP
    // 0x1de0d8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1de0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1de0dc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1de0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1de0e0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1de0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1de0e4: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DE0E4u;
    SET_GPR_U32(ctx, 31, 0x1DE0ECu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DE0E4u, 0x1DE0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE0ECu;
label_1de0ec:
    // 0x1de0ec: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1de0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1de0f0: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x1de0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1de0f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1de0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de0f8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1de0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1de0fc: 0xc08c704  jal         func_231C10
    ctx->pc = 0x1DE0FCu;
    SET_GPR_U32(ctx, 31, 0x1DE104u);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1DE0FCu, 0x1DE104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE104u;
label_1de104:
    // 0x1de104: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1de104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1de108: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1de108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1de10c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DE10Cu;
    SET_GPR_U32(ctx, 31, 0x1DE114u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DE10Cu, 0x1DE114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE114u;
label_1de114:
    // 0x1de114: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1de114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1de118: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x1de118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1de11c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1de11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de120: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x1de120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1de124: 0xc08c688  jal         func_231A20
    ctx->pc = 0x1DE124u;
    SET_GPR_U32(ctx, 31, 0x1DE12Cu);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x1DE124u, 0x1DE12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE12Cu;
label_1de12c:
    // 0x1de12c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1de12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1de130: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1de130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1de134: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1de134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de138: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1de138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de13c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de13cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de140: 0x0  nop
    ctx->pc = 0x1de140u;
    // NOP
    // 0x1de144: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1de144u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1de148: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1de148u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1de14c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1de14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1de150: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1de150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1de154: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1de154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1de158: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x1de158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de15c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1de15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de160: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de164: 0x0  nop
    ctx->pc = 0x1de164u;
    // NOP
    // 0x1de168: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1de168u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1de16c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1de16cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1de170: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1de170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1de174: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1de174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1de178: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1de178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1de17c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DE17Cu;
    SET_GPR_U32(ctx, 31, 0x1DE184u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DE17Cu, 0x1DE184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE184u;
label_1de184:
    // 0x1de184: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1de184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1de188: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x1de188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1de18c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1de18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de190: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1de190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1de194: 0xc08c688  jal         func_231A20
    ctx->pc = 0x1DE194u;
    SET_GPR_U32(ctx, 31, 0x1DE19Cu);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x1DE194u, 0x1DE19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE19Cu;
label_1de19c:
    // 0x1de19c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1de19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1de1a0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1de1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1de1a4: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DE1A4u;
    SET_GPR_U32(ctx, 31, 0x1DE1ACu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DE1A4u, 0x1DE1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1ACu;
label_1de1ac:
    // 0x1de1ac: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1de1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1de1b0: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x1de1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1de1b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1de1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de1b8: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x1de1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1de1bc: 0xc08c704  jal         func_231C10
    ctx->pc = 0x1DE1BCu;
    SET_GPR_U32(ctx, 31, 0x1DE1C4u);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1DE1BCu, 0x1DE1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1C4u;
label_1de1c4:
    // 0x1de1c4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1de1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de1c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de1c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de1cc: 0x0  nop
    ctx->pc = 0x1de1ccu;
    // NOP
    // 0x1de1d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1de1d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de1d4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1DE1D4u;
    {
        const bool branch_taken_0x1de1d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de1d4) {
            ctx->pc = 0x1DE1F4u;
            goto label_1de1f4;
        }
    }
    ctx->pc = 0x1DE1DCu;
    // 0x1de1dc: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1de1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de1e0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1de1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de1e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1de1e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1de1e8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1de1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de1ec: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1de1ecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1de1f0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1de1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1de1f4:
    // 0x1de1f4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1de1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de1f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de1f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de1fc: 0x0  nop
    ctx->pc = 0x1de1fcu;
    // NOP
    // 0x1de200: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1de200u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de204: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1DE204u;
    {
        const bool branch_taken_0x1de204 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de204) {
            ctx->pc = 0x1DE234u;
            goto label_1de234;
        }
    }
    ctx->pc = 0x1DE20Cu;
    // 0x1de20c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1de20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de210: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1de210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de214: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1de214u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1de218: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1de218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de21c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1de21cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1de220: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1de220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1de224: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1de224u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de228: 0x0  nop
    ctx->pc = 0x1de228u;
    // NOP
    // 0x1de22c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1de22cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1de230: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1de230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1de234:
    // 0x1de234: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1de234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de238: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1de238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1de23c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1de23cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de240: 0x0  nop
    ctx->pc = 0x1de240u;
    // NOP
    // 0x1de244: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1de244u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de248: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE248u;
    {
        const bool branch_taken_0x1de248 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de248) {
            ctx->pc = 0x1DE260u;
            goto label_1de260;
        }
    }
    ctx->pc = 0x1DE250u;
    // 0x1de250: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1de250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1de254: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1de254u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de258: 0x0  nop
    ctx->pc = 0x1de258u;
    // NOP
    // 0x1de25c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1de25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1de260:
    // 0x1de260: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1de260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de264: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de268: 0x0  nop
    ctx->pc = 0x1de268u;
    // NOP
    // 0x1de26c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1de26cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de270: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE270u;
    {
        const bool branch_taken_0x1de270 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de270) {
            ctx->pc = 0x1DE284u;
            goto label_1de284;
        }
    }
    ctx->pc = 0x1DE278u;
    // 0x1de278: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de27c: 0x0  nop
    ctx->pc = 0x1de27cu;
    // NOP
    // 0x1de280: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1de280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1de284:
    // 0x1de284: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1de284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de288: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1de288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1de28c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1de28cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de290: 0x0  nop
    ctx->pc = 0x1de290u;
    // NOP
    // 0x1de294: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1de294u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de298: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE298u;
    {
        const bool branch_taken_0x1de298 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de298) {
            ctx->pc = 0x1DE2B0u;
            goto label_1de2b0;
        }
    }
    ctx->pc = 0x1DE2A0u;
    // 0x1de2a0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1de2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1de2a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1de2a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de2a8: 0x0  nop
    ctx->pc = 0x1de2a8u;
    // NOP
    // 0x1de2ac: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1de2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1de2b0:
    // 0x1de2b0: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1de2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de2b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de2b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de2b8: 0x0  nop
    ctx->pc = 0x1de2b8u;
    // NOP
    // 0x1de2bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1de2bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de2c0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE2C0u;
    {
        const bool branch_taken_0x1de2c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de2c0) {
            ctx->pc = 0x1DE2D4u;
            goto label_1de2d4;
        }
    }
    ctx->pc = 0x1DE2C8u;
    // 0x1de2c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de2c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de2cc: 0x0  nop
    ctx->pc = 0x1de2ccu;
    // NOP
    // 0x1de2d0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1de2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1de2d4:
    // 0x1de2d4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1de2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1de2d8: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1de2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1de2dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1de2dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de2e0: 0x0  nop
    ctx->pc = 0x1de2e0u;
    // NOP
    // 0x1de2e4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1de2e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1de2e8: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1de2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de2ec: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1de2ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1de2f0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1de2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1de2f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1de2f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de2f8: 0x0  nop
    ctx->pc = 0x1de2f8u;
    // NOP
    // 0x1de2fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1de2fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de300: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE300u;
    {
        const bool branch_taken_0x1de300 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de300) {
            ctx->pc = 0x1DE318u;
            goto label_1de318;
        }
    }
    ctx->pc = 0x1DE308u;
    // 0x1de308: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1de308u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1de30c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1de30cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1de310: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE310u;
    {
        const bool branch_taken_0x1de310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de310) {
            ctx->pc = 0x1DE32Cu;
            goto label_1de32c;
        }
    }
    ctx->pc = 0x1DE318u;
label_1de318:
    // 0x1de318: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1de318u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1de31c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1de31cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1de320: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1de320u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1de324: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1de324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1de328: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1de328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1de32c:
    // 0x1de32c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1de32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1de330: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1de330u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1de334: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1de334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1de338: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1de338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1de33c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1de33cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de340: 0x0  nop
    ctx->pc = 0x1de340u;
    // NOP
    // 0x1de344: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1de344u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1de348: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1de348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de34c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1de34cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1de350: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1de350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1de354: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1de354u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de358: 0x0  nop
    ctx->pc = 0x1de358u;
    // NOP
    // 0x1de35c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1de35cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de360: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE360u;
    {
        const bool branch_taken_0x1de360 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de360) {
            ctx->pc = 0x1DE378u;
            goto label_1de378;
        }
    }
    ctx->pc = 0x1DE368u;
    // 0x1de368: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1de368u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1de36c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1de36cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1de370: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE370u;
    {
        const bool branch_taken_0x1de370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de370) {
            ctx->pc = 0x1DE38Cu;
            goto label_1de38c;
        }
    }
    ctx->pc = 0x1DE378u;
label_1de378:
    // 0x1de378: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1de378u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1de37c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1de37cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1de380: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1de380u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1de384: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1de384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1de388: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1de388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1de38c:
    // 0x1de38c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1de38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1de390: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1de390u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1de394: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de398: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1de398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1de39c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE3A4u;
    // 0x1de3a4: 0x0  nop
    ctx->pc = 0x1de3a4u;
    // NOP
    // 0x1de3a8: 0x0  nop
    ctx->pc = 0x1de3a8u;
    // NOP
    // 0x1de3ac: 0x0  nop
    ctx->pc = 0x1de3acu;
    // NOP
    ctx->pc = 0x1de3b0u;
}
