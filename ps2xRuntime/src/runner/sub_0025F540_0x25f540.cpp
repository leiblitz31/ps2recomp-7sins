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

// Function: sub_0025F540
// Address: 0x25f540 - 0x25f580
void sub_0025F540_0x25f540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F540_0x25f540");
#endif

    switch (ctx->pc) {
        case 0x25f560u: goto label_25f560;
        default: break;
    }

    ctx->pc = 0x25f540u;

    // 0x25f540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25f540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25f544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25f544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25f548: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25f548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25f54c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25f54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x25f550: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25f550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f554: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x25f554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f558: 0xc097d60  jal         func_25F580
    ctx->pc = 0x25F558u;
    SET_GPR_U32(ctx, 31, 0x25F560u);
    ctx->pc = 0x25F580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F580u, 0x25F558u, 0x25F560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F560u;
label_25f560:
    // 0x25f560: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25f560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f564: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25f564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f568: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25f568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25f56c: 0x3e00008  jr          $ra
    ctx->pc = 0x25F56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F574u;
    // 0x25f574: 0x0  nop
    ctx->pc = 0x25f574u;
    // NOP
    // 0x25f578: 0x0  nop
    ctx->pc = 0x25f578u;
    // NOP
    // 0x25f57c: 0x0  nop
    ctx->pc = 0x25f57cu;
    // NOP
    ctx->pc = 0x25f580u;
}
