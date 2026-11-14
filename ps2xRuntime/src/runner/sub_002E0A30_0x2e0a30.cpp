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

// Function: sub_002E0A30
// Address: 0x2e0a30 - 0x2e0ab0
void sub_002E0A30_0x2e0a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0A30_0x2e0a30");
#endif

    ctx->pc = 0x2e0a30u;

    // 0x2e0a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e0a34: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e0a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e0a38: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2e0a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2e0a3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e0a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0a40: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2e0a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e0a44: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e0a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0a48: 0xc440005c  lwc1        $f0, 0x5C($v0)
    ctx->pc = 0x2e0a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0a4c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2e0a4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e0a50: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e0a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2e0a54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e0a54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0a58: 0x0  nop
    ctx->pc = 0x2e0a58u;
    // NOP
    // 0x2e0a5c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2e0a5cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2e0a60: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2e0a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2e0a64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e0a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0a68: 0x0  nop
    ctx->pc = 0x2e0a68u;
    // NOP
    // 0x2e0a6c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e0a6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0a70: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0A70u;
    {
        const bool branch_taken_0x2e0a70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0a70) {
            ctx->pc = 0x2E0A88u;
            goto label_2e0a88;
        }
    }
    ctx->pc = 0x2E0A78u;
    // 0x2e0a78: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e0a78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e0a7c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2e0a7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e0a80: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E0A80u;
    {
        const bool branch_taken_0x2e0a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0a80) {
            ctx->pc = 0x2E0A9Cu;
            goto label_2e0a9c;
        }
    }
    ctx->pc = 0x2E0A88u;
label_2e0a88:
    // 0x2e0a88: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2e0a88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e0a8c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e0a8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e0a90: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2e0a90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e0a94: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2e0a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2e0a98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e0a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2e0a9c:
    // 0x2e0a9c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2e0a9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e0aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0AA8u;
    // 0x2e0aa8: 0x0  nop
    ctx->pc = 0x2e0aa8u;
    // NOP
    // 0x2e0aac: 0x0  nop
    ctx->pc = 0x2e0aacu;
    // NOP
    ctx->pc = 0x2e0ab0u;
}
