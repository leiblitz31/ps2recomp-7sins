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

// Function: sub_00458800
// Address: 0x458800 - 0x458850
void sub_00458800_0x458800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00458800_0x458800");
#endif

    switch (ctx->pc) {
        case 0x458828u: goto label_458828;
        default: break;
    }

    ctx->pc = 0x458800u;

    // 0x458800: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x458800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x458804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x458804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x458808: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x458808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x45880c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x45880cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x458810: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x458810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x458814: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x458814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x458818: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x458818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45881c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x45881cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x458820: 0xc115eb0  jal         func_457AC0
    ctx->pc = 0x458820u;
    SET_GPR_U32(ctx, 31, 0x458828u);
    ctx->pc = 0x457AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457AC0u, 0x458820u, 0x458828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458828u;
label_458828:
    // 0x458828: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x458828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45882c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x45882cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x458830: 0x1010  mfhi        $v0
    ctx->pc = 0x458830u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x458834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x458834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x458838: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x458838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x45883c: 0x3e00008  jr          $ra
    ctx->pc = 0x45883Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45883Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x458844u;
    // 0x458844: 0x0  nop
    ctx->pc = 0x458844u;
    // NOP
    // 0x458848: 0x0  nop
    ctx->pc = 0x458848u;
    // NOP
    // 0x45884c: 0x0  nop
    ctx->pc = 0x45884cu;
    // NOP
    ctx->pc = 0x458850u;
}
