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

// Function: sub_00278180
// Address: 0x278180 - 0x2781c0
void sub_00278180_0x278180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278180_0x278180");
#endif

    switch (ctx->pc) {
        case 0x278194u: goto label_278194;
        case 0x2781a4u: goto label_2781a4;
        default: break;
    }

    ctx->pc = 0x278180u;

    // 0x278180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x278180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x278184: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x278184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x278188: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x278188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27818c: 0xc12246c  jal         func_4891B0
    ctx->pc = 0x27818Cu;
    SET_GPR_U32(ctx, 31, 0x278194u);
    ctx->pc = 0x4891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891B0u, 0x27818Cu, 0x278194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278194u;
label_278194:
    // 0x278194: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x278194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278198: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x278198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27819c: 0xc11fb08  jal         func_47EC20
    ctx->pc = 0x27819Cu;
    SET_GPR_U32(ctx, 31, 0x2781A4u);
    ctx->pc = 0x47EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EC20u, 0x27819Cu, 0x2781A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2781A4u;
label_2781a4:
    // 0x2781a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2781a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2781a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2781a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2781ac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2781acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2781b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2781B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2781B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2781B8u;
    // 0x2781b8: 0x0  nop
    ctx->pc = 0x2781b8u;
    // NOP
    // 0x2781bc: 0x0  nop
    ctx->pc = 0x2781bcu;
    // NOP
    ctx->pc = 0x2781c0u;
}
