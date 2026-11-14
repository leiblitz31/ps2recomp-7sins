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

// Function: sub_001E54D0
// Address: 0x1e54d0 - 0x1e55b0
void sub_001E54D0_0x1e54d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E54D0_0x1e54d0");
#endif

    switch (ctx->pc) {
        case 0x1e54f4u: goto label_1e54f4;
        case 0x1e5514u: goto label_1e5514;
        case 0x1e552cu: goto label_1e552c;
        case 0x1e554cu: goto label_1e554c;
        case 0x1e5564u: goto label_1e5564;
        default: break;
    }

    ctx->pc = 0x1e54d0u;

    // 0x1e54d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e54d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e54d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e54d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e54d8: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1e54d8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1e54dc: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x1e54dcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1e54e0: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1e54e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1e54e4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1e54e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1e54e8: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1e54e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e54ec: 0xc0c39e2  jal         func_30E788
    ctx->pc = 0x1E54ECu;
    SET_GPR_U32(ctx, 31, 0x1E54F4u);
    ctx->pc = 0x30E788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E788u, 0x1E54ECu, 0x1E54F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E54F4u;
label_1e54f4:
    // 0x1e54f4: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1e54f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1e54f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e54f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e54fc: 0x0  nop
    ctx->pc = 0x1e54fcu;
    // NOP
    // 0x1e5500: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1e5500u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e5504: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1e5504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1e5508: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1e5508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1e550c: 0xc0c39e2  jal         func_30E788
    ctx->pc = 0x1E550Cu;
    SET_GPR_U32(ctx, 31, 0x1E5514u);
    ctx->pc = 0x30E788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E788u, 0x1E550Cu, 0x1E5514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5514u;
label_1e5514:
    // 0x1e5514: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1e5514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1e5518: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1e5518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1e551c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1e551cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1e5520: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1e5520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e5524: 0xc0c39e2  jal         func_30E788
    ctx->pc = 0x1E5524u;
    SET_GPR_U32(ctx, 31, 0x1E552Cu);
    ctx->pc = 0x30E788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E788u, 0x1E5524u, 0x1E552Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E552Cu;
label_1e552c:
    // 0x1e552c: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1e552cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1e5530: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e5530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e5534: 0x0  nop
    ctx->pc = 0x1e5534u;
    // NOP
    // 0x1e5538: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1e5538u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e553c: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1e553cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1e5540: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1e5540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1e5544: 0xc0c39e2  jal         func_30E788
    ctx->pc = 0x1E5544u;
    SET_GPR_U32(ctx, 31, 0x1E554Cu);
    ctx->pc = 0x30E788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E788u, 0x1E5544u, 0x1E554Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E554Cu;
label_1e554c:
    // 0x1e554c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1e554cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1e5550: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1e5550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e5554: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1e5554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5558: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1e5558u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e555c: 0xc0c3926  jal         func_30E498
    ctx->pc = 0x1E555Cu;
    SET_GPR_U32(ctx, 31, 0x1E5564u);
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x1E555Cu, 0x1E5564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5564u;
label_1e5564:
    // 0x1e5564: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1e5564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1e5568: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1e5568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e556c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1e556cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1e5570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5574: 0x0  nop
    ctx->pc = 0x1e5574u;
    // NOP
    // 0x1e5578: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e5578u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e557c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1E557Cu;
    {
        const bool branch_taken_0x1e557c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e557c) {
            ctx->pc = 0x1E5590u;
            goto label_1e5590;
        }
    }
    ctx->pc = 0x1E5584u;
    // 0x1e5584: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1e5584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5588: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5588u;
    {
        const bool branch_taken_0x1e5588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5588) {
            ctx->pc = 0x1E55A0u;
            goto label_1e55a0;
        }
    }
    ctx->pc = 0x1E5590u;
label_1e5590:
    // 0x1e5590: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1e5590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1e5594: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e5594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e5598: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1e5598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e559c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e559cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e55a0:
    // 0x1e55a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e55a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e55a4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1e55a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e55a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E55A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E55A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E55B0u;
}
