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

// Function: sub_004ABA80
// Address: 0x4aba80 - 0x4abad8
void sub_004ABA80_0x4aba80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ABA80_0x4aba80");
#endif

    switch (ctx->pc) {
        case 0x4aba98u: goto label_4aba98;
        default: break;
    }

    ctx->pc = 0x4aba80u;

    // 0x4aba80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4aba80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4aba84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4aba84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4aba88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4aba88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4aba8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4aba8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aba90: 0xc12ae54  jal         func_4AB950
    ctx->pc = 0x4ABA90u;
    SET_GPR_U32(ctx, 31, 0x4ABA98u);
    ctx->pc = 0x4ABA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ABA90u;
    // 0x4aba94: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB950u, 0x4ABA90u, 0x4ABA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ABA98u;
label_4aba98:
    // 0x4aba98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4aba98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aba9c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4ABA9Cu;
    {
        const bool branch_taken_0x4aba9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABA9Cu;
        // 0x4abaa0: 0x2602000c  addiu       $v0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aba9c) {
            ctx->pc = 0x4ABAC4u;
            goto label_4abac4;
        }
    }
    ctx->pc = 0x4ABAA4u;
    // 0x4abaa4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x4abaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4abaa8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x4abaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x4abaac: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4abaacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4abab0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x4abab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abab4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x4abab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4abab8: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x4abab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x4ababc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4ABABCu;
    {
        const bool branch_taken_0x4ababc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABABCu;
        // 0x4abac0: 0xae05000c  sw          $a1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ababc) {
            ctx->pc = 0x4ABAC8u;
            goto label_4abac8;
        }
    }
    ctx->pc = 0x4ABAC4u;
label_4abac4:
    // 0x4abac4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4abac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4abac8:
    // 0x4abac8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4abac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4abacc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4abaccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4abad0: 0x3e00008  jr          $ra
    ctx->pc = 0x4ABAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ABAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABAD0u;
        // 0x4abad4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ABAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ABAD8u;
}
