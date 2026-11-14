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

// Function: sub_001932C0
// Address: 0x1932c0 - 0x193400
void sub_001932C0_0x1932c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001932C0_0x1932c0");
#endif

    switch (ctx->pc) {
        case 0x1932f4u: goto label_1932f4;
        case 0x193310u: goto label_193310;
        case 0x193350u: goto label_193350;
        case 0x19335cu: goto label_19335c;
        case 0x1933bcu: goto label_1933bc;
        default: break;
    }

    ctx->pc = 0x1932c0u;

    // 0x1932c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1932c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1932c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1932c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1932c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1932c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1932cc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1932ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1932d0: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1932d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1932d4: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1932d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1932d8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1932d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1932dc: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1932dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1932e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1932e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1932e4: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x1932e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x1932e8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1932e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1932ec: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1932ECu;
    SET_GPR_U32(ctx, 31, 0x1932F4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1932ECu, 0x1932F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1932F4u;
label_1932f4:
    // 0x1932f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1932f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1932f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1932f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1932fc: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1932fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x193300: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x193300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x193304: 0x24a55aa0  addiu       $a1, $a1, 0x5AA0
    ctx->pc = 0x193304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23200));
    // 0x193308: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x193308u;
    SET_GPR_U32(ctx, 31, 0x193310u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x193308u, 0x193310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193310u;
label_193310:
    // 0x193310: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x193310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193314: 0xc4610054  lwc1        $f1, 0x54($v1)
    ctx->pc = 0x193314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193318: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x193318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19331c: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x19331cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193320: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x193320u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x193324: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x193324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193328: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x193328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19332c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x19332cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x193330: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x193330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x193334: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x193334u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x193338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19333c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19333cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193340: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x193340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193344: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x193344u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193348: 0xc08c544  jal         func_231510
    ctx->pc = 0x193348u;
    SET_GPR_U32(ctx, 31, 0x193350u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x193348u, 0x193350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193350u;
label_193350:
    // 0x193350: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x193350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193354: 0xc064d5c  jal         func_193570
    ctx->pc = 0x193354u;
    SET_GPR_U32(ctx, 31, 0x19335Cu);
    ctx->pc = 0x193570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193570u, 0x193354u, 0x19335Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19335Cu;
label_19335c:
    // 0x19335c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19335cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193360: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x193360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193364: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x193364u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193368: 0x0  nop
    ctx->pc = 0x193368u;
    // NOP
    // 0x19336c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19336cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193370: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x193370u;
    {
        const bool branch_taken_0x193370 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x193370) {
            ctx->pc = 0x1933BCu;
            goto label_1933bc;
        }
    }
    ctx->pc = 0x193378u;
    // 0x193378: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x193378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x19337c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x19337cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193380: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x193380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193384: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x193384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193388: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x193388u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x19338c: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x19338cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x193390: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x193390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193394: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x193394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193398: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x193398u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19339c: 0x0  nop
    ctx->pc = 0x19339cu;
    // NOP
    // 0x1933a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1933a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1933a4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1933A4u;
    {
        const bool branch_taken_0x1933a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1933a4) {
            ctx->pc = 0x1933BCu;
            goto label_1933bc;
        }
    }
    ctx->pc = 0x1933ACu;
    // 0x1933ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1933acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1933b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1933b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1933b4: 0xc125d14  jal         func_497450
    ctx->pc = 0x1933B4u;
    SET_GPR_U32(ctx, 31, 0x1933BCu);
    ctx->pc = 0x497450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x497450u, 0x1933B4u, 0x1933BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1933BCu;
label_1933bc:
    // 0x1933bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1933bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1933c0: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1933c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1933c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1933c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1933c8: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x1933c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1933cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1933ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1933d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1933d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1933d4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1933D4u;
    {
        const bool branch_taken_0x1933d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1933d4) {
            ctx->pc = 0x1933E0u;
            goto label_1933e0;
        }
    }
    ctx->pc = 0x1933DCu;
    // 0x1933dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1933dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1933e0:
    // 0x1933e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1933e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1933e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1933e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1933e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1933e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1933ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1933ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1933ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1933F4u;
    // 0x1933f4: 0x0  nop
    ctx->pc = 0x1933f4u;
    // NOP
    // 0x1933f8: 0x0  nop
    ctx->pc = 0x1933f8u;
    // NOP
    // 0x1933fc: 0x0  nop
    ctx->pc = 0x1933fcu;
    // NOP
    ctx->pc = 0x193400u;
}
