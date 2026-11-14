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

// Function: sub_0049C040
// Address: 0x49c040 - 0x49c0a8
void sub_0049C040_0x49c040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049C040_0x49c040");
#endif

    switch (ctx->pc) {
        case 0x49c074u: goto label_49c074;
        case 0x49c090u: goto label_49c090;
        default: break;
    }

    ctx->pc = 0x49c040u;

    // 0x49c040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49c040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49c044: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x49c044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x49c048: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49c048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x49c04c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49c04cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c050: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49c050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49c054: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x49c054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c058: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x49c058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x49c05c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x49C05Cu;
    {
        const bool branch_taken_0x49c05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49C060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C05Cu;
        // 0x49c060: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c05c) {
            ctx->pc = 0x49C084u;
            goto label_49c084;
        }
    }
    ctx->pc = 0x49C064u;
    // 0x49c064: 0x53083  sra         $a2, $a1, 2
    ctx->pc = 0x49c064u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 2));
    // 0x49c068: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x49c068u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x49c06c: 0xc126a0c  jal         func_49A830
    ctx->pc = 0x49C06Cu;
    SET_GPR_U32(ctx, 31, 0x49C074u);
    ctx->pc = 0x49C070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49C06Cu;
    // 0x49c070: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A830u, 0x49C06Cu, 0x49C074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49C074u;
label_49c074:
    // 0x49c074: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49C074u;
    {
        const bool branch_taken_0x49c074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C074u;
        // 0x49c078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c074) {
            ctx->pc = 0x49C088u;
            goto label_49c088;
        }
    }
    ctx->pc = 0x49C07Cu;
    // 0x49c07c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x49C07Cu;
    {
        const bool branch_taken_0x49c07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C07Cu;
        // 0x49c080: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c07c) {
            ctx->pc = 0x49C090u;
            goto label_49c090;
        }
    }
    ctx->pc = 0x49C084u;
label_49c084:
    // 0x49c084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49c084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49c088:
    // 0x49c088: 0xc126a3e  jal         func_49A8F8
    ctx->pc = 0x49C088u;
    SET_GPR_U32(ctx, 31, 0x49C090u);
    ctx->pc = 0x49C08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49C088u;
    // 0x49c08c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A8F8u, 0x49C088u, 0x49C090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49C090u;
label_49c090:
    // 0x49c090: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x49c090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49c094: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49c094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49c098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49c098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49c09c: 0x3e00008  jr          $ra
    ctx->pc = 0x49C09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C09Cu;
        // 0x49c0a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49C0A4u;
    // 0x49c0a4: 0x0  nop
    ctx->pc = 0x49c0a4u;
    // NOP
    ctx->pc = 0x49c0a8u;
}
