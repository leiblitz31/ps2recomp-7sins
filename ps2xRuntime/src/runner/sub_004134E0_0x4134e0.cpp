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

// Function: sub_004134E0
// Address: 0x4134e0 - 0x413590
void sub_004134E0_0x4134e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004134E0_0x4134e0");
#endif

    switch (ctx->pc) {
        case 0x41356cu: goto label_41356c;
        case 0x413578u: goto label_413578;
        default: break;
    }

    ctx->pc = 0x4134e0u;

    // 0x4134e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4134e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4134e4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4134e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4134e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4134e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4134ec: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x4134ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x4134f0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x4134f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4134f4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x4134f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4134f8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x4134f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x4134fc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x4134fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x413500: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x413500u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x413504: 0x46010504  c1          0x10504
    ctx->pc = 0x413504u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x413508: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x413508u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x41350c: 0x0  nop
    ctx->pc = 0x41350cu;
    // NOP
    // 0x413510: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x413510u;
    {
        const bool branch_taken_0x413510 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x413514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413510u;
        // 0x413514: 0x4600a086  mov.s       $f2, $f20 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x413510) {
            ctx->pc = 0x413530u;
            goto label_413530;
        }
    }
    ctx->pc = 0x413518u;
    // 0x413518: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x413518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x41351c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x41351cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x413520: 0x46140083  div.s       $f2, $f0, $f20
    ctx->pc = 0x413520u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x413524: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x413524u;
    {
        const bool branch_taken_0x413524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x413528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413524u;
        // 0x413528: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x413524) {
            ctx->pc = 0x413538u;
            goto label_413538;
        }
    }
    ctx->pc = 0x41352Cu;
    // 0x41352c: 0x0  nop
    ctx->pc = 0x41352cu;
    // NOP
label_413530:
    // 0x413530: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x413530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x413534: 0x0  nop
    ctx->pc = 0x413534u;
    // NOP
label_413538:
    // 0x413538: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x413538u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x41353c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x41353cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x413540: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x413540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x413544: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x413544u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x413548: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x413548u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x41354c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x41354cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x413550: 0x0  nop
    ctx->pc = 0x413550u;
    // NOP
    // 0x413554: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x413554u;
    {
        const bool branch_taken_0x413554 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x413558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413554u;
        // 0x413558: 0xe4810004  swc1        $f1, 0x4($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x413554) {
            ctx->pc = 0x413578u;
            goto label_413578;
        }
    }
    ctx->pc = 0x41355Cu;
    // 0x41355c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41355cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x413560: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x413560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x413564: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x413564u;
    SET_GPR_U32(ctx, 31, 0x41356Cu);
    ctx->pc = 0x413568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413564u;
    // 0x413568: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x413564u, 0x41356Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41356Cu;
label_41356c:
    // 0x41356c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41356cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413570: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x413570u;
    SET_GPR_U32(ctx, 31, 0x413578u);
    ctx->pc = 0x413574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413570u;
    // 0x413574: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x413570u, 0x413578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413578u;
label_413578:
    // 0x413578: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x413578u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x41357c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41357cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x413580: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x413580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x413584: 0x3e00008  jr          $ra
    ctx->pc = 0x413584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x413588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413584u;
        // 0x413588: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41358Cu;
    // 0x41358c: 0x0  nop
    ctx->pc = 0x41358cu;
    // NOP
    ctx->pc = 0x413590u;
}
