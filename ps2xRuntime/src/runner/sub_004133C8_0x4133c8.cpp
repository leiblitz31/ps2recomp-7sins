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

// Function: sub_004133C8
// Address: 0x4133c8 - 0x413490
void sub_004133C8_0x4133c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004133C8_0x4133c8");
#endif

    switch (ctx->pc) {
        case 0x413468u: goto label_413468;
        case 0x413474u: goto label_413474;
        default: break;
    }

    ctx->pc = 0x4133c8u;

    // 0x4133c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4133c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4133cc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x4133ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4133d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4133d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4133d4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x4133d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x4133d8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x4133d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4133dc: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x4133dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4133e0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x4133e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x4133e4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x4133e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4133e8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x4133e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x4133ec: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x4133ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x4133f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4133f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4133f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4133f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4133f8: 0x46000504  c1          0x504
    ctx->pc = 0x4133f8u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x4133fc: 0x46141834  c.lt.s      $f3, $f20
    ctx->pc = 0x4133fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x413400: 0x0  nop
    ctx->pc = 0x413400u;
    // NOP
    // 0x413404: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x413404u;
    {
        const bool branch_taken_0x413404 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x413408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413404u;
        // 0x413408: 0x4600a086  mov.s       $f2, $f20 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x413404) {
            ctx->pc = 0x413420u;
            goto label_413420;
        }
    }
    ctx->pc = 0x41340Cu;
    // 0x41340c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x41340cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x413410: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x413410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x413414: 0x46140083  div.s       $f2, $f0, $f20
    ctx->pc = 0x413414u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x413418: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x413418u;
    {
        const bool branch_taken_0x413418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413418u;
        // 0x41341c: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x413418) {
            ctx->pc = 0x413428u;
            goto label_413428;
        }
    }
    ctx->pc = 0x413420u;
label_413420:
    // 0x413420: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x413420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x413424: 0x0  nop
    ctx->pc = 0x413424u;
    // NOP
label_413428:
    // 0x413428: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x413428u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x41342c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x41342cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x413430: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x413430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x413434: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x413434u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x413438: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x413438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x41343c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x41343cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x413440: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x413440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x413444: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x413444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x413448: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x413448u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x41344c: 0x0  nop
    ctx->pc = 0x41344cu;
    // NOP
    // 0x413450: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x413450u;
    {
        const bool branch_taken_0x413450 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x413454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413450u;
        // 0x413454: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x413450) {
            ctx->pc = 0x413478u;
            goto label_413478;
        }
    }
    ctx->pc = 0x413458u;
    // 0x413458: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x413458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41345c: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x41345cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x413460: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x413460u;
    SET_GPR_U32(ctx, 31, 0x413468u);
    ctx->pc = 0x413464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413460u;
    // 0x413464: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x413460u, 0x413468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413468u;
label_413468:
    // 0x413468: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x413468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41346c: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x41346Cu;
    SET_GPR_U32(ctx, 31, 0x413474u);
    ctx->pc = 0x413470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41346Cu;
    // 0x413470: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x41346Cu, 0x413474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413474u;
label_413474:
    // 0x413474: 0x0  nop
    ctx->pc = 0x413474u;
    // NOP
label_413478:
    // 0x413478: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x413478u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x41347c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41347cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x413480: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x413480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x413484: 0x3e00008  jr          $ra
    ctx->pc = 0x413484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x413488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413484u;
        // 0x413488: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41348Cu;
    // 0x41348c: 0x0  nop
    ctx->pc = 0x41348cu;
    // NOP
    ctx->pc = 0x413490u;
}
