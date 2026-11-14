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

// Function: sub_00452200
// Address: 0x452200 - 0x452250
void sub_00452200_0x452200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452200_0x452200");
#endif

    switch (ctx->pc) {
        case 0x452218u: goto label_452218;
        case 0x452228u: goto label_452228;
        default: break;
    }

    ctx->pc = 0x452200u;

    // 0x452200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x452200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x452204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x452204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x452208: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x452208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x45220c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x45220cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x452210: 0xc041b48  jal         func_106D20
    ctx->pc = 0x452210u;
    SET_GPR_U32(ctx, 31, 0x452218u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x452210u, 0x452218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452218u;
label_452218:
    // 0x452218: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x452218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45221c: 0x2785b00c  addiu       $a1, $gp, -0x4FF4
    ctx->pc = 0x45221cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946828));
    // 0x452220: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x452220u;
    SET_GPR_U32(ctx, 31, 0x452228u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x452220u, 0x452228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452228u;
label_452228:
    // 0x452228: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x452228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x45222c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45222cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x452230: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x452230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x452234: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x452234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x452238: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x452238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45223c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x45223cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x452240: 0x3e00008  jr          $ra
    ctx->pc = 0x452240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x452240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x452248u;
    // 0x452248: 0x0  nop
    ctx->pc = 0x452248u;
    // NOP
    // 0x45224c: 0x0  nop
    ctx->pc = 0x45224cu;
    // NOP
    ctx->pc = 0x452250u;
}
