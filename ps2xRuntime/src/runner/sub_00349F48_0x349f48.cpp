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

// Function: sub_00349F48
// Address: 0x349f48 - 0x349fd8
void sub_00349F48_0x349f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349F48_0x349f48");
#endif

    switch (ctx->pc) {
        case 0x349f8cu: goto label_349f8c;
        case 0x349facu: goto label_349fac;
        case 0x349fc0u: goto label_349fc0;
        default: break;
    }

    ctx->pc = 0x349f48u;

    // 0x349f48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x349f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x349f4c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x349f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x349f50: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x349f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x349f54: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x349f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349f58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x349f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x349f5c: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x349f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x349f60: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x349f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x349f64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x349F64u;
    {
        const bool branch_taken_0x349f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x349F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349F64u;
        // 0x349f68: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349f64) {
            ctx->pc = 0x349F74u;
            goto label_349f74;
        }
    }
    ctx->pc = 0x349F6Cu;
    // 0x349f6c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x349F6Cu;
    {
        const bool branch_taken_0x349f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349F6Cu;
        // 0x349f70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349f6c) {
            ctx->pc = 0x349FC4u;
            goto label_349fc4;
        }
    }
    ctx->pc = 0x349F74u;
label_349f74:
    // 0x349f74: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x349f74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x349f78: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x349f78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349f7c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x349f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x349f80: 0x24a59fd8  addiu       $a1, $a1, -0x6028
    ctx->pc = 0x349f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942680));
    // 0x349f84: 0xc0d26a8  jal         func_349AA0
    ctx->pc = 0x349F84u;
    SET_GPR_U32(ctx, 31, 0x349F8Cu);
    ctx->pc = 0x349F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349F84u;
    // 0x349f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349AA0u, 0x349F84u, 0x349F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349F8Cu;
label_349f8c:
    // 0x349f8c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x349f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349f90: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x349f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x349f94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x349f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349f98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x349f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349f9c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x349f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x349fa0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x349fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x349fa4: 0xc103440  jal         func_40D100
    ctx->pc = 0x349FA4u;
    SET_GPR_U32(ctx, 31, 0x349FACu);
    ctx->pc = 0x349FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349FA4u;
    // 0x349fa8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x349FA4u, 0x349FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349FACu;
label_349fac:
    // 0x349fac: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x349facu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x349fb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x349fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349fb4: 0x24a53120  addiu       $a1, $a1, 0x3120
    ctx->pc = 0x349fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12576));
    // 0x349fb8: 0xc0d26a8  jal         func_349AA0
    ctx->pc = 0x349FB8u;
    SET_GPR_U32(ctx, 31, 0x349FC0u);
    ctx->pc = 0x349FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349FB8u;
    // 0x349fbc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349AA0u, 0x349FB8u, 0x349FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349FC0u;
label_349fc0:
    // 0x349fc0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x349fc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_349fc4:
    // 0x349fc4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x349fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x349fc8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x349fc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x349fcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x349fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x349FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349FD0u;
        // 0x349fd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349FD8u;
}
