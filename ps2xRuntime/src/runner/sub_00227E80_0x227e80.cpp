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

// Function: sub_00227E80
// Address: 0x227e80 - 0x227f00
void sub_00227E80_0x227e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227E80_0x227e80");
#endif

    switch (ctx->pc) {
        case 0x227eb4u: goto label_227eb4;
        case 0x227ec4u: goto label_227ec4;
        case 0x227ee4u: goto label_227ee4;
        default: break;
    }

    ctx->pc = 0x227e80u;

    // 0x227e80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x227e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x227e84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227e88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x227e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x227e8c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x227e8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x227e90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x227e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227e94: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x227E94u;
    {
        const bool branch_taken_0x227e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227e94) {
            ctx->pc = 0x227EE4u;
            goto label_227ee4;
        }
    }
    ctx->pc = 0x227E9Cu;
    // 0x227e9c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x227e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227ea0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x227ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227ea4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x227ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x227ea8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x227ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x227eac: 0xc089fe8  jal         func_227FA0
    ctx->pc = 0x227EACu;
    SET_GPR_U32(ctx, 31, 0x227EB4u);
    ctx->pc = 0x227FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227FA0u, 0x227EACu, 0x227EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227EB4u;
label_227eb4:
    // 0x227eb4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x227eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227eb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x227eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227ebc: 0xc089fc0  jal         func_227F00
    ctx->pc = 0x227EBCu;
    SET_GPR_U32(ctx, 31, 0x227EC4u);
    ctx->pc = 0x227F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F00u, 0x227EBCu, 0x227EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227EC4u;
label_227ec4:
    // 0x227ec4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x227ec4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227ec8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x227ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x227ecc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x227eccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x227ed0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x227ED0u;
    {
        const bool branch_taken_0x227ed0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x227ed0) {
            ctx->pc = 0x227EE4u;
            goto label_227ee4;
        }
    }
    ctx->pc = 0x227ED8u;
    // 0x227ed8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x227ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227edc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x227EDCu;
    SET_GPR_U32(ctx, 31, 0x227EE4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x227EDCu, 0x227EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227EE4u;
label_227ee4:
    // 0x227ee4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x227ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227ee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227eec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x227eecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x227ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x227EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227EF8u;
    // 0x227ef8: 0x0  nop
    ctx->pc = 0x227ef8u;
    // NOP
    // 0x227efc: 0x0  nop
    ctx->pc = 0x227efcu;
    // NOP
    ctx->pc = 0x227f00u;
}
