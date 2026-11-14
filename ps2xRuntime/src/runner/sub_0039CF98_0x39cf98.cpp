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

// Function: sub_0039CF98
// Address: 0x39cf98 - 0x39cfd8
void sub_0039CF98_0x39cf98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CF98_0x39cf98");
#endif

    switch (ctx->pc) {
        case 0x39cf98u: goto label_39cf98;
        case 0x39cf9cu: goto label_39cf9c;
        case 0x39cfa0u: goto label_39cfa0;
        case 0x39cfa4u: goto label_39cfa4;
        case 0x39cfa8u: goto label_39cfa8;
        case 0x39cfacu: goto label_39cfac;
        case 0x39cfb0u: goto label_39cfb0;
        case 0x39cfb4u: goto label_39cfb4;
        case 0x39cfb8u: goto label_39cfb8;
        case 0x39cfbcu: goto label_39cfbc;
        case 0x39cfc0u: goto label_39cfc0;
        case 0x39cfc4u: goto label_39cfc4;
        case 0x39cfc8u: goto label_39cfc8;
        case 0x39cfccu: goto label_39cfcc;
        case 0x39cfd0u: goto label_39cfd0;
        case 0x39cfd4u: goto label_39cfd4;
        default: break;
    }

    ctx->pc = 0x39cf98u;

label_39cf98:
    // 0x39cf98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39cf98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_39cf9c:
    // 0x39cf9c: 0x8f86a9e0  lw          $a2, -0x5620($gp)
    ctx->pc = 0x39cf9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945248)));
label_39cfa0:
    // 0x39cfa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39cfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39cfa4:
    // 0x39cfa4: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x39cfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_39cfa8:
    // 0x39cfa8: 0x24a5e880  addiu       $a1, $a1, -0x1780
    ctx->pc = 0x39cfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961280));
label_39cfac:
    // 0x39cfac: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x39cfacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_39cfb0:
    // 0x39cfb0: 0x94a30008  lhu         $v1, 0x8($a1)
    ctx->pc = 0x39cfb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
label_39cfb4:
    // 0x39cfb4: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x39cfb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_39cfb8:
    // 0x39cfb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39cfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_39cfbc:
    // 0x39cfbc: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x39cfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_39cfc0:
    // 0x39cfc0: 0xa4a30008  sh          $v1, 0x8($a1)
    ctx->pc = 0x39cfc0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 3));
label_39cfc4:
    // 0x39cfc4: 0x40f809  jalr        $v0
label_39cfc8:
    if (ctx->pc == 0x39CFC8u) {
        ctx->pc = 0x39CFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CFC4u;
        // 0x39cfc8: 0xaca70004  sw          $a3, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CFCCu;
        goto label_39cfcc;
    }
    ctx->pc = 0x39CFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39CFCCu);
        ctx->pc = 0x39CFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CFC4u;
        // 0x39cfc8: 0xaca70004  sw          $a3, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CFC4u, 0x39CFCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39CFCCu;
label_39cfcc:
    // 0x39cfcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39cfccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39cfd0:
    // 0x39cfd0: 0x3e00008  jr          $ra
label_39cfd4:
    if (ctx->pc == 0x39CFD4u) {
        ctx->pc = 0x39CFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CFD0u;
        // 0x39cfd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CFD8u;
        goto label_fallthrough_0x39cfd0;
    }
    ctx->pc = 0x39CFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CFD0u;
        // 0x39cfd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39cfd0:
    ctx->pc = 0x39CFD8u;
}
