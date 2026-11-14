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

// Function: sub_00261650
// Address: 0x261650 - 0x2616c0
void sub_00261650_0x261650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261650_0x261650");
#endif

    switch (ctx->pc) {
        case 0x2616b0u: goto label_2616b0;
        default: break;
    }

    ctx->pc = 0x261650u;

    // 0x261650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x261650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x261654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x261654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x261658: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x261658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26165c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x26165cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261660: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x261660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x261664: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x261664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x261668: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x261668u;
    {
        const bool branch_taken_0x261668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x261668) {
            ctx->pc = 0x261678u;
            goto label_261678;
        }
    }
    ctx->pc = 0x261670u;
    // 0x261670: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x261670u;
    {
        const bool branch_taken_0x261670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x261670) {
            ctx->pc = 0x2616B0u;
            goto label_2616b0;
        }
    }
    ctx->pc = 0x261678u;
label_261678:
    // 0x261678: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x261678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26167c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x26167cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261680: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x261680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261684: 0x0  nop
    ctx->pc = 0x261684u;
    // NOP
    // 0x261688: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x261688u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26168c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x26168Cu;
    {
        const bool branch_taken_0x26168c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26168c) {
            ctx->pc = 0x2616B0u;
            goto label_2616b0;
        }
    }
    ctx->pc = 0x261694u;
    // 0x261694: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x261694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x261698: 0xc7818208  lwc1        $f1, -0x7DF8($gp)
    ctx->pc = 0x261698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26169c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x26169cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2616a0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2616a0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2616a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2616a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2616a8: 0xc094dbc  jal         func_2536F0
    ctx->pc = 0x2616A8u;
    SET_GPR_U32(ctx, 31, 0x2616B0u);
    ctx->pc = 0x2536F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2536F0u, 0x2616A8u, 0x2616B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2616B0u;
label_2616b0:
    // 0x2616b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2616b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2616b4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2616b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2616b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2616B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2616B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2616C0u;
}
