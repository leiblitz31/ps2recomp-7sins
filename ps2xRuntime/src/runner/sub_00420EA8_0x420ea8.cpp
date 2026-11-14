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

// Function: sub_00420EA8
// Address: 0x420ea8 - 0x420f18
void sub_00420EA8_0x420ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420EA8_0x420ea8");
#endif

    switch (ctx->pc) {
        case 0x420f08u: goto label_420f08;
        default: break;
    }

    ctx->pc = 0x420ea8u;

    // 0x420ea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x420ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x420eac: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x420eacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420eb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x420eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x420eb4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x420eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x420eb8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x420EB8u;
    {
        const bool branch_taken_0x420eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x420eb8) {
            ctx->pc = 0x420ED8u;
            goto label_420ed8;
        }
    }
    ctx->pc = 0x420EC0u;
    // 0x420ec0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x420ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x420ec4: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x420ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x420ec8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x420ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x420ecc: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x420eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x420ed0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x420ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x420ed4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x420ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_420ed8:
    // 0x420ed8: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x420ED8u;
    {
        const bool branch_taken_0x420ed8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x420EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420ED8u;
        // 0x420edc: 0xacc50004  sw          $a1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420ed8) {
            ctx->pc = 0x420F08u;
            goto label_420f08;
        }
    }
    ctx->pc = 0x420EE0u;
    // 0x420ee0: 0x8ca40090  lw          $a0, 0x90($a1)
    ctx->pc = 0x420ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x420ee4: 0x24a20090  addiu       $v0, $a1, 0x90
    ctx->pc = 0x420ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
    // 0x420ee8: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x420ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x420eec: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x420eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x420ef0: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x420ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x420ef4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x420ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420ef8: 0x8ca20090  lw          $v0, 0x90($a1)
    ctx->pc = 0x420ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x420efc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x420efcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x420f00: 0xc106794  jal         func_419E50
    ctx->pc = 0x420F00u;
    SET_GPR_U32(ctx, 31, 0x420F08u);
    ctx->pc = 0x420F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420F00u;
    // 0x420f04: 0xaca30090  sw          $v1, 0x90($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x420F00u, 0x420F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420F08u;
label_420f08:
    // 0x420f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x420f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x420f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x420F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420F0Cu;
        // 0x420f10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420F14u;
    // 0x420f14: 0x0  nop
    ctx->pc = 0x420f14u;
    // NOP
    ctx->pc = 0x420f18u;
}
