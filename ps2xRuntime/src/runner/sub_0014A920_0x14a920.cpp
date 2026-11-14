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

// Function: sub_0014A920
// Address: 0x14a920 - 0x14a960
void sub_0014A920_0x14a920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A920_0x14a920");
#endif

    switch (ctx->pc) {
        case 0x14a93cu: goto label_14a93c;
        default: break;
    }

    ctx->pc = 0x14a920u;

    // 0x14a920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14a920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14a924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14a924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14a928: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14a928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14a92c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a930: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14a930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a934: 0xc0423c4  jal         func_108F10
    ctx->pc = 0x14A934u;
    SET_GPR_U32(ctx, 31, 0x14A93Cu);
    ctx->pc = 0x108F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F10u, 0x14A934u, 0x14A93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A93Cu;
label_14a93c:
    // 0x14a93c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14a93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a940: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x14a940u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x14a944: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14a944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a94c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x14a94cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14a950: 0x3e00008  jr          $ra
    ctx->pc = 0x14A950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A958u;
    // 0x14a958: 0x0  nop
    ctx->pc = 0x14a958u;
    // NOP
    // 0x14a95c: 0x0  nop
    ctx->pc = 0x14a95cu;
    // NOP
    ctx->pc = 0x14a960u;
}
