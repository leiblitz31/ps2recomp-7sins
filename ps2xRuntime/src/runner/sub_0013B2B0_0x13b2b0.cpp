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

// Function: sub_0013B2B0
// Address: 0x13b2b0 - 0x13b3b0
void sub_0013B2B0_0x13b2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B2B0_0x13b2b0");
#endif

    switch (ctx->pc) {
        case 0x13b2e8u: goto label_13b2e8;
        case 0x13b2fcu: goto label_13b2fc;
        case 0x13b30cu: goto label_13b30c;
        case 0x13b330u: goto label_13b330;
        case 0x13b350u: goto label_13b350;
        case 0x13b368u: goto label_13b368;
        case 0x13b388u: goto label_13b388;
        default: break;
    }

    ctx->pc = 0x13b2b0u;

    // 0x13b2b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x13b2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x13b2b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x13b2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x13b2b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13b2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13b2bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13b2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13b2c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13b2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13b2c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13b2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13b2c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13b2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13b2cc: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x13b2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x13b2d0: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x13b2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x13b2d4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13b2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13b2d8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x13b2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13b2dc: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x13b2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13b2e0: 0xc04ed24  jal         func_13B490
    ctx->pc = 0x13B2E0u;
    SET_GPR_U32(ctx, 31, 0x13B2E8u);
    ctx->pc = 0x13B490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B490u, 0x13B2E0u, 0x13B2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B2E8u;
label_13b2e8:
    // 0x13b2e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13b2e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b2ec: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x13b2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x13b2f0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x13b2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13b2f4: 0xc04e44c  jal         func_139130
    ctx->pc = 0x13B2F4u;
    SET_GPR_U32(ctx, 31, 0x13B2FCu);
    ctx->pc = 0x139130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139130u, 0x13B2F4u, 0x13B2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B2FCu;
label_13b2fc:
    // 0x13b2fc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13b2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13b300: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x13b300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x13b304: 0xc04ed18  jal         func_13B460
    ctx->pc = 0x13B304u;
    SET_GPR_U32(ctx, 31, 0x13B30Cu);
    ctx->pc = 0x13B460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B460u, 0x13B304u, 0x13B30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B30Cu;
label_13b30c:
    // 0x13b30c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x13B30Cu;
    {
        const bool branch_taken_0x13b30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b30c) {
            ctx->pc = 0x13B35Cu;
            goto label_13b35c;
        }
    }
    ctx->pc = 0x13B314u;
    // 0x13b314: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x13b314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x13b318: 0x27b3008c  addiu       $s3, $sp, 0x8C
    ctx->pc = 0x13b318u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x13b31c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x13b31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13b320: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x13b320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13b324: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x13b324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b328: 0xc04ed04  jal         func_13B410
    ctx->pc = 0x13B328u;
    SET_GPR_U32(ctx, 31, 0x13B330u);
    ctx->pc = 0x13B410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B410u, 0x13B328u, 0x13B330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B330u;
label_13b330:
    // 0x13b330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13b330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b334: 0x28e3c  dsll32      $s1, $v0, 24
    ctx->pc = 0x13b334u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 24));
    // 0x13b338: 0x118e3f  dsra32      $s1, $s1, 24
    ctx->pc = 0x13b338u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
    // 0x13b33c: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x13b33cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13b340: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x13b340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13b344: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13b344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b348: 0xc04f2c8  jal         func_13CB20
    ctx->pc = 0x13B348u;
    SET_GPR_U32(ctx, 31, 0x13B350u);
    ctx->pc = 0x13CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CB20u, 0x13B348u, 0x13B350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B350u;
label_13b350:
    // 0x13b350: 0x2450000c  addiu       $s0, $v0, 0xC
    ctx->pc = 0x13b350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x13b354: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13B354u;
    {
        const bool branch_taken_0x13b354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b354) {
            ctx->pc = 0x13B36Cu;
            goto label_13b36c;
        }
    }
    ctx->pc = 0x13B35Cu;
label_13b35c:
    // 0x13b35c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13b35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13b360: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x13B360u;
    SET_GPR_U32(ctx, 31, 0x13B368u);
    ctx->pc = 0x139290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139290u, 0x13B360u, 0x13B368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B368u;
label_13b368:
    // 0x13b368: 0x2450000c  addiu       $s0, $v0, 0xC
    ctx->pc = 0x13b368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_13b36c:
    // 0x13b36c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x13b36cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b370: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13B370u;
    {
        const bool branch_taken_0x13b370 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b370) {
            ctx->pc = 0x13B388u;
            goto label_13b388;
        }
    }
    ctx->pc = 0x13B378u;
    // 0x13b378: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x13b378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13b37c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13b37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13b380: 0xc04ecec  jal         func_13B3B0
    ctx->pc = 0x13B380u;
    SET_GPR_U32(ctx, 31, 0x13B388u);
    ctx->pc = 0x13B3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B3B0u, 0x13B380u, 0x13B388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B388u;
label_13b388:
    // 0x13b388: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x13b388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b38c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x13b38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13b390: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13b390u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13b394: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13b394u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b398: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13b398u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b39c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13b39cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b3a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13b3a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b3a4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x13b3a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x13b3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x13B3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B3B0u;
}
