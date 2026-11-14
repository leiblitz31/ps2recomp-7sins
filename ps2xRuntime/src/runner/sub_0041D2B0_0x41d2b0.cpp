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

// Function: sub_0041D2B0
// Address: 0x41d2b0 - 0x41d338
void sub_0041D2B0_0x41d2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D2B0_0x41d2b0");
#endif

    switch (ctx->pc) {
        case 0x41d2b0u: goto label_41d2b0;
        case 0x41d2b4u: goto label_41d2b4;
        case 0x41d2b8u: goto label_41d2b8;
        case 0x41d2bcu: goto label_41d2bc;
        case 0x41d2c0u: goto label_41d2c0;
        case 0x41d2c4u: goto label_41d2c4;
        case 0x41d2c8u: goto label_41d2c8;
        case 0x41d2ccu: goto label_41d2cc;
        case 0x41d2d0u: goto label_41d2d0;
        case 0x41d2d4u: goto label_41d2d4;
        case 0x41d2d8u: goto label_41d2d8;
        case 0x41d2dcu: goto label_41d2dc;
        case 0x41d2e0u: goto label_41d2e0;
        case 0x41d2e4u: goto label_41d2e4;
        case 0x41d2e8u: goto label_41d2e8;
        case 0x41d2ecu: goto label_41d2ec;
        case 0x41d2f0u: goto label_41d2f0;
        case 0x41d2f4u: goto label_41d2f4;
        case 0x41d2f8u: goto label_41d2f8;
        case 0x41d2fcu: goto label_41d2fc;
        case 0x41d300u: goto label_41d300;
        case 0x41d304u: goto label_41d304;
        case 0x41d308u: goto label_41d308;
        case 0x41d30cu: goto label_41d30c;
        case 0x41d310u: goto label_41d310;
        case 0x41d314u: goto label_41d314;
        case 0x41d318u: goto label_41d318;
        case 0x41d31cu: goto label_41d31c;
        case 0x41d320u: goto label_41d320;
        case 0x41d324u: goto label_41d324;
        case 0x41d328u: goto label_41d328;
        case 0x41d32cu: goto label_41d32c;
        case 0x41d330u: goto label_41d330;
        case 0x41d334u: goto label_41d334;
        default: break;
    }

    ctx->pc = 0x41d2b0u;

label_41d2b0:
    // 0x41d2b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41d2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_41d2b4:
    // 0x41d2b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41d2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41d2b8:
    // 0x41d2b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41d2b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41d2bc:
    // 0x41d2bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x41d2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_41d2c0:
    // 0x41d2c0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x41d2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_41d2c4:
    // 0x41d2c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41d2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41d2c8:
    // 0x41d2c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41d2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41d2cc:
    // 0x41d2cc: 0xc104ca6  jal         func_413298
label_41d2d0:
    if (ctx->pc == 0x41D2D0u) {
        ctx->pc = 0x41D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D2CCu;
        // 0x41d2d0: 0x2484c9f8  addiu       $a0, $a0, -0x3608 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D2D4u;
        goto label_41d2d4;
    }
    ctx->pc = 0x41D2CCu;
    SET_GPR_U32(ctx, 31, 0x41D2D4u);
    ctx->pc = 0x41D2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D2CCu;
    // 0x41d2d0: 0x2484c9f8  addiu       $a0, $a0, -0x3608 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x41D2CCu, 0x41D2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D2D4u;
label_41d2d4:
    // 0x41d2d4: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x41d2d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_41d2d8:
    // 0x41d2d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41d2d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41d2dc:
    // 0x41d2dc: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x41d2dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_41d2e0:
    // 0x41d2e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41d2e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41d2e4:
    // 0x41d2e4: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x41d2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_41d2e8:
    // 0x41d2e8: 0x40f809  jalr        $v0
label_41d2ec:
    if (ctx->pc == 0x41D2ECu) {
        ctx->pc = 0x41D2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D2E8u;
        // 0x41d2ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D2F0u;
        goto label_41d2f0;
    }
    ctx->pc = 0x41D2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41D2F0u);
        ctx->pc = 0x41D2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D2E8u;
        // 0x41d2ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D2E8u, 0x41D2F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41D2F0u;
label_41d2f0:
    // 0x41d2f0: 0x8f83be10  lw          $v1, -0x41F0($gp)
    ctx->pc = 0x41d2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950416)));
label_41d2f4:
    // 0x41d2f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41d2f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41d2f8:
    // 0x41d2f8: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x41d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_41d2fc:
    // 0x41d2fc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x41d2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_41d300:
    // 0x41d300: 0x40f809  jalr        $v0
label_41d304:
    if (ctx->pc == 0x41D304u) {
        ctx->pc = 0x41D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D300u;
        // 0x41d304: 0x8c640060  lw          $a0, 0x60($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D308u;
        goto label_41d308;
    }
    ctx->pc = 0x41D300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41D308u);
        ctx->pc = 0x41D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D300u;
        // 0x41d304: 0x8c640060  lw          $a0, 0x60($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D300u, 0x41D308u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41D308u;
label_41d308:
    // 0x41d308: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41d308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41d30c:
    // 0x41d30c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41d310:
    // 0x41d310: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41d310u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41d314:
    // 0x41d314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41d314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41d318:
    // 0x41d318: 0x3e00008  jr          $ra
label_41d31c:
    if (ctx->pc == 0x41D31Cu) {
        ctx->pc = 0x41D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D318u;
        // 0x41d31c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D320u;
        goto label_41d320;
    }
    ctx->pc = 0x41D318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D318u;
        // 0x41d31c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D320u;
label_41d320:
    // 0x41d320: 0x9487001c  lhu         $a3, 0x1C($a0)
    ctx->pc = 0x41d320u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
label_41d324:
    // 0x41d324: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x41d324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41d328:
    // 0x41d328: 0xa4a70000  sh          $a3, 0x0($a1)
    ctx->pc = 0x41d328u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 7));
label_41d32c:
    // 0x41d32c: 0x9483001e  lhu         $v1, 0x1E($a0)
    ctx->pc = 0x41d32cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
label_41d330:
    // 0x41d330: 0x3e00008  jr          $ra
label_41d334:
    if (ctx->pc == 0x41D334u) {
        ctx->pc = 0x41D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D330u;
        // 0x41d334: 0xa4c30000  sh          $v1, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D338u;
        goto label_fallthrough_0x41d330;
    }
    ctx->pc = 0x41D330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D330u;
        // 0x41d334: 0xa4c30000  sh          $v1, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x41d330:
    ctx->pc = 0x41D338u;
}
