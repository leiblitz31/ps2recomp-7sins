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

// Function: sub_00379B78
// Address: 0x379b78 - 0x379be8
void sub_00379B78_0x379b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379B78_0x379b78");
#endif

    switch (ctx->pc) {
        case 0x379bb4u: goto label_379bb4;
        case 0x379bbcu: goto label_379bbc;
        default: break;
    }

    ctx->pc = 0x379b78u;

    // 0x379b78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x379b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x379b7c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x379b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x379b80: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x379b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x379b84: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x379b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x379b88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x379b88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379b8c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x379b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x379b90: 0x2472ac48  addiu       $s2, $v1, -0x53B8
    ctx->pc = 0x379b90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945864));
    // 0x379b94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x379b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x379b98: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x379b98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5DAC50u));
    // 0x379b9c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x379b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x379ba0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x379ba0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x379ba4: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x379BA4u;
    {
        const bool branch_taken_0x379ba4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x379BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379BA4u;
        // 0x379ba8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379ba4) {
            ctx->pc = 0x379BCCu;
            goto label_379bcc;
        }
    }
    ctx->pc = 0x379BACu;
    // 0x379bac: 0xc0de906  jal         func_37A418
    ctx->pc = 0x379BACu;
    SET_GPR_U32(ctx, 31, 0x379BB4u);
    ctx->pc = 0x37A418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A418u, 0x379BACu, 0x379BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379BB4u;
label_379bb4:
    // 0x379bb4: 0xc0de62c  jal         func_3798B0
    ctx->pc = 0x379BB4u;
    SET_GPR_U32(ctx, 31, 0x379BBCu);
    ctx->pc = 0x379BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379BB4u;
    // 0x379bb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3798B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3798B0u, 0x379BB4u, 0x379BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379BBCu;
label_379bbc:
    // 0x379bbc: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x379bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x379bc0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x379bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x379bc4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x379bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x379bc8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x379bc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_379bcc:
    // 0x379bcc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x379bccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379bd0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x379bd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x379bd4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x379bd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379bd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x379bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x379BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379BDCu;
        // 0x379be0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379BE4u;
    // 0x379be4: 0x0  nop
    ctx->pc = 0x379be4u;
    // NOP
    ctx->pc = 0x379be8u;
}
