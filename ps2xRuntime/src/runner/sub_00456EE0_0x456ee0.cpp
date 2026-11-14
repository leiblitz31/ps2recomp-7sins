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

// Function: sub_00456EE0
// Address: 0x456ee0 - 0x456ff0
void sub_00456EE0_0x456ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00456EE0_0x456ee0");
#endif

    switch (ctx->pc) {
        case 0x456ef4u: goto label_456ef4;
        case 0x456f14u: goto label_456f14;
        case 0x456f24u: goto label_456f24;
        case 0x456f3cu: goto label_456f3c;
        case 0x456f78u: goto label_456f78;
        case 0x456f94u: goto label_456f94;
        case 0x456fb0u: goto label_456fb0;
        case 0x456fc4u: goto label_456fc4;
        default: break;
    }

    ctx->pc = 0x456ee0u;

    // 0x456ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x456ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x456ee4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x456ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x456ee8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x456ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x456eec: 0xc1199dc  jal         func_466770
    ctx->pc = 0x456EECu;
    SET_GPR_U32(ctx, 31, 0x456EF4u);
    ctx->pc = 0x466770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466770u, 0x456EECu, 0x456EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456EF4u;
label_456ef4:
    // 0x456ef4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x456EF4u;
    {
        const bool branch_taken_0x456ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x456ef4) {
            ctx->pc = 0x456F08u;
            goto label_456f08;
        }
    }
    ctx->pc = 0x456EFCu;
    // 0x456efc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x456efcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456f00: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x456F00u;
    {
        const bool branch_taken_0x456f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x456f00) {
            ctx->pc = 0x456FD0u;
            goto label_456fd0;
        }
    }
    ctx->pc = 0x456F08u;
label_456f08:
    // 0x456f08: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x456f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x456f0c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x456F0Cu;
    SET_GPR_U32(ctx, 31, 0x456F14u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x456F0Cu, 0x456F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456F14u;
label_456f14:
    // 0x456f14: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x456f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x456f18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x456f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456f1c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x456F1Cu;
    SET_GPR_U32(ctx, 31, 0x456F24u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x456F1Cu, 0x456F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456F24u;
label_456f24:
    // 0x456f24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x456f24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456f28: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x456F28u;
    {
        const bool branch_taken_0x456f28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x456f28) {
            ctx->pc = 0x456F40u;
            goto label_456f40;
        }
    }
    ctx->pc = 0x456F30u;
    // 0x456f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x456f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456f34: 0xc115c50  jal         func_457140
    ctx->pc = 0x456F34u;
    SET_GPR_U32(ctx, 31, 0x456F3Cu);
    ctx->pc = 0x457140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457140u, 0x456F34u, 0x456F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456F3Cu;
label_456f3c:
    // 0x456f3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x456f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_456f40:
    // 0x456f40: 0xaf90bf38  sw          $s0, -0x40C8($gp)
    ctx->pc = 0x456f40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950712), GPR_U32(ctx, 16));
    // 0x456f44: 0x8f82bf38  lw          $v0, -0x40C8($gp)
    ctx->pc = 0x456f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
    // 0x456f48: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x456F48u;
    {
        const bool branch_taken_0x456f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x456f48) {
            ctx->pc = 0x456F5Cu;
            goto label_456f5c;
        }
    }
    ctx->pc = 0x456F50u;
    // 0x456f50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x456f50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456f54: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x456F54u;
    {
        const bool branch_taken_0x456f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x456f54) {
            ctx->pc = 0x456FD0u;
            goto label_456fd0;
        }
    }
    ctx->pc = 0x456F5Cu;
label_456f5c:
    // 0x456f5c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x456f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
    // 0x456f60: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x456f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x456f64: 0x2786b0b4  addiu       $a2, $gp, -0x4F4C
    ctx->pc = 0x456f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946996));
    // 0x456f68: 0x3c070045  lui         $a3, 0x45
    ctx->pc = 0x456f68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)69 << 16));
    // 0x456f6c: 0x24e77f00  addiu       $a3, $a3, 0x7F00
    ctx->pc = 0x456f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32512));
    // 0x456f70: 0xc115d70  jal         func_4575C0
    ctx->pc = 0x456F70u;
    SET_GPR_U32(ctx, 31, 0x456F78u);
    ctx->pc = 0x4575C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4575C0u, 0x456F70u, 0x456F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456F78u;
label_456f78:
    // 0x456f78: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x456f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
    // 0x456f7c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x456f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x456f80: 0x2786b0b8  addiu       $a2, $gp, -0x4F48
    ctx->pc = 0x456f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947000));
    // 0x456f84: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x456f84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x456f88: 0x24e78010  addiu       $a3, $a3, -0x7FF0
    ctx->pc = 0x456f88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294934544));
    // 0x456f8c: 0xc115d70  jal         func_4575C0
    ctx->pc = 0x456F8Cu;
    SET_GPR_U32(ctx, 31, 0x456F94u);
    ctx->pc = 0x4575C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4575C0u, 0x456F8Cu, 0x456F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456F94u;
label_456f94:
    // 0x456f94: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x456f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
    // 0x456f98: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x456f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x456f9c: 0x2786b0c0  addiu       $a2, $gp, -0x4F40
    ctx->pc = 0x456f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947008));
    // 0x456fa0: 0x3c070045  lui         $a3, 0x45
    ctx->pc = 0x456fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)69 << 16));
    // 0x456fa4: 0x24e77f00  addiu       $a3, $a3, 0x7F00
    ctx->pc = 0x456fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32512));
    // 0x456fa8: 0xc115d70  jal         func_4575C0
    ctx->pc = 0x456FA8u;
    SET_GPR_U32(ctx, 31, 0x456FB0u);
    ctx->pc = 0x4575C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4575C0u, 0x456FA8u, 0x456FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456FB0u;
label_456fb0:
    // 0x456fb0: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x456fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
    // 0x456fb4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x456fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x456fb8: 0x24a58010  addiu       $a1, $a1, -0x7FF0
    ctx->pc = 0x456fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934544));
    // 0x456fbc: 0xc115f30  jal         func_457CC0
    ctx->pc = 0x456FBCu;
    SET_GPR_U32(ctx, 31, 0x456FC4u);
    ctx->pc = 0x457CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457CC0u, 0x456FBCu, 0x456FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456FC4u;
label_456fc4:
    // 0x456fc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x456fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x456fc8: 0xaf82bf34  sw          $v0, -0x40CC($gp)
    ctx->pc = 0x456fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950708), GPR_U32(ctx, 2));
    // 0x456fcc: 0x8f82bf38  lw          $v0, -0x40C8($gp)
    ctx->pc = 0x456fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_456fd0:
    // 0x456fd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x456fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x456fd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x456fd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x456fd8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x456fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x456fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x456FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x456FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x456FE4u;
    // 0x456fe4: 0x0  nop
    ctx->pc = 0x456fe4u;
    // NOP
    // 0x456fe8: 0x0  nop
    ctx->pc = 0x456fe8u;
    // NOP
    // 0x456fec: 0x0  nop
    ctx->pc = 0x456fecu;
    // NOP
    ctx->pc = 0x456ff0u;
}
