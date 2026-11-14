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

// Function: sub_00480970
// Address: 0x480970 - 0x4809b0
void sub_00480970_0x480970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00480970_0x480970");
#endif

    switch (ctx->pc) {
        case 0x480998u: goto label_480998;
        default: break;
    }

    ctx->pc = 0x480970u;

    // 0x480970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x480970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x480974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x480974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x480978: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x480978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48097c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x48097cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x480980: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x480980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x480984: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x480984u;
    {
        const bool branch_taken_0x480984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x480984) {
            ctx->pc = 0x480998u;
            goto label_480998;
        }
    }
    ctx->pc = 0x48098Cu;
    // 0x48098c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48098cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x480990: 0xc0f238a  jal         func_3C8E28
    ctx->pc = 0x480990u;
    SET_GPR_U32(ctx, 31, 0x480998u);
    ctx->pc = 0x3C8E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C8E28u, 0x480990u, 0x480998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480998u;
label_480998:
    // 0x480998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x480998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48099c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x48099cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4809a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4809A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4809A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4809A8u;
    // 0x4809a8: 0x0  nop
    ctx->pc = 0x4809a8u;
    // NOP
    // 0x4809ac: 0x0  nop
    ctx->pc = 0x4809acu;
    // NOP
    ctx->pc = 0x4809b0u;
}
