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

// Function: sub_002A71D0
// Address: 0x2a71d0 - 0x2a7220
void sub_002A71D0_0x2a71d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A71D0_0x2a71d0");
#endif

    switch (ctx->pc) {
        case 0x2a71f4u: goto label_2a71f4;
        case 0x2a7204u: goto label_2a7204;
        default: break;
    }

    ctx->pc = 0x2a71d0u;

    // 0x2a71d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a71d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a71d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a71d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a71d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a71d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a71dc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2a71dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2a71e0: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x2a71e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a71e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a71e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a71e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a71e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a71ec: 0xc09d250  jal         func_274940
    ctx->pc = 0x2A71ECu;
    SET_GPR_U32(ctx, 31, 0x2A71F4u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2A71ECu, 0x2A71F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A71F4u;
label_2a71f4:
    // 0x2a71f4: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2a71f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2a71f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a71f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a71fc: 0xc121904  jal         func_486410
    ctx->pc = 0x2A71FCu;
    SET_GPR_U32(ctx, 31, 0x2A7204u);
    ctx->pc = 0x486410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486410u, 0x2A71FCu, 0x2A7204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7204u;
label_2a7204:
    // 0x2a7204: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a7204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7208: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a7208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a720c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a720cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7210: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2a7210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a7214: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A721Cu;
    // 0x2a721c: 0x0  nop
    ctx->pc = 0x2a721cu;
    // NOP
    ctx->pc = 0x2a7220u;
}
