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

// Function: sub_0045F550
// Address: 0x45f550 - 0x45f5a0
void sub_0045F550_0x45f550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045F550_0x45f550");
#endif

    switch (ctx->pc) {
        case 0x45f588u: goto label_45f588;
        default: break;
    }

    ctx->pc = 0x45f550u;

    // 0x45f550: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x45f550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x45f554: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x45f554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x45f558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45f558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45f55c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x45f55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x45f560: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x45f560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x45f564: 0x8fb00020  lw          $s0, 0x20($sp)
    ctx->pc = 0x45f564u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45f568: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x45f568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45f56c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x45f56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x45f570: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x45f570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
    // 0x45f574: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x45f574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45f578: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x45f578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45f57c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x45f57cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x45f580: 0xc11818c  jal         func_460630
    ctx->pc = 0x45F580u;
    SET_GPR_U32(ctx, 31, 0x45F588u);
    ctx->pc = 0x460630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x460630u, 0x45F580u, 0x45F588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F588u;
label_45f588:
    // 0x45f588: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x45f588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45f58c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45f58cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45f590: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x45f590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x45f594: 0x3e00008  jr          $ra
    ctx->pc = 0x45F594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45F594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45F59Cu;
    // 0x45f59c: 0x0  nop
    ctx->pc = 0x45f59cu;
    // NOP
    ctx->pc = 0x45f5a0u;
}
