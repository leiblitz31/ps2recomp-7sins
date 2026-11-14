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

// Function: sub_0010B220
// Address: 0x10b220 - 0x10b330
void sub_0010B220_0x10b220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B220_0x10b220");
#endif

    switch (ctx->pc) {
        case 0x10b250u: goto label_10b250;
        case 0x10b25cu: goto label_10b25c;
        case 0x10b268u: goto label_10b268;
        case 0x10b280u: goto label_10b280;
        case 0x10b298u: goto label_10b298;
        case 0x10b2b4u: goto label_10b2b4;
        case 0x10b2dcu: goto label_10b2dc;
        case 0x10b2f4u: goto label_10b2f4;
        default: break;
    }

    ctx->pc = 0x10b220u;

    // 0x10b220: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10b220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10b224: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10b224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10b228: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10b228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10b22c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10b22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10b230: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10b230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10b234: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x10b234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x10b238: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x10b238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x10b23c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x10b23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b240: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x10b240u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10b244: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x10b244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b248: 0xc042a08  jal         func_10A820
    ctx->pc = 0x10B248u;
    SET_GPR_U32(ctx, 31, 0x10B250u);
    ctx->pc = 0x10A820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A820u, 0x10B248u, 0x10B250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B250u;
label_10b250:
    // 0x10b250: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x10b250u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10b254: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x10B254u;
    {
        const bool branch_taken_0x10b254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b254) {
            ctx->pc = 0x10B2B8u;
            goto label_10b2b8;
        }
    }
    ctx->pc = 0x10B25Cu;
label_10b25c:
    // 0x10b25c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b260: 0xc042ce8  jal         func_10B3A0
    ctx->pc = 0x10B260u;
    SET_GPR_U32(ctx, 31, 0x10B268u);
    ctx->pc = 0x10B3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B3A0u, 0x10B260u, 0x10B268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B268u;
label_10b268:
    // 0x10b268: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x10b268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b26c: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x10b26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x10b270: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10b270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b274: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x10b274u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10b278: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x10B278u;
    SET_GPR_U32(ctx, 31, 0x10B280u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x10B278u, 0x10B280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B280u;
label_10b280:
    // 0x10b280: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10B280u;
    {
        const bool branch_taken_0x10b280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b280) {
            ctx->pc = 0x10B2A8u;
            goto label_10b2a8;
        }
    }
    ctx->pc = 0x10B288u;
    // 0x10b288: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x10b288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b28c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b290: 0xc042cd4  jal         func_10B350
    ctx->pc = 0x10B290u;
    SET_GPR_U32(ctx, 31, 0x10B298u);
    ctx->pc = 0x10B350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B350u, 0x10B290u, 0x10B298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B298u;
label_10b298:
    // 0x10b298: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x10b298u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10b29c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x10b29cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b2a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10B2A0u;
    {
        const bool branch_taken_0x10b2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b2a0) {
            ctx->pc = 0x10B2B8u;
            goto label_10b2b8;
        }
    }
    ctx->pc = 0x10B2A8u;
label_10b2a8:
    // 0x10b2a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b2ac: 0xc042ccc  jal         func_10B330
    ctx->pc = 0x10B2ACu;
    SET_GPR_U32(ctx, 31, 0x10B2B4u);
    ctx->pc = 0x10B330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B330u, 0x10B2ACu, 0x10B2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B2B4u;
label_10b2b4:
    // 0x10b2b4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x10b2b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10b2b8:
    // 0x10b2b8: 0x1600ffe8  bnez        $s0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x10B2B8u;
    {
        const bool branch_taken_0x10b2b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b2b8) {
            ctx->pc = 0x10B25Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10b25c;
        }
    }
    ctx->pc = 0x10B2C0u;
    // 0x10b2c0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x10b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b2c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10b2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10b2c8: 0x1222000c  beq         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10B2C8u;
    {
        const bool branch_taken_0x10b2c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x10b2c8) {
            ctx->pc = 0x10B2FCu;
            goto label_10b2fc;
        }
    }
    ctx->pc = 0x10B2D0u;
    // 0x10b2d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b2d4: 0xc042ce8  jal         func_10B3A0
    ctx->pc = 0x10B2D4u;
    SET_GPR_U32(ctx, 31, 0x10B2DCu);
    ctx->pc = 0x10B3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B3A0u, 0x10B2D4u, 0x10B2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B2DCu;
label_10b2dc:
    // 0x10b2dc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x10b2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b2e0: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x10b2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x10b2e4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x10b2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10b2e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10b2e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b2ec: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x10B2ECu;
    SET_GPR_U32(ctx, 31, 0x10B2F4u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x10B2ECu, 0x10B2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B2F4u;
label_10b2f4:
    // 0x10b2f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B2F4u;
    {
        const bool branch_taken_0x10b2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b2f4) {
            ctx->pc = 0x10B304u;
            goto label_10b304;
        }
    }
    ctx->pc = 0x10B2FCu;
label_10b2fc:
    // 0x10b2fc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x10b2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b300: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x10b300u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10b304:
    // 0x10b304: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10b304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b308: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10b308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b30c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10b30cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b310: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10b310u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b314: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10b314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b318: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x10b318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x10b31c: 0x3e00008  jr          $ra
    ctx->pc = 0x10B31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B324u;
    // 0x10b324: 0x0  nop
    ctx->pc = 0x10b324u;
    // NOP
    // 0x10b328: 0x0  nop
    ctx->pc = 0x10b328u;
    // NOP
    // 0x10b32c: 0x0  nop
    ctx->pc = 0x10b32cu;
    // NOP
    ctx->pc = 0x10b330u;
}
