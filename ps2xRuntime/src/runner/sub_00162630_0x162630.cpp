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

// Function: sub_00162630
// Address: 0x162630 - 0x1626d0
void sub_00162630_0x162630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162630_0x162630");
#endif

    switch (ctx->pc) {
        case 0x16266cu: goto label_16266c;
        case 0x162684u: goto label_162684;
        default: break;
    }

    ctx->pc = 0x162630u;

    // 0x162630: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x162630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x162634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x162634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162638: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x162638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x16263c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x16263cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x162640: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x162640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x162644: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x162644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162648: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x162648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x16264c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16264cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162650: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x162650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x162654: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x162654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162658: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x162658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x16265c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x16265cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162660: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162664: 0xc048bf8  jal         func_122FE0
    ctx->pc = 0x162664u;
    SET_GPR_U32(ctx, 31, 0x16266Cu);
    ctx->pc = 0x122FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FE0u, 0x162664u, 0x16266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16266Cu;
label_16266c:
    // 0x16266c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16266cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162670: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x162670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x162674: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x162674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162678: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16267c: 0xc058b50  jal         func_162D40
    ctx->pc = 0x16267Cu;
    SET_GPR_U32(ctx, 31, 0x162684u);
    ctx->pc = 0x162D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162D40u, 0x16267Cu, 0x162684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162684u;
label_162684:
    // 0x162684: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x162684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162688: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x162688u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x16268c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16268cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162690: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x162690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162694: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x162694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162698: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x162698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x16269c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16269cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1626a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1626a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1626a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1626a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1626a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1626a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1626ac: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1626acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1626b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1626b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1626b4: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1626b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1626b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1626b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1626bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1626bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1626c0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1626c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1626c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1626C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1626C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1626CCu;
    // 0x1626cc: 0x0  nop
    ctx->pc = 0x1626ccu;
    // NOP
    ctx->pc = 0x1626d0u;
}
