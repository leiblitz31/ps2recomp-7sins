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

// Function: sub_00377EB8
// Address: 0x377eb8 - 0x377f10
void sub_00377EB8_0x377eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377EB8_0x377eb8");
#endif

    switch (ctx->pc) {
        case 0x377eb8u: goto label_377eb8;
        case 0x377ebcu: goto label_377ebc;
        case 0x377ec0u: goto label_377ec0;
        case 0x377ec4u: goto label_377ec4;
        case 0x377ec8u: goto label_377ec8;
        case 0x377eccu: goto label_377ecc;
        case 0x377ed0u: goto label_377ed0;
        case 0x377ed4u: goto label_377ed4;
        case 0x377ed8u: goto label_377ed8;
        case 0x377edcu: goto label_377edc;
        case 0x377ee0u: goto label_377ee0;
        case 0x377ee4u: goto label_377ee4;
        case 0x377ee8u: goto label_377ee8;
        case 0x377eecu: goto label_377eec;
        case 0x377ef0u: goto label_377ef0;
        case 0x377ef4u: goto label_377ef4;
        case 0x377ef8u: goto label_377ef8;
        case 0x377efcu: goto label_377efc;
        case 0x377f00u: goto label_377f00;
        case 0x377f04u: goto label_377f04;
        case 0x377f08u: goto label_377f08;
        case 0x377f0cu: goto label_377f0c;
        default: break;
    }

    ctx->pc = 0x377eb8u;

label_377eb8:
    // 0x377eb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x377eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_377ebc:
    // 0x377ebc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x377ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_377ec0:
    // 0x377ec0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x377ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_377ec4:
    // 0x377ec4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x377ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_377ec8:
    // 0x377ec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_377ecc:
    // 0x377ecc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x377eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_377ed0:
    // 0x377ed0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_377ed4:
    if (ctx->pc == 0x377ED4u) {
        ctx->pc = 0x377ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377ED0u;
        // 0x377ed4: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377ED8u;
        goto label_377ed8;
    }
    ctx->pc = 0x377ED0u;
    {
        const bool branch_taken_0x377ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x377ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377ED0u;
        // 0x377ed4: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377ed0) {
            ctx->pc = 0x377EFCu;
            goto label_377efc;
        }
    }
    ctx->pc = 0x377ED8u;
label_377ed8:
    // 0x377ed8: 0x2451e880  addiu       $s1, $v0, -0x1780
    ctx->pc = 0x377ed8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_377edc:
    // 0x377edc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x377edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_377ee0:
    // 0x377ee0: 0x8e23010c  lw          $v1, 0x10C($s1)
    ctx->pc = 0x377ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_377ee4:
    // 0x377ee4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x377ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_377ee8:
    // 0x377ee8: 0x60f809  jalr        $v1
label_377eec:
    if (ctx->pc == 0x377EECu) {
        ctx->pc = 0x377EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377EE8u;
        // 0x377eec: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377EF0u;
        goto label_377ef0;
    }
    ctx->pc = 0x377EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x377EF0u);
        ctx->pc = 0x377EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377EE8u;
        // 0x377eec: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377EE8u, 0x377EF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x377EF0u;
label_377ef0:
    // 0x377ef0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x377ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_377ef4:
    // 0x377ef4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_377ef8:
    if (ctx->pc == 0x377EF8u) {
        ctx->pc = 0x377EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377EF4u;
        // 0x377ef8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377EFCu;
        goto label_377efc;
    }
    ctx->pc = 0x377EF4u;
    {
        const bool branch_taken_0x377ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x377ef4) {
            ctx->pc = 0x377EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x377EF4u;
            // 0x377ef8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x377EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377ee0;
        }
    }
    ctx->pc = 0x377EFCu;
label_377efc:
    // 0x377efc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x377efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_377f00:
    // 0x377f00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x377f00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_377f04:
    // 0x377f04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x377f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_377f08:
    // 0x377f08: 0x3e00008  jr          $ra
label_377f0c:
    if (ctx->pc == 0x377F0Cu) {
        ctx->pc = 0x377F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377F08u;
        // 0x377f0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377F10u;
        goto label_fallthrough_0x377f08;
    }
    ctx->pc = 0x377F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377F08u;
        // 0x377f0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x377f08:
    ctx->pc = 0x377F10u;
}
