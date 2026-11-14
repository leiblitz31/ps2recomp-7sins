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

// Function: sub_001DB660
// Address: 0x1db660 - 0x1db8f0
void sub_001DB660_0x1db660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB660_0x1db660");
#endif

    switch (ctx->pc) {
        case 0x1db6a8u: goto label_1db6a8;
        case 0x1db79cu: goto label_1db79c;
        case 0x1db7b4u: goto label_1db7b4;
        case 0x1db7ccu: goto label_1db7cc;
        case 0x1db7e4u: goto label_1db7e4;
        case 0x1db834u: goto label_1db834;
        case 0x1db850u: goto label_1db850;
        default: break;
    }

    ctx->pc = 0x1db660u;

    // 0x1db660: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1db660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1db664: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1db664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1db668: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1db668u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1db66c: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1db66cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1db670: 0xa3a50050  sb          $a1, 0x50($sp)
    ctx->pc = 0x1db670u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 5));
    // 0x1db674: 0xe7ac0060  swc1        $f12, 0x60($sp)
    ctx->pc = 0x1db674u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1db678: 0xe7ad0070  swc1        $f13, 0x70($sp)
    ctx->pc = 0x1db678u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1db67c: 0xe7ae0080  swc1        $f14, 0x80($sp)
    ctx->pc = 0x1db67cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1db680: 0xe7af0090  swc1        $f15, 0x90($sp)
    ctx->pc = 0x1db680u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1db684: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x1db684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x1db688: 0xafa700b0  sw          $a3, 0xB0($sp)
    ctx->pc = 0x1db688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 7));
    // 0x1db68c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1db68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1db690: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x1db690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1db694: 0xc7ad0070  lwc1        $f13, 0x70($sp)
    ctx->pc = 0x1db694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1db698: 0xc7ae0080  lwc1        $f14, 0x80($sp)
    ctx->pc = 0x1db698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1db69c: 0xc7af0090  lwc1        $f15, 0x90($sp)
    ctx->pc = 0x1db69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1db6a0: 0xc076d14  jal         func_1DB450
    ctx->pc = 0x1DB6A0u;
    SET_GPR_U32(ctx, 31, 0x1DB6A8u);
    ctx->pc = 0x1DB450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB450u, 0x1DB6A0u, 0x1DB6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB6A8u;
label_1db6a8:
    // 0x1db6a8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DB6A8u;
    {
        const bool branch_taken_0x1db6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db6a8) {
            ctx->pc = 0x1DB6D0u;
            goto label_1db6d0;
        }
    }
    ctx->pc = 0x1DB6B0u;
    // 0x1db6b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1db6b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db6b4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1db6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1db6b8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1db6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1db6bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1db6bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db6c0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1db6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1db6c4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1db6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1db6c8: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x1DB6C8u;
    {
        const bool branch_taken_0x1db6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db6c8) {
            ctx->pc = 0x1DB8DCu;
            goto label_1db8dc;
        }
    }
    ctx->pc = 0x1DB6D0u;
label_1db6d0:
    // 0x1db6d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1db6d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db6d4: 0x0  nop
    ctx->pc = 0x1db6d4u;
    // NOP
    // 0x1db6d8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1db6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1db6dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1db6dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db6e0: 0x0  nop
    ctx->pc = 0x1db6e0u;
    // NOP
    // 0x1db6e4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1db6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1db6e8: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x1db6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db6ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1db6ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db6f0: 0x0  nop
    ctx->pc = 0x1db6f0u;
    // NOP
    // 0x1db6f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1db6f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db6f8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DB6F8u;
    {
        const bool branch_taken_0x1db6f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db6f8) {
            ctx->pc = 0x1DB710u;
            goto label_1db710;
        }
    }
    ctx->pc = 0x1DB700u;
    // 0x1db700: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1db700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db704: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1db704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1db708: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1DB708u;
    {
        const bool branch_taken_0x1db708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db708) {
            ctx->pc = 0x1DB734u;
            goto label_1db734;
        }
    }
    ctx->pc = 0x1DB710u;
label_1db710:
    // 0x1db710: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x1db710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db714: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1db714u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db718: 0x0  nop
    ctx->pc = 0x1db718u;
    // NOP
    // 0x1db71c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1db71cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db720: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1DB720u;
    {
        const bool branch_taken_0x1db720 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db720) {
            ctx->pc = 0x1DB734u;
            goto label_1db734;
        }
    }
    ctx->pc = 0x1DB728u;
    // 0x1db728: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1db728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db72c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1db72cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1db730: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1db730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1db734:
    // 0x1db734: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1db734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db738: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1db738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db73c: 0x0  nop
    ctx->pc = 0x1db73cu;
    // NOP
    // 0x1db740: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1db740u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db744: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DB744u;
    {
        const bool branch_taken_0x1db744 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db744) {
            ctx->pc = 0x1DB75Cu;
            goto label_1db75c;
        }
    }
    ctx->pc = 0x1DB74Cu;
    // 0x1db74c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1db74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db750: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1db750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1db754: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1DB754u;
    {
        const bool branch_taken_0x1db754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db754) {
            ctx->pc = 0x1DB780u;
            goto label_1db780;
        }
    }
    ctx->pc = 0x1DB75Cu;
label_1db75c:
    // 0x1db75c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x1db75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db760: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1db760u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db764: 0x0  nop
    ctx->pc = 0x1db764u;
    // NOP
    // 0x1db768: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1db768u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db76c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1DB76Cu;
    {
        const bool branch_taken_0x1db76c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db76c) {
            ctx->pc = 0x1DB780u;
            goto label_1db780;
        }
    }
    ctx->pc = 0x1DB774u;
    // 0x1db774: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1db774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db778: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1db778u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1db77c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1db77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1db780:
    // 0x1db780: 0x93a20050  lbu         $v0, 0x50($sp)
    ctx->pc = 0x1db780u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1db784: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DB784u;
    {
        const bool branch_taken_0x1db784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db784) {
            ctx->pc = 0x1DB7BCu;
            goto label_1db7bc;
        }
    }
    ctx->pc = 0x1DB78Cu;
    // 0x1db78c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1db78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1db790: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1db790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1db794: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DB794u;
    SET_GPR_U32(ctx, 31, 0x1DB79Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DB794u, 0x1DB79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB79Cu;
label_1db79c:
    // 0x1db79c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1db79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1db7a0: 0x8c65004c  lw          $a1, 0x4C($v1)
    ctx->pc = 0x1db7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1db7a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1db7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db7a8: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x1db7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1db7ac: 0xc08c688  jal         func_231A20
    ctx->pc = 0x1DB7ACu;
    SET_GPR_U32(ctx, 31, 0x1DB7B4u);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x1DB7ACu, 0x1DB7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB7B4u;
label_1db7b4:
    // 0x1db7b4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1DB7B4u;
    {
        const bool branch_taken_0x1db7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db7b4) {
            ctx->pc = 0x1DB7E4u;
            goto label_1db7e4;
        }
    }
    ctx->pc = 0x1DB7BCu;
label_1db7bc:
    // 0x1db7bc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1db7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1db7c0: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1db7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1db7c4: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DB7C4u;
    SET_GPR_U32(ctx, 31, 0x1DB7CCu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DB7C4u, 0x1DB7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB7CCu;
label_1db7cc:
    // 0x1db7cc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1db7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1db7d0: 0x8c65005c  lw          $a1, 0x5C($v1)
    ctx->pc = 0x1db7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1db7d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1db7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db7d8: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x1db7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1db7dc: 0xc08c688  jal         func_231A20
    ctx->pc = 0x1DB7DCu;
    SET_GPR_U32(ctx, 31, 0x1DB7E4u);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x1DB7DCu, 0x1DB7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB7E4u;
label_1db7e4:
    // 0x1db7e4: 0xc78181b0  lwc1        $f1, -0x7E50($gp)
    ctx->pc = 0x1db7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db7e8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1db7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db7ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1db7ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1db7f0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1db7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db7f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1db7f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1db7f8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1db7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1db7fc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1db7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1db800: 0xc78181b0  lwc1        $f1, -0x7E50($gp)
    ctx->pc = 0x1db800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db804: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1db804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db808: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1db808u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1db80c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1db80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db810: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1db810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1db814: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1db814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1db818: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1db818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1db81c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1db81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1db820: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1db820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1db824: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1db824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1db828: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x1db828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1db82c: 0xc0c39f4  jal         func_30E7D0
    ctx->pc = 0x1DB82Cu;
    SET_GPR_U32(ctx, 31, 0x1DB834u);
    ctx->pc = 0x30E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E7D0u, 0x1DB82Cu, 0x1DB834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB834u;
label_1db834:
    // 0x1db834: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1db834u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1db838: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1db838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1db83c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1db83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1db840: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1db840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1db844: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x1db844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1db848: 0xc0c39f4  jal         func_30E7D0
    ctx->pc = 0x1DB848u;
    SET_GPR_U32(ctx, 31, 0x1DB850u);
    ctx->pc = 0x30E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E7D0u, 0x1DB848u, 0x1DB850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB850u;
label_1db850:
    // 0x1db850: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x1db850u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1db854: 0x0  nop
    ctx->pc = 0x1db854u;
    // NOP
    // 0x1db858: 0x46000004  c1          0x4
    ctx->pc = 0x1db858u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1db85c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1db85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1db860: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x1db860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1db864: 0xc78181b0  lwc1        $f1, -0x7E50($gp)
    ctx->pc = 0x1db864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db868: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1db868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db86c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1db86cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1db870: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1db870u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db874: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x1DB874u;
    {
        const bool branch_taken_0x1db874 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db874) {
            ctx->pc = 0x1DB8DCu;
            goto label_1db8dc;
        }
    }
    ctx->pc = 0x1DB87Cu;
    // 0x1db87c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1db87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db880: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1db880u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db884: 0x0  nop
    ctx->pc = 0x1db884u;
    // NOP
    // 0x1db888: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1db888u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db88c: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x1DB88Cu;
    {
        const bool branch_taken_0x1db88c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db88c) {
            ctx->pc = 0x1DB8DCu;
            goto label_1db8dc;
        }
    }
    ctx->pc = 0x1DB894u;
    // 0x1db894: 0xc78181b0  lwc1        $f1, -0x7E50($gp)
    ctx->pc = 0x1db894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db898: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1db898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db89c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1db89cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1db8a0: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1db8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db8a4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1db8a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1db8a8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1db8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1db8ac: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1db8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1db8b0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1db8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db8b4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1db8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db8b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1db8b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1db8bc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1db8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1db8c0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1db8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1db8c4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1db8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1db8c8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1db8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db8cc: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1db8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db8d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1db8d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1db8d4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1db8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1db8d8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1db8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1db8dc:
    // 0x1db8dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1db8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db8e0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1db8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1db8e4: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x1db8e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1db8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB8F0u;
}
