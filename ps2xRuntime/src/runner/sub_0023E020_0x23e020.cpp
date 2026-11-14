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

// Function: sub_0023E020
// Address: 0x23e020 - 0x23e060
void sub_0023E020_0x23e020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E020_0x23e020");
#endif

    switch (ctx->pc) {
        case 0x23e03cu: goto label_23e03c;
        default: break;
    }

    ctx->pc = 0x23e020u;

    // 0x23e020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23e020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23e024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23e024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23e028: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23e028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23e02c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e030: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23e030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e034: 0xc0423c4  jal         func_108F10
    ctx->pc = 0x23E034u;
    SET_GPR_U32(ctx, 31, 0x23E03Cu);
    ctx->pc = 0x108F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F10u, 0x23E034u, 0x23E03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E03Cu;
label_23e03c:
    // 0x23e03c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x23e03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e040: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23e040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x23e044: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23e044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23e048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e04c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x23e04cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23e050: 0x3e00008  jr          $ra
    ctx->pc = 0x23E050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E058u;
    // 0x23e058: 0x0  nop
    ctx->pc = 0x23e058u;
    // NOP
    // 0x23e05c: 0x0  nop
    ctx->pc = 0x23e05cu;
    // NOP
    ctx->pc = 0x23e060u;
}
