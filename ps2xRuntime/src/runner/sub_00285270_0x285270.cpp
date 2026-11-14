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

// Function: sub_00285270
// Address: 0x285270 - 0x2852c0
void sub_00285270_0x285270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285270_0x285270");
#endif

    switch (ctx->pc) {
        case 0x2852a8u: goto label_2852a8;
        default: break;
    }

    ctx->pc = 0x285270u;

    // 0x285270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x285270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x285274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x285274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x285278: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x285278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28527c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28527cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x285280: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x285280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285284: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x285284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x285288: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x285288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28528c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x28528cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x285290: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x285290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285294: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x285294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x285298: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x285298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28529c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28529cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2852a0: 0xc0a14b0  jal         func_2852C0
    ctx->pc = 0x2852A0u;
    SET_GPR_U32(ctx, 31, 0x2852A8u);
    ctx->pc = 0x2852C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2852C0u, 0x2852A0u, 0x2852A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2852A8u;
label_2852a8:
    // 0x2852a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2852a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2852ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2852acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2852b0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2852b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2852b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2852B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2852B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2852BCu;
    // 0x2852bc: 0x0  nop
    ctx->pc = 0x2852bcu;
    // NOP
    ctx->pc = 0x2852c0u;
}
