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

// Function: sub_00216550
// Address: 0x216550 - 0x2165b0
void sub_00216550_0x216550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216550_0x216550");
#endif

    switch (ctx->pc) {
        case 0x216568u: goto label_216568;
        case 0x216588u: goto label_216588;
        default: break;
    }

    ctx->pc = 0x216550u;

    // 0x216550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x216550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x216554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x216554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x216558: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x216558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21655c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x21655cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216560: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x216560u;
    SET_GPR_U32(ctx, 31, 0x216568u);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x216560u, 0x216568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216568u;
label_216568:
    // 0x216568: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x216568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x21656c: 0x24635210  addiu       $v1, $v1, 0x5210
    ctx->pc = 0x21656cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21008));
    // 0x216570: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x216570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216574: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x216574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x216578: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x216578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21657c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x21657cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x216580: 0xc085a0c  jal         func_216830
    ctx->pc = 0x216580u;
    SET_GPR_U32(ctx, 31, 0x216588u);
    ctx->pc = 0x216830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216830u, 0x216580u, 0x216588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216588u;
label_216588:
    // 0x216588: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x216588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21658c: 0xaf82bb74  sw          $v0, -0x448C($gp)
    ctx->pc = 0x21658cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949748), GPR_U32(ctx, 2));
    // 0x216590: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x216590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216598: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x216598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21659c: 0x3e00008  jr          $ra
    ctx->pc = 0x21659Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21659Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2165A4u;
    // 0x2165a4: 0x0  nop
    ctx->pc = 0x2165a4u;
    // NOP
    // 0x2165a8: 0x0  nop
    ctx->pc = 0x2165a8u;
    // NOP
    // 0x2165ac: 0x0  nop
    ctx->pc = 0x2165acu;
    // NOP
    ctx->pc = 0x2165b0u;
}
