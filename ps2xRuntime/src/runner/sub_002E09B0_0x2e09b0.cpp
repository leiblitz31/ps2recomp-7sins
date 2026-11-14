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

// Function: sub_002E09B0
// Address: 0x2e09b0 - 0x2e0a30
void sub_002E09B0_0x2e09b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E09B0_0x2e09b0");
#endif

    ctx->pc = 0x2e09b0u;

    // 0x2e09b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e09b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e09b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e09b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e09b8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2e09b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2e09bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e09bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e09c0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2e09c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e09c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e09c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e09c8: 0xc4400064  lwc1        $f0, 0x64($v0)
    ctx->pc = 0x2e09c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e09cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2e09ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e09d0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e09d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2e09d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e09d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e09d8: 0x0  nop
    ctx->pc = 0x2e09d8u;
    // NOP
    // 0x2e09dc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2e09dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2e09e0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2e09e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2e09e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e09e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e09e8: 0x0  nop
    ctx->pc = 0x2e09e8u;
    // NOP
    // 0x2e09ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e09ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e09f0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E09F0u;
    {
        const bool branch_taken_0x2e09f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e09f0) {
            ctx->pc = 0x2E0A08u;
            goto label_2e0a08;
        }
    }
    ctx->pc = 0x2E09F8u;
    // 0x2e09f8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e09f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e09fc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2e09fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e0a00: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E0A00u;
    {
        const bool branch_taken_0x2e0a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0a00) {
            ctx->pc = 0x2E0A1Cu;
            goto label_2e0a1c;
        }
    }
    ctx->pc = 0x2E0A08u;
label_2e0a08:
    // 0x2e0a08: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2e0a08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e0a0c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e0a0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e0a10: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2e0a10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e0a14: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2e0a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2e0a18: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e0a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2e0a1c:
    // 0x2e0a1c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2e0a1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e0a20: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0A28u;
    // 0x2e0a28: 0x0  nop
    ctx->pc = 0x2e0a28u;
    // NOP
    // 0x2e0a2c: 0x0  nop
    ctx->pc = 0x2e0a2cu;
    // NOP
    ctx->pc = 0x2e0a30u;
}
