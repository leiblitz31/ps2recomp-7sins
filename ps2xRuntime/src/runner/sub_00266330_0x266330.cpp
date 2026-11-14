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

// Function: sub_00266330
// Address: 0x266330 - 0x266370
void sub_00266330_0x266330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266330_0x266330");
#endif

    switch (ctx->pc) {
        case 0x266330u: goto label_266330;
        case 0x266334u: goto label_266334;
        case 0x266338u: goto label_266338;
        case 0x26633cu: goto label_26633c;
        case 0x266340u: goto label_266340;
        case 0x266344u: goto label_266344;
        case 0x266348u: goto label_266348;
        case 0x26634cu: goto label_26634c;
        case 0x266350u: goto label_266350;
        case 0x266354u: goto label_266354;
        case 0x266358u: goto label_266358;
        case 0x26635cu: goto label_26635c;
        case 0x266360u: goto label_266360;
        case 0x266364u: goto label_266364;
        case 0x266368u: goto label_266368;
        case 0x26636cu: goto label_26636c;
        default: break;
    }

    ctx->pc = 0x266330u;

label_266330:
    // 0x266330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x266330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_266334:
    // 0x266334: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x266334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_266338:
    // 0x266338: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x266338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_26633c:
    // 0x26633c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26633cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_266340:
    // 0x266340: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x266340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_266344:
    // 0x266344: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x266344u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_266348:
    // 0x266348: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x266348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_26634c:
    // 0x26634c: 0x320f809  jalr        $t9
label_266350:
    if (ctx->pc == 0x266350u) {
        ctx->pc = 0x266354u;
        goto label_266354;
    }
    ctx->pc = 0x26634Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x266354u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26634Cu, 0x266354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x266354u;
label_266354:
    // 0x266354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x266354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_266358:
    // 0x266358: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x266358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_26635c:
    // 0x26635c: 0x3e00008  jr          $ra
label_266360:
    if (ctx->pc == 0x266360u) {
        ctx->pc = 0x266364u;
        goto label_266364;
    }
    ctx->pc = 0x26635Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26635Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266364u;
label_266364:
    // 0x266364: 0x0  nop
    ctx->pc = 0x266364u;
    // NOP
label_266368:
    // 0x266368: 0x0  nop
    ctx->pc = 0x266368u;
    // NOP
label_26636c:
    // 0x26636c: 0x0  nop
    ctx->pc = 0x26636cu;
    // NOP
    ctx->pc = 0x266370u;
}
