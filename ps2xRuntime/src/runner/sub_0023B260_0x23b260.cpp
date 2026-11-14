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

// Function: sub_0023B260
// Address: 0x23b260 - 0x23b320
void sub_0023B260_0x23b260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B260_0x23b260");
#endif

    switch (ctx->pc) {
        case 0x23b260u: goto label_23b260;
        case 0x23b264u: goto label_23b264;
        case 0x23b268u: goto label_23b268;
        case 0x23b26cu: goto label_23b26c;
        case 0x23b270u: goto label_23b270;
        case 0x23b274u: goto label_23b274;
        case 0x23b278u: goto label_23b278;
        case 0x23b27cu: goto label_23b27c;
        case 0x23b280u: goto label_23b280;
        case 0x23b284u: goto label_23b284;
        case 0x23b288u: goto label_23b288;
        case 0x23b28cu: goto label_23b28c;
        case 0x23b290u: goto label_23b290;
        case 0x23b294u: goto label_23b294;
        case 0x23b298u: goto label_23b298;
        case 0x23b29cu: goto label_23b29c;
        case 0x23b2a0u: goto label_23b2a0;
        case 0x23b2a4u: goto label_23b2a4;
        case 0x23b2a8u: goto label_23b2a8;
        case 0x23b2acu: goto label_23b2ac;
        case 0x23b2b0u: goto label_23b2b0;
        case 0x23b2b4u: goto label_23b2b4;
        case 0x23b2b8u: goto label_23b2b8;
        case 0x23b2bcu: goto label_23b2bc;
        case 0x23b2c0u: goto label_23b2c0;
        case 0x23b2c4u: goto label_23b2c4;
        case 0x23b2c8u: goto label_23b2c8;
        case 0x23b2ccu: goto label_23b2cc;
        case 0x23b2d0u: goto label_23b2d0;
        case 0x23b2d4u: goto label_23b2d4;
        case 0x23b2d8u: goto label_23b2d8;
        case 0x23b2dcu: goto label_23b2dc;
        case 0x23b2e0u: goto label_23b2e0;
        case 0x23b2e4u: goto label_23b2e4;
        case 0x23b2e8u: goto label_23b2e8;
        case 0x23b2ecu: goto label_23b2ec;
        case 0x23b2f0u: goto label_23b2f0;
        case 0x23b2f4u: goto label_23b2f4;
        case 0x23b2f8u: goto label_23b2f8;
        case 0x23b2fcu: goto label_23b2fc;
        case 0x23b300u: goto label_23b300;
        case 0x23b304u: goto label_23b304;
        case 0x23b308u: goto label_23b308;
        case 0x23b30cu: goto label_23b30c;
        case 0x23b310u: goto label_23b310;
        case 0x23b314u: goto label_23b314;
        case 0x23b318u: goto label_23b318;
        case 0x23b31cu: goto label_23b31c;
        default: break;
    }

    ctx->pc = 0x23b260u;

label_23b260:
    // 0x23b260: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23b260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_23b264:
    // 0x23b264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23b268:
    // 0x23b268: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23b268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_23b26c:
    // 0x23b26c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x23b26cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_23b270:
    // 0x23b270: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x23b270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_23b274:
    // 0x23b274: 0xc08ecc8  jal         func_23B320
label_23b278:
    if (ctx->pc == 0x23B278u) {
        ctx->pc = 0x23B27Cu;
        goto label_23b27c;
    }
    ctx->pc = 0x23B274u;
    SET_GPR_U32(ctx, 31, 0x23B27Cu);
    ctx->pc = 0x23B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B320u, 0x23B274u, 0x23B27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B27Cu;
label_23b27c:
    // 0x23b27c: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x23b27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_23b280:
    // 0x23b280: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23b280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_23b284:
    // 0x23b284: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23b284u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23b288:
    // 0x23b288: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x23b288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_23b28c:
    // 0x23b28c: 0x320f809  jalr        $t9
label_23b290:
    if (ctx->pc == 0x23B290u) {
        ctx->pc = 0x23B294u;
        goto label_23b294;
    }
    ctx->pc = 0x23B28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23B294u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B28Cu, 0x23B294u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23B294u;
label_23b294:
    // 0x23b294: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23b294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23b298:
    // 0x23b298: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
label_23b29c:
    if (ctx->pc == 0x23B29Cu) {
        ctx->pc = 0x23B2A0u;
        goto label_23b2a0;
    }
    ctx->pc = 0x23B298u;
    {
        const bool branch_taken_0x23b298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23b298) {
            ctx->pc = 0x23B2FCu;
            goto label_23b2fc;
        }
    }
    ctx->pc = 0x23B2A0u;
label_23b2a0:
    // 0x23b2a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23b2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_23b2a4:
    // 0x23b2a4: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x23b2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_23b2a8:
    // 0x23b2a8: 0xc0422a8  jal         func_108AA0
label_23b2ac:
    if (ctx->pc == 0x23B2ACu) {
        ctx->pc = 0x23B2B0u;
        goto label_23b2b0;
    }
    ctx->pc = 0x23B2A8u;
    SET_GPR_U32(ctx, 31, 0x23B2B0u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x23B2A8u, 0x23B2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B2B0u;
label_23b2b0:
    // 0x23b2b0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x23b2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23b2b4:
    // 0x23b2b4: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x23b2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_23b2b8:
    // 0x23b2b8: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
label_23b2bc:
    if (ctx->pc == 0x23B2BCu) {
        ctx->pc = 0x23B2C0u;
        goto label_23b2c0;
    }
    ctx->pc = 0x23B2B8u;
    {
        const bool branch_taken_0x23b2b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x23b2b8) {
            ctx->pc = 0x23B30Cu;
            goto label_23b30c;
        }
    }
    ctx->pc = 0x23B2C0u;
label_23b2c0:
    // 0x23b2c0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x23b2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_23b2c4:
    // 0x23b2c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23b2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23b2c8:
    // 0x23b2c8: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_23b2cc:
    if (ctx->pc == 0x23B2CCu) {
        ctx->pc = 0x23B2D0u;
        goto label_23b2d0;
    }
    ctx->pc = 0x23B2C8u;
    {
        const bool branch_taken_0x23b2c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x23b2c8) {
            ctx->pc = 0x23B2F4u;
            goto label_23b2f4;
        }
    }
    ctx->pc = 0x23B2D0u;
label_23b2d0:
    // 0x23b2d0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_23b2d4:
    if (ctx->pc == 0x23B2D4u) {
        ctx->pc = 0x23B2D8u;
        goto label_23b2d8;
    }
    ctx->pc = 0x23B2D0u;
    {
        const bool branch_taken_0x23b2d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b2d0) {
            ctx->pc = 0x23B2ECu;
            goto label_23b2ec;
        }
    }
    ctx->pc = 0x23B2D8u;
label_23b2d8:
    // 0x23b2d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23b2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23b2dc:
    // 0x23b2dc: 0x10830001  beq         $a0, $v1, . + 4 + (0x1 << 2)
label_23b2e0:
    if (ctx->pc == 0x23B2E0u) {
        ctx->pc = 0x23B2E4u;
        goto label_23b2e4;
    }
    ctx->pc = 0x23B2DCu;
    {
        const bool branch_taken_0x23b2dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x23b2dc) {
            ctx->pc = 0x23B2E4u;
            goto label_23b2e4;
        }
    }
    ctx->pc = 0x23B2E4u;
label_23b2e4:
    // 0x23b2e4: 0x10000009  b           . + 4 + (0x9 << 2)
label_23b2e8:
    if (ctx->pc == 0x23B2E8u) {
        ctx->pc = 0x23B2ECu;
        goto label_23b2ec;
    }
    ctx->pc = 0x23B2E4u;
    {
        const bool branch_taken_0x23b2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b2e4) {
            ctx->pc = 0x23B30Cu;
            goto label_23b30c;
        }
    }
    ctx->pc = 0x23B2ECu;
label_23b2ec:
    // 0x23b2ec: 0x10000007  b           . + 4 + (0x7 << 2)
label_23b2f0:
    if (ctx->pc == 0x23B2F0u) {
        ctx->pc = 0x23B2F4u;
        goto label_23b2f4;
    }
    ctx->pc = 0x23B2ECu;
    {
        const bool branch_taken_0x23b2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b2ec) {
            ctx->pc = 0x23B30Cu;
            goto label_23b30c;
        }
    }
    ctx->pc = 0x23B2F4u;
label_23b2f4:
    // 0x23b2f4: 0x10000005  b           . + 4 + (0x5 << 2)
label_23b2f8:
    if (ctx->pc == 0x23B2F8u) {
        ctx->pc = 0x23B2FCu;
        goto label_23b2fc;
    }
    ctx->pc = 0x23B2F4u;
    {
        const bool branch_taken_0x23b2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b2f4) {
            ctx->pc = 0x23B30Cu;
            goto label_23b30c;
        }
    }
    ctx->pc = 0x23B2FCu;
label_23b2fc:
    // 0x23b2fc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23b2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_23b300:
    // 0x23b300: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x23b300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_23b304:
    // 0x23b304: 0xc0422a8  jal         func_108AA0
label_23b308:
    if (ctx->pc == 0x23B308u) {
        ctx->pc = 0x23B30Cu;
        goto label_23b30c;
    }
    ctx->pc = 0x23B304u;
    SET_GPR_U32(ctx, 31, 0x23B30Cu);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x23B304u, 0x23B30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B30Cu;
label_23b30c:
    // 0x23b30c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b30cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b310:
    // 0x23b310: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x23b310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_23b314:
    // 0x23b314: 0x3e00008  jr          $ra
label_23b318:
    if (ctx->pc == 0x23B318u) {
        ctx->pc = 0x23B31Cu;
        goto label_23b31c;
    }
    ctx->pc = 0x23B314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B31Cu;
label_23b31c:
    // 0x23b31c: 0x0  nop
    ctx->pc = 0x23b31cu;
    // NOP
    ctx->pc = 0x23b320u;
}
