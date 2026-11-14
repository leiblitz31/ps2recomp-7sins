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

// Function: sub_0039C290
// Address: 0x39c290 - 0x39c308
void sub_0039C290_0x39c290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C290_0x39c290");
#endif

    switch (ctx->pc) {
        case 0x39c290u: goto label_39c290;
        case 0x39c294u: goto label_39c294;
        case 0x39c298u: goto label_39c298;
        case 0x39c29cu: goto label_39c29c;
        case 0x39c2a0u: goto label_39c2a0;
        case 0x39c2a4u: goto label_39c2a4;
        case 0x39c2a8u: goto label_39c2a8;
        case 0x39c2acu: goto label_39c2ac;
        case 0x39c2b0u: goto label_39c2b0;
        case 0x39c2b4u: goto label_39c2b4;
        case 0x39c2b8u: goto label_39c2b8;
        case 0x39c2bcu: goto label_39c2bc;
        case 0x39c2c0u: goto label_39c2c0;
        case 0x39c2c4u: goto label_39c2c4;
        case 0x39c2c8u: goto label_39c2c8;
        case 0x39c2ccu: goto label_39c2cc;
        case 0x39c2d0u: goto label_39c2d0;
        case 0x39c2d4u: goto label_39c2d4;
        case 0x39c2d8u: goto label_39c2d8;
        case 0x39c2dcu: goto label_39c2dc;
        case 0x39c2e0u: goto label_39c2e0;
        case 0x39c2e4u: goto label_39c2e4;
        case 0x39c2e8u: goto label_39c2e8;
        case 0x39c2ecu: goto label_39c2ec;
        case 0x39c2f0u: goto label_39c2f0;
        case 0x39c2f4u: goto label_39c2f4;
        case 0x39c2f8u: goto label_39c2f8;
        case 0x39c2fcu: goto label_39c2fc;
        case 0x39c300u: goto label_39c300;
        case 0x39c304u: goto label_39c304;
        default: break;
    }

    ctx->pc = 0x39c290u;

label_39c290:
    // 0x39c290: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x39c290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_39c294:
    // 0x39c294: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x39c294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_39c298:
    // 0x39c298: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x39c298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_39c29c:
    // 0x39c29c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39c29cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39c2a0:
    // 0x39c2a0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x39c2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_39c2a4:
    // 0x39c2a4: 0x26320064  addiu       $s2, $s1, 0x64
    ctx->pc = 0x39c2a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_39c2a8:
    // 0x39c2a8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x39c2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_39c2ac:
    // 0x39c2ac: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x39c2acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39c2b0:
    // 0x39c2b0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x39c2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_39c2b4:
    // 0x39c2b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39c2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39c2b8:
    // 0x39c2b8: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x39c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_39c2bc:
    // 0x39c2bc: 0x10520009  beq         $v0, $s2, . + 4 + (0x9 << 2)
label_39c2c0:
    if (ctx->pc == 0x39C2C0u) {
        ctx->pc = 0x39C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C2BCu;
        // 0x39c2c0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C2C4u;
        goto label_39c2c4;
    }
    ctx->pc = 0x39C2BCu;
    {
        const bool branch_taken_0x39c2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x39C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C2BCu;
        // 0x39c2c0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c2bc) {
            ctx->pc = 0x39C2E4u;
            goto label_39c2e4;
        }
    }
    ctx->pc = 0x39C2C4u;
label_39c2c4:
    // 0x39c2c4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x39c2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_39c2c8:
    // 0x39c2c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x39c2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39c2cc:
    // 0x39c2cc: 0x280f809  jalr        $s4
label_39c2d0:
    if (ctx->pc == 0x39C2D0u) {
        ctx->pc = 0x39C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C2CCu;
        // 0x39c2d0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C2D4u;
        goto label_39c2d4;
    }
    ctx->pc = 0x39C2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x39C2D4u);
        ctx->pc = 0x39C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C2CCu;
        // 0x39c2d0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C2CCu, 0x39C2D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C2D4u;
label_39c2d4:
    // 0x39c2d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_39c2d8:
    if (ctx->pc == 0x39C2D8u) {
        ctx->pc = 0x39C2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C2D4u;
        // 0x39c2d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C2DCu;
        goto label_39c2dc;
    }
    ctx->pc = 0x39C2D4u;
    {
        const bool branch_taken_0x39c2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C2D4u;
        // 0x39c2d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c2d4) {
            ctx->pc = 0x39C2E4u;
            goto label_39c2e4;
        }
    }
    ctx->pc = 0x39C2DCu;
label_39c2dc:
    // 0x39c2dc: 0x5452fffa  bnel        $v0, $s2, . + 4 + (-0x6 << 2)
label_39c2e0:
    if (ctx->pc == 0x39C2E0u) {
        ctx->pc = 0x39C2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C2DCu;
        // 0x39c2e0: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C2E4u;
        goto label_39c2e4;
    }
    ctx->pc = 0x39C2DCu;
    {
        const bool branch_taken_0x39c2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x39c2dc) {
            ctx->pc = 0x39C2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39C2DCu;
            // 0x39c2e0: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39C2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39c2c8;
        }
    }
    ctx->pc = 0x39C2E4u;
label_39c2e4:
    // 0x39c2e4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x39c2e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39c2e8:
    // 0x39c2e8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x39c2e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39c2ec:
    // 0x39c2ec: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x39c2ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39c2f0:
    // 0x39c2f0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x39c2f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39c2f4:
    // 0x39c2f4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x39c2f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39c2f8:
    // 0x39c2f8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x39c2f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39c2fc:
    // 0x39c2fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39c2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39c300:
    // 0x39c300: 0x3e00008  jr          $ra
label_39c304:
    if (ctx->pc == 0x39C304u) {
        ctx->pc = 0x39C304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C300u;
        // 0x39c304: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C308u;
        goto label_fallthrough_0x39c300;
    }
    ctx->pc = 0x39C300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C300u;
        // 0x39c304: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39c300:
    ctx->pc = 0x39C308u;
}
