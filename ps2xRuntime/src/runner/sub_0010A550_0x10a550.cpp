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

// Function: sub_0010A550
// Address: 0x10a550 - 0x10a5a0
void sub_0010A550_0x10a550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A550_0x10a550");
#endif

    switch (ctx->pc) {
        case 0x10a568u: goto label_10a568;
        case 0x10a588u: goto label_10a588;
        default: break;
    }

    ctx->pc = 0x10a550u;

    // 0x10a550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10a550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10a554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10a554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10a558: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10a558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10a55c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10a55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a560: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x10A560u;
    SET_GPR_U32(ctx, 31, 0x10A568u);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x10A560u, 0x10A568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A568u;
label_10a568:
    // 0x10a568: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x10a568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x10a56c: 0x246332c0  addiu       $v1, $v1, 0x32C0
    ctx->pc = 0x10a56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12992));
    // 0x10a570: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10a570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a574: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10a574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10a578: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10a578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a57c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x10a57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x10a580: 0xc042a10  jal         func_10A840
    ctx->pc = 0x10A580u;
    SET_GPR_U32(ctx, 31, 0x10A588u);
    ctx->pc = 0x10A840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A840u, 0x10A580u, 0x10A588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A588u;
label_10a588:
    // 0x10a588: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10a588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a58c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10a58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a590: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10a590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10a594: 0x3e00008  jr          $ra
    ctx->pc = 0x10A594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A59Cu;
    // 0x10a59c: 0x0  nop
    ctx->pc = 0x10a59cu;
    // NOP
    ctx->pc = 0x10a5a0u;
}
