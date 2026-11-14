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

// Function: sub_0025AC70
// Address: 0x25ac70 - 0x25acc0
void sub_0025AC70_0x25ac70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AC70_0x25ac70");
#endif

    switch (ctx->pc) {
        case 0x25ac8cu: goto label_25ac8c;
        default: break;
    }

    ctx->pc = 0x25ac70u;

    // 0x25ac70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25ac70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25ac74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25ac74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25ac78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25ac78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25ac7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ac80: 0x24440174  addiu       $a0, $v0, 0x174
    ctx->pc = 0x25ac80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 372));
    // 0x25ac84: 0xc0964c8  jal         func_259320
    ctx->pc = 0x25AC84u;
    SET_GPR_U32(ctx, 31, 0x25AC8Cu);
    ctx->pc = 0x259320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259320u, 0x25AC84u, 0x25AC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AC8Cu;
label_25ac8c:
    // 0x25ac8c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25ac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ac90: 0x8c63010c  lw          $v1, 0x10C($v1)
    ctx->pc = 0x25ac90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
    // 0x25ac94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25ac94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25ac98: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x25ac98u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x25ac9c: 0x2010  mfhi        $a0
    ctx->pc = 0x25ac9cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x25aca0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25aca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25aca4: 0xac64010c  sw          $a0, 0x10C($v1)
    ctx->pc = 0x25aca4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 268), GPR_U32(ctx, 4));
    // 0x25aca8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25aca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25acac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25acacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25acb0: 0x3e00008  jr          $ra
    ctx->pc = 0x25ACB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25ACB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25ACB8u;
    // 0x25acb8: 0x0  nop
    ctx->pc = 0x25acb8u;
    // NOP
    // 0x25acbc: 0x0  nop
    ctx->pc = 0x25acbcu;
    // NOP
    ctx->pc = 0x25acc0u;
}
