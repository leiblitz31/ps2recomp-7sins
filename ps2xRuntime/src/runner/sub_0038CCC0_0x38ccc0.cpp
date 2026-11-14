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

// Function: sub_0038CCC0
// Address: 0x38ccc0 - 0x38cd38
void sub_0038CCC0_0x38ccc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038CCC0_0x38ccc0");
#endif

    switch (ctx->pc) {
        case 0x38cce4u: goto label_38cce4;
        case 0x38cd0cu: goto label_38cd0c;
        case 0x38cd1cu: goto label_38cd1c;
        default: break;
    }

    ctx->pc = 0x38ccc0u;

    // 0x38ccc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38ccc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38ccc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x38ccc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ccc8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x38ccc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x38cccc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38ccccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ccd0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38ccd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x38ccd4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x38ccd4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x38ccd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38ccd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38ccdc: 0xc0e2dbc  jal         func_38B6F0
    ctx->pc = 0x38CCDCu;
    SET_GPR_U32(ctx, 31, 0x38CCE4u);
    ctx->pc = 0x38CCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CCDCu;
    // 0x38cce0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B6F0u, 0x38CCDCu, 0x38CCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CCE4u;
label_38cce4:
    // 0x38cce4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38cce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cce8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38CCE8u;
    {
        const bool branch_taken_0x38cce8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x38cce8) {
            ctx->pc = 0x38CD04u;
            goto label_38cd04;
        }
    }
    ctx->pc = 0x38CCF0u;
    // 0x38ccf0: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x38ccf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x38ccf4: 0xe4540010  swc1        $f20, 0x10($v0)
    ctx->pc = 0x38ccf4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x38ccf8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x38ccf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x38ccfc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x38ccfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x38cd00: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x38cd00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_38cd04:
    // 0x38cd04: 0xc0e2d08  jal         func_38B420
    ctx->pc = 0x38CD04u;
    SET_GPR_U32(ctx, 31, 0x38CD0Cu);
    ctx->pc = 0x38CD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CD04u;
    // 0x38cd08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B420u, 0x38CD04u, 0x38CD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CD0Cu;
label_38cd0c:
    // 0x38cd0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38CD0Cu;
    {
        const bool branch_taken_0x38cd0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38CD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CD0Cu;
        // 0x38cd10: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cd0c) {
            ctx->pc = 0x38CD20u;
            goto label_38cd20;
        }
    }
    ctx->pc = 0x38CD14u;
    // 0x38cd14: 0xc0e3414  jal         func_38D050
    ctx->pc = 0x38CD14u;
    SET_GPR_U32(ctx, 31, 0x38CD1Cu);
    ctx->pc = 0x38CD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CD14u;
    // 0x38cd18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x38CD14u, 0x38CD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CD1Cu;
label_38cd1c:
    // 0x38cd1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38cd1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38cd20:
    // 0x38cd20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38cd20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38cd24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38cd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38cd28: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x38cd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x38cd2c: 0x3e00008  jr          $ra
    ctx->pc = 0x38CD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CD2Cu;
        // 0x38cd30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CD2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38CD34u;
    // 0x38cd34: 0x0  nop
    ctx->pc = 0x38cd34u;
    // NOP
    ctx->pc = 0x38cd38u;
}
