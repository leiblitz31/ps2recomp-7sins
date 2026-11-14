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

// Function: sub_0018EBD0
// Address: 0x18ebd0 - 0x18ec20
void sub_0018EBD0_0x18ebd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018EBD0_0x18ebd0");
#endif

    switch (ctx->pc) {
        case 0x18ebd0u: goto label_18ebd0;
        case 0x18ebd4u: goto label_18ebd4;
        case 0x18ebd8u: goto label_18ebd8;
        case 0x18ebdcu: goto label_18ebdc;
        case 0x18ebe0u: goto label_18ebe0;
        case 0x18ebe4u: goto label_18ebe4;
        case 0x18ebe8u: goto label_18ebe8;
        case 0x18ebecu: goto label_18ebec;
        case 0x18ebf0u: goto label_18ebf0;
        case 0x18ebf4u: goto label_18ebf4;
        case 0x18ebf8u: goto label_18ebf8;
        case 0x18ebfcu: goto label_18ebfc;
        case 0x18ec00u: goto label_18ec00;
        case 0x18ec04u: goto label_18ec04;
        case 0x18ec08u: goto label_18ec08;
        case 0x18ec0cu: goto label_18ec0c;
        case 0x18ec10u: goto label_18ec10;
        case 0x18ec14u: goto label_18ec14;
        case 0x18ec18u: goto label_18ec18;
        case 0x18ec1cu: goto label_18ec1c;
        default: break;
    }

    ctx->pc = 0x18ebd0u;

label_18ebd0:
    // 0x18ebd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18ebd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_18ebd4:
    // 0x18ebd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18ebd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18ebd8:
    // 0x18ebd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18ebd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_18ebdc:
    // 0x18ebdc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18ebdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_18ebe0:
    // 0x18ebe0: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x18ebe0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
label_18ebe4:
    // 0x18ebe4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x18ebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_18ebe8:
    // 0x18ebe8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18ebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18ebec:
    // 0x18ebec: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x18ebecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
label_18ebf0:
    // 0x18ebf0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18ebf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18ebf4:
    // 0x18ebf4: 0x93a50030  lbu         $a1, 0x30($sp)
    ctx->pc = 0x18ebf4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_18ebf8:
    // 0x18ebf8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x18ebf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18ebfc:
    // 0x18ebfc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x18ebfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_18ec00:
    // 0x18ec00: 0x320f809  jalr        $t9
label_18ec04:
    if (ctx->pc == 0x18EC04u) {
        ctx->pc = 0x18EC08u;
        goto label_18ec08;
    }
    ctx->pc = 0x18EC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18EC08u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EC00u, 0x18EC08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18EC08u;
label_18ec08:
    // 0x18ec08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ec08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18ec0c:
    // 0x18ec0c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x18ec0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_18ec10:
    // 0x18ec10: 0x3e00008  jr          $ra
label_18ec14:
    if (ctx->pc == 0x18EC14u) {
        ctx->pc = 0x18EC18u;
        goto label_18ec18;
    }
    ctx->pc = 0x18EC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EC10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EC18u;
label_18ec18:
    // 0x18ec18: 0x0  nop
    ctx->pc = 0x18ec18u;
    // NOP
label_18ec1c:
    // 0x18ec1c: 0x0  nop
    ctx->pc = 0x18ec1cu;
    // NOP
    ctx->pc = 0x18ec20u;
}
