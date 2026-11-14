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

// Function: sub_00485ED0
// Address: 0x485ed0 - 0x485f30
void sub_00485ED0_0x485ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485ED0_0x485ed0");
#endif

    switch (ctx->pc) {
        case 0x485ee8u: goto label_485ee8;
        case 0x485ef8u: goto label_485ef8;
        case 0x485f08u: goto label_485f08;
        case 0x485f18u: goto label_485f18;
        default: break;
    }

    ctx->pc = 0x485ed0u;

    // 0x485ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x485ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x485ed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x485ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x485ed8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x485ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x485edc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x485edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485ee0: 0xc121d30  jal         func_4874C0
    ctx->pc = 0x485EE0u;
    SET_GPR_U32(ctx, 31, 0x485EE8u);
    ctx->pc = 0x4874C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4874C0u, 0x485EE0u, 0x485EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485EE8u;
label_485ee8:
    // 0x485ee8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485eec: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x485eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x485ef0: 0xc0ef39c  jal         func_3BCE70
    ctx->pc = 0x485EF0u;
    SET_GPR_U32(ctx, 31, 0x485EF8u);
    ctx->pc = 0x3BCE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCE70u, 0x485EF0u, 0x485EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485EF8u;
label_485ef8:
    // 0x485ef8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485efc: 0x8c44007c  lw          $a0, 0x7C($v0)
    ctx->pc = 0x485efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x485f00: 0xc0ef39c  jal         func_3BCE70
    ctx->pc = 0x485F00u;
    SET_GPR_U32(ctx, 31, 0x485F08u);
    ctx->pc = 0x3BCE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCE70u, 0x485F00u, 0x485F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485F08u;
label_485f08:
    // 0x485f08: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485f0c: 0x8c440080  lw          $a0, 0x80($v0)
    ctx->pc = 0x485f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x485f10: 0xc0ef39c  jal         func_3BCE70
    ctx->pc = 0x485F10u;
    SET_GPR_U32(ctx, 31, 0x485F18u);
    ctx->pc = 0x3BCE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCE70u, 0x485F10u, 0x485F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485F18u;
label_485f18:
    // 0x485f18: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x485f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485f1c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x485f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x485f20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x485f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x485f24: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x485f24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x485f28: 0x3e00008  jr          $ra
    ctx->pc = 0x485F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x485F30u;
}
