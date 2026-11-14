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

// Function: sub_0012A010
// Address: 0x12a010 - 0x12a050
void sub_0012A010_0x12a010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A010_0x12a010");
#endif

    switch (ctx->pc) {
        case 0x12a030u: goto label_12a030;
        default: break;
    }

    ctx->pc = 0x12a010u;

    // 0x12a010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12a010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12a014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12a014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12a018: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x12a018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12a01c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12a01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a020: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x12a020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
    // 0x12a024: 0x24a57f88  addiu       $a1, $a1, 0x7F88
    ctx->pc = 0x12a024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32648));
    // 0x12a028: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x12A028u;
    SET_GPR_U32(ctx, 31, 0x12A030u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x12A028u, 0x12A030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A030u;
label_12a030:
    // 0x12a030: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x12a030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a034: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x12a034u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x12a038: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x12a038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a03c: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x12a03cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x12a040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12a040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a044: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x12a044u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12a048: 0x3e00008  jr          $ra
    ctx->pc = 0x12A048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A050u;
}
