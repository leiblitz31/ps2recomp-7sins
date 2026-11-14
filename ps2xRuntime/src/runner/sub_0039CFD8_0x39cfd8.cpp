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

// Function: sub_0039CFD8
// Address: 0x39cfd8 - 0x39d010
void sub_0039CFD8_0x39cfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CFD8_0x39cfd8");
#endif

    switch (ctx->pc) {
        case 0x39cfd8u: goto label_39cfd8;
        case 0x39cfdcu: goto label_39cfdc;
        case 0x39cfe0u: goto label_39cfe0;
        case 0x39cfe4u: goto label_39cfe4;
        case 0x39cfe8u: goto label_39cfe8;
        case 0x39cfecu: goto label_39cfec;
        case 0x39cff0u: goto label_39cff0;
        case 0x39cff4u: goto label_39cff4;
        case 0x39cff8u: goto label_39cff8;
        case 0x39cffcu: goto label_39cffc;
        case 0x39d000u: goto label_39d000;
        case 0x39d004u: goto label_39d004;
        case 0x39d008u: goto label_39d008;
        case 0x39d00cu: goto label_39d00c;
        default: break;
    }

    ctx->pc = 0x39cfd8u;

label_39cfd8:
    // 0x39cfd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39cfd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_39cfdc:
    // 0x39cfdc: 0x8f85a9e0  lw          $a1, -0x5620($gp)
    ctx->pc = 0x39cfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945248)));
label_39cfe0:
    // 0x39cfe0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x39cfe0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39cfe4:
    // 0x39cfe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39cfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39cfe8:
    // 0x39cfe8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x39cfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_39cfec:
    // 0x39cfec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x39cfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_39cff0:
    // 0x39cff0: 0xac40e884  sw          $zero, -0x177C($v0)
    ctx->pc = 0x39cff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961284), GPR_U32(ctx, 0));
label_39cff4:
    // 0x39cff4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x39cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_39cff8:
    // 0x39cff8: 0x40f809  jalr        $v0
label_39cffc:
    if (ctx->pc == 0x39CFFCu) {
        ctx->pc = 0x39D000u;
        goto label_39d000;
    }
    ctx->pc = 0x39CFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D000u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CFF8u, 0x39D000u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D000u;
label_39d000:
    // 0x39d000: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39d000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39d004:
    // 0x39d004: 0x3e00008  jr          $ra
label_39d008:
    if (ctx->pc == 0x39D008u) {
        ctx->pc = 0x39D008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D004u;
        // 0x39d008: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D00Cu;
        goto label_39d00c;
    }
    ctx->pc = 0x39D004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39D008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D004u;
        // 0x39d008: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39D00Cu;
label_39d00c:
    // 0x39d00c: 0x0  nop
    ctx->pc = 0x39d00cu;
    // NOP
    ctx->pc = 0x39d010u;
}
