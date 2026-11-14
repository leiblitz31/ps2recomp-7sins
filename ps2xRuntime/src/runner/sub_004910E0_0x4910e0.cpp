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

// Function: sub_004910E0
// Address: 0x4910e0 - 0x491170
void sub_004910E0_0x4910e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004910E0_0x4910e0");
#endif

    switch (ctx->pc) {
        case 0x49111cu: goto label_49111c;
        case 0x49115cu: goto label_49115c;
        default: break;
    }

    ctx->pc = 0x4910e0u;

    // 0x4910e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4910e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4910e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4910e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4910e8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x4910e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x4910ec: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x4910ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x4910f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4910f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4910f4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4910f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4910f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4910f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4910fc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x4910fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x491100: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x491100u;
    {
        const bool branch_taken_0x491100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x491100) {
            ctx->pc = 0x491134u;
            goto label_491134;
        }
    }
    ctx->pc = 0x491108u;
    // 0x491108: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x491108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49110c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x49110cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x491110: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x491110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x491114: 0xc124538  jal         func_4914E0
    ctx->pc = 0x491114u;
    SET_GPR_U32(ctx, 31, 0x49111Cu);
    ctx->pc = 0x4914E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4914E0u, 0x491114u, 0x49111Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49111Cu;
label_49111c:
    // 0x49111c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x49111cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x491120: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x491120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x491124: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x491124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x491128: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x491128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x49112c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x49112Cu;
    {
        const bool branch_taken_0x49112c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49112c) {
            ctx->pc = 0x49115Cu;
            goto label_49115c;
        }
    }
    ctx->pc = 0x491134u;
label_491134:
    // 0x491134: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x491134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x491138: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x491138u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x49113c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x49113cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x491140: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x491140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x491144: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x491144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x491148: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x491148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x49114c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x49114cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x491150: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x491150u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x491154: 0xc12445c  jal         func_491170
    ctx->pc = 0x491154u;
    SET_GPR_U32(ctx, 31, 0x49115Cu);
    ctx->pc = 0x491170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491170u, 0x491154u, 0x49115Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49115Cu;
label_49115c:
    // 0x49115c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49115cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x491160: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x491160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x491164: 0x3e00008  jr          $ra
    ctx->pc = 0x491164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49116Cu;
    // 0x49116c: 0x0  nop
    ctx->pc = 0x49116cu;
    // NOP
    ctx->pc = 0x491170u;
}
