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

// Function: sub_002E5F30
// Address: 0x2e5f30 - 0x2e5fd0
void sub_002E5F30_0x2e5f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5F30_0x2e5f30");
#endif

    switch (ctx->pc) {
        case 0x2e5f30u: goto label_2e5f30;
        case 0x2e5f34u: goto label_2e5f34;
        case 0x2e5f38u: goto label_2e5f38;
        case 0x2e5f3cu: goto label_2e5f3c;
        case 0x2e5f40u: goto label_2e5f40;
        case 0x2e5f44u: goto label_2e5f44;
        case 0x2e5f48u: goto label_2e5f48;
        case 0x2e5f4cu: goto label_2e5f4c;
        case 0x2e5f50u: goto label_2e5f50;
        case 0x2e5f54u: goto label_2e5f54;
        case 0x2e5f58u: goto label_2e5f58;
        case 0x2e5f5cu: goto label_2e5f5c;
        case 0x2e5f60u: goto label_2e5f60;
        case 0x2e5f64u: goto label_2e5f64;
        case 0x2e5f68u: goto label_2e5f68;
        case 0x2e5f6cu: goto label_2e5f6c;
        case 0x2e5f70u: goto label_2e5f70;
        case 0x2e5f74u: goto label_2e5f74;
        case 0x2e5f78u: goto label_2e5f78;
        case 0x2e5f7cu: goto label_2e5f7c;
        case 0x2e5f80u: goto label_2e5f80;
        case 0x2e5f84u: goto label_2e5f84;
        case 0x2e5f88u: goto label_2e5f88;
        case 0x2e5f8cu: goto label_2e5f8c;
        case 0x2e5f90u: goto label_2e5f90;
        case 0x2e5f94u: goto label_2e5f94;
        case 0x2e5f98u: goto label_2e5f98;
        case 0x2e5f9cu: goto label_2e5f9c;
        case 0x2e5fa0u: goto label_2e5fa0;
        case 0x2e5fa4u: goto label_2e5fa4;
        case 0x2e5fa8u: goto label_2e5fa8;
        case 0x2e5facu: goto label_2e5fac;
        case 0x2e5fb0u: goto label_2e5fb0;
        case 0x2e5fb4u: goto label_2e5fb4;
        case 0x2e5fb8u: goto label_2e5fb8;
        case 0x2e5fbcu: goto label_2e5fbc;
        case 0x2e5fc0u: goto label_2e5fc0;
        case 0x2e5fc4u: goto label_2e5fc4;
        case 0x2e5fc8u: goto label_2e5fc8;
        case 0x2e5fccu: goto label_2e5fcc;
        default: break;
    }

    ctx->pc = 0x2e5f30u;

label_2e5f30:
    // 0x2e5f30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e5f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2e5f34:
    // 0x2e5f34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e5f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2e5f38:
    // 0x2e5f38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e5f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e5f3c:
    // 0x2e5f3c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2e5f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_2e5f40:
    // 0x2e5f40: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e5f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2e5f44:
    // 0x2e5f44: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2e5f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2e5f48:
    // 0x2e5f48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e5f48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e5f4c:
    // 0x2e5f4c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2e5f4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2e5f50:
    // 0x2e5f50: 0x320f809  jalr        $t9
label_2e5f54:
    if (ctx->pc == 0x2E5F54u) {
        ctx->pc = 0x2E5F58u;
        goto label_2e5f58;
    }
    ctx->pc = 0x2E5F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E5F58u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5F50u, 0x2E5F58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E5F58u;
label_2e5f58:
    // 0x2e5f58: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2e5f58u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e5f5c:
    // 0x2e5f5c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e5f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2e5f60:
    // 0x2e5f60: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x2e5f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2e5f64:
    // 0x2e5f64: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2e5f68:
    if (ctx->pc == 0x2E5F68u) {
        ctx->pc = 0x2E5F6Cu;
        goto label_2e5f6c;
    }
    ctx->pc = 0x2E5F64u;
    {
        const bool branch_taken_0x2e5f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5f64) {
            ctx->pc = 0x2E5F94u;
            goto label_2e5f94;
        }
    }
    ctx->pc = 0x2E5F6Cu;
label_2e5f6c:
    // 0x2e5f6c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e5f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2e5f70:
    // 0x2e5f70: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2e5f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2e5f74:
    // 0x2e5f74: 0xc0b97f4  jal         func_2E5FD0
label_2e5f78:
    if (ctx->pc == 0x2E5F78u) {
        ctx->pc = 0x2E5F7Cu;
        goto label_2e5f7c;
    }
    ctx->pc = 0x2E5F74u;
    SET_GPR_U32(ctx, 31, 0x2E5F7Cu);
    ctx->pc = 0x2E5FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5FD0u, 0x2E5F74u, 0x2E5F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5F7Cu;
label_2e5f7c:
    // 0x2e5f7c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e5f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2e5f80:
    // 0x2e5f80: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2e5f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2e5f84:
    // 0x2e5f84: 0xc119c5c  jal         func_467170
label_2e5f88:
    if (ctx->pc == 0x2E5F88u) {
        ctx->pc = 0x2E5F8Cu;
        goto label_2e5f8c;
    }
    ctx->pc = 0x2E5F84u;
    SET_GPR_U32(ctx, 31, 0x2E5F8Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2E5F84u, 0x2E5F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5F8Cu;
label_2e5f8c:
    // 0x2e5f8c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e5f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2e5f90:
    // 0x2e5f90: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x2e5f90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_2e5f94:
    // 0x2e5f94: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e5f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2e5f98:
    // 0x2e5f98: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2e5f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2e5f9c:
    // 0x2e5f9c: 0xc053cd4  jal         func_14F350
label_2e5fa0:
    if (ctx->pc == 0x2E5FA0u) {
        ctx->pc = 0x2E5FA4u;
        goto label_2e5fa4;
    }
    ctx->pc = 0x2E5F9Cu;
    SET_GPR_U32(ctx, 31, 0x2E5FA4u);
    ctx->pc = 0x14F350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F350u, 0x2E5F9Cu, 0x2E5FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5FA4u;
label_2e5fa4:
    // 0x2e5fa4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e5fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2e5fa8:
    // 0x2e5fa8: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2e5fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2e5fac:
    // 0x2e5fac: 0xc053cd4  jal         func_14F350
label_2e5fb0:
    if (ctx->pc == 0x2E5FB0u) {
        ctx->pc = 0x2E5FB4u;
        goto label_2e5fb4;
    }
    ctx->pc = 0x2E5FACu;
    SET_GPR_U32(ctx, 31, 0x2E5FB4u);
    ctx->pc = 0x14F350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F350u, 0x2E5FACu, 0x2E5FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5FB4u;
label_2e5fb4:
    // 0x2e5fb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e5fb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5fb8:
    // 0x2e5fb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e5fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e5fbc:
    // 0x2e5fbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e5fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e5fc0:
    // 0x2e5fc0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e5fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2e5fc4:
    // 0x2e5fc4: 0x3e00008  jr          $ra
label_2e5fc8:
    if (ctx->pc == 0x2E5FC8u) {
        ctx->pc = 0x2E5FCCu;
        goto label_2e5fcc;
    }
    ctx->pc = 0x2E5FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5FCCu;
label_2e5fcc:
    // 0x2e5fcc: 0x0  nop
    ctx->pc = 0x2e5fccu;
    // NOP
    ctx->pc = 0x2e5fd0u;
}
