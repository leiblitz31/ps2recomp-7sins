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

// Function: sub_0025B610
// Address: 0x25b610 - 0x25b650
void sub_0025B610_0x25b610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B610_0x25b610");
#endif

    switch (ctx->pc) {
        case 0x25b62cu: goto label_25b62c;
        default: break;
    }

    ctx->pc = 0x25b610u;

    // 0x25b610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25b610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25b614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25b614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25b618: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25b618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25b61c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b620: 0x244401f4  addiu       $a0, $v0, 0x1F4
    ctx->pc = 0x25b620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x25b624: 0xc096d94  jal         func_25B650
    ctx->pc = 0x25B624u;
    SET_GPR_U32(ctx, 31, 0x25B62Cu);
    ctx->pc = 0x25B650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B650u, 0x25B624u, 0x25B62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B62Cu;
label_25b62c:
    // 0x25b62c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x25b62cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25b630: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x25b630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x25b634: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b638: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25b638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25b63c: 0x3e00008  jr          $ra
    ctx->pc = 0x25B63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B63Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B644u;
    // 0x25b644: 0x0  nop
    ctx->pc = 0x25b644u;
    // NOP
    // 0x25b648: 0x0  nop
    ctx->pc = 0x25b648u;
    // NOP
    // 0x25b64c: 0x0  nop
    ctx->pc = 0x25b64cu;
    // NOP
    ctx->pc = 0x25b650u;
}
