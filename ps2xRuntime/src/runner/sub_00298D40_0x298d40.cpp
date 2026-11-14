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

// Function: sub_00298D40
// Address: 0x298d40 - 0x298e10
void sub_00298D40_0x298d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298D40_0x298d40");
#endif

    switch (ctx->pc) {
        case 0x298db0u: goto label_298db0;
        case 0x298dd8u: goto label_298dd8;
        case 0x298df4u: goto label_298df4;
        default: break;
    }

    ctx->pc = 0x298d40u;

    // 0x298d40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x298d44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x298d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x298d48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x298d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x298d4c: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x298d4cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x298d50: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x298d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298d54: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x298d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x298d58: 0x10030026  beq         $zero, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x298D58u;
    {
        const bool branch_taken_0x298d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x298d58) {
            ctx->pc = 0x298DF4u;
            goto label_298df4;
        }
    }
    ctx->pc = 0x298D60u;
    // 0x298d60: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x298d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298d64: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x298d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x298d68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298d68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298d6c: 0x0  nop
    ctx->pc = 0x298d6cu;
    // NOP
    // 0x298d70: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x298d70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298d74: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x298D74u;
    {
        const bool branch_taken_0x298d74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x298d74) {
            ctx->pc = 0x298D8Cu;
            goto label_298d8c;
        }
    }
    ctx->pc = 0x298D7Cu;
    // 0x298d7c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x298d7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x298d80: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x298d80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x298d84: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x298D84u;
    {
        const bool branch_taken_0x298d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298d84) {
            ctx->pc = 0x298DA0u;
            goto label_298da0;
        }
    }
    ctx->pc = 0x298D8Cu;
label_298d8c:
    // 0x298d8c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x298d8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x298d90: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x298d90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x298d94: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x298d94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x298d98: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x298d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x298d9c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x298d9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_298da0:
    // 0x298da0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x298da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298da4: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x298da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x298da8: 0xc123260  jal         func_48C980
    ctx->pc = 0x298DA8u;
    SET_GPR_U32(ctx, 31, 0x298DB0u);
    ctx->pc = 0x48C980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C980u, 0x298DA8u, 0x298DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298DB0u;
label_298db0:
    // 0x298db0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x298db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298db4: 0x9063004d  lbu         $v1, 0x4D($v1)
    ctx->pc = 0x298db4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 77)));
    // 0x298db8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x298db8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x298dbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x298dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298dc0: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x298DC0u;
    {
        const bool branch_taken_0x298dc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x298dc0) {
            ctx->pc = 0x298DF4u;
            goto label_298df4;
        }
    }
    ctx->pc = 0x298DC8u;
    // 0x298dc8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x298dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298dcc: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x298dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x298dd0: 0xc1233ac  jal         func_48CEB0
    ctx->pc = 0x298DD0u;
    SET_GPR_U32(ctx, 31, 0x298DD8u);
    ctx->pc = 0x48CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CEB0u, 0x298DD0u, 0x298DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298DD8u;
label_298dd8:
    // 0x298dd8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x298dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x298ddc: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x298DDCu;
    {
        const bool branch_taken_0x298ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x298ddc) {
            ctx->pc = 0x298DF4u;
            goto label_298df4;
        }
    }
    ctx->pc = 0x298DE4u;
    // 0x298de4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x298de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298de8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x298de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298dec: 0xc0a631c  jal         func_298C70
    ctx->pc = 0x298DECu;
    SET_GPR_U32(ctx, 31, 0x298DF4u);
    ctx->pc = 0x298C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298C70u, 0x298DECu, 0x298DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298DF4u;
label_298df4:
    // 0x298df4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x298df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298df8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x298df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x298dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x298DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298E04u;
    // 0x298e04: 0x0  nop
    ctx->pc = 0x298e04u;
    // NOP
    // 0x298e08: 0x0  nop
    ctx->pc = 0x298e08u;
    // NOP
    // 0x298e0c: 0x0  nop
    ctx->pc = 0x298e0cu;
    // NOP
    ctx->pc = 0x298e10u;
}
