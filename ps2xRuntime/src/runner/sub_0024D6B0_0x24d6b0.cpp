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

// Function: sub_0024D6B0
// Address: 0x24d6b0 - 0x24d7f0
void sub_0024D6B0_0x24d6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D6B0_0x24d6b0");
#endif

    switch (ctx->pc) {
        case 0x24d708u: goto label_24d708;
        case 0x24d774u: goto label_24d774;
        default: break;
    }

    ctx->pc = 0x24d6b0u;

    // 0x24d6b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24d6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24d6b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24d6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24d6b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x24d6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24d6bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x24d6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x24d6c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x24d6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d6c4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x24d6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d6c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24d6c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d6cc: 0x0  nop
    ctx->pc = 0x24d6ccu;
    // NOP
    // 0x24d6d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24d6d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d6d4: 0x4501003e  bc1t        . + 4 + (0x3E << 2)
    ctx->pc = 0x24D6D4u;
    {
        const bool branch_taken_0x24d6d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24d6d4) {
            ctx->pc = 0x24D7D0u;
            goto label_24d7d0;
        }
    }
    ctx->pc = 0x24D6DCu;
    // 0x24d6dc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x24d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d6e0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24d6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d6e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24d6e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d6e8: 0x0  nop
    ctx->pc = 0x24d6e8u;
    // NOP
    // 0x24d6ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24d6ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d6f0: 0x45010037  bc1t        . + 4 + (0x37 << 2)
    ctx->pc = 0x24D6F0u;
    {
        const bool branch_taken_0x24d6f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24d6f0) {
            ctx->pc = 0x24D7D0u;
            goto label_24d7d0;
        }
    }
    ctx->pc = 0x24D6F8u;
    // 0x24d6f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d6fc: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24d6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24d700: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x24D700u;
    SET_GPR_U32(ctx, 31, 0x24D708u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x24D700u, 0x24D708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D708u;
label_24d708:
    // 0x24d708: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24D708u;
    {
        const bool branch_taken_0x24d708 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x24d708) {
            ctx->pc = 0x24D724u;
            goto label_24d724;
        }
    }
    ctx->pc = 0x24D710u;
    // 0x24d710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24d710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d714: 0x0  nop
    ctx->pc = 0x24d714u;
    // NOP
    // 0x24d718: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x24d718u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24d71c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24D71Cu;
    {
        const bool branch_taken_0x24d71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d71c) {
            ctx->pc = 0x24D740u;
            goto label_24d740;
        }
    }
    ctx->pc = 0x24D724u;
label_24d724:
    // 0x24d724: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x24d724u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x24d728: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24d728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24d72c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24d72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24d730: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24d730u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d734: 0x0  nop
    ctx->pc = 0x24d734u;
    // NOP
    // 0x24d738: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x24d738u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24d73c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x24d73cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_24d740:
    // 0x24d740: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x24d740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x24d744: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24d744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d748: 0x0  nop
    ctx->pc = 0x24d748u;
    // NOP
    // 0x24d74c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x24d74cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24d750: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x24d750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d754: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24d754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d758: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24d758u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d75c: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x24D75Cu;
    {
        const bool branch_taken_0x24d75c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24d75c) {
            ctx->pc = 0x24D7D0u;
            goto label_24d7d0;
        }
    }
    ctx->pc = 0x24D764u;
    // 0x24d764: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24d764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d768: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24d768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24d76c: 0xc0477d8  jal         func_11DF60
    ctx->pc = 0x24D76Cu;
    SET_GPR_U32(ctx, 31, 0x24D774u);
    ctx->pc = 0x11DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF60u, 0x24D76Cu, 0x24D774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D774u;
label_24d774:
    // 0x24d774: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24D774u;
    {
        const bool branch_taken_0x24d774 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x24d774) {
            ctx->pc = 0x24D790u;
            goto label_24d790;
        }
    }
    ctx->pc = 0x24D77Cu;
    // 0x24d77c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24d77cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d780: 0x0  nop
    ctx->pc = 0x24d780u;
    // NOP
    // 0x24d784: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x24d784u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24d788: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24D788u;
    {
        const bool branch_taken_0x24d788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d788) {
            ctx->pc = 0x24D7ACu;
            goto label_24d7ac;
        }
    }
    ctx->pc = 0x24D790u;
label_24d790:
    // 0x24d790: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x24d790u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x24d794: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24d794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24d798: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24d798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24d79c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24d79cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d7a0: 0x0  nop
    ctx->pc = 0x24d7a0u;
    // NOP
    // 0x24d7a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x24d7a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24d7a8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x24d7a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_24d7ac:
    // 0x24d7ac: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x24d7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x24d7b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24d7b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d7b4: 0x0  nop
    ctx->pc = 0x24d7b4u;
    // NOP
    // 0x24d7b8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x24d7b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24d7bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x24d7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d7c0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x24d7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d7c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24d7c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d7c8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x24D7C8u;
    {
        const bool branch_taken_0x24d7c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24d7c8) {
            ctx->pc = 0x24D7DCu;
            goto label_24d7dc;
        }
    }
    ctx->pc = 0x24D7D0u;
label_24d7d0:
    // 0x24d7d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24d7d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d7d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24D7D4u;
    {
        const bool branch_taken_0x24d7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d7d4) {
            ctx->pc = 0x24D7E0u;
            goto label_24d7e0;
        }
    }
    ctx->pc = 0x24D7DCu;
label_24d7dc:
    // 0x24d7dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24d7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d7e0:
    // 0x24d7e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24d7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d7e4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x24d7e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24d7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x24D7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D7F0u;
}
