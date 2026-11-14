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

// Function: sub_004B3A28
// Address: 0x4b3a28 - 0x4b3a98
void sub_004B3A28_0x4b3a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3A28_0x4b3a28");
#endif

    switch (ctx->pc) {
        case 0x4b3a44u: goto label_4b3a44;
        case 0x4b3a5cu: goto label_4b3a5c;
        case 0x4b3a7cu: goto label_4b3a7c;
        default: break;
    }

    ctx->pc = 0x4b3a28u;

    // 0x4b3a28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b3a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b3a2c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b3a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4b3a30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4b3a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4b3a34: 0x2450edd8  addiu       $s0, $v0, -0x1228
    ctx->pc = 0x4b3a34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962648));
    // 0x4b3a38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b3a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b3a3c: 0xc1275de  jal         func_49D778
    ctx->pc = 0x4B3A3Cu;
    SET_GPR_U32(ctx, 31, 0x4B3A44u);
    ctx->pc = 0x4B3A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3A3Cu;
    // 0x4b3a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49D778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49D778u, 0x4B3A3Cu, 0x4B3A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3A44u;
label_4b3a44:
    // 0x4b3a44: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4B3A44u;
    {
        const bool branch_taken_0x4b3a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3A44u;
        // 0x4b3a48: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3a44) {
            ctx->pc = 0x4B3A84u;
            goto label_4b3a84;
        }
    }
    ctx->pc = 0x4B3A4Cu;
    // 0x4b3a4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b3a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3a50: 0x24a52ed8  addiu       $a1, $a1, 0x2ED8
    ctx->pc = 0x4b3a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11992));
    // 0x4b3a54: 0xc1275ba  jal         func_49D6E8
    ctx->pc = 0x4B3A54u;
    SET_GPR_U32(ctx, 31, 0x4B3A5Cu);
    ctx->pc = 0x4B3A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3A54u;
    // 0x4b3a58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49D6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49D6E8u, 0x4B3A54u, 0x4B3A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3A5Cu;
label_4b3a5c:
    // 0x4b3a5c: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x4b3a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
    // 0x4b3a60: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x4b3a60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
    // 0x4b3a64: 0x24a57a80  addiu       $a1, $a1, 0x7A80
    ctx->pc = 0x4b3a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31360));
    // 0x4b3a68: 0x24e77b70  addiu       $a3, $a3, 0x7B70
    ctx->pc = 0x4b3a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31600));
    // 0x4b3a6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b3a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3a70: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x4b3a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4b3a74: 0xc12776a  jal         func_49DDA8
    ctx->pc = 0x4B3A74u;
    SET_GPR_U32(ctx, 31, 0x4B3A7Cu);
    ctx->pc = 0x4B3A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3A74u;
    // 0x4b3a78: 0x2408000d  addiu       $t0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49DDA8u, 0x4B3A74u, 0x4B3A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3A7Cu;
label_4b3a7c:
    // 0x4b3a7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B3A7Cu;
    {
        const bool branch_taken_0x4b3a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3A7Cu;
        // 0x4b3a80: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3a7c) {
            ctx->pc = 0x4B3A88u;
            goto label_4b3a88;
        }
    }
    ctx->pc = 0x4B3A84u;
label_4b3a84:
    // 0x4b3a84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4b3a84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b3a88:
    // 0x4b3a88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4b3a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b3a8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b3a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b3a90: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3A90u;
        // 0x4b3a94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3A98u;
}
