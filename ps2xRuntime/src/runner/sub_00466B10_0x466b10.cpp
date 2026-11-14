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

// Function: sub_00466B10
// Address: 0x466b10 - 0x466b50
void sub_00466B10_0x466b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466B10_0x466b10");
#endif

    switch (ctx->pc) {
        case 0x466b3cu: goto label_466b3c;
        default: break;
    }

    ctx->pc = 0x466b10u;

    // 0x466b10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x466b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x466b14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x466b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x466b18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x466b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x466b1c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x466b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x466b20: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x466b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x466b24: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x466b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x466b28: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x466b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x466b2c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x466b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x466b30: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x466b30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x466b34: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x466B34u;
    SET_GPR_U32(ctx, 31, 0x466B3Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x466B34u, 0x466B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466B3Cu;
label_466b3c:
    // 0x466b3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x466b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x466b40: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x466b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x466b44: 0x3e00008  jr          $ra
    ctx->pc = 0x466B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466B4Cu;
    // 0x466b4c: 0x0  nop
    ctx->pc = 0x466b4cu;
    // NOP
    ctx->pc = 0x466b50u;
}
