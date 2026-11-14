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

// Function: sub_0013ADD0
// Address: 0x13add0 - 0x13aed0
void sub_0013ADD0_0x13add0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013ADD0_0x13add0");
#endif

    switch (ctx->pc) {
        case 0x13ae44u: goto label_13ae44;
        case 0x13ae64u: goto label_13ae64;
        case 0x13ae80u: goto label_13ae80;
        case 0x13aeacu: goto label_13aeac;
        default: break;
    }

    ctx->pc = 0x13add0u;

    // 0x13add0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13add0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13add4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13add4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13add8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13add8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13addc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13addcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x13ade0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ade4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13ADE4u;
    {
        const bool branch_taken_0x13ade4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ade4) {
            ctx->pc = 0x13ADF8u;
            goto label_13adf8;
        }
    }
    ctx->pc = 0x13ADECu;
    // 0x13adec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13adecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13adf0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x13ADF0u;
    {
        const bool branch_taken_0x13adf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13adf0) {
            ctx->pc = 0x13AEB8u;
            goto label_13aeb8;
        }
    }
    ctx->pc = 0x13ADF8u;
label_13adf8:
    // 0x13adf8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13adfc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13adfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13ae00: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13AE00u;
    {
        const bool branch_taken_0x13ae00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ae00) {
            ctx->pc = 0x13AE14u;
            goto label_13ae14;
        }
    }
    ctx->pc = 0x13AE08u;
    // 0x13ae08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13ae08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ae0c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x13AE0Cu;
    {
        const bool branch_taken_0x13ae0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ae0c) {
            ctx->pc = 0x13AEB8u;
            goto label_13aeb8;
        }
    }
    ctx->pc = 0x13AE14u;
label_13ae14:
    // 0x13ae14: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ae18: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13ae18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13ae1c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x13ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x13ae20: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x13ae20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13ae24: 0x8f82ba74  lw          $v0, -0x458C($gp)
    ctx->pc = 0x13ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x13ae28: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x13ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x13ae2c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x13AE2Cu;
    {
        const bool branch_taken_0x13ae2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ae2c) {
            ctx->pc = 0x13AE8Cu;
            goto label_13ae8c;
        }
    }
    ctx->pc = 0x13AE34u;
    // 0x13ae34: 0x8f82ba74  lw          $v0, -0x458C($gp)
    ctx->pc = 0x13ae34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x13ae38: 0x8c440064  lw          $a0, 0x64($v0)
    ctx->pc = 0x13ae38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x13ae3c: 0xc0ac170  jal         func_2B05C0
    ctx->pc = 0x13AE3Cu;
    SET_GPR_U32(ctx, 31, 0x13AE44u);
    ctx->pc = 0x2B05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B05C0u, 0x13AE3Cu, 0x13AE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AE44u;
label_13ae44:
    // 0x13ae44: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13AE44u;
    {
        const bool branch_taken_0x13ae44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ae44) {
            ctx->pc = 0x13AE6Cu;
            goto label_13ae6c;
        }
    }
    ctx->pc = 0x13AE4Cu;
    // 0x13ae4c: 0x8f82ba74  lw          $v0, -0x458C($gp)
    ctx->pc = 0x13ae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x13ae50: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x13ae50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x13ae54: 0x8c450064  lw          $a1, 0x64($v0)
    ctx->pc = 0x13ae54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x13ae58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13ae58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ae5c: 0xc08f71c  jal         func_23DC70
    ctx->pc = 0x13AE5Cu;
    SET_GPR_U32(ctx, 31, 0x13AE64u);
    ctx->pc = 0x23DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC70u, 0x13AE5Cu, 0x13AE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AE64u;
label_13ae64:
    // 0x13ae64: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13AE64u;
    {
        const bool branch_taken_0x13ae64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ae64) {
            ctx->pc = 0x13AE8Cu;
            goto label_13ae8c;
        }
    }
    ctx->pc = 0x13AE6Cu;
label_13ae6c:
    // 0x13ae6c: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x13ae6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x13ae70: 0x2484bda0  addiu       $a0, $a0, -0x4260
    ctx->pc = 0x13ae70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950304));
    // 0x13ae74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13ae74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ae78: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x13AE78u;
    SET_GPR_U32(ctx, 31, 0x13AE80u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x13AE78u, 0x13AE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AE80u;
label_13ae80:
    // 0x13ae80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ae84: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13AE84u;
    {
        const bool branch_taken_0x13ae84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ae84) {
            ctx->pc = 0x13AEB8u;
            goto label_13aeb8;
        }
    }
    ctx->pc = 0x13AE8Cu;
label_13ae8c:
    // 0x13ae8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13ae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13ae90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13ae90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13ae94: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x13ae94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x13ae98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13ae98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ae9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13ae9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aea0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13aea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13aea4: 0xc08f6a0  jal         func_23DA80
    ctx->pc = 0x13AEA4u;
    SET_GPR_U32(ctx, 31, 0x13AEACu);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x13AEA4u, 0x13AEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AEACu;
label_13aeac:
    // 0x13aeac: 0x8f83ba74  lw          $v1, -0x458C($gp)
    ctx->pc = 0x13aeacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x13aeb0: 0xac620064  sw          $v0, 0x64($v1)
    ctx->pc = 0x13aeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
    // 0x13aeb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13aeb8:
    // 0x13aeb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13aeb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13aebc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13aebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13aec0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13aec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13aec4: 0x3e00008  jr          $ra
    ctx->pc = 0x13AEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AECCu;
    // 0x13aecc: 0x0  nop
    ctx->pc = 0x13aeccu;
    // NOP
    ctx->pc = 0x13aed0u;
}
