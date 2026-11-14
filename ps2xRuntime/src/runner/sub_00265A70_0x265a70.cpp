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

// Function: sub_00265A70
// Address: 0x265a70 - 0x265af0
void sub_00265A70_0x265a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265A70_0x265a70");
#endif

    switch (ctx->pc) {
        case 0x265aa4u: goto label_265aa4;
        case 0x265ab4u: goto label_265ab4;
        case 0x265ad4u: goto label_265ad4;
        default: break;
    }

    ctx->pc = 0x265a70u;

    // 0x265a70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x265a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x265a74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x265a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x265a78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x265a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x265a7c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x265a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x265a80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x265a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265a84: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x265A84u;
    {
        const bool branch_taken_0x265a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265a84) {
            ctx->pc = 0x265AD4u;
            goto label_265ad4;
        }
    }
    ctx->pc = 0x265A8Cu;
    // 0x265a8c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x265a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265a90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x265a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265a94: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x265a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x265a98: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x265a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x265a9c: 0xc0996e4  jal         func_265B90
    ctx->pc = 0x265A9Cu;
    SET_GPR_U32(ctx, 31, 0x265AA4u);
    ctx->pc = 0x265B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265B90u, 0x265A9Cu, 0x265AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265AA4u;
label_265aa4:
    // 0x265aa4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x265aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265aa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x265aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265aac: 0xc0996bc  jal         func_265AF0
    ctx->pc = 0x265AACu;
    SET_GPR_U32(ctx, 31, 0x265AB4u);
    ctx->pc = 0x265AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265AF0u, 0x265AACu, 0x265AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265AB4u;
label_265ab4:
    // 0x265ab4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x265ab4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265ab8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x265ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x265abc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x265abcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x265ac0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x265AC0u;
    {
        const bool branch_taken_0x265ac0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x265ac0) {
            ctx->pc = 0x265AD4u;
            goto label_265ad4;
        }
    }
    ctx->pc = 0x265AC8u;
    // 0x265ac8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x265ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265acc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x265ACCu;
    SET_GPR_U32(ctx, 31, 0x265AD4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x265ACCu, 0x265AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265AD4u;
label_265ad4:
    // 0x265ad4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x265ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265ad8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x265ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265adc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x265adcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x265ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x265AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265AE8u;
    // 0x265ae8: 0x0  nop
    ctx->pc = 0x265ae8u;
    // NOP
    // 0x265aec: 0x0  nop
    ctx->pc = 0x265aecu;
    // NOP
    ctx->pc = 0x265af0u;
}
