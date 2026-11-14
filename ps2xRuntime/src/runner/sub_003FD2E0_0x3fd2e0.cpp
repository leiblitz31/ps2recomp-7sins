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

// Function: sub_003FD2E0
// Address: 0x3fd2e0 - 0x3fd318
void sub_003FD2E0_0x3fd2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FD2E0_0x3fd2e0");
#endif

    switch (ctx->pc) {
        case 0x3fd2e0u: goto label_3fd2e0;
        case 0x3fd2e4u: goto label_3fd2e4;
        case 0x3fd2e8u: goto label_3fd2e8;
        case 0x3fd2ecu: goto label_3fd2ec;
        case 0x3fd2f0u: goto label_3fd2f0;
        case 0x3fd2f4u: goto label_3fd2f4;
        case 0x3fd2f8u: goto label_3fd2f8;
        case 0x3fd2fcu: goto label_3fd2fc;
        case 0x3fd300u: goto label_3fd300;
        case 0x3fd304u: goto label_3fd304;
        case 0x3fd308u: goto label_3fd308;
        case 0x3fd30cu: goto label_3fd30c;
        case 0x3fd310u: goto label_3fd310;
        case 0x3fd314u: goto label_3fd314;
        default: break;
    }

    ctx->pc = 0x3fd2e0u;

label_3fd2e0:
    // 0x3fd2e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3fd2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3fd2e4:
    // 0x3fd2e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3fd2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3fd2e8:
    // 0x3fd2e8: 0x8c8200dc  lw          $v0, 0xDC($a0)
    ctx->pc = 0x3fd2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_3fd2ec:
    // 0x3fd2ec: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3fd2f0:
    if (ctx->pc == 0x3FD2F0u) {
        ctx->pc = 0x3FD2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD2ECu;
        // 0x3fd2f0: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD2F4u;
        goto label_3fd2f4;
    }
    ctx->pc = 0x3FD2ECu;
    {
        const bool branch_taken_0x3fd2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fd2ec) {
            ctx->pc = 0x3FD2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FD2ECu;
            // 0x3fd2f0: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FD304u;
            goto label_3fd304;
        }
    }
    ctx->pc = 0x3FD2F4u;
label_3fd2f4:
    // 0x3fd2f4: 0x40f809  jalr        $v0
label_3fd2f8:
    if (ctx->pc == 0x3FD2F8u) {
        ctx->pc = 0x3FD2FCu;
        goto label_3fd2fc;
    }
    ctx->pc = 0x3FD2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FD2FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FD2F4u, 0x3FD2FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FD2FCu;
label_3fd2fc:
    // 0x3fd2fc: 0x10000004  b           . + 4 + (0x4 << 2)
label_3fd300:
    if (ctx->pc == 0x3FD300u) {
        ctx->pc = 0x3FD300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD2FCu;
        // 0x3fd300: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD304u;
        goto label_3fd304;
    }
    ctx->pc = 0x3FD2FCu;
    {
        const bool branch_taken_0x3fd2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD2FCu;
        // 0x3fd300: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd2fc) {
            ctx->pc = 0x3FD310u;
            goto label_3fd310;
        }
    }
    ctx->pc = 0x3FD304u;
label_3fd304:
    // 0x3fd304: 0xc0f86f2  jal         func_3E1BC8
label_3fd308:
    if (ctx->pc == 0x3FD308u) {
        ctx->pc = 0x3FD308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD304u;
        // 0x3fd308: 0x24a5f970  addiu       $a1, $a1, -0x690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD30Cu;
        goto label_3fd30c;
    }
    ctx->pc = 0x3FD304u;
    SET_GPR_U32(ctx, 31, 0x3FD30Cu);
    ctx->pc = 0x3FD308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD304u;
    // 0x3fd308: 0x24a5f970  addiu       $a1, $a1, -0x690 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3FD304u, 0x3FD30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD30Cu;
label_3fd30c:
    // 0x3fd30c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fd30cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3fd310:
    // 0x3fd310: 0x3e00008  jr          $ra
label_3fd314:
    if (ctx->pc == 0x3FD314u) {
        ctx->pc = 0x3FD314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD310u;
        // 0x3fd314: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD318u;
        goto label_fallthrough_0x3fd310;
    }
    ctx->pc = 0x3FD310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FD314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD310u;
        // 0x3fd314: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FD310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3fd310:
    ctx->pc = 0x3FD318u;
}
