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

// Function: sub_00103800
// Address: 0x103800 - 0x103840
void sub_00103800_0x103800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103800_0x103800");
#endif

    switch (ctx->pc) {
        case 0x103800u: goto label_103800;
        case 0x103804u: goto label_103804;
        case 0x103808u: goto label_103808;
        case 0x10380cu: goto label_10380c;
        case 0x103810u: goto label_103810;
        case 0x103814u: goto label_103814;
        case 0x103818u: goto label_103818;
        case 0x10381cu: goto label_10381c;
        case 0x103820u: goto label_103820;
        case 0x103824u: goto label_103824;
        case 0x103828u: goto label_103828;
        case 0x10382cu: goto label_10382c;
        case 0x103830u: goto label_103830;
        case 0x103834u: goto label_103834;
        case 0x103838u: goto label_103838;
        case 0x10383cu: goto label_10383c;
        default: break;
    }

    ctx->pc = 0x103800u;

label_103800:
    // 0x103800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x103800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_103804:
    // 0x103804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x103804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_103808:
    // 0x103808: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x103808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_10380c:
    // 0x10380c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10380cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_103810:
    // 0x103810: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x103810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_103814:
    // 0x103814: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x103814u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_103818:
    // 0x103818: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x103818u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_10381c:
    // 0x10381c: 0x320f809  jalr        $t9
label_103820:
    if (ctx->pc == 0x103820u) {
        ctx->pc = 0x103824u;
        goto label_103824;
    }
    ctx->pc = 0x10381Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103824u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10381Cu, 0x103824u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103824u;
label_103824:
    // 0x103824: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x103824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_103828:
    // 0x103828: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x103828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_10382c:
    // 0x10382c: 0x3e00008  jr          $ra
label_103830:
    if (ctx->pc == 0x103830u) {
        ctx->pc = 0x103834u;
        goto label_103834;
    }
    ctx->pc = 0x10382Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10382Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103834u;
label_103834:
    // 0x103834: 0x0  nop
    ctx->pc = 0x103834u;
    // NOP
label_103838:
    // 0x103838: 0x0  nop
    ctx->pc = 0x103838u;
    // NOP
label_10383c:
    // 0x10383c: 0x0  nop
    ctx->pc = 0x10383cu;
    // NOP
    ctx->pc = 0x103840u;
}
