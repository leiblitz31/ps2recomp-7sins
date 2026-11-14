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

// Function: sub_00102280
// Address: 0x102280 - 0x1022c0
void sub_00102280_0x102280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102280_0x102280");
#endif

    switch (ctx->pc) {
        case 0x102280u: goto label_102280;
        case 0x102284u: goto label_102284;
        case 0x102288u: goto label_102288;
        case 0x10228cu: goto label_10228c;
        case 0x102290u: goto label_102290;
        case 0x102294u: goto label_102294;
        case 0x102298u: goto label_102298;
        case 0x10229cu: goto label_10229c;
        case 0x1022a0u: goto label_1022a0;
        case 0x1022a4u: goto label_1022a4;
        case 0x1022a8u: goto label_1022a8;
        case 0x1022acu: goto label_1022ac;
        case 0x1022b0u: goto label_1022b0;
        case 0x1022b4u: goto label_1022b4;
        case 0x1022b8u: goto label_1022b8;
        case 0x1022bcu: goto label_1022bc;
        default: break;
    }

    ctx->pc = 0x102280u;

label_102280:
    // 0x102280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x102280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_102284:
    // 0x102284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_102288:
    // 0x102288: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x102288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_10228c:
    // 0x10228c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10228cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_102290:
    // 0x102290: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x102290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_102294:
    // 0x102294: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x102294u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_102298:
    // 0x102298: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x102298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_10229c:
    // 0x10229c: 0x320f809  jalr        $t9
label_1022a0:
    if (ctx->pc == 0x1022A0u) {
        ctx->pc = 0x1022A4u;
        goto label_1022a4;
    }
    ctx->pc = 0x10229Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1022A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10229Cu, 0x1022A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1022A4u;
label_1022a4:
    // 0x1022a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1022a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1022a8:
    // 0x1022a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1022a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1022ac:
    // 0x1022ac: 0x3e00008  jr          $ra
label_1022b0:
    if (ctx->pc == 0x1022B0u) {
        ctx->pc = 0x1022B4u;
        goto label_1022b4;
    }
    ctx->pc = 0x1022ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1022ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1022B4u;
label_1022b4:
    // 0x1022b4: 0x0  nop
    ctx->pc = 0x1022b4u;
    // NOP
label_1022b8:
    // 0x1022b8: 0x0  nop
    ctx->pc = 0x1022b8u;
    // NOP
label_1022bc:
    // 0x1022bc: 0x0  nop
    ctx->pc = 0x1022bcu;
    // NOP
    ctx->pc = 0x1022c0u;
}
