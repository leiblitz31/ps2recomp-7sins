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

// Function: sub_00350F38
// Address: 0x350f38 - 0x350ff8
void sub_00350F38_0x350f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350F38_0x350f38");
#endif

    switch (ctx->pc) {
        case 0x350f38u: goto label_350f38;
        case 0x350f3cu: goto label_350f3c;
        case 0x350f40u: goto label_350f40;
        case 0x350f44u: goto label_350f44;
        case 0x350f48u: goto label_350f48;
        case 0x350f4cu: goto label_350f4c;
        case 0x350f50u: goto label_350f50;
        case 0x350f54u: goto label_350f54;
        case 0x350f58u: goto label_350f58;
        case 0x350f5cu: goto label_350f5c;
        case 0x350f60u: goto label_350f60;
        case 0x350f64u: goto label_350f64;
        case 0x350f68u: goto label_350f68;
        case 0x350f6cu: goto label_350f6c;
        case 0x350f70u: goto label_350f70;
        case 0x350f74u: goto label_350f74;
        case 0x350f78u: goto label_350f78;
        case 0x350f7cu: goto label_350f7c;
        case 0x350f80u: goto label_350f80;
        case 0x350f84u: goto label_350f84;
        case 0x350f88u: goto label_350f88;
        case 0x350f8cu: goto label_350f8c;
        case 0x350f90u: goto label_350f90;
        case 0x350f94u: goto label_350f94;
        case 0x350f98u: goto label_350f98;
        case 0x350f9cu: goto label_350f9c;
        case 0x350fa0u: goto label_350fa0;
        case 0x350fa4u: goto label_350fa4;
        case 0x350fa8u: goto label_350fa8;
        case 0x350facu: goto label_350fac;
        case 0x350fb0u: goto label_350fb0;
        case 0x350fb4u: goto label_350fb4;
        case 0x350fb8u: goto label_350fb8;
        case 0x350fbcu: goto label_350fbc;
        case 0x350fc0u: goto label_350fc0;
        case 0x350fc4u: goto label_350fc4;
        case 0x350fc8u: goto label_350fc8;
        case 0x350fccu: goto label_350fcc;
        case 0x350fd0u: goto label_350fd0;
        case 0x350fd4u: goto label_350fd4;
        case 0x350fd8u: goto label_350fd8;
        case 0x350fdcu: goto label_350fdc;
        case 0x350fe0u: goto label_350fe0;
        case 0x350fe4u: goto label_350fe4;
        case 0x350fe8u: goto label_350fe8;
        case 0x350fecu: goto label_350fec;
        case 0x350ff0u: goto label_350ff0;
        case 0x350ff4u: goto label_350ff4;
        default: break;
    }

    ctx->pc = 0x350f38u;

label_350f38:
    // 0x350f38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x350f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_350f3c:
    // 0x350f3c: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x350f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_350f40:
    // 0x350f40: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x350f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_350f44:
    // 0x350f44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x350f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_350f48:
    // 0x350f48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x350f48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_350f4c:
    // 0x350f4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x350f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_350f50:
    // 0x350f50: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x350f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_350f54:
    // 0x350f54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x350f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_350f58:
    // 0x350f58: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_350f5c:
    if (ctx->pc == 0x350F5Cu) {
        ctx->pc = 0x350F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350F58u;
        // 0x350f5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350F60u;
        goto label_350f60;
    }
    ctx->pc = 0x350F58u;
    {
        const bool branch_taken_0x350f58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x350F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350F58u;
        // 0x350f5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350f58) {
            ctx->pc = 0x350FDCu;
            goto label_350fdc;
        }
    }
    ctx->pc = 0x350F60u;
label_350f60:
    // 0x350f60: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x350f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_350f64:
    // 0x350f64: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x350f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_350f68:
    // 0x350f68: 0xc0e39e0  jal         func_38E780
label_350f6c:
    if (ctx->pc == 0x350F6Cu) {
        ctx->pc = 0x350F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350F68u;
        // 0x350f6c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350F70u;
        goto label_350f70;
    }
    ctx->pc = 0x350F68u;
    SET_GPR_U32(ctx, 31, 0x350F70u);
    ctx->pc = 0x350F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350F68u;
    // 0x350f6c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E780u, 0x350F68u, 0x350F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350F70u;
label_350f70:
    // 0x350f70: 0x8f83a858  lw          $v1, -0x57A8($gp)
    ctx->pc = 0x350f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_350f74:
    // 0x350f74: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x350f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_350f78:
    // 0x350f78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x350f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_350f7c:
    // 0x350f7c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x350f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_350f80:
    // 0x350f80: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_350f84:
    if (ctx->pc == 0x350F84u) {
        ctx->pc = 0x350F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350F80u;
        // 0x350f84: 0x3c110062  lui         $s1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350F88u;
        goto label_350f88;
    }
    ctx->pc = 0x350F80u;
    {
        const bool branch_taken_0x350f80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x350F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350F80u;
        // 0x350f84: 0x3c110062  lui         $s1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350f80) {
            ctx->pc = 0x350FB8u;
            goto label_350fb8;
        }
    }
    ctx->pc = 0x350F88u;
label_350f88:
    // 0x350f88: 0xc0d524a  jal         func_354928
label_350f8c:
    if (ctx->pc == 0x350F8Cu) {
        ctx->pc = 0x350F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350F88u;
        // 0x350f8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350F90u;
        goto label_350f90;
    }
    ctx->pc = 0x350F88u;
    SET_GPR_U32(ctx, 31, 0x350F90u);
    ctx->pc = 0x350F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350F88u;
    // 0x350f8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354928u, 0x350F88u, 0x350F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350F90u;
label_350f90:
    // 0x350f90: 0xc0d52f0  jal         func_354BC0
label_350f94:
    if (ctx->pc == 0x350F94u) {
        ctx->pc = 0x350F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350F90u;
        // 0x350f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350F98u;
        goto label_350f98;
    }
    ctx->pc = 0x350F90u;
    SET_GPR_U32(ctx, 31, 0x350F98u);
    ctx->pc = 0x350F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350F90u;
    // 0x350f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354BC0u, 0x350F90u, 0x350F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350F98u;
label_350f98:
    // 0x350f98: 0x8f83a858  lw          $v1, -0x57A8($gp)
    ctx->pc = 0x350f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_350f9c:
    // 0x350f9c: 0x2622e880  addiu       $v0, $s1, -0x1780
    ctx->pc = 0x350f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
label_350fa0:
    // 0x350fa0: 0x8c45010c  lw          $a1, 0x10C($v0)
    ctx->pc = 0x350fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_350fa4:
    // 0x350fa4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x350fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_350fa8:
    // 0x350fa8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x350fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_350fac:
    // 0x350fac: 0xa0f809  jalr        $a1
label_350fb0:
    if (ctx->pc == 0x350FB0u) {
        ctx->pc = 0x350FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350FACu;
        // 0x350fb0: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350FB4u;
        goto label_350fb4;
    }
    ctx->pc = 0x350FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x350FB4u);
        ctx->pc = 0x350FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350FACu;
        // 0x350fb0: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350FACu, 0x350FB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x350FB4u;
label_350fb4:
    // 0x350fb4: 0x0  nop
    ctx->pc = 0x350fb4u;
    // NOP
label_350fb8:
    // 0x350fb8: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x350fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_350fbc:
    // 0x350fbc: 0x2623e880  addiu       $v1, $s1, -0x1780
    ctx->pc = 0x350fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
label_350fc0:
    // 0x350fc0: 0x8c65010c  lw          $a1, 0x10C($v1)
    ctx->pc = 0x350fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_350fc4:
    // 0x350fc4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x350fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_350fc8:
    // 0x350fc8: 0xa0f809  jalr        $a1
label_350fcc:
    if (ctx->pc == 0x350FCCu) {
        ctx->pc = 0x350FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350FC8u;
        // 0x350fcc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350FD0u;
        goto label_350fd0;
    }
    ctx->pc = 0x350FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x350FD0u);
        ctx->pc = 0x350FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350FC8u;
        // 0x350fcc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350FC8u, 0x350FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x350FD0u;
label_350fd0:
    // 0x350fd0: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x350fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_350fd4:
    // 0x350fd4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x350fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_350fd8:
    // 0x350fd8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x350fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_350fdc:
    // 0x350fdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x350fdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_350fe0:
    // 0x350fe0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x350fe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_350fe4:
    // 0x350fe4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x350fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_350fe8:
    // 0x350fe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x350fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_350fec:
    // 0x350fec: 0x3e00008  jr          $ra
label_350ff0:
    if (ctx->pc == 0x350FF0u) {
        ctx->pc = 0x350FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350FECu;
        // 0x350ff0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x350FF4u;
        goto label_350ff4;
    }
    ctx->pc = 0x350FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350FECu;
        // 0x350ff0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350FF4u;
label_350ff4:
    // 0x350ff4: 0x0  nop
    ctx->pc = 0x350ff4u;
    // NOP
    ctx->pc = 0x350ff8u;
}
