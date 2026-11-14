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

// Function: sub_0027EDA0
// Address: 0x27eda0 - 0x27ee20
void sub_0027EDA0_0x27eda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027EDA0_0x27eda0");
#endif

    switch (ctx->pc) {
        case 0x27edd4u: goto label_27edd4;
        case 0x27ede4u: goto label_27ede4;
        case 0x27ee04u: goto label_27ee04;
        default: break;
    }

    ctx->pc = 0x27eda0u;

    // 0x27eda0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27eda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27eda4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27eda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27eda8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x27eda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27edac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x27edacu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x27edb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27edb4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x27EDB4u;
    {
        const bool branch_taken_0x27edb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27edb4) {
            ctx->pc = 0x27EE04u;
            goto label_27ee04;
        }
    }
    ctx->pc = 0x27EDBCu;
    // 0x27edbc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x27edbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27edc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27edc4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27edc8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x27edc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27edcc: 0xc09e15c  jal         func_278570
    ctx->pc = 0x27EDCCu;
    SET_GPR_U32(ctx, 31, 0x27EDD4u);
    ctx->pc = 0x278570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278570u, 0x27EDCCu, 0x27EDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EDD4u;
label_27edd4:
    // 0x27edd4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27edd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27edd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27edd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eddc: 0xc09fb88  jal         func_27EE20
    ctx->pc = 0x27EDDCu;
    SET_GPR_U32(ctx, 31, 0x27EDE4u);
    ctx->pc = 0x27EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EE20u, 0x27EDDCu, 0x27EDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EDE4u;
label_27ede4:
    // 0x27ede4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x27ede4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ede8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x27ede8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x27edec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x27edecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x27edf0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EDF0u;
    {
        const bool branch_taken_0x27edf0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x27edf0) {
            ctx->pc = 0x27EE04u;
            goto label_27ee04;
        }
    }
    ctx->pc = 0x27EDF8u;
    // 0x27edf8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27edf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27edfc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x27EDFCu;
    SET_GPR_U32(ctx, 31, 0x27EE04u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x27EDFCu, 0x27EE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EE04u;
label_27ee04:
    // 0x27ee04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27ee04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ee08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27ee08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ee0c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27ee0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27ee10: 0x3e00008  jr          $ra
    ctx->pc = 0x27EE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EE18u;
    // 0x27ee18: 0x0  nop
    ctx->pc = 0x27ee18u;
    // NOP
    // 0x27ee1c: 0x0  nop
    ctx->pc = 0x27ee1cu;
    // NOP
    ctx->pc = 0x27ee20u;
}
