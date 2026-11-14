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

// Function: sub_00311C78
// Address: 0x311c78 - 0x311ce0
void sub_00311C78_0x311c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311C78_0x311c78");
#endif

    switch (ctx->pc) {
        case 0x311c78u: goto label_311c78;
        case 0x311c7cu: goto label_311c7c;
        case 0x311c80u: goto label_311c80;
        case 0x311c84u: goto label_311c84;
        case 0x311c88u: goto label_311c88;
        case 0x311c8cu: goto label_311c8c;
        case 0x311c90u: goto label_311c90;
        case 0x311c94u: goto label_311c94;
        case 0x311c98u: goto label_311c98;
        case 0x311c9cu: goto label_311c9c;
        case 0x311ca0u: goto label_311ca0;
        case 0x311ca4u: goto label_311ca4;
        case 0x311ca8u: goto label_311ca8;
        case 0x311cacu: goto label_311cac;
        case 0x311cb0u: goto label_311cb0;
        case 0x311cb4u: goto label_311cb4;
        case 0x311cb8u: goto label_311cb8;
        case 0x311cbcu: goto label_311cbc;
        case 0x311cc0u: goto label_311cc0;
        case 0x311cc4u: goto label_311cc4;
        case 0x311cc8u: goto label_311cc8;
        case 0x311cccu: goto label_311ccc;
        case 0x311cd0u: goto label_311cd0;
        case 0x311cd4u: goto label_311cd4;
        case 0x311cd8u: goto label_311cd8;
        case 0x311cdcu: goto label_311cdc;
        default: break;
    }

    ctx->pc = 0x311c78u;

label_311c78:
    // 0x311c78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x311c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_311c7c:
    // 0x311c7c: 0x8f82a570  lw          $v0, -0x5A90($gp)
    ctx->pc = 0x311c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944112)));
label_311c80:
    // 0x311c80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x311c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_311c84:
    // 0x311c84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x311c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_311c88:
    // 0x311c88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x311c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_311c8c:
    // 0x311c8c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x311c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_311c90:
    // 0x311c90: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x311c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_311c94:
    // 0x311c94: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_311c98:
    if (ctx->pc == 0x311C98u) {
        ctx->pc = 0x311C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311C94u;
        // 0x311c98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311C9Cu;
        goto label_311c9c;
    }
    ctx->pc = 0x311C94u;
    {
        const bool branch_taken_0x311c94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x311C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311C94u;
        // 0x311c98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311c94) {
            ctx->pc = 0x311CCCu;
            goto label_311ccc;
        }
    }
    ctx->pc = 0x311C9Cu;
label_311c9c:
    // 0x311c9c: 0x8603000e  lh          $v1, 0xE($s0)
    ctx->pc = 0x311c9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_311ca0:
    // 0x311ca0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_311ca4:
    if (ctx->pc == 0x311CA4u) {
        ctx->pc = 0x311CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311CA0u;
        // 0x311ca4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311CA8u;
        goto label_311ca8;
    }
    ctx->pc = 0x311CA0u;
    {
        const bool branch_taken_0x311ca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x311CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311CA0u;
        // 0x311ca4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311ca0) {
            ctx->pc = 0x311CD0u;
            goto label_311cd0;
        }
    }
    ctx->pc = 0x311CA8u;
label_311ca8:
    // 0x311ca8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x311ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_311cac:
    // 0x311cac: 0x8c43e98c  lw          $v1, -0x1674($v0)
    ctx->pc = 0x311cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961548)));
label_311cb0:
    // 0x311cb0: 0x60f809  jalr        $v1
label_311cb4:
    if (ctx->pc == 0x311CB4u) {
        ctx->pc = 0x311CB8u;
        goto label_311cb8;
    }
    ctx->pc = 0x311CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x311CB8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311CB0u, 0x311CB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x311CB8u;
label_311cb8:
    // 0x311cb8: 0x8f82a570  lw          $v0, -0x5A90($gp)
    ctx->pc = 0x311cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944112)));
label_311cbc:
    // 0x311cbc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x311cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_311cc0:
    // 0x311cc0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x311cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_311cc4:
    // 0x311cc4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x311cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_311cc8:
    // 0x311cc8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x311cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_311ccc:
    // 0x311ccc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x311cccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_311cd0:
    // 0x311cd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x311cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_311cd4:
    // 0x311cd4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x311cd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_311cd8:
    // 0x311cd8: 0x3e00008  jr          $ra
label_311cdc:
    if (ctx->pc == 0x311CDCu) {
        ctx->pc = 0x311CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311CD8u;
        // 0x311cdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311CE0u;
        goto label_fallthrough_0x311cd8;
    }
    ctx->pc = 0x311CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311CD8u;
        // 0x311cdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x311cd8:
    ctx->pc = 0x311CE0u;
}
