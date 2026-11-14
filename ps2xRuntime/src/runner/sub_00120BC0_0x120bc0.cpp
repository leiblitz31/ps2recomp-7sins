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

// Function: sub_00120BC0
// Address: 0x120bc0 - 0x120c10
void sub_00120BC0_0x120bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120BC0_0x120bc0");
#endif

    switch (ctx->pc) {
        case 0x120bf8u: goto label_120bf8;
        default: break;
    }

    ctx->pc = 0x120bc0u;

    // 0x120bc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x120bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x120bc4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x120bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x120bc8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x120bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120bcc: 0x9042006c  lbu         $v0, 0x6C($v0)
    ctx->pc = 0x120bccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x120bd0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x120bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x120bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x120BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120BDCu;
    // 0x120bdc: 0x0  nop
    ctx->pc = 0x120bdcu;
    // NOP
    // 0x120be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x120be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x120be4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x120be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x120be8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x120be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x120bec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x120becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120bf0: 0xc047ec0  jal         func_11FB00
    ctx->pc = 0x120BF0u;
    SET_GPR_U32(ctx, 31, 0x120BF8u);
    ctx->pc = 0x11FB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FB00u, 0x120BF0u, 0x120BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120BF8u;
label_120bf8:
    // 0x120bf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x120bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120bfc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x120bfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x120c00: 0x3e00008  jr          $ra
    ctx->pc = 0x120C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120C08u;
    // 0x120c08: 0x0  nop
    ctx->pc = 0x120c08u;
    // NOP
    // 0x120c0c: 0x0  nop
    ctx->pc = 0x120c0cu;
    // NOP
    ctx->pc = 0x120c10u;
}
