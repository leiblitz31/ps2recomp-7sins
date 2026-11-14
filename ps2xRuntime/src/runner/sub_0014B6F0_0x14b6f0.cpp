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

// Function: sub_0014B6F0
// Address: 0x14b6f0 - 0x14b800
void sub_0014B6F0_0x14b6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B6F0_0x14b6f0");
#endif

    switch (ctx->pc) {
        case 0x14b720u: goto label_14b720;
        case 0x14b72cu: goto label_14b72c;
        case 0x14b738u: goto label_14b738;
        case 0x14b750u: goto label_14b750;
        case 0x14b768u: goto label_14b768;
        case 0x14b784u: goto label_14b784;
        case 0x14b7acu: goto label_14b7ac;
        case 0x14b7c4u: goto label_14b7c4;
        default: break;
    }

    ctx->pc = 0x14b6f0u;

    // 0x14b6f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14b6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14b6f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14b6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14b6f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14b6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14b6fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14b6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14b700: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14b700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14b704: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x14b704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x14b708: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x14b708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x14b70c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x14b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14b710: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x14b710u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b714: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x14b714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14b718: 0xc0528e8  jal         func_14A3A0
    ctx->pc = 0x14B718u;
    SET_GPR_U32(ctx, 31, 0x14B720u);
    ctx->pc = 0x14A3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A3A0u, 0x14B718u, 0x14B720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B720u;
label_14b720:
    // 0x14b720: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x14b720u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b724: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x14B724u;
    {
        const bool branch_taken_0x14b724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b724) {
            ctx->pc = 0x14B788u;
            goto label_14b788;
        }
    }
    ctx->pc = 0x14B72Cu;
label_14b72c:
    // 0x14b72c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b730: 0xc052bbc  jal         func_14AEF0
    ctx->pc = 0x14B730u;
    SET_GPR_U32(ctx, 31, 0x14B738u);
    ctx->pc = 0x14AEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AEF0u, 0x14B730u, 0x14B738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B738u;
label_14b738:
    // 0x14b738: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x14b738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14b73c: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x14b73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x14b740: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14b740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b744: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x14b744u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14b748: 0xc052b28  jal         func_14ACA0
    ctx->pc = 0x14B748u;
    SET_GPR_U32(ctx, 31, 0x14B750u);
    ctx->pc = 0x14ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ACA0u, 0x14B748u, 0x14B750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B750u;
label_14b750:
    // 0x14b750: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14B750u;
    {
        const bool branch_taken_0x14b750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b750) {
            ctx->pc = 0x14B778u;
            goto label_14b778;
        }
    }
    ctx->pc = 0x14B758u;
    // 0x14b758: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x14b758u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b75c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b760: 0xc052bb4  jal         func_14AED0
    ctx->pc = 0x14B760u;
    SET_GPR_U32(ctx, 31, 0x14B768u);
    ctx->pc = 0x14AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AED0u, 0x14B760u, 0x14B768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B768u;
label_14b768:
    // 0x14b768: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x14b768u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b76c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x14b76cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b770: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14B770u;
    {
        const bool branch_taken_0x14b770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b770) {
            ctx->pc = 0x14B788u;
            goto label_14b788;
        }
    }
    ctx->pc = 0x14B778u;
label_14b778:
    // 0x14b778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b77c: 0xc052bac  jal         func_14AEB0
    ctx->pc = 0x14B77Cu;
    SET_GPR_U32(ctx, 31, 0x14B784u);
    ctx->pc = 0x14AEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AEB0u, 0x14B77Cu, 0x14B784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B784u;
label_14b784:
    // 0x14b784: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x14b784u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14b788:
    // 0x14b788: 0x1600ffe8  bnez        $s0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x14B788u;
    {
        const bool branch_taken_0x14b788 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b788) {
            ctx->pc = 0x14B72Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b72c;
        }
    }
    ctx->pc = 0x14B790u;
    // 0x14b790: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x14b790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14b794: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14b794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b798: 0x1222000c  beq         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14B798u;
    {
        const bool branch_taken_0x14b798 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x14b798) {
            ctx->pc = 0x14B7CCu;
            goto label_14b7cc;
        }
    }
    ctx->pc = 0x14B7A0u;
    // 0x14b7a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14b7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b7a4: 0xc052bbc  jal         func_14AEF0
    ctx->pc = 0x14B7A4u;
    SET_GPR_U32(ctx, 31, 0x14B7ACu);
    ctx->pc = 0x14AEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AEF0u, 0x14B7A4u, 0x14B7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B7ACu;
label_14b7ac:
    // 0x14b7ac: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x14b7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14b7b0: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x14b7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x14b7b4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x14b7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14b7b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14b7b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b7bc: 0xc052b28  jal         func_14ACA0
    ctx->pc = 0x14B7BCu;
    SET_GPR_U32(ctx, 31, 0x14B7C4u);
    ctx->pc = 0x14ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ACA0u, 0x14B7BCu, 0x14B7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B7C4u;
label_14b7c4:
    // 0x14b7c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B7C4u;
    {
        const bool branch_taken_0x14b7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b7c4) {
            ctx->pc = 0x14B7D4u;
            goto label_14b7d4;
        }
    }
    ctx->pc = 0x14B7CCu;
label_14b7cc:
    // 0x14b7cc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x14b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14b7d0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x14b7d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14b7d4:
    // 0x14b7d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x14b7d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b7d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14b7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b7dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14b7dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b7e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14b7e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b7e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14b7e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b7e8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x14b7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14b7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x14B7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B7ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B7F4u;
    // 0x14b7f4: 0x0  nop
    ctx->pc = 0x14b7f4u;
    // NOP
    // 0x14b7f8: 0x0  nop
    ctx->pc = 0x14b7f8u;
    // NOP
    // 0x14b7fc: 0x0  nop
    ctx->pc = 0x14b7fcu;
    // NOP
    ctx->pc = 0x14b800u;
}
