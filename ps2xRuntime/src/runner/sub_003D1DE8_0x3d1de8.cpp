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

// Function: sub_003D1DE8
// Address: 0x3d1de8 - 0x3d1e78
void sub_003D1DE8_0x3d1de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D1DE8_0x3d1de8");
#endif

    ctx->pc = 0x3d1de8u;

    // 0x3d1de8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x3d1de8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d1dec: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3d1decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x3d1df0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3d1df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3d1df4: 0x2444b328  addiu       $a0, $v0, -0x4CD8
    ctx->pc = 0x3d1df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947624));
    // 0x3d1df8: 0xc440b328  lwc1        $f0, -0x4CD8($v0)
    ctx->pc = 0x3d1df8u;
    { uint32_t bits = FAST_READ32(0x5DB328u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d1dfc: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x3d1dfcu;
    { uint32_t bits = FAST_READ32(0x5DB32Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d1e00: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x3d1e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3d1e04: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x3d1e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3d1e08: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x3d1e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3d1e0c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x3d1e0cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x3d1e10: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x3d1e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d1e14: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x3d1e14u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x3d1e18: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3d1e18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3d1e1c: 0xc4860008  lwc1        $f6, 0x8($a0)
    ctx->pc = 0x3d1e1cu;
    { uint32_t bits = FAST_READ32(0x5DB330u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3d1e20: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x3d1e20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3d1e24: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x3d1e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d1e28: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3d1e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d1e2c: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x3d1e2cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x3d1e30: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x3d1e30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x3d1e34: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x3d1e34u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x3d1e38: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x3d1e38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x3d1e3c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x3d1e3cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x3d1e40: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x3d1e40u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x3d1e44: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x3d1e44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d1e48: 0x0  nop
    ctx->pc = 0x3d1e48u;
    // NOP
    // 0x3d1e4c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3D1E4Cu;
    {
        const bool branch_taken_0x3d1e4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3D1E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1E4Cu;
        // 0x3d1e50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1e4c) {
            ctx->pc = 0x3D1E5Cu;
            goto label_3d1e5c;
        }
    }
    ctx->pc = 0x3D1E54u;
    // 0x3d1e54: 0x3e00008  jr          $ra
    ctx->pc = 0x3D1E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D1E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1E54u;
        // 0x3d1e58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D1E5Cu;
label_3d1e5c:
    // 0x3d1e5c: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x3d1e5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d1e60: 0x0  nop
    ctx->pc = 0x3d1e60u;
    // NOP
    // 0x3d1e64: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3D1E64u;
    {
        const bool branch_taken_0x3d1e64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d1e64) {
            ctx->pc = 0x3D1E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D1E64u;
            // 0x3d1e68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D1E6Cu;
            goto label_3d1e6c;
        }
    }
    ctx->pc = 0x3D1E6Cu;
label_3d1e6c:
    // 0x3d1e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D1E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D1E74u;
    // 0x3d1e74: 0x0  nop
    ctx->pc = 0x3d1e74u;
    // NOP
    ctx->pc = 0x3d1e78u;
}
