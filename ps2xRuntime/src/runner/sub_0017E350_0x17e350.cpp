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

// Function: sub_0017E350
// Address: 0x17e350 - 0x17e3a0
void sub_0017E350_0x17e350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E350_0x17e350");
#endif

    switch (ctx->pc) {
        case 0x17e37cu: goto label_17e37c;
        case 0x17e38cu: goto label_17e38c;
        default: break;
    }

    ctx->pc = 0x17e350u;

    // 0x17e350: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x17e350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x17e354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e358: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x17e358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x17e35c: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x17e35cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x17e360: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x17e360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x17e364: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x17e364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17e368: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x17e368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17e36c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x17e36cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17e370: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x17e370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e374: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x17E374u;
    SET_GPR_U32(ctx, 31, 0x17E37Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x17E374u, 0x17E37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E37Cu;
label_17e37c:
    // 0x17e37c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x17e37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17e380: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x17e380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17e384: 0xc040304  jal         func_100C10
    ctx->pc = 0x17E384u;
    SET_GPR_U32(ctx, 31, 0x17E38Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x17E384u, 0x17E38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E38Cu;
label_17e38c:
    // 0x17e38c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e390: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x17e390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17e394: 0x3e00008  jr          $ra
    ctx->pc = 0x17E394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E39Cu;
    // 0x17e39c: 0x0  nop
    ctx->pc = 0x17e39cu;
    // NOP
    ctx->pc = 0x17e3a0u;
}
