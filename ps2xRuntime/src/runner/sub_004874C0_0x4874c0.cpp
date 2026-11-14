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

// Function: sub_004874C0
// Address: 0x4874c0 - 0x487510
void sub_004874C0_0x4874c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004874C0_0x4874c0");
#endif

    switch (ctx->pc) {
        case 0x4874ecu: goto label_4874ec;
        default: break;
    }

    ctx->pc = 0x4874c0u;

    // 0x4874c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4874c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4874c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4874c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4874c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4874c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4874cc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4874ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4874d0: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x4874d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x4874d4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4874D4u;
    {
        const bool branch_taken_0x4874d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4874d4) {
            ctx->pc = 0x4874F4u;
            goto label_4874f4;
        }
    }
    ctx->pc = 0x4874DCu;
    // 0x4874dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4874dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4874e0: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x4874e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x4874e4: 0xc0c84d4  jal         func_321350
    ctx->pc = 0x4874E4u;
    SET_GPR_U32(ctx, 31, 0x4874ECu);
    ctx->pc = 0x321350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321350u, 0x4874E4u, 0x4874ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4874ECu;
label_4874ec:
    // 0x4874ec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4874ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4874f0: 0xac600074  sw          $zero, 0x74($v1)
    ctx->pc = 0x4874f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 0));
label_4874f4:
    // 0x4874f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4874f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4874f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4874f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4874fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4874FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4874FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x487504u;
    // 0x487504: 0x0  nop
    ctx->pc = 0x487504u;
    // NOP
    // 0x487508: 0x0  nop
    ctx->pc = 0x487508u;
    // NOP
    // 0x48750c: 0x0  nop
    ctx->pc = 0x48750cu;
    // NOP
    ctx->pc = 0x487510u;
}
