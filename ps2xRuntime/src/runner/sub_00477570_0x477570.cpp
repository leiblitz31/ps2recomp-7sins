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

// Function: sub_00477570
// Address: 0x477570 - 0x4775b0
void sub_00477570_0x477570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00477570_0x477570");
#endif

    ctx->pc = 0x477570u;

    // 0x477570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x477570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x477574: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x477574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x477578: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x477578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x47757c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47757cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x477580: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x477580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x477584: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x477584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x477588: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x477588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x47758c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47758cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x477590: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x477590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x477594: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x477594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x477598: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x477598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x47759c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x47759cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4775a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4775a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4775a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4775A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4775A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4775ACu;
    // 0x4775ac: 0x0  nop
    ctx->pc = 0x4775acu;
    // NOP
    ctx->pc = 0x4775b0u;
}
