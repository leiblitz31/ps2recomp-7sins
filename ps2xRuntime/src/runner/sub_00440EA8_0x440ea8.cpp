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

// Function: sub_00440EA8
// Address: 0x440ea8 - 0x440f08
void sub_00440EA8_0x440ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00440EA8_0x440ea8");
#endif

    switch (ctx->pc) {
        case 0x440ef4u: goto label_440ef4;
        default: break;
    }

    ctx->pc = 0x440ea8u;

    // 0x440ea8: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x440ea8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x440eac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x440eacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x440eb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x440eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x440eb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x440eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x440eb8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x440EB8u;
    {
        const bool branch_taken_0x440eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x440EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440EB8u;
        // 0x440ebc: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440eb8) {
            ctx->pc = 0x440ECCu;
            goto label_440ecc;
        }
    }
    ctx->pc = 0x440EC0u;
    // 0x440ec0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x440ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x440ec4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x440EC4u;
    {
        const bool branch_taken_0x440ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x440EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440EC4u;
        // 0x440ec8: 0x24441668  addiu       $a0, $v0, 0x1668 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440ec4) {
            ctx->pc = 0x440ED4u;
            goto label_440ed4;
        }
    }
    ctx->pc = 0x440ECCu;
label_440ecc:
    // 0x440ecc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x440eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x440ed0: 0x24441658  addiu       $a0, $v0, 0x1658
    ctx->pc = 0x440ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5720));
label_440ed4:
    // 0x440ed4: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x440ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x440ed8: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x440ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x440edc: 0x84180  sll         $t0, $t0, 6
    ctx->pc = 0x440edcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x440ee0: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x440ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x440ee4: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x440ee4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x440ee8: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x440ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x440eec: 0xc10faae  jal         func_43EAB8
    ctx->pc = 0x440EECu;
    SET_GPR_U32(ctx, 31, 0x440EF4u);
    ctx->pc = 0x440EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x440EECu;
    // 0x440ef0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43EAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43EAB8u, 0x440EECu, 0x440EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x440EF4u;
label_440ef4:
    // 0x440ef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x440ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x440ef8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x440ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x440efc: 0x3e00008  jr          $ra
    ctx->pc = 0x440EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x440F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440EFCu;
        // 0x440f00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x440EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x440F04u;
    // 0x440f04: 0x0  nop
    ctx->pc = 0x440f04u;
    // NOP
    ctx->pc = 0x440f08u;
}
