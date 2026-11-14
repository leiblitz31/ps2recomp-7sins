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

// Function: sub_0047AAF0
// Address: 0x47aaf0 - 0x47ab40
void sub_0047AAF0_0x47aaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047AAF0_0x47aaf0");
#endif

    switch (ctx->pc) {
        case 0x47ab08u: goto label_47ab08;
        case 0x47ab18u: goto label_47ab18;
        default: break;
    }

    ctx->pc = 0x47aaf0u;

    // 0x47aaf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47aaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x47aaf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47aaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47aaf8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x47aaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x47aafc: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x47aafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x47ab00: 0xc11eb5c  jal         func_47AD70
    ctx->pc = 0x47AB00u;
    SET_GPR_U32(ctx, 31, 0x47AB08u);
    ctx->pc = 0x47AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47AD70u, 0x47AB00u, 0x47AB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47AB08u;
label_47ab08:
    // 0x47ab08: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x47ab08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47ab0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47ab0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ab10: 0xc11eb1c  jal         func_47AC70
    ctx->pc = 0x47AB10u;
    SET_GPR_U32(ctx, 31, 0x47AB18u);
    ctx->pc = 0x47AC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47AC70u, 0x47AB10u, 0x47AB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47AB18u;
label_47ab18:
    // 0x47ab18: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x47ab18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47ab1c: 0xaf82c070  sw          $v0, -0x3F90($gp)
    ctx->pc = 0x47ab1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951024), GPR_U32(ctx, 2));
    // 0x47ab20: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x47ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47ab24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47ab24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47ab28: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x47ab28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x47ab2c: 0x3e00008  jr          $ra
    ctx->pc = 0x47AB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47AB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47AB34u;
    // 0x47ab34: 0x0  nop
    ctx->pc = 0x47ab34u;
    // NOP
    // 0x47ab38: 0x0  nop
    ctx->pc = 0x47ab38u;
    // NOP
    // 0x47ab3c: 0x0  nop
    ctx->pc = 0x47ab3cu;
    // NOP
    ctx->pc = 0x47ab40u;
}
