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

// Function: sub_00102210
// Address: 0x102210 - 0x102250
void sub_00102210_0x102210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102210_0x102210");
#endif

    switch (ctx->pc) {
        case 0x102210u: goto label_102210;
        case 0x102214u: goto label_102214;
        case 0x102218u: goto label_102218;
        case 0x10221cu: goto label_10221c;
        case 0x102220u: goto label_102220;
        case 0x102224u: goto label_102224;
        case 0x102228u: goto label_102228;
        case 0x10222cu: goto label_10222c;
        case 0x102230u: goto label_102230;
        case 0x102234u: goto label_102234;
        case 0x102238u: goto label_102238;
        case 0x10223cu: goto label_10223c;
        case 0x102240u: goto label_102240;
        case 0x102244u: goto label_102244;
        case 0x102248u: goto label_102248;
        case 0x10224cu: goto label_10224c;
        default: break;
    }

    ctx->pc = 0x102210u;

label_102210:
    // 0x102210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x102210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_102214:
    // 0x102214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_102218:
    // 0x102218: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x102218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_10221c:
    // 0x10221c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10221cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_102220:
    // 0x102220: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x102220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_102224:
    // 0x102224: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x102224u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_102228:
    // 0x102228: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x102228u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_10222c:
    // 0x10222c: 0x320f809  jalr        $t9
label_102230:
    if (ctx->pc == 0x102230u) {
        ctx->pc = 0x102234u;
        goto label_102234;
    }
    ctx->pc = 0x10222Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x102234u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10222Cu, 0x102234u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102234u;
label_102234:
    // 0x102234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x102234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_102238:
    // 0x102238: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x102238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_10223c:
    // 0x10223c: 0x3e00008  jr          $ra
label_102240:
    if (ctx->pc == 0x102240u) {
        ctx->pc = 0x102244u;
        goto label_102244;
    }
    ctx->pc = 0x10223Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10223Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102244u;
label_102244:
    // 0x102244: 0x0  nop
    ctx->pc = 0x102244u;
    // NOP
label_102248:
    // 0x102248: 0x0  nop
    ctx->pc = 0x102248u;
    // NOP
label_10224c:
    // 0x10224c: 0x0  nop
    ctx->pc = 0x10224cu;
    // NOP
    ctx->pc = 0x102250u;
}
