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

// Function: sub_00252E00
// Address: 0x252e00 - 0x252f50
void sub_00252E00_0x252e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252E00_0x252e00");
#endif

    switch (ctx->pc) {
        case 0x252e3cu: goto label_252e3c;
        case 0x252e4cu: goto label_252e4c;
        case 0x252e58u: goto label_252e58;
        case 0x252ef0u: goto label_252ef0;
        case 0x252f04u: goto label_252f04;
        case 0x252f20u: goto label_252f20;
        default: break;
    }

    ctx->pc = 0x252e00u;

label_252e00:
    // 0x252e00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x252e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x252e04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x252e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x252e08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x252e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x252e0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x252e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x252e10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x252e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x252e14: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x252e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x252e18: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x252e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x252e1c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x252e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x252e20: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x252e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x252e24: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x252e24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x252e28: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x252e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x252e2c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x252e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x252e30: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x252e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x252e34: 0xc094c10  jal         func_253040
    ctx->pc = 0x252E34u;
    SET_GPR_U32(ctx, 31, 0x252E3Cu);
    ctx->pc = 0x253040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253040u, 0x252E34u, 0x252E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252E3Cu;
label_252e3c:
    // 0x252e3c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x252e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x252e40: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x252e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x252e44: 0xc092464  jal         func_249190
    ctx->pc = 0x252E44u;
    SET_GPR_U32(ctx, 31, 0x252E4Cu);
    ctx->pc = 0x249190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249190u, 0x252E44u, 0x252E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252E4Cu;
label_252e4c:
    // 0x252e4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x252e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252e50: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x252E50u;
    {
        const bool branch_taken_0x252e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252e50) {
            ctx->pc = 0x252F10u;
            goto label_252f10;
        }
    }
    ctx->pc = 0x252E58u;
label_252e58:
    // 0x252e58: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x252e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x252e5c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x252e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x252e60: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x252E60u;
    {
        const bool branch_taken_0x252e60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x252e60) {
            ctx->pc = 0x252E74u;
            goto label_252e74;
        }
    }
    ctx->pc = 0x252E68u;
    // 0x252e68: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x252e68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x252e6c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x252E6Cu;
    {
        const bool branch_taken_0x252e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252e6c) {
            ctx->pc = 0x252F10u;
            goto label_252f10;
        }
    }
    ctx->pc = 0x252E74u;
label_252e74:
    // 0x252e74: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x252e74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x252e78: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x252e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252e7c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x252e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x252e80: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x252e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252e84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252e84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252e88: 0x45010020  bc1t        . + 4 + (0x20 << 2)
    ctx->pc = 0x252E88u;
    {
        const bool branch_taken_0x252e88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x252e88) {
            ctx->pc = 0x252F0Cu;
            goto label_252f0c;
        }
    }
    ctx->pc = 0x252E90u;
    // 0x252e90: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x252e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252e94: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x252e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x252e98: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x252e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252e9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252e9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252ea0: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x252EA0u;
    {
        const bool branch_taken_0x252ea0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x252ea0) {
            ctx->pc = 0x252F0Cu;
            goto label_252f0c;
        }
    }
    ctx->pc = 0x252EA8u;
    // 0x252ea8: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x252ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252eac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x252eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x252eb0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x252eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252eb4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x252eb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252eb8: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x252EB8u;
    {
        const bool branch_taken_0x252eb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252eb8) {
            ctx->pc = 0x252F0Cu;
            goto label_252f0c;
        }
    }
    ctx->pc = 0x252EC0u;
    // 0x252ec0: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x252ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252ec4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x252ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x252ec8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x252ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252ecc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x252eccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252ed0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x252ED0u;
    {
        const bool branch_taken_0x252ed0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252ed0) {
            ctx->pc = 0x252F0Cu;
            goto label_252f0c;
        }
    }
    ctx->pc = 0x252ED8u;
    // 0x252ed8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x252ed8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252edc: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x252edcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x252ee0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x252ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x252ee4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x252ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x252ee8: 0xc094b80  jal         func_252E00
    ctx->pc = 0x252EE8u;
    SET_GPR_U32(ctx, 31, 0x252EF0u);
    ctx->pc = 0x252E00u;
    goto label_252e00;
    ctx->pc = 0x252EF0u;
label_252ef0:
    // 0x252ef0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x252ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x252ef4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x252ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x252ef8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x252ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252efc: 0xc094bd4  jal         func_252F50
    ctx->pc = 0x252EFCu;
    SET_GPR_U32(ctx, 31, 0x252F04u);
    ctx->pc = 0x252F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252F50u, 0x252EFCu, 0x252F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252F04u;
label_252f04:
    // 0x252f04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x252F04u;
    {
        const bool branch_taken_0x252f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252f04) {
            ctx->pc = 0x252F10u;
            goto label_252f10;
        }
    }
    ctx->pc = 0x252F0Cu;
label_252f0c:
    // 0x252f0c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x252f0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_252f10:
    // 0x252f10: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x252f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x252f14: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x252f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x252f18: 0xc09245c  jal         func_249170
    ctx->pc = 0x252F18u;
    SET_GPR_U32(ctx, 31, 0x252F20u);
    ctx->pc = 0x249170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249170u, 0x252F18u, 0x252F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252F20u;
label_252f20:
    // 0x252f20: 0x1602ffcd  bne         $s0, $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x252F20u;
    {
        const bool branch_taken_0x252f20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x252f20) {
            ctx->pc = 0x252E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252e58;
        }
    }
    ctx->pc = 0x252F28u;
    // 0x252f28: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x252f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252f2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x252f2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252f30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x252f30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252f34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x252f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252f38: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x252f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x252f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x252F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252F44u;
    // 0x252f44: 0x0  nop
    ctx->pc = 0x252f44u;
    // NOP
    // 0x252f48: 0x0  nop
    ctx->pc = 0x252f48u;
    // NOP
    // 0x252f4c: 0x0  nop
    ctx->pc = 0x252f4cu;
    // NOP
    ctx->pc = 0x252f50u;
}
