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

// Function: sub_001561D0
// Address: 0x1561d0 - 0x156270
void sub_001561D0_0x1561d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001561D0_0x1561d0");
#endif

    switch (ctx->pc) {
        case 0x1561fcu: goto label_1561fc;
        case 0x15620cu: goto label_15620c;
        case 0x156220u: goto label_156220;
        case 0x156230u: goto label_156230;
        case 0x156248u: goto label_156248;
        default: break;
    }

    ctx->pc = 0x1561d0u;

    // 0x1561d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1561d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1561d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1561d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1561d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1561d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1561dc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1561dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1561e0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1561e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1561e4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1561e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1561e8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1561E8u;
    {
        const bool branch_taken_0x1561e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1561e8) {
            ctx->pc = 0x156254u;
            goto label_156254;
        }
    }
    ctx->pc = 0x1561F0u;
    // 0x1561f0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1561f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1561f4: 0xc0558a4  jal         func_156290
    ctx->pc = 0x1561F4u;
    SET_GPR_U32(ctx, 31, 0x1561FCu);
    ctx->pc = 0x156290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156290u, 0x1561F4u, 0x1561FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1561FCu;
label_1561fc:
    // 0x1561fc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1561fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156200: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x156200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156204: 0xc0564e0  jal         func_159380
    ctx->pc = 0x156204u;
    SET_GPR_U32(ctx, 31, 0x15620Cu);
    ctx->pc = 0x159380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159380u, 0x156204u, 0x15620Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15620Cu;
label_15620c:
    // 0x15620c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15620cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156210: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x156210u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156214: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x156214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156218: 0xc055390  jal         func_154E40
    ctx->pc = 0x156218u;
    SET_GPR_U32(ctx, 31, 0x156220u);
    ctx->pc = 0x154E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154E40u, 0x156218u, 0x156220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156220u;
label_156220:
    // 0x156220: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x156220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x156224: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x156224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156228: 0xc0558a4  jal         func_156290
    ctx->pc = 0x156228u;
    SET_GPR_U32(ctx, 31, 0x156230u);
    ctx->pc = 0x156290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156290u, 0x156228u, 0x156230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156230u;
label_156230:
    // 0x156230: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x156230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x156234: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x156234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156238: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x156238u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15623c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15623cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156240: 0xc05589c  jal         func_156270
    ctx->pc = 0x156240u;
    SET_GPR_U32(ctx, 31, 0x156248u);
    ctx->pc = 0x156270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156270u, 0x156240u, 0x156248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156248u;
label_156248:
    // 0x156248: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x156248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x15624c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x15624cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156250: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x156250u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_156254:
    // 0x156254: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x156254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156258: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x156258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15625c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15625cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x156260: 0x3e00008  jr          $ra
    ctx->pc = 0x156260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156268u;
    // 0x156268: 0x0  nop
    ctx->pc = 0x156268u;
    // NOP
    // 0x15626c: 0x0  nop
    ctx->pc = 0x15626cu;
    // NOP
    ctx->pc = 0x156270u;
}
