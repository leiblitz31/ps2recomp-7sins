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

// Function: sub_002B8610
// Address: 0x2b8610 - 0x2b8660
void sub_002B8610_0x2b8610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8610_0x2b8610");
#endif

    switch (ctx->pc) {
        case 0x2b863cu: goto label_2b863c;
        default: break;
    }

    ctx->pc = 0x2b8610u;

    // 0x2b8610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b8610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b8614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b8614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b8618: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b8618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b861c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b861cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8620: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x2b8620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2b8624: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B8624u;
    {
        const bool branch_taken_0x2b8624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8624) {
            ctx->pc = 0x2B8648u;
            goto label_2b8648;
        }
    }
    ctx->pc = 0x2B862Cu;
    // 0x2b862c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b862cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8630: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x2b8630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2b8634: 0xc0aeea8  jal         func_2BBAA0
    ctx->pc = 0x2B8634u;
    SET_GPR_U32(ctx, 31, 0x2B863Cu);
    ctx->pc = 0x2BBAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBAA0u, 0x2B8634u, 0x2B863Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B863Cu;
label_2b863c:
    // 0x2b863c: 0x90420006  lbu         $v0, 0x6($v0)
    ctx->pc = 0x2b863cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2b8640: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B8640u;
    {
        const bool branch_taken_0x2b8640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8640) {
            ctx->pc = 0x2B864Cu;
            goto label_2b864c;
        }
    }
    ctx->pc = 0x2B8648u;
label_2b8648:
    // 0x2b8648: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b8648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b864c:
    // 0x2b864c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b864cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8650: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b8650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b8654: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B865Cu;
    // 0x2b865c: 0x0  nop
    ctx->pc = 0x2b865cu;
    // NOP
    ctx->pc = 0x2b8660u;
}
